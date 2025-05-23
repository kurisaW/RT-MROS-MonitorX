// This file was generated by SquareLine Studio

#define DBG_TAG "ui_events"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>

#include "micro_entity.h"
#include "ui_events.h"

topic_msg_t SubTopicTextarea;
topic_msg_t PubTopicTextarea;

static node_msg_t SubNodeTextarea;
static node_msg_t PubNodeTextarea;

static float turtle_x_val = 0;
static float turtle_y_val = 0;

static struct rt_mailbox turtlesim_mb;

typedef struct turtle_msg
{
    float x;
    float y;
}turtle_msg_t;

void TopicListCallback(lv_event_t *e)
{
    // Your code here
    rt_size_t total_length = 0;
    rt_size_t num_topics = 0;

    for (int i = 0; i < 9; i++)
    {
        if (topic_list[i].topic_name != NULL)
        {
            total_length += strlen(topic_list[i].topic_name) + 1;
            num_topics++;
        }
    }

    char *topic_dropdown_list = (char *)rt_malloc(total_length + num_topics);
    if(topic_dropdown_list == RT_NULL)
    {
        LOG_E("topic_dropdown_list can't malloc resource!");
        return;
    }

    rt_size_t index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (topic_list[i].topic_name != NULL)
        {
            rt_size_t name_len = rt_strlen(topic_list[i].topic_name);
            memcpy(topic_dropdown_list + index, topic_list[i].topic_name, name_len);
            index += name_len;
            topic_dropdown_list[index++] = '\n';
        }
    }
    topic_dropdown_list[index] = '\0';

    lv_dropdown_set_options(ui_List_Topic_Dropdown, topic_dropdown_list);
    rt_free(topic_dropdown_list);

    lv_label_set_text(ui_mesg_handler, "|<<   Please choose a topic   >>|");
    lv_textarea_set_text(ui_Console_Textarea, "No Message");
}

void topic_select_callback(lv_event_t * e)
{
    // Your code here
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
    if(code == LV_EVENT_VALUE_CHANGED)
    {
        char select_topic_name[32];
        lv_dropdown_get_selected_str(obj, select_topic_name, sizeof(select_topic_name));
        for (int i = 0; i < 9; i++)
        {
            if (strcmp(select_topic_name, topic_list[i].topic_name) == 0)
            {
                lv_label_set_text(ui_mesg_handler, topic_list[i].topic_name);
                lv_textarea_set_text(ui_Console_Textarea, topic_list[i].topic_msg);
                break;
            }
        }
    }
}

void NodeListCallback(lv_event_t * e)
{
    // Your code here
    rt_size_t total_length = 0;
    rt_size_t num_nodes = 0;

    for (int i = 0; i < 9; i++)
    {
        if (node_list[i].node_name != NULL)
        {
            total_length += strlen(node_list[i].node_name) + 1;
            num_nodes++;
        }
    }

    char *topic_dropdown_list = (char *)rt_malloc(total_length + num_nodes);
    if (topic_dropdown_list == RT_NULL)
    {
        LOG_E("topic_dropdown_list can't malloc resource!");
        return;
    }

    rt_size_t index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (node_list[i].node_name != NULL)
        {
            rt_size_t name_len = rt_strlen(node_list[i].node_name);
            memcpy(topic_dropdown_list + index, node_list[i].node_name, name_len);
            index += name_len;
            topic_dropdown_list[index++] = '\n';
        }
    }
    topic_dropdown_list[index] = '\0';

    lv_dropdown_set_options(ui_List_Node_Dropdown, topic_dropdown_list);
    rt_free(topic_dropdown_list);

    lv_label_set_text(ui_mesg_handler, "|<<   Please choose a node   >>|");
    lv_textarea_set_text(ui_Console_Textarea, "No Message");
}

