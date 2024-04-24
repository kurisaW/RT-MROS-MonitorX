/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-04-23     Yuqiang Wang the first version
 */
#include <rtthread.h>
#include "micro_entity.h"

#define DBG_TAG "micro_entity"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>

struct rt_event subscriber_event;
struct rt_event publisher_event;

rt_mutex_t PubNodeName_Mutex = RT_NULL;
rt_mutex_t PubNodeID_Mutex = RT_NULL;
rt_mutex_t PubTopicName_Mutex = RT_NULL;

topic_msg_t topic_list[9] =
{
    {"0", "std", "Turtlesim Pose:\n"
                    "  x: 50\n"
                    "  y: 270\n"
                    "  theta: 30\n"
                    "  linear_velocity: 70\n"
                    "  angular_velocity: 90\n\n",
     "turtlesim"}, // 第一个元素（索引为0）对应 turtlesim 话题
    {"1", "geometry", "Motion Command:\n"
                         "  linear: 0.5\n"
                         "  angular: 0.2\n\n",
     "motion"}, // 第二个元素（索引为1）对应 motion 话题
    {"2", "sensor", "IMU Data:\n"
                       "  acceleration: [0.1, 0.2, 0.3]\n"
                       "  orientation: [0.5, 0.4, 0.7]\n\n",
     "sensor"}, // 第三个元素（索引为2）对应 sensor_data 话题
    {"3", "geometry", "Laser Scan Data:\n"
                          "  angle_min: -1.57\n"
                          "  angle_max: 1.57\n"
                          "  ranges: [1.0, 2.0, 1.5]\n\n",
     "laser"}, // 第四个元素（索引为3）对应 laser_scan 话题
    {"4", "nav", "Path Data:\n"
                     "  poses:\n"
                     "    - position: [1.0, 2.0, 0.0]\n"
                     "      orientation: [0.0, 0.0, 0.0]\n"
                     "    - position: [2.0, 3.0, 0.0]\n"
                     "      orientation: [0.0, 0.0, 0.0]\n\n",
     "path"}, // 第五个元素（索引为4）对应 path_data 话题
    {"5", "sensor", "Camera Image Data:\n"
                        "  width: 640\n"
                        "  height: 480\n"
                        "  format: 'RGB'\n\n",
     "camera"}, // 第六个元素（索引为5）对应 camera_image 话题
    {"6", "geometry", "Pose Data:\n"
                          "  position: [1.0, 2.0, 0.0]\n"
                          "  orientation: [0.0, 0.0, 0.0]\n\n",
     "pose"}, // 第七个元素（索引为6）对应 pose_data 话题
    {"7", "std", "Control Command:\n"
                    "  speed: 0.5\n"
                    "  direction: 'forward'\n\n",
     "control"}, // 第八个元素（索引为7）对应 control_command 话题
};

// 初始化节点信息
node_msg_t node_list[9] =
{
    {"0", "Node: /turtlebot3\n"
        "Node ID: 11223344-5566-7788-99aa-bbccddeeff00\n"
        "Publisher Topics:\n"
        "/turtlebot3/cmd_vel [geometry/msg/Twist]\n"
        "Subscriber Topics:\n"
        "/turtlebot3/odom [nav/msg/Odometry]",
     "turtlesim"}, // 第一个元素（索引为0）对应 turtlesim 节点
    {"1", "Node: /motion_controller\n"
        "Node ID: aabbccdd-5566-7788-99aa-bbccddeeff00\n"
        "Publisher Topics:\n"
        "/motion [geometry/msg/Twist]\n"
        "Subscriber Topics:\n"
        "/sensor_data [sensor/msg/Imu]",
     "motion"}, // 第二个元素（索引为1）对应 motion 节点
    {"2", "Node: /sensor_node\n"
        "Node ID: 11223344-5566-7788-99aa-bbccddeeff00\n"
        "Publisher Topics:\n"
        "/sensor_data [sensor/msg/Imu]",
     "sensor"}, // 第三个元素（索引为2）对应 sensor_node 节点
    {"3", "Node: /laser_controller\n"
        "Node ID: 44556677-8899-aaab-bbccddeeff001\n"
        "Publisher Topics:\n"
        "/laser_scan [geometry/msg/LaserScan]\n"
        "Subscriber Topics:\n"
        "/map [nav/msg/OccupancyGrid]",
     "laser"}, // 第四个元素（索引为3）对应 laser_controller 节点
    {"4", "Node: /planner\n"
        "Node ID: 55667788-99aa-bbcc-ddeeff001122\n"
        "Publisher Topics:\n"
        "/path [nav/msg/Path]\n"
        "Subscriber Topics:\n"
        "/laser_scan [geometry/msg/LaserScan]",
     "planner"}, // 第五个元素（索引为4）对应 planner 节点
    {"5", "Node: /camera\n"
        "Node ID: 66778899-aaab-bbcc-ddeeff001122\n"
        "Publisher Topics:\n"
        "/camera_image [sensor/msg/Image]\n"
        "Subscriber Topics:\n"
        "/control_command [std/msg/String]",
     "camera"}, // 第六个元素（索引为5）对应 camera 节点
    {"6", "Node: /localization\n"
        "Node ID: 778899aa-bbcc-ddeeff001122\n"
        "Publisher Topics:\n"
        "/pose [geometry/msg/Pose]\n"
        "Subscriber Topics:\n"
        "/map [nav/msg/OccupancyGrid]",
     "localization"}, // 第七个元素（索引为6）对应 localization 节点
    {"7", "Node: /controller\n"
        "Node ID: 8899aabb-ccddeeff001122\n"
        "Publisher Topics:\n"
        "/control_command [std/msg/String]\n"
        "Subscriber Topics:\n"
        "/pose [geometry/msg/Pose]",
     "controller"}, // 第八个元素（索引为7）对应 controller 节点
};

void destroy_node_msg(node_msg_t *node_msg)
{
    free(node_msg->node_id);
    free(node_msg->node_name);

    // avoid wild pointer
    node_msg->node_id = NULL;
    node_msg->node_name = NULL;
}

void destroy_topic_msg(topic_msg_t *topic_msg)
{
    free(topic_msg->topic_name);

    // avoid wild pointer
    topic_msg->topic_index = NULL;
    topic_msg->topic_type = NULL;
    topic_msg->topic_msg = NULL;
    topic_msg->topic_name = NULL;
}

void micro_subscriber_event()
{
    rt_err_t result;

    result = rt_event_init(&subscriber_event, "sub_event", RT_IPC_FLAG_PRIO);
    if (result != RT_EOK)
    {
        LOG_E("subscriber_event event failed.\n");
        return;
    }
}
INIT_APP_EXPORT(micro_subscriber_event);

void micro_publisher_event()
{
    rt_err_t result;

    result = rt_event_init(&publisher_event, "pub_event", RT_IPC_FLAG_PRIO);
    if (result != RT_EOK)
    {
        LOG_E("publisher_event event failed.\n");
        return;
    }
}
INIT_APP_EXPORT(micro_publisher_event);

void micro_publisher_mutex()
{
    rt_mutex_init(PubNodeName_Mutex, "pub_mutex1", RT_IPC_FLAG_PRIO);
    rt_mutex_init(PubNodeID_Mutex, "pub_mutex2", RT_IPC_FLAG_PRIO);
    rt_mutex_init(PubTopicName_Mutex, "pub_mutex3", RT_IPC_FLAG_PRIO);
}
INIT_APP_EXPORT(micro_publisher_mutex);
