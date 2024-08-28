// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'event_log'
#include "nav2_msgs/msg/detail/behavior_tree_status_change__struct.h"

/// Struct defined in msg/BehaviorTreeLog in the package nav2_msgs.
typedef struct nav2_msgs__msg__BehaviorTreeLog
{
  /// ROS time that this log message was sent.
  builtin_interfaces__msg__Time timestamp;
  nav2_msgs__msg__BehaviorTreeStatusChange__Sequence event_log;
} nav2_msgs__msg__BehaviorTreeLog;

// Struct for a sequence of nav2_msgs__msg__BehaviorTreeLog.
typedef struct nav2_msgs__msg__BehaviorTreeLog__Sequence
{
  nav2_msgs__msg__BehaviorTreeLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__BehaviorTreeLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_H_