void node_select_callback(lv_event_t * e)
{
    // Your code here
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
    if(code == LV_EVENT_VALUE_CHANGED)
    {
        char select_node_name[32];
        lv_dropdown_get_selected_str(obj, select_node_name, sizeof(select_node_name));
        for (int i = 0; i < 9; i++)
        {
            if (strcmp(select_node_name, node_list[i].node_name) == 0)
            {
                lv_label_set_text(ui_mesg_handler, node_list[i].node_name);
                lv_textarea_set_text(ui_Console_Textarea, node_list[i].node_msg);
                break;
            }
        }
    }
}

void SearchTopicCallback(lv_event_t * e)
{
    // Your code here
    lv_obj_t *obj = lv_event_get_target(e);
    const char *topic_name = lv_textarea_get_text(obj);
    for(int i = 0; i < 9; i++)
    {
        if(rt_strcmp(topic_name, topic_list[i].topic_name) == 0)
        {
            char topic_msg_val[50];

            // topic handler msg
            strcpy(topic_msg_val,"Current topic name: ");
            strcat(topic_msg_val,topic_name);
            lv_label_set_text(ui_mesg_handler, topic_msg_val);

            // topic console msg
            lv_textarea_set_text(ui_Console_Textarea, (const char *)topic_list[i].topic_msg);
            break;
        }
        else
        {
            lv_label_set_text(ui_mesg_handler, "|<<   MonitorX console   >>|");
            lv_textarea_set_text(ui_Console_Textarea, "No information found");
        }
    }
}

void SearchNodeCallback(lv_event_t * e)
{
    // Your code here
    lv_obj_t *obj = lv_event_get_target(e);
    const char *node_name = lv_textarea_get_text(obj);
    for(int i = 0; i < 9; i++)
    {
        if(rt_strcmp(node_name, node_list[i].node_name) == 0)
        {
            char node_msg_val[50];

            // node handler msg
            strcpy(node_msg_val,"Current node: ");
            strcat(node_msg_val,node_name);
            lv_label_set_text(ui_mesg_handler, node_msg_val);

            // node console msg
            lv_textarea_set_text(ui_Console_Textarea, (const char *)node_list[i].node_msg);
            break;
        }
        else
        {
            lv_label_set_text(ui_mesg_handler, "|<<   MonitorX console   >>|");
            lv_textarea_set_text(ui_Console_Textarea, "No information found");
        }
    }
}

void SubTopicCallback(lv_event_t *e)
{
    rt_uint32_t flag_val;
    if(rt_event_recv(&subscriber_event, (SUB_EVENT_FLAG1 | SUB_EVENT_FLAG2 | SUB_EVENT_FLAG3),
                      RT_EVENT_FLAG_AND | RT_EVENT_FLAG_CLEAR,
                      RT_WAITING_NO,
                      &flag_val) == RT_EOK)
    {
        for (int i = 0; i < 9; i++)
        {
            if ((strcmp(SubTopicTextarea.topic_name, topic_list[i].topic_name) == 0) &&
                (strcmp(SubTopicTextarea.topic_type, topic_list[i].topic_type) == 0) &&
                (strcmp(SubNodeTextarea.node_name, node_list[i].node_name) == 0))
            {
                char *topic_console_val = (char *)malloc(strlen("< The Topic has been subscribed successfully >\n\n") +
                                                     strlen(topic_list[i].topic_msg) + 1);
                if (topic_console_val == NULL)
                {
                    LOG_E("Unsuccessful request for resources");
                    LOG_E("topic_console_val can't malloc resource!");
                    return;
                }
                strcpy(topic_console_val, "< The Topic has been subscribed successfully >\n\n");
                strcat(topic_console_val, topic_list[i].topic_msg);

                char topic_msg_val[100];
                sprintf(topic_msg_val, "Subscribed Topic: %s", SubTopicTextarea.topic_name);
                lv_label_set_text(ui_mesg_handler, topic_msg_val);

                lv_textarea_set_text(ui_Console_Textarea, topic_console_val);
                free(topic_console_val);

                return;
            }
        }
        // If no matching topic is found
        lv_label_set_text(ui_mesg_handler, "|<<   MonitorX console   >>|");
        lv_textarea_set_text(ui_Console_Textarea, "No information found\n"
                                                  "Please enter the correct Topic subscription information!");
    }
    else
    {
        lv_label_set_text(ui_mesg_handler, "|<<   MonitorX console   >>|");
        lv_textarea_set_text(ui_Console_Textarea, "The sublisher could not be created successfully because of:\n\n"
                                                  "1.The name of the topic currently set already exists.\n"
                                                  "2.You didn't exit after typing it all.\n"
                                                  "3.The resource request was unsuccessful.\n\n"
                                                  "Other possible causes:\n\n"
                                                  "1.Check that nodes, topics, subscribers, publishers are configured correctly in the micro-ROS component in env.\n"
                                                  "2.Check the connection configuration (UART, UDP, TCP...)\n"
                                                  "3.Other possible problems...\n");
    }
}

