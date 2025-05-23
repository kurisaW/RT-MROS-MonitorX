// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensor_msgs:msg\ChannelFloat32.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__FUNCTIONS_H_
#define SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_msgs/msg/detail/channel_float32__struct.h"

/// Initialize msg/ChannelFloat32 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_msgs__msg__ChannelFloat32
 * )) before or use
 * sensor_msgs__msg__ChannelFloat32__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__ChannelFloat32__init(sensor_msgs__msg__ChannelFloat32 * msg);

/// Finalize msg/ChannelFloat32 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__ChannelFloat32__fini(sensor_msgs__msg__ChannelFloat32 * msg);

/// Create msg/ChannelFloat32 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_msgs__msg__ChannelFloat32__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__ChannelFloat32 *
sensor_msgs__msg__ChannelFloat32__create();

/// Destroy msg/ChannelFloat32 message.
/**
 * It calls
 * sensor_msgs__msg__ChannelFloat32__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__ChannelFloat32__destroy(sensor_msgs__msg__ChannelFloat32 * msg);

/// Check for msg/ChannelFloat32 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__ChannelFloat32__are_equal(const sensor_msgs__msg__ChannelFloat32 * lhs, const sensor_msgs__msg__ChannelFloat32 * rhs);

/// Copy a msg/ChannelFloat32 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__ChannelFloat32__copy(
  const sensor_msgs__msg__ChannelFloat32 * input,
  sensor_msgs__msg__ChannelFloat32 * output);

/// Initialize array of msg/ChannelFloat32 messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_msgs__msg__ChannelFloat32__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__ChannelFloat32__Sequence__init(sensor_msgs__msg__ChannelFloat32__Sequence * array, size_t size);

/// Finalize array of msg/ChannelFloat32 messages.
/**
 * It calls
 * sensor_msgs__msg__ChannelFloat32__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__ChannelFloat32__Sequence__fini(sensor_msgs__msg__ChannelFloat32__Sequence * array);

/// Create array of msg/ChannelFloat32 messages.
/**
 * It allocates the memory for the array and calls
 * sensor_msgs__msg__ChannelFloat32__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__ChannelFloat32__Sequence *
sensor_msgs__msg__ChannelFloat32__Sequence__create(size_t size);

/// Destroy array of msg/ChannelFloat32 messages.
/**
 * It calls
 * sensor_msgs__msg__ChannelFloat32__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__ChannelFloat32__Sequence__destroy(sensor_msgs__msg__ChannelFloat32__Sequence * array);

/// Check for msg/ChannelFloat32 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__ChannelFloat32__Sequence__are_equal(const sensor_msgs__msg__ChannelFloat32__Sequence * lhs, const sensor_msgs__msg__ChannelFloat32__Sequence * rhs);

/// Copy an array of msg/ChannelFloat32 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__ChannelFloat32__Sequence__copy(
  const sensor_msgs__msg__ChannelFloat32__Sequence * input,
  sensor_msgs__msg__ChannelFloat32__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__FUNCTIONS_H_
