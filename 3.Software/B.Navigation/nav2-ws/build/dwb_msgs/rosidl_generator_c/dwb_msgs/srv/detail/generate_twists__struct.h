// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__STRUCT_H_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.h"

/// Struct defined in srv/GenerateTwists in the package dwb_msgs.
typedef struct dwb_msgs__srv__GenerateTwists_Request
{
  nav_2d_msgs__msg__Twist2D current_vel;
} dwb_msgs__srv__GenerateTwists_Request;

// Struct for a sequence of dwb_msgs__srv__GenerateTwists_Request.
typedef struct dwb_msgs__srv__GenerateTwists_Request__Sequence
{
  dwb_msgs__srv__GenerateTwists_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__GenerateTwists_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'twists'
// already included above
// #include "nav_2d_msgs/msg/detail/twist2_d__struct.h"

/// Struct defined in srv/GenerateTwists in the package dwb_msgs.
typedef struct dwb_msgs__srv__GenerateTwists_Response
{
  nav_2d_msgs__msg__Twist2D__Sequence twists;
} dwb_msgs__srv__GenerateTwists_Response;

// Struct for a sequence of dwb_msgs__srv__GenerateTwists_Response.
typedef struct dwb_msgs__srv__GenerateTwists_Response__Sequence
{
  dwb_msgs__srv__GenerateTwists_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__GenerateTwists_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__STRUCT_H_
