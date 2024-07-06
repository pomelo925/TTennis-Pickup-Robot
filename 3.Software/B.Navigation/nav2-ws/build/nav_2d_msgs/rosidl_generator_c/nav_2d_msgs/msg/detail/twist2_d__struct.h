// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_2d_msgs:msg/Twist2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__TWIST2_D__STRUCT_H_
#define NAV_2D_MSGS__MSG__DETAIL__TWIST2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Twist2D in the package nav_2d_msgs.
typedef struct nav_2d_msgs__msg__Twist2D
{
  double x;
  double y;
  double theta;
} nav_2d_msgs__msg__Twist2D;

// Struct for a sequence of nav_2d_msgs__msg__Twist2D.
typedef struct nav_2d_msgs__msg__Twist2D__Sequence
{
  nav_2d_msgs__msg__Twist2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_2d_msgs__msg__Twist2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_2D_MSGS__MSG__DETAIL__TWIST2_D__STRUCT_H_
