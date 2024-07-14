// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__GOAL__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__GOAL__STRUCT_H_

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
// Member 'node_label'
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Goal in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__Goal
{
  std_msgs__msg__Header header;
  /// Set either node_id or node_label
  int32_t node_id;
  rosidl_runtime_c__String node_label;
  /// optional: if not set, the base frame of the robot is used
  rosidl_runtime_c__String frame_id;
} rtabmap_msgs__msg__Goal;

// Struct for a sequence of rtabmap_msgs__msg__Goal.
typedef struct rtabmap_msgs__msg__Goal__Sequence
{
  rtabmap_msgs__msg__Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__Goal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__GOAL__STRUCT_H_
