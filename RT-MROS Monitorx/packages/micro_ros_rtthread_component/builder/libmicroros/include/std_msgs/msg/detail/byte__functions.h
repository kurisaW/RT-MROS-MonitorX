// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from std_msgs:msg\Byte.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__BYTE__FUNCTIONS_H_
#define STD_MSGS__MSG__DETAIL__BYTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "std_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "std_msgs/msg/detail/byte__struct.h"

/// Initialize msg/Byte message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * std_msgs__msg__Byte
 * )) before or use
 * std_msgs__msg__Byte__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Byte__init(std_msgs__msg__Byte * msg);

/// Finalize msg/Byte message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Byte__fini(std_msgs__msg__Byte * msg);

/// Create msg/Byte message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * std_msgs__msg__Byte__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__Byte *
std_msgs__msg__Byte__create();

/// Destroy msg/Byte message.
/**
 * It calls
 * std_msgs__msg__Byte__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Byte__destroy(std_msgs__msg__Byte * msg);

/// Check for msg/Byte message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Byte__are_equal(const std_msgs__msg__Byte * lhs, const std_msgs__msg__Byte * rhs);

/// Copy a msg/Byte message.
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
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Byte__copy(
  const std_msgs__msg__Byte * input,
  std_msgs__msg__Byte * output);

/// Initialize array of msg/Byte messages.
/**
 * It allocates the memory for the number of elements and calls
 * std_msgs__msg__Byte__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Byte__Sequence__init(std_msgs__msg__Byte__Sequence * array, size_t size);

/// Finalize array of msg/Byte messages.
/**
 * It calls
 * std_msgs__msg__Byte__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Byte__Sequence__fini(std_msgs__msg__Byte__Sequence * array);

/// Create array of msg/Byte messages.
/**
 * It allocates the memory for the array and calls
 * std_msgs__msg__Byte__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__Byte__Sequence *
std_msgs__msg__Byte__Sequence__create(size_t size);

/// Destroy array of msg/Byte messages.
/**
 * It calls
 * std_msgs__msg__Byte__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Byte__Sequence__destroy(std_msgs__msg__Byte__Sequence * array);

/// Check for msg/Byte message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Byte__Sequence__are_equal(const std_msgs__msg__Byte__Sequence * lhs, const std_msgs__msg__Byte__Sequence * rhs);

/// Copy an array of msg/Byte messages.
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
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Byte__Sequence__copy(
  const std_msgs__msg__Byte__Sequence * input,
  std_msgs__msg__Byte__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__BYTE__FUNCTIONS_H_
