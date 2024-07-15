// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__PATH2_D__FUNCTIONS_H_
#define NAV_2D_MSGS__MSG__DETAIL__PATH2_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nav_2d_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nav_2d_msgs/msg/detail/path2_d__struct.h"

/// Initialize msg/Path2D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_2d_msgs__msg__Path2D
 * )) before or use
 * nav_2d_msgs__msg__Path2D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Path2D__init(nav_2d_msgs__msg__Path2D * msg);

/// Finalize msg/Path2D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Path2D__fini(nav_2d_msgs__msg__Path2D * msg);

/// Create msg/Path2D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_2d_msgs__msg__Path2D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
nav_2d_msgs__msg__Path2D *
nav_2d_msgs__msg__Path2D__create();

/// Destroy msg/Path2D message.
/**
 * It calls
 * nav_2d_msgs__msg__Path2D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Path2D__destroy(nav_2d_msgs__msg__Path2D * msg);

/// Check for msg/Path2D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Path2D__are_equal(const nav_2d_msgs__msg__Path2D * lhs, const nav_2d_msgs__msg__Path2D * rhs);

/// Copy a msg/Path2D message.
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
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Path2D__copy(
  const nav_2d_msgs__msg__Path2D * input,
  nav_2d_msgs__msg__Path2D * output);

/// Initialize array of msg/Path2D messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_2d_msgs__msg__Path2D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Path2D__Sequence__init(nav_2d_msgs__msg__Path2D__Sequence * array, size_t size);

/// Finalize array of msg/Path2D messages.
/**
 * It calls
 * nav_2d_msgs__msg__Path2D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Path2D__Sequence__fini(nav_2d_msgs__msg__Path2D__Sequence * array);

/// Create array of msg/Path2D messages.
/**
 * It allocates the memory for the array and calls
 * nav_2d_msgs__msg__Path2D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
nav_2d_msgs__msg__Path2D__Sequence *
nav_2d_msgs__msg__Path2D__Sequence__create(size_t size);

/// Destroy array of msg/Path2D messages.
/**
 * It calls
 * nav_2d_msgs__msg__Path2D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Path2D__Sequence__destroy(nav_2d_msgs__msg__Path2D__Sequence * array);

/// Check for msg/Path2D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Path2D__Sequence__are_equal(const nav_2d_msgs__msg__Path2D__Sequence * lhs, const nav_2d_msgs__msg__Path2D__Sequence * rhs);

/// Copy an array of msg/Path2D messages.
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
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Path2D__Sequence__copy(
  const nav_2d_msgs__msg__Path2D__Sequence * input,
  nav_2d_msgs__msg__Path2D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAV_2D_MSGS__MSG__DETAIL__PATH2_D__FUNCTIONS_H_
