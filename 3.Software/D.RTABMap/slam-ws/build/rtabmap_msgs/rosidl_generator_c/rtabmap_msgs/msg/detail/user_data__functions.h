// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/UserData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__USER_DATA__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__USER_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/user_data__struct.h"

/// Initialize msg/UserData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__UserData
 * )) before or use
 * rtabmap_msgs__msg__UserData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__UserData__init(rtabmap_msgs__msg__UserData * msg);

/// Finalize msg/UserData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__UserData__fini(rtabmap_msgs__msg__UserData * msg);

/// Create msg/UserData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__UserData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__UserData *
rtabmap_msgs__msg__UserData__create();

/// Destroy msg/UserData message.
/**
 * It calls
 * rtabmap_msgs__msg__UserData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__UserData__destroy(rtabmap_msgs__msg__UserData * msg);

/// Check for msg/UserData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__UserData__are_equal(const rtabmap_msgs__msg__UserData * lhs, const rtabmap_msgs__msg__UserData * rhs);

/// Copy a msg/UserData message.
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
rtabmap_msgs__msg__UserData__copy(
  const rtabmap_msgs__msg__UserData * input,
  rtabmap_msgs__msg__UserData * output);

/// Initialize array of msg/UserData messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__UserData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__UserData__Sequence__init(rtabmap_msgs__msg__UserData__Sequence * array, size_t size);

/// Finalize array of msg/UserData messages.
/**
 * It calls
 * rtabmap_msgs__msg__UserData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__UserData__Sequence__fini(rtabmap_msgs__msg__UserData__Sequence * array);

/// Create array of msg/UserData messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__UserData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__UserData__Sequence *
rtabmap_msgs__msg__UserData__Sequence__create(size_t size);

/// Destroy array of msg/UserData messages.
/**
 * It calls
 * rtabmap_msgs__msg__UserData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__UserData__Sequence__destroy(rtabmap_msgs__msg__UserData__Sequence * array);

/// Check for msg/UserData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__UserData__Sequence__are_equal(const rtabmap_msgs__msg__UserData__Sequence * lhs, const rtabmap_msgs__msg__UserData__Sequence * rhs);

/// Copy an array of msg/UserData messages.
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
rtabmap_msgs__msg__UserData__Sequence__copy(
  const rtabmap_msgs__msg__UserData__Sequence * input,
  rtabmap_msgs__msg__UserData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__USER_DATA__FUNCTIONS_H_
