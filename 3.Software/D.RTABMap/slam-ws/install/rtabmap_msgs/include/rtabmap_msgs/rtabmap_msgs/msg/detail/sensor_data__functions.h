// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__FUNCTIONS_H_
#define RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/msg/detail/sensor_data__struct.h"

/// Initialize msg/SensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__msg__SensorData
 * )) before or use
 * rtabmap_msgs__msg__SensorData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__SensorData__init(rtabmap_msgs__msg__SensorData * msg);

/// Finalize msg/SensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__SensorData__fini(rtabmap_msgs__msg__SensorData * msg);

/// Create msg/SensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__msg__SensorData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__SensorData *
rtabmap_msgs__msg__SensorData__create();

/// Destroy msg/SensorData message.
/**
 * It calls
 * rtabmap_msgs__msg__SensorData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__SensorData__destroy(rtabmap_msgs__msg__SensorData * msg);

/// Check for msg/SensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__SensorData__are_equal(const rtabmap_msgs__msg__SensorData * lhs, const rtabmap_msgs__msg__SensorData * rhs);

/// Copy a msg/SensorData message.
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
rtabmap_msgs__msg__SensorData__copy(
  const rtabmap_msgs__msg__SensorData * input,
  rtabmap_msgs__msg__SensorData * output);

/// Initialize array of msg/SensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__msg__SensorData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__SensorData__Sequence__init(rtabmap_msgs__msg__SensorData__Sequence * array, size_t size);

/// Finalize array of msg/SensorData messages.
/**
 * It calls
 * rtabmap_msgs__msg__SensorData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__SensorData__Sequence__fini(rtabmap_msgs__msg__SensorData__Sequence * array);

/// Create array of msg/SensorData messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__msg__SensorData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__msg__SensorData__Sequence *
rtabmap_msgs__msg__SensorData__Sequence__create(size_t size);

/// Destroy array of msg/SensorData messages.
/**
 * It calls
 * rtabmap_msgs__msg__SensorData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__msg__SensorData__Sequence__destroy(rtabmap_msgs__msg__SensorData__Sequence * array);

/// Check for msg/SensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__msg__SensorData__Sequence__are_equal(const rtabmap_msgs__msg__SensorData__Sequence * lhs, const rtabmap_msgs__msg__SensorData__Sequence * rhs);

/// Copy an array of msg/SensorData messages.
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
rtabmap_msgs__msg__SensorData__Sequence__copy(
  const rtabmap_msgs__msg__SensorData__Sequence * input,
  rtabmap_msgs__msg__SensorData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__FUNCTIONS_H_
