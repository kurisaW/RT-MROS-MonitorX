// Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <rtthread.h>

#if defined(PKG_UCLIENT_PLATFORM_EXAMPLE)

#include "HelloWorld.h"

#include <uxr/client/client.h>
#include <string.h> //strcmp
#include <stdlib.h> //atoi
#include <stdio.h>

#define STREAM_HISTORY  8
#if defined(PKG_MICRO_ROS_USE_SERIAL)
    #define BUFFER_SIZE     UXR_CONFIG_SERIAL_TRANSPORT_MTU * STREAM_HISTORY
#elif defined(PKG_MICRO_ROS_USE_UDP)
    #define BUFFER_SIZE     UXR_CONFIG_UDP_TRANSPORT_MTU * STREAM_HISTORY
#else
    #define BUFFER_SIZE     UXR_CONFIG_TCP_TRANSPORT_MTU * STREAM_HISTORY
#endif

void on_topic(
        uxrSession* session,
        uxrObjectId object_id,
        uint16_t request_id,
        uxrStreamId stream_id,
        struct ucdrBuffer* ub,
        uint16_t length,
        void* args)
{
    (void) session; (void) object_id; (void) request_id; (void) stream_id; (void) args; (void) length;

    HelloWorld topic;
    HelloWorld_deserialize_topic(ub, &topic);

    printf("Received topic: %s, index: %i\n", topic.message, topic.index);
}

static void xrcedds_sub_entry(int args, char **argv)
{   
#if defined(PKG_MICRO_ROS_USE_SERIAL)
    uxrSerialTransport transport;
    
    if(!uxr_init_serial_transport(&transport, RT_NULL, 0, 1))
    {
        rt_kprintf("Error at create transport.\n");
        return;
    }

#elif defined(PKG_MICRO_ROS_USE_TCP)
    uxrTCPTransport transport;

    if(!uxr_init_tcp_transport(&transport, UXR_IPv4, MICRO_ROS_TCP_IP, MICRO_ROS_TCP_PORT))
    {
        rt_kprintf("Error at create transport.\n");
        return;
    }
#elif defined(PKG_MICRO_ROS_USE_UDP)
	uxrUDPTransport transport;

	if(!uxr_init_udp_transport(&transport, UXR_IPv4, MICRO_ROS_UDP_IP, MICRO_ROS_UDP_PORT))
    {
        rt_kprintf("Error at create transport.\n");
        return;
    }
#endif

    rt_kprintf("Micro-ROS micro xrce-dds publisher demo.\n");

    // Session
    uxrSession session;
    uxr_init_session(&session, &transport.comm, (uint32_t)atoi(argv[2]));
    uxr_set_topic_callback(&session, on_topic, NULL);
    if (!uxr_create_session(&session))
    {
        printf("Error at create session.\n");
        return;
    }

    // Streams
    uint8_t output_reliable_stream_buffer[BUFFER_SIZE];
    uxrStreamId reliable_out = uxr_create_output_reliable_stream(&session, output_reliable_stream_buffer, BUFFER_SIZE,
                    STREAM_HISTORY);

    uint8_t input_reliable_stream_buffer[BUFFER_SIZE];
    uxrStreamId reliable_in = uxr_create_input_reliable_stream(&session, input_reliable_stream_buffer, BUFFER_SIZE,
                    STREAM_HISTORY);

    // Request topics
    uxrDeliveryControl delivery_control = {
        0
    };
    delivery_control.max_samples = UXR_MAX_SAMPLES_UNLIMITED;

    uxrObjectId datareader_id = uxr_object_id((uint16_t)atoi(argv[4]), UXR_DATAREADER_ID);
    uint16_t read_data_req = uxr_buffer_request_data(&session, reliable_out, datareader_id, reliable_in,
                    &delivery_control);

    // Read topics
    bool connected = true;
    while (connected)
    {
        uint8_t read_data_status;
        connected = uxr_run_session_until_all_status(&session, UXR_TIMEOUT_INF, &read_data_req, &read_data_status, 1);
    }

    // Delete resources
#if defined(PKG_MICRO_ROS_USE_SERIAL)
    uxr_close_serial_transport(&transport);
#elif defined(PKG_MICRO_ROS_USE_TCP)
    uxr_close_tcp_transport(&transport);
#else
    uxr_close_udp_transport(&transport);
#endif

    rt_kprintf("Exit demo.\n");

    return;
}

static void xrcedds_sub(int args, char** argv)
{
    rt_thread_t tid;

    if (args < 5 || 0 != strcmp("--key", argv[1]) || 0 != strcmp("--id", argv[3])
            || 0 == atoi(argv[2]) || 0 == atoi(argv[4]))
    {
        rt_printf("usage: program [--key <number> --id <datawriter-number>]\n");
        return;
    }

    tid = rt_thread_create("xrcedds_sub",
        xrcedds_sub_entry((uint32_t)atoi(argv[2]),(uint16_t)atoi(argv[4])), 
        RT_NULL,
        10240, RT_THREAD_PRIORITY_MAX/3, 20);

    if(tid != RT_NULL)
    {
        rt_thread_startup(tid);
    }
    else
    {
        rt_kprintf("Failed to create micro xrce-dds subscriber thread!\n");
    }

    return;
}
MSH_CMD_EXPORT(xrcedds_sub, micro xrce-dds subscriber demo.);

#endif  // PKG_UCLIENT_PLATFORM_EXAMPLE