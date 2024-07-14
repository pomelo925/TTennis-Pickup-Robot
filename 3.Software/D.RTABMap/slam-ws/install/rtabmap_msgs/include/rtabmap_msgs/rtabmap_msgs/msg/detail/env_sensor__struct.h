// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/EnvSensor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ENV_SENSOR__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__ENV_SENSOR__STRUCT_H_

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

/// Struct defined in msg/EnvSensor in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__EnvSensor
{
  std_msgs__msg__Header header;
  /// EnvSensor
  int32_t type;
  double value;
} rtabmap_msgs__msg__EnvSensor;

// Struct for a sequence of rtabmap_msgs__msg__EnvSensor.
typedef struct rtabmap_msgs__msg__EnvSensor__Sequence
{
  rtabmap_msgs__msg__EnvSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__EnvSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__ENV_SENSOR__STRUCT_H_
