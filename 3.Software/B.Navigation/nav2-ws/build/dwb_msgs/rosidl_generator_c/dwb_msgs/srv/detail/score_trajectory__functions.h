// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__FUNCTIONS_H_
#define DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dwb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dwb_msgs/srv/detail/score_trajectory__struct.h"

/// Initialize srv/ScoreTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dwb_msgs__srv__ScoreTrajectory_Request
 * )) before or use
 * dwb_msgs__srv__ScoreTrajectory_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Request__init(dwb_msgs__srv__ScoreTrajectory_Request * msg);

/// Finalize srv/ScoreTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Request__fini(dwb_msgs__srv__ScoreTrajectory_Request * msg);

/// Create srv/ScoreTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dwb_msgs__srv__ScoreTrajectory_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__ScoreTrajectory_Request *
dwb_msgs__srv__ScoreTrajectory_Request__create();

/// Destroy srv/ScoreTrajectory message.
/**
 * It calls
 * dwb_msgs__srv__ScoreTrajectory_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Request__destroy(dwb_msgs__srv__ScoreTrajectory_Request * msg);

/// Check for srv/ScoreTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Request__are_equal(const dwb_msgs__srv__ScoreTrajectory_Request * lhs, const dwb_msgs__srv__ScoreTrajectory_Request * rhs);

/// Copy a srv/ScoreTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Request__copy(
  const dwb_msgs__srv__ScoreTrajectory_Request * input,
  dwb_msgs__srv__ScoreTrajectory_Request * output);

/// Initialize array of srv/ScoreTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dwb_msgs__srv__ScoreTrajectory_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Request__Sequence__init(dwb_msgs__srv__ScoreTrajectory_Request__Sequence * array, size_t size);

/// Finalize array of srv/ScoreTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__ScoreTrajectory_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Request__Sequence__fini(dwb_msgs__srv__ScoreTrajectory_Request__Sequence * array);

/// Create array of srv/ScoreTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dwb_msgs__srv__ScoreTrajectory_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__ScoreTrajectory_Request__Sequence *
dwb_msgs__srv__ScoreTrajectory_Request__Sequence__create(size_t size);

/// Destroy array of srv/ScoreTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__ScoreTrajectory_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Request__Sequence__destroy(dwb_msgs__srv__ScoreTrajectory_Request__Sequence * array);

/// Check for srv/ScoreTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Request__Sequence__are_equal(const dwb_msgs__srv__ScoreTrajectory_Request__Sequence * lhs, const dwb_msgs__srv__ScoreTrajectory_Request__Sequence * rhs);

/// Copy an array of srv/ScoreTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Request__Sequence__copy(
  const dwb_msgs__srv__ScoreTrajectory_Request__Sequence * input,
  dwb_msgs__srv__ScoreTrajectory_Request__Sequence * output);

/// Initialize srv/ScoreTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dwb_msgs__srv__ScoreTrajectory_Response
 * )) before or use
 * dwb_msgs__srv__ScoreTrajectory_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Response__init(dwb_msgs__srv__ScoreTrajectory_Response * msg);

/// Finalize srv/ScoreTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Response__fini(dwb_msgs__srv__ScoreTrajectory_Response * msg);

/// Create srv/ScoreTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dwb_msgs__srv__ScoreTrajectory_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__ScoreTrajectory_Response *
dwb_msgs__srv__ScoreTrajectory_Response__create();

/// Destroy srv/ScoreTrajectory message.
/**
 * It calls
 * dwb_msgs__srv__ScoreTrajectory_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Response__destroy(dwb_msgs__srv__ScoreTrajectory_Response * msg);

/// Check for srv/ScoreTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Response__are_equal(const dwb_msgs__srv__ScoreTrajectory_Response * lhs, const dwb_msgs__srv__ScoreTrajectory_Response * rhs);

/// Copy a srv/ScoreTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Response__copy(
  const dwb_msgs__srv__ScoreTrajectory_Response * input,
  dwb_msgs__srv__ScoreTrajectory_Response * output);

/// Initialize array of srv/ScoreTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dwb_msgs__srv__ScoreTrajectory_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Response__Sequence__init(dwb_msgs__srv__ScoreTrajectory_Response__Sequence * array, size_t size);

/// Finalize array of srv/ScoreTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__ScoreTrajectory_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Response__Sequence__fini(dwb_msgs__srv__ScoreTrajectory_Response__Sequence * array);

/// Create array of srv/ScoreTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dwb_msgs__srv__ScoreTrajectory_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__ScoreTrajectory_Response__Sequence *
dwb_msgs__srv__ScoreTrajectory_Response__Sequence__create(size_t size);

/// Destroy array of srv/ScoreTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__ScoreTrajectory_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__ScoreTrajectory_Response__Sequence__destroy(dwb_msgs__srv__ScoreTrajectory_Response__Sequence * array);

/// Check for srv/ScoreTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Response__Sequence__are_equal(const dwb_msgs__srv__ScoreTrajectory_Response__Sequence * lhs, const dwb_msgs__srv__ScoreTrajectory_Response__Sequence * rhs);

/// Copy an array of srv/ScoreTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__ScoreTrajectory_Response__Sequence__copy(
  const dwb_msgs__srv__ScoreTrajectory_Response__Sequence * input,
  dwb_msgs__srv__ScoreTrajectory_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__FUNCTIONS_H_
