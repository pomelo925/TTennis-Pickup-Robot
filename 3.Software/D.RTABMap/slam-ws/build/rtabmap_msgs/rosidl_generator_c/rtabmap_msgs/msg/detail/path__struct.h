// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__PATH__STRUCT_H_

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
// Member 'node_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Path in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__Path
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence node_ids;
  geometry_msgs__msg__Pose__Sequence poses;
} rtabmap_msgs__msg__Path;

// Struct for a sequence of rtabmap_msgs__msg__Path.
typedef struct rtabmap_msgs__msg__Path__Sequence
{
  rtabmap_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__PATH__STRUCT_H_