void SubNodeNameCallback(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_target(e);

    // take SubNodeNameMsg: node name message
    const char *input_node_name = lv_textarea_get_text(obj);
    char *node_name = (char *)malloc(strlen(input_node_name) + 1); // Allocate memory for node_name
    if (node_name == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }
    strcpy(node_name, input_node_name);

    for (int i = 0; i < 9; i++)
    {
        if (strcmp(node_name, node_list[i].node_name) == 0)
        {
            // Update SubNodeTextarea.node_name
            free(SubNodeTextarea.node_name); // Free previously allocated memory
            SubNodeTextarea.node_name = node_name;

            rt_event_send(&subscriber_event, SUB_EVENT_FLAG1);
            return;
        }
    }

    // If node_name doesn't match any node in node_list, free the allocated memory
    free(node_name);
}

void SubMsgTypeCallback(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_target(e);

    // take SubTopicTypeMsg: topic type message
    const char *input_topic_type = lv_textarea_get_text(obj);
    char *topic_type = (char *)malloc(strlen(input_topic_type) + 1); // Allocate memory for topic_type
    if (topic_type == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }
    strcpy(topic_type, input_topic_type);

    for (int i = 0; i < 9; i++)
    {
        if (strcmp(topic_type, topic_list[i].topic_type) == 0)
        {
            // Update SubTopicTextarea.topic_type
            free(SubTopicTextarea.topic_type); // Free previously allocated memory
            SubTopicTextarea.topic_type = topic_type;

            rt_event_send(&subscriber_event, SUB_EVENT_FLAG2);
            return;
        }
    }

    // If topic_type doesn't match any topic in topic_list, free the allocated memory
    free(topic_type);
}

void SubTopicNameCallback(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_target(e);

    // take SubTopicNameMsg: topic name message
    const char *input_topic_name = lv_textarea_get_text(obj);
    char *topic_name = (char *)malloc(strlen(input_topic_name) + 1); // Allocate memory for topic_name
    if (topic_name == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }
    strcpy(topic_name, input_topic_name);

    for (int i = 0; i < 9; i++)
    {
        if (strcmp(topic_name, topic_list[i].topic_name) == 0)
        {
            // Update SubTopicTextarea.topic_name
            free(SubTopicTextarea.topic_name); // Free previously allocated memory
            SubTopicTextarea.topic_name = topic_name;

            rt_event_send(&subscriber_event, SUB_EVENT_FLAG3);
            return;
        }
    }

    free(topic_name);
}

