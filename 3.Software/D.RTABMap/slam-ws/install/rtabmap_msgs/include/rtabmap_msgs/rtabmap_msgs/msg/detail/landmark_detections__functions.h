// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/LandmarkDetections.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/landmark_detections__struct.h"

/// Initialize msg/LandmarkDetections message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__LandmarkDetections
 * )) before or use
 * rtabmap_msgs__msg__LandmarkDetections__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetections__init(rtabmap_msgs__msg__LandmarkDetections * msg);

/// Finalize msg/LandmarkDetections message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetections__fini(rtabmap_msgs__msg__LandmarkDetections * msg);

/// Create msg/LandmarkDetections message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__LandmarkDetections__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__LandmarkDetections *
rtabmap_msgs__msg__LandmarkDetections__create();

/// Destroy msg/LandmarkDetections message.
/**
 * It calls
 * rtabmap_msgs__msg__LandmarkDetections__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetections__destroy(rtabmap_msgs__msg__LandmarkDetections * msg);

/// Check for msg/LandmarkDetections message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetections__are_equal(const rtabmap_msgs__msg__LandmarkDetections * lhs, const rtabmap_msgs__msg__LandmarkDetections * rhs);

/// Copy a msg/LandmarkDetections message.
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
rtabmap_msgs__msg__LandmarkDetections__copy(
  const rtabmap_msgs__msg__LandmarkDetections * input,
  rtabmap_msgs__msg__LandmarkDetections * output);

/// Initialize array of msg/LandmarkDetections messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__LandmarkDetections__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetections__Sequence__init(rtabmap_msgs__msg__LandmarkDetections__Sequence * array, size_t size);

/// Finalize array of msg/LandmarkDetections messages.
/**
 * It calls
 * rtabmap_msgs__msg__LandmarkDetections__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetections__Sequence__fini(rtabmap_msgs__msg__LandmarkDetections__Sequence * array);

/// Create array of msg/LandmarkDetections messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__LandmarkDetections__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__LandmarkDetections__Sequence *
rtabmap_msgs__msg__LandmarkDetections__Sequence__create(size_t size);

/// Destroy array of msg/LandmarkDetections messages.
/**
 * It calls
 * rtabmap_msgs__msg__LandmarkDetections__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__LandmarkDetections__Sequence__destroy(rtabmap_msgs__msg__LandmarkDetections__Sequence * array);

/// Check for msg/LandmarkDetections message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__LandmarkDetections__Sequence__are_equal(const rtabmap_msgs__msg__LandmarkDetections__Sequence * lhs, const rtabmap_msgs__msg__LandmarkDetections__Sequence * rhs);

/// Copy an array of msg/LandmarkDetections messages.
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
rtabmap_msgs__msg__LandmarkDetections__Sequence__copy(
  const rtabmap_msgs__msg__LandmarkDetections__Sequence * input,
  rtabmap_msgs__msg__LandmarkDetections__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__FUNCTIONS_H_
