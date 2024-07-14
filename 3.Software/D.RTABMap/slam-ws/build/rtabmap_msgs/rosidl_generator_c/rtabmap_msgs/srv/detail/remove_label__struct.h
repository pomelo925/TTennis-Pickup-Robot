// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/RemoveLabel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__REMOVE_LABEL__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__REMOVE_LABEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RemoveLabel in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__RemoveLabel_Request
{
  rosidl_runtime_c__String label;
} rtabmap_msgs__srv__RemoveLabel_Request;

// Struct for a sequence of rtabmap_msgs__srv__RemoveLabel_Request.
typedef struct rtabmap_msgs__srv__RemoveLabel_Request__Sequence
{
  rtabmap_msgs__srv__RemoveLabel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__RemoveLabel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RemoveLabel in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__RemoveLabel_Response
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_msgs__srv__RemoveLabel_Response;

// Struct for a sequence of rtabmap_msgs__srv__RemoveLabel_Response.
typedef struct rtabmap_msgs__srv__RemoveLabel_Response__Sequence
{
  rtabmap_msgs__srv__RemoveLabel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__RemoveLabel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__REMOVE_LABEL__STRUCT_H_