void PubTopicCallback(lv_event_t * e)
{
    // Your code here
    rt_uint32_t flag_val;
    int node_id = atoi(PubNodeTextarea.node_id);

//    for(int i = 0; i < 9; i++)
//    {
//        if(strcmp(PubNodeTextarea.node_name, node_list[i].node_name) == 0 && node_list[i].node_id == RT_NULL)
//        {
//            _ui_flag_modify( ui_PubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
//            lv_textarea_set_text(ui_Console_Textarea, "A node with the same name already exists, please select it again!\n");
//            destroy_node_msg(&PubNodeTextarea);
//            destroy_topic_msg(&PubTopicTextarea);
//            return;
//        }
//    }

    if(rt_event_recv(&publisher_event, (PUB_EVENT_FLAG1 | PUB_EVENT_FLAG2 | PUB_EVENT_FLAG3),
                          RT_EVENT_FLAG_AND | RT_EVENT_FLAG_CLEAR,
                          RT_WAITING_NO,
                          &flag_val) == RT_EOK)
    {
        rt_err_t ret1, ret2, ret3 = 0;
        ret1 = rt_mutex_take(PubNodeName_Mutex, RT_WAITING_NO);
        ret2 = rt_mutex_take(PubNodeID_Mutex, RT_WAITING_NO);
        ret3 = rt_mutex_take(PubTopicName_Mutex, RT_WAITING_NO);
        if ((ret1 == RT_EOK) && (ret2 == RT_EOK) && (ret3 == RT_EOK))
        {
            node_msg_t PubNodeMsg =
            {
                    PubNodeTextarea.node_id,
                    "Default Publish Node\n",
                    PubNodeTextarea.node_name
            };
            node_list[node_id] = PubNodeMsg;

            topic_msg_t PubTopicMsg =
            {
                    PubNodeTextarea.node_id,
                    "std",
                    "Default Publish Topic\n",
                    PubTopicTextarea.topic_name
            };
            topic_list[node_id] = PubTopicMsg;

            destroy_node_msg(&PubNodeTextarea);
            destroy_topic_msg(&PubTopicTextarea);

            lv_label_set_text(ui_mesg_handler, topic_list[node_id].topic_name);
            lv_textarea_set_text(ui_Console_Textarea, node_list[node_id].node_msg);
            node_id = 0;
        }
    }
    else
    {
        lv_textarea_set_text(ui_Console_Textarea, "The publisher could not be created successfully because of:\n\n"
                                                  "1.The name of the topic currently set already exists.\n"
                                                  "2.You didn't exit after typing it all.\n"
                                                  "3.The resource request was unsuccessful.\n\n"
                                                  "Other possible causes:\n\n"
                                                  "1.Check that nodes, topics, subscribers, publishers are configured correctly in the micro-ROS component in env.\n"
                                                  "2.Check the connection configuration (UART, UDP, TCP...)\n"
                                                  "3.Other possible problems...\n");
        destroy_node_msg(&PubNodeTextarea);
        destroy_topic_msg(&PubTopicTextarea);
    }
}

void PubNodeNameCallback(lv_event_t * e)
{
    lv_obj_t *obj = lv_event_get_target(e);

    free(PubNodeTextarea.node_name);

    // take PubNodeNameMsg: node name message
    const char *input_node_name = lv_textarea_get_text(obj);
    char *node_name = (char *)malloc(strlen(input_node_name) + 1); // Allocate memory for node_name
    if (node_name == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }
    strncpy(node_name, input_node_name, strlen(input_node_name) + 1);

    PubNodeTextarea.node_name = (char *)malloc(strlen(node_name) + 1); // Allocate memory for node_name
    if (PubNodeTextarea.node_name == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }

    PubNodeTextarea.node_name = node_name;
    rt_event_send(&publisher_event, PUB_EVENT_FLAG1);
    rt_mutex_release(PubNodeName_Mutex);

    free(node_name);
}

void PubNodeIDCallback(lv_event_t * e)
{
    lv_obj_t *obj = lv_event_get_target(e);

    free(PubNodeTextarea.node_id);

    // Take PubTypeMsg: node name message
    const char *input_node_id_str = lv_textarea_get_text(obj);
    char *node_id = (char *)malloc(strlen(input_node_id_str) + 1); // Allocate memory for node_name
    if (node_id == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }
    strcpy(node_id, input_node_id_str);

    PubNodeTextarea.node_id = (char *)malloc(strlen(node_id) + 1); // Allocate memory for node_name
    if (PubNodeTextarea.node_id == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }

    // Assign node_id to PubNodeTextarea.node_id
    PubNodeTextarea.node_id = node_id;
    rt_event_send(&publisher_event, PUB_EVENT_FLAG2);
    rt_mutex_release(PubNodeID_Mutex);
}

