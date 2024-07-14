// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_msgs:srv/ListLabels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__FUNCTIONS_H_
#define RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_msgs/srv/detail/list_labels__struct.h"

/// Initialize srv/ListLabels message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__srv__ListLabels_Request
 * )) before or use
 * rtabmap_msgs__srv__ListLabels_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Request__init(rtabmap_msgs__srv__ListLabels_Request * msg);

/// Finalize srv/ListLabels message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Request__fini(rtabmap_msgs__srv__ListLabels_Request * msg);

/// Create srv/ListLabels message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__srv__ListLabels_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__srv__ListLabels_Request *
rtabmap_msgs__srv__ListLabels_Request__create();

/// Destroy srv/ListLabels message.
/**
 * It calls
 * rtabmap_msgs__srv__ListLabels_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Request__destroy(rtabmap_msgs__srv__ListLabels_Request * msg);

/// Check for srv/ListLabels message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Request__are_equal(const rtabmap_msgs__srv__ListLabels_Request * lhs, const rtabmap_msgs__srv__ListLabels_Request * rhs);

/// Copy a srv/ListLabels message.
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
rtabmap_msgs__srv__ListLabels_Request__copy(
  const rtabmap_msgs__srv__ListLabels_Request * input,
  rtabmap_msgs__srv__ListLabels_Request * output);

/// Initialize array of srv/ListLabels messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__srv__ListLabels_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Request__Sequence__init(rtabmap_msgs__srv__ListLabels_Request__Sequence * array, size_t size);

/// Finalize array of srv/ListLabels messages.
/**
 * It calls
 * rtabmap_msgs__srv__ListLabels_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Request__Sequence__fini(rtabmap_msgs__srv__ListLabels_Request__Sequence * array);

/// Create array of srv/ListLabels messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__srv__ListLabels_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__srv__ListLabels_Request__Sequence *
rtabmap_msgs__srv__ListLabels_Request__Sequence__create(size_t size);

/// Destroy array of srv/ListLabels messages.
/**
 * It calls
 * rtabmap_msgs__srv__ListLabels_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Request__Sequence__destroy(rtabmap_msgs__srv__ListLabels_Request__Sequence * array);

/// Check for srv/ListLabels message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Request__Sequence__are_equal(const rtabmap_msgs__srv__ListLabels_Request__Sequence * lhs, const rtabmap_msgs__srv__ListLabels_Request__Sequence * rhs);

/// Copy an array of srv/ListLabels messages.
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
rtabmap_msgs__srv__ListLabels_Request__Sequence__copy(
  const rtabmap_msgs__srv__ListLabels_Request__Sequence * input,
  rtabmap_msgs__srv__ListLabels_Request__Sequence * output);

/// Initialize srv/ListLabels message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_msgs__srv__ListLabels_Response
 * )) before or use
 * rtabmap_msgs__srv__ListLabels_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Response__init(rtabmap_msgs__srv__ListLabels_Response * msg);

/// Finalize srv/ListLabels message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Response__fini(rtabmap_msgs__srv__ListLabels_Response * msg);

/// Create srv/ListLabels message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_msgs__srv__ListLabels_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__srv__ListLabels_Response *
rtabmap_msgs__srv__ListLabels_Response__create();

/// Destroy srv/ListLabels message.
/**
 * It calls
 * rtabmap_msgs__srv__ListLabels_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Response__destroy(rtabmap_msgs__srv__ListLabels_Response * msg);

/// Check for srv/ListLabels message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Response__are_equal(const rtabmap_msgs__srv__ListLabels_Response * lhs, const rtabmap_msgs__srv__ListLabels_Response * rhs);

/// Copy a srv/ListLabels message.
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
rtabmap_msgs__srv__ListLabels_Response__copy(
  const rtabmap_msgs__srv__ListLabels_Response * input,
  rtabmap_msgs__srv__ListLabels_Response * output);

/// Initialize array of srv/ListLabels messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_msgs__srv__ListLabels_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Response__Sequence__init(rtabmap_msgs__srv__ListLabels_Response__Sequence * array, size_t size);

/// Finalize array of srv/ListLabels messages.
/**
 * It calls
 * rtabmap_msgs__srv__ListLabels_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Response__Sequence__fini(rtabmap_msgs__srv__ListLabels_Response__Sequence * array);

/// Create array of srv/ListLabels messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_msgs__srv__ListLabels_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
rtabmap_msgs__srv__ListLabels_Response__Sequence *
rtabmap_msgs__srv__ListLabels_Response__Sequence__create(size_t size);

/// Destroy array of srv/ListLabels messages.
/**
 * It calls
 * rtabmap_msgs__srv__ListLabels_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
void
rtabmap_msgs__srv__ListLabels_Response__Sequence__destroy(rtabmap_msgs__srv__ListLabels_Response__Sequence * array);

/// Check for srv/ListLabels message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
bool
rtabmap_msgs__srv__ListLabels_Response__Sequence__are_equal(const rtabmap_msgs__srv__ListLabels_Response__Sequence * lhs, const rtabmap_msgs__srv__ListLabels_Response__Sequence * rhs);

/// Copy an array of srv/ListLabels messages.
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
rtabmap_msgs__srv__ListLabels_Response__Sequence__copy(
  const rtabmap_msgs__srv__ListLabels_Response__Sequence * input,
  rtabmap_msgs__srv__ListLabels_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__FUNCTIONS_H_
