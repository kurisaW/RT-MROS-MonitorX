/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-12-06     Wangyuqiang  the first version
 */

#include <rtthread.h>

#include <micro_ros_rtt.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include "ui_events.h"

#include <std_msgs/msg/float32_multi_array.h>  // Use Float32MultiArray message type

#define DBG_TAG "sub_example"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>

#define ARRAY_LEN 200

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){rt_kprintf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc); return 1;}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){rt_kprintf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

static rcl_subscription_t subscriber;
static std_msgs__msg__Float32MultiArray msg;
static float test_array[ARRAY_LEN];

static void turtlesim_subscription_callback(const void * msgin)
{
    const std_msgs__msg__Float32MultiArray * msg = (const std_msgs__msg__Float32MultiArray *)msgin;
//    rt_kprintf("Received turtle location update with size: %ld\n", msg->data.size);

    rt_kprintf("Position[x]: %f\n",msg->data.data[0]);
    rt_kprintf("Position[y]: %f\n",msg->data.data[1]);

    convertCoordinates(msg->data.data[0], msg->data.data[1]);
}

static void microros_sub_float32_multi_array_thread_entry(void *parameter)
{
    memset(test_array, 0, ARRAY_LEN * sizeof(float));

    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t support;

    // create init_options
    RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

    // create node
    rcl_node_t node;
    RCCHECK(rclc_node_init_default(&node, "lv_turtlesim", "", &support));

    // create subscriber
    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32MultiArray),
        "/turtle1/xy_coordinates"));

    // create executor
    rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
    RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
    RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &msg, &turtlesim_subscription_callback, ON_NEW_DATA));

    rt_kprintf("The micro-ROS client has been successfully created!\n");

    msg.data.data = (float *) malloc(ARRAY_LEN * sizeof(float));
    msg.data.size = 0;
    msg.data.capacity = ARRAY_LEN;

    while(1)
    {
        rt_thread_mdelay(100);
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
    }

    RCCHECK(rcl_subscription_fini(&subscriber, &node));
    RCCHECK(rcl_node_fini(&node));
}

static void lv_turtlesim(int argc, char* argv[])
{
#if defined(PKG_MICRO_ROS_USE_SERIAL)
    // Serial setup
    set_microros_transports();

#elif defined(PKG_MICRO_ROS_USE_UDP)
    // UDP setup
    if(argc == 1)
    {
        if((MICRO_ROS_UDP_IP == RT_NULL) && (MICRO_ROS_UDP_PORT == RT_NULL))
        {
            LOG_E("Please refer to the parameters correctly!");
            LOG_E("Or you should define the 'MICRO_ROS_UDP_IP' and 'MICRO_ROS_UDP_PORT' variables in the rtconfig.h file");
        }
        set_microros_udp_transports(MICRO_ROS_UDP_IP, MICRO_ROS_UDP_PORT);
        LOG_I("The current proxy IP address is [%s] | Agent port is [%s].", MICRO_ROS_UDP_IP, MICRO_ROS_UDP_PORT);
    }
    else
    {
        set_microros_udp_transports(argv[1], (atoi)(argv[2]));
        LOG_I("The current proxy IP address is [%s] | Agent port is [%s].",argv[1], argv[2]);
    }

#elif defined(PKG_MICRO_ROS_USE_TCP)
    // TCP setup
    if(argc == 1)
    {
        if((MICRO_ROS_TCP_IP == RT_NULL) && (MICRO_ROS_TCP_PORT == RT_NULL))
        {
            LOG_E("Please refer to the parameters correctly!");
            OG_E("Or you should define the 'MICRO_ROS_TCP_IP' and 'MICRO_ROS_TCP_PORT' variables in the rtconfig.h file");
        }
        set_microros_tcp_transports(MICRO_ROS_TCP_IP, MICRO_ROS_TCP_PORT);
        LOG_I("The current proxy IP address is [%s] | Agent port is [%s].", MICRO_ROS_TCP_IP, MICRO_ROS_TCP_PORT);
    }
    else
    {
        set_microros_tcp_transports(argv[1], (atoi)(argv[2]));
        LOG_I("The current proxy IP address is [%s] | Agent port is [%s].",argv[1], argv[2]);
    }
#endif

    rt_thread_t thread = rt_thread_create("lv_turtlesim", microros_sub_float32_multi_array_thread_entry, RT_NULL, 2048, 25, 10);
    if(thread != RT_NULL)
    {
        rt_thread_startup(thread);
        rt_kprintf("[micro_ros] New thread lv_turtlesim\n");
    }
    else
    {
        rt_kprintf("[micro_ros] Failed to create thread lv_turtlesim\n");
    }

    // Now you can publish a message to send a Float32MultiArray
    // Example: ros2 topic pub /turtle1/xy_coordinates std_msgs/msg/Float32MultiArray "{data: [1.0, 2.0]}"
}
MSH_CMD_EXPORT(lv_turtlesim, micro ros turtlesim example)
