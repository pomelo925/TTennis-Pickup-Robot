// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/AddLink.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link'
#include "rtabmap_msgs/msg/detail/link__struct.h"

/// Struct defined in srv/AddLink in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__AddLink_Request
{
  rtabmap_msgs__msg__Link link;
} rtabmap_msgs__srv__AddLink_Request;

// Struct for a sequence of rtabmap_msgs__srv__AddLink_Request.
typedef struct rtabmap_msgs__srv__AddLink_Request__Sequence
{
  rtabmap_msgs__srv__AddLink_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__AddLink_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddLink in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__AddLink_Response
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_msgs__srv__AddLink_Response;

// Struct for a sequence of rtabmap_msgs__srv__AddLink_Response.
typedef struct rtabmap_msgs__srv__AddLink_Response__Sequence
{
  rtabmap_msgs__srv__AddLink_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__AddLink_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__STRUCT_H_
