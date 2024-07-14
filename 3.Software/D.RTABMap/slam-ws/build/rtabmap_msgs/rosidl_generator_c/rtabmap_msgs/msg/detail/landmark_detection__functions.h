// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/LandmarkDetection.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/landmark_detection__struct.h"

/// Initialize msg/LandmarkDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__LandmarkDetection
 * )) before or use
 * rtabmap_msgs__msg__LandmarkDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetection__init(rtabmap_msgs__msg__LandmarkDetection * msg);

/// Finalize msg/LandmarkDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetection__fini(rtabmap_msgs__msg__LandmarkDetection * msg);

/// Create msg/LandmarkDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__LandmarkDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__LandmarkDetection *
rtabmap_msgs__msg__LandmarkDetection__create();

/// Destroy msg/LandmarkDetection message.
/**
 * It calls
 * rtabmap_msgs__msg__LandmarkDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetection__destroy(rtabmap_msgs__msg__LandmarkDetection * msg);

/// Check for msg/LandmarkDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetection__are_equal(const rtabmap_msgs__msg__LandmarkDetection * lhs, const rtabmap_msgs__msg__LandmarkDetection * rhs);

/// Copy a msg/LandmarkDetection message.
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
rtabmap_msgs__msg__LandmarkDetection__copy(
  const rtabmap_msgs__msg__LandmarkDetection * input,
  rtabmap_msgs__msg__LandmarkDetection * output);

/// Initialize array of msg/LandmarkDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__LandmarkDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetection__Sequence__init(rtabmap_msgs__msg__LandmarkDetection__Sequence * array, size_t size);

/// Finalize array of msg/LandmarkDetection messages.
/**
 * It calls
 * rtabmap_msgs__msg__LandmarkDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetection__Sequence__fini(rtabmap_msgs__msg__LandmarkDetection__Sequence * array);

/// Create array of msg/LandmarkDetection messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__LandmarkDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__LandmarkDetection__Sequence *
rtabmap_msgs__msg__LandmarkDetection__Sequence__create(size_t size);

/// Destroy array of msg/LandmarkDetection messages.
/**
 * It calls
 * rtabmap_msgs__msg__LandmarkDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetection__Sequence__destroy(rtabmap_msgs__msg__LandmarkDetection__Sequence * array);

/// Check for msg/LandmarkDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetection__Sequence__are_equal(const rtabmap_msgs__msg__LandmarkDetection__Sequence * lhs, const rtabmap_msgs__msg__LandmarkDetection__Sequence * rhs);

/// Copy an array of msg/LandmarkDetection messages.
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
rtabmap_msgs__msg__LandmarkDetection__Sequence__copy(
  const rtabmap_msgs__msg__LandmarkDetection__Sequence * input,
  rtabmap_msgs__msg__LandmarkDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__FUNCTIONS_H_
