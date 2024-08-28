// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_H_
#define NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/Pose2DStamped in the package nav_2d_msgs.
typedef struct nav_2d_msgs__msg__Pose2DStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose2D pose;
} nav_2d_msgs__msg__Pose2DStamped;

// Struct for a sequence of nav_2d_msgs__msg__Pose2DStamped.
typedef struct nav_2d_msgs__msg__Pose2DStamped__Sequence
{
  nav_2d_msgs__msg__Pose2DStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_2d_msgs__msg__Pose2DStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_H_