void PubTopicNameCallback(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_target(e);

    free(PubTopicTextarea.topic_name);

    // take PubTopicNameMsg: topic name message
    const char *input_topic_name = lv_textarea_get_text(obj);
    char *topic_name = (char *)malloc(strlen(input_topic_name) + 1); // Allocate memory for topic_name
    if (topic_name == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }
    strcpy(topic_name, input_topic_name);

    PubTopicTextarea.topic_name = (char *)malloc(strlen(topic_name) + 1); // Allocate memory for topic_name
    if (PubTopicTextarea.topic_name == NULL)
    {
        LOG_E("Unsuccessful request for resources");
        return;
    }

    PubTopicTextarea.topic_name = topic_name;
    rt_event_send(&publisher_event, PUB_EVENT_FLAG3);
    rt_mutex_release(PubTopicName_Mutex);

    // If topic_name doesn't match any node in node_list, free the allocated memory
    free(topic_name);
}

void InformationCallback(lv_event_t * e)
{
    // Your code here

}

void turtle_post_change()
{
    for(int i = 0; i < 3600; )
    {
        lv_img_set_angle(ui_Turtle_Figure, i);
//        lv_task_handler();
        i += 20;
        rt_thread_mdelay(10);
    }
}
MSH_CMD_EXPORT(turtle_post_change,turtle_post_change);

/*********************************************************/

// ROS turtle coordinate range
#define ROS_X_MIN 0
#define ROS_X_MAX 11.09
#define ROS_Y_MIN 0
#define ROS_Y_MAX 11.09

// LVGL screen coordinate range
#define LVGL_X_MIN -128
#define LVGL_X_MAX 231
#define LVGL_Y_MIN -77
#define LVGL_Y_MAX 82

// Function to map a value from one range to another
static float map(float x, float in_min, float in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// Function to clamp a value within a range
static float clamp(float value, float min, float max)
{
    if (value < min)
    {
        return min;
    }
    else if (value > max)
    {
        return max;
    }
    else
    {
        return value;
    }
}

// Function to convert ROS turtle coordinates to LVGL screen coordinates
void convertCoordinates(float ros_x, float ros_y)
{
    char warning_message[100] = {0};
    float lvgl_x = (int)map(ros_x, ROS_X_MIN, ROS_X_MAX, LVGL_X_MIN, LVGL_X_MAX);
    float lvgl_y = (int)map(ros_y, ROS_Y_MIN, ROS_Y_MAX, LVGL_Y_MAX, LVGL_Y_MIN);

    lvgl_x = LV_CLAMP(lvgl_x, LVGL_X_MIN, LVGL_X_MAX);
    lvgl_y = LV_CLAMP(lvgl_y, LVGL_Y_MIN, LVGL_Y_MAX);

    // Check if coordinates were clamped
    if (lvgl_x >= LVGL_X_MAX || lvgl_x <= LVGL_X_MIN || lvgl_y >= LVGL_Y_MAX || lvgl_y <= LVGL_Y_MIN)
    {
        printf("[turtlesim]: Oh no! I hit the wall! (Clamping from [x=%.2f, y=%.2f])\n", ros_x, ros_y);

        sprintf(warning_message, "\n\n[turtlesim]: Oh no! I hit the wall! (Clamping from [x=%.2f, y=%.2f])\n", ros_x, ros_y);
        lv_textarea_set_text(ui_Terminal_TextArea, (const char *)warning_message);
    }
    else
    {
        rt_kprintf("[lvgl_x]:%.2f\n[lvgl_y]:%.2f\n", lvgl_x, lvgl_y);

        // Update turtle image position
        lv_obj_set_pos(ui_Turtle_Figure, (lv_coord_t)lvgl_x, (lv_coord_t)lvgl_y);

        sprintf(warning_message, "\n\n\n\n[lvgl_x]:%.2f\n[lvgl_y]:%.2f\n", lvgl_x, lvgl_y);
        lv_textarea_set_text(ui_Terminal_TextArea, (const char *)warning_message);
    }
}
