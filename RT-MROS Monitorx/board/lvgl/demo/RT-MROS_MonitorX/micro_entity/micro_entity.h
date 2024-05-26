/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-04-21     Yuqiang Wang the first version
 */

#ifndef SRC_MICRO_ENTITY_H_
#define SRC_MICRO_ENTITY_H_

#include <rtthread.h>
#include <rtdevice.h>

#include <stdlib.h>
#include <stdio.h>

enum topic_type
{
    std_msgs,
    sensor_msgs,
    nav_msgs,
    geometry_msgs,
    tf2_msgs,
    action_msgs
};

typedef struct micro_topic_list
{
    char *topic_index;
    char *topic_type;

    const char *topic_msg;
    char *topic_name;
}topic_msg_t;

typedef struct micro_node_list
{
    char *node_id;

    const char *node_msg;
    char *node_name;
}node_msg_t;

void destroy_topic_msg(topic_msg_t *topic_msg);
void destroy_node_msg(node_msg_t *node_msg);

extern topic_msg_t topic_list[9];
extern node_msg_t  node_list[9];

extern struct rt_event subscriber_event;
extern struct rt_event publisher_event;

extern rt_mutex_t PubNodeName_Mutex;
extern rt_mutex_t PubNodeID_Mutex;
extern rt_mutex_t PubTopicName_Mutex;

#define SUB_EVENT_FLAG1  0x001
#define SUB_EVENT_FLAG2  0x002
#define SUB_EVENT_FLAG3  0x003

#define PUB_EVENT_FLAG1  0x004
#define PUB_EVENT_FLAG2  0x005
#define PUB_EVENT_FLAG3  0x006

void micro_subscriber_event();
void micro_publisher_event();

#endif /* SRC_MICRO_ENTITY_H_ */
