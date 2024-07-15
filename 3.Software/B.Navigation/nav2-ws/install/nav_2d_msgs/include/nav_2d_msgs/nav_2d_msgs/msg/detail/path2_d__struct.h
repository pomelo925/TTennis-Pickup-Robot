// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__PATH2_D__STRUCT_H_
#define NAV_2D_MSGS__MSG__DETAIL__PATH2_D__STRUCT_H_

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
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/Path2D in the package nav_2d_msgs.
typedef struct nav_2d_msgs__msg__Path2D
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose2D__Sequence poses;
} nav_2d_msgs__msg__Path2D;

// Struct for a sequence of nav_2d_msgs__msg__Path2D.
typedef struct nav_2d_msgs__msg__Path2D__Sequence
{
  nav_2d_msgs__msg__Path2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_2d_msgs__msg__Path2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_2D_MSGS__MSG__DETAIL__PATH2_D__STRUCT_H_
