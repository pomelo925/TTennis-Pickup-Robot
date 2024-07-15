// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_

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

/// Struct defined in msg/SpeedLimit in the package nav2_msgs.
typedef struct nav2_msgs__msg__SpeedLimit
{
  std_msgs__msg__Header header;
  /// Setting speed limit in percentage if true or in absolute values in false case
  bool percentage;
  /// Maximum allowed speed (in percent of maximum robot speed or in m/s depending
  /// on "percentage" value). When no-limit it is set to 0.0
  double speed_limit;
} nav2_msgs__msg__SpeedLimit;

// Struct for a sequence of nav2_msgs__msg__SpeedLimit.
typedef struct nav2_msgs__msg__SpeedLimit__Sequence
{
  nav2_msgs__msg__SpeedLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__SpeedLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_
