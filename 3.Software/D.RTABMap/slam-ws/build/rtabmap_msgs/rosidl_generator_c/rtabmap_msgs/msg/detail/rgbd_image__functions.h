// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/rgbd_image__struct.h"

/// Initialize msg/RGBDImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__RGBDImage
 * )) before or use
 * rtabmap_msgs__msg__RGBDImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__RGBDImage__init(rtabmap_msgs__msg__RGBDImage * msg);

/// Finalize msg/RGBDImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__RGBDImage__fini(rtabmap_msgs__msg__RGBDImage * msg);

/// Create msg/RGBDImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__RGBDImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__RGBDImage *
rtabmap_msgs__msg__RGBDImage__create();

/// Destroy msg/RGBDImage message.
/**
 * It calls
 * rtabmap_msgs__msg__RGBDImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__RGBDImage__destroy(rtabmap_msgs__msg__RGBDImage * msg);

/// Check for msg/RGBDImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__RGBDImage__are_equal(const rtabmap_msgs__msg__RGBDImage * lhs, const rtabmap_msgs__msg__RGBDImage * rhs);

/// Copy a msg/RGBDImage message.
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
rtabmap_msgs__msg__RGBDImage__copy(
  const rtabmap_msgs__msg__RGBDImage * input,
  rtabmap_msgs__msg__RGBDImage * output);

/// Initialize array of msg/RGBDImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__RGBDImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__RGBDImage__Sequence__init(rtabmap_msgs__msg__RGBDImage__Sequence * array, size_t size);

/// Finalize array of msg/RGBDImage messages.
/**
 * It calls
 * rtabmap_msgs__msg__RGBDImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__RGBDImage__Sequence__fini(rtabmap_msgs__msg__RGBDImage__Sequence * array);

/// Create array of msg/RGBDImage messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__RGBDImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__RGBDImage__Sequence *
rtabmap_msgs__msg__RGBDImage__Sequence__create(size_t size);

/// Destroy array of msg/RGBDImage messages.
/**
 * It calls
 * rtabmap_msgs__msg__RGBDImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__RGBDImage__Sequence__destroy(rtabmap_msgs__msg__RGBDImage__Sequence * array);

/// Check for msg/RGBDImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__RGBDImage__Sequence__are_equal(const rtabmap_msgs__msg__RGBDImage__Sequence * lhs, const rtabmap_msgs__msg__RGBDImage__Sequence * rhs);

/// Copy an array of msg/RGBDImage messages.
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
rtabmap_msgs__msg__RGBDImage__Sequence__copy(
  const rtabmap_msgs__msg__RGBDImage__Sequence * input,
  rtabmap_msgs__msg__RGBDImage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__FUNCTIONS_H_
