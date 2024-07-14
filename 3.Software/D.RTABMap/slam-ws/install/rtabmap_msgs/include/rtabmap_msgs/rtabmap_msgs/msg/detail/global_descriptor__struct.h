// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_H_

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
// Member 'info'
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GlobalDescriptor in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__GlobalDescriptor
{
  std_msgs__msg__Header header;
  /// compressed global descriptor
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  int32_t type;
  rosidl_runtime_c__uint8__Sequence info;
  rosidl_runtime_c__uint8__Sequence data;
} rtabmap_msgs__msg__GlobalDescriptor;

// Struct for a sequence of rtabmap_msgs__msg__GlobalDescriptor.
typedef struct rtabmap_msgs__msg__GlobalDescriptor__Sequence
{
  rtabmap_msgs__msg__GlobalDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__GlobalDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_H_
