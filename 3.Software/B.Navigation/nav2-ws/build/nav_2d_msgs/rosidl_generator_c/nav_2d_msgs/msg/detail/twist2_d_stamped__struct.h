// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_2d_msgs:msg/Twist2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__STRUCT_H_
#define NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__STRUCT_H_

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
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.h"

/// Struct defined in msg/Twist2DStamped in the package nav_2d_msgs.
typedef struct nav_2d_msgs__msg__Twist2DStamped
{
  std_msgs__msg__Header header;
  nav_2d_msgs__msg__Twist2D velocity;
} nav_2d_msgs__msg__Twist2DStamped;

// Struct for a sequence of nav_2d_msgs__msg__Twist2DStamped.
typedef struct nav_2d_msgs__msg__Twist2DStamped__Sequence
{
  nav_2d_msgs__msg__Twist2DStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_2d_msgs__msg__Twist2DStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__STRUCT_H_
