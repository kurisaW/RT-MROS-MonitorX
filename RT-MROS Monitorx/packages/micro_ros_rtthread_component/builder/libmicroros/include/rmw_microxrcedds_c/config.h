#ifndef RMW_MICROXRCEDDS_CONFIG_H
#define RMW_MICROXRCEDDS_CONFIG_H

#include <uxr/client/config.h>

/* #undef RMW_UXRCE_TRANSPORT_UDP */
/* #undef RMW_UXRCE_TRANSPORT_TCP */
/* #undef RMW_UXRCE_TRANSPORT_SERIAL */
#define RMW_UXRCE_TRANSPORT_CUSTOM
/* #undef RMW_UXRCE_TRANSPORT_IPV4 */
/* #undef RMW_UXRCE_TRANSPORT_IPV6 */
/* #undef RMW_UXRCE_USE_REFS */
/* #undef RMW_UXRCE_ALLOW_DYNAMIC_ALLOCATIONS */
/* #undef RMW_UXRCE_GRAPH */
/* #undef RMW_UROS_ERROR_HANDLING */

#ifdef RMW_UXRCE_TRANSPORT_UDP
    #define RMW_UXRCE_MAX_TRANSPORT_MTU UXR_CONFIG_UDP_TRANSPORT_MTU
    #define RMW_UXRCE_DEFAULT_IP ""
    #define RMW_UXRCE_DEFAULT_PORT ""
#elif defined(RMW_UXRCE_TRANSPORT_TCP)
    #define RMW_UXRCE_MAX_TRANSPORT_MTU UXR_CONFIG_TCP_TRANSPORT_MTU
    #define RMW_UXRCE_DEFAULT_IP ""
    #define RMW_UXRCE_DEFAULT_PORT ""
#elif defined(RMW_UXRCE_TRANSPORT_SERIAL)
    #define RMW_UXRCE_MAX_TRANSPORT_MTU UXR_CONFIG_SERIAL_TRANSPORT_MTU
    #define RMW_UXRCE_DEFAULT_SERIAL_DEVICE ""
#elif defined(RMW_UXRCE_TRANSPORT_CUSTOM)
    #define RMW_UXRCE_MAX_TRANSPORT_MTU UXR_CONFIG_CUSTOM_TRANSPORT_MTU
#endif

#define RMW_UXRCE_ENTITY_CREATION_TIMEOUT 1000
#define RMW_UXRCE_ENTITY_DESTROY_TIMEOUT 1000

/* #undef RMW_UXRCE_STREAM_HISTORY_INPUT */
/* #undef RMW_UXRCE_STREAM_HISTORY_OUTPUT */
#if defined(RMW_UXRCE_STREAM_HISTORY_INPUT) && defined(RMW_UXRCE_STREAM_HISTORY_OUTPUT)
#undef RMW_UXRCE_STREAM_HISTORY_INPUT
#undef RMW_UXRCE_STREAM_HISTORY_OUTPUT
#define RMW_UXRCE_STREAM_HISTORY_INPUT 
#define RMW_UXRCE_STREAM_HISTORY_OUTPUT 
#else
#define RMW_UXRCE_STREAM_HISTORY_INPUT 4
#define RMW_UXRCE_STREAM_HISTORY_OUTPUT 4
#endif

#define RMW_UXRCE_PUBLISH_RELIABLE_TIMEOUT 1000

#define RMW_UXRCE_MAX_HISTORY 4
#define RMW_UXRCE_MAX_INPUT_BUFFER_SIZE (RMW_UXRCE_MAX_TRANSPORT_MTU * RMW_UXRCE_STREAM_HISTORY_INPUT)
#define RMW_UXRCE_MAX_OUTPUT_BUFFER_SIZE (RMW_UXRCE_MAX_TRANSPORT_MTU * RMW_UXRCE_STREAM_HISTORY_OUTPUT)

#define RMW_UXRCE_MAX_SESSIONS 1
#define RMW_UXRCE_MAX_OPTIONS RMW_UXRCE_MAX_SESSIONS*3
#define RMW_UXRCE_MAX_NODES 1
#define RMW_UXRCE_MAX_PUBLISHERS 2
#define RMW_UXRCE_MAX_SUBSCRIPTIONS 2
#define RMW_UXRCE_MAX_SERVICES 1
#define RMW_UXRCE_MAX_CLIENTS 1
#define RMW_UXRCE_MAX_TOPICS -1
#define RMW_UXRCE_MAX_WAIT_SETS 4
#define RMW_UXRCE_MAX_GUARD_CONDITION 4

#if RMW_UXRCE_MAX_TOPICS == -1
#define RMW_UXRCE_MAX_TOPICS_INTERNAL RMW_UXRCE_MAX_PUBLISHERS + RMW_UXRCE_MAX_SUBSCRIPTIONS
#else
#define RMW_UXRCE_MAX_TOPICS_INTERNAL RMW_UXRCE_MAX_TOPICS
#endif

#define RMW_UXRCE_NODE_NAME_MAX_LENGTH 60
#define RMW_UXRCE_TOPIC_NAME_MAX_LENGTH 60
#define RMW_UXRCE_TYPE_NAME_MAX_LENGTH 100

#define RMW_UXRCE_ENTITY_NAMING_BUFFER_LENGTH 100

#endif  // RMW_MICROXRCEDDS_CONFIG_H
