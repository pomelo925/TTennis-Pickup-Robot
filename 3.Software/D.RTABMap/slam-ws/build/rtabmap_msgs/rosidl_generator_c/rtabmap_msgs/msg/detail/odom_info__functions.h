// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/odom_info__struct.h"

/// Initialize msg/OdomInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__OdomInfo
 * )) before or use
 * rtabmap_msgs__msg__OdomInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__OdomInfo__init(rtabmap_msgs__msg__OdomInfo * msg);

/// Finalize msg/OdomInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__OdomInfo__fini(rtabmap_msgs__msg__OdomInfo * msg);

/// Create msg/OdomInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__OdomInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__OdomInfo *
rtabmap_msgs__msg__OdomInfo__create();

/// Destroy msg/OdomInfo message.
/**
 * It calls
 * rtabmap_msgs__msg__OdomInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__OdomInfo__destroy(rtabmap_msgs__msg__OdomInfo * msg);

/// Check for msg/OdomInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__OdomInfo__are_equal(const rtabmap_msgs__msg__OdomInfo * lhs, const rtabmap_msgs__msg__OdomInfo * rhs);

/// Copy a msg/OdomInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__OdomInfo__copy(
  const rtabmap_msgs__msg__OdomInfo * input,
  rtabmap_msgs__msg__OdomInfo * output);

/// Initialize array of msg/OdomInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__OdomInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__OdomInfo__Sequence__init(rtabmap_msgs__msg__OdomInfo__Sequence * array, size_t size);

/// Finalize array of msg/OdomInfo messages.
/**
 * It calls
 * rtabmap_msgs__msg__OdomInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__OdomInfo__Sequence__fini(rtabmap_msgs__msg__OdomInfo__Sequence * array);

/// Create array of msg/OdomInfo messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__OdomInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__OdomInfo__Sequence *
rtabmap_msgs__msg__OdomInfo__Sequence__create(size_t size);

/// Destroy array of msg/OdomInfo messages.
/**
 * It calls
 * rtabmap_msgs__msg__OdomInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__OdomInfo__Sequence__destroy(rtabmap_msgs__msg__OdomInfo__Sequence * array);

/// Check for msg/OdomInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__OdomInfo__Sequence__are_equal(const rtabmap_msgs__msg__OdomInfo__Sequence * lhs, const rtabmap_msgs__msg__OdomInfo__Sequence * rhs);

/// Copy an array of msg/OdomInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__OdomInfo__Sequence__copy(
  const rtabmap_msgs__msg__OdomInfo__Sequence * input,
  rtabmap_msgs__msg__OdomInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__FUNCTIONS_H_
