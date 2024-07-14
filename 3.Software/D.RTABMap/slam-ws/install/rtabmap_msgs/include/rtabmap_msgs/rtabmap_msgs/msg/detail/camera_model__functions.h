// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/CameraModel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/camera_model__struct.h"

/// Initialize msg/CameraModel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__CameraModel
 * )) before or use
 * rtabmap_msgs__msg__CameraModel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__CameraModel__init(rtabmap_msgs__msg__CameraModel * msg);

/// Finalize msg/CameraModel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__CameraModel__fini(rtabmap_msgs__msg__CameraModel * msg);

/// Create msg/CameraModel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__CameraModel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__CameraModel *
rtabmap_msgs__msg__CameraModel__create();

/// Destroy msg/CameraModel message.
/**
 * It calls
 * rtabmap_msgs__msg__CameraModel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__CameraModel__destroy(rtabmap_msgs__msg__CameraModel * msg);

/// Check for msg/CameraModel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__CameraModel__are_equal(const rtabmap_msgs__msg__CameraModel * lhs, const rtabmap_msgs__msg__CameraModel * rhs);

/// Copy a msg/CameraModel message.
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
rtabmap_msgs__msg__CameraModel__copy(
  const rtabmap_msgs__msg__CameraModel * input,
  rtabmap_msgs__msg__CameraModel * output);

/// Initialize array of msg/CameraModel messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__CameraModel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__CameraModel__Sequence__init(rtabmap_msgs__msg__CameraModel__Sequence * array, size_t size);

/// Finalize array of msg/CameraModel messages.
/**
 * It calls
 * rtabmap_msgs__msg__CameraModel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__CameraModel__Sequence__fini(rtabmap_msgs__msg__CameraModel__Sequence * array);

/// Create array of msg/CameraModel messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__CameraModel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__CameraModel__Sequence *
rtabmap_msgs__msg__CameraModel__Sequence__create(size_t size);

/// Destroy array of msg/CameraModel messages.
/**
 * It calls
 * rtabmap_msgs__msg__CameraModel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__CameraModel__Sequence__destroy(rtabmap_msgs__msg__CameraModel__Sequence * array);

/// Check for msg/CameraModel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__CameraModel__Sequence__are_equal(const rtabmap_msgs__msg__CameraModel__Sequence * lhs, const rtabmap_msgs__msg__CameraModel__Sequence * rhs);

/// Copy an array of msg/CameraModel messages.
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
rtabmap_msgs__msg__CameraModel__Sequence__copy(
  const rtabmap_msgs__msg__CameraModel__Sequence * input,
  rtabmap_msgs__msg__CameraModel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__FUNCTIONS_H_
