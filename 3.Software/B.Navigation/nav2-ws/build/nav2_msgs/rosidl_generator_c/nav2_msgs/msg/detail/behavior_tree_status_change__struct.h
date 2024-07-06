// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_H_

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
// Member 'node_name'
// Member 'previous_status'
// Member 'current_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BehaviorTreeStatusChange in the package nav2_msgs.
typedef struct nav2_msgs__msg__BehaviorTreeStatusChange
{
  /// internal behavior tree event timestamp. Typically this is wall clock time
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String node_name;
  /// IDLE, RUNNING, SUCCESS or FAILURE
  rosidl_runtime_c__String previous_status;
  /// IDLE, RUNNING, SUCCESS or FAILURE
  rosidl_runtime_c__String current_status;
} nav2_msgs__msg__BehaviorTreeStatusChange;

// Struct for a sequence of nav2_msgs__msg__BehaviorTreeStatusChange.
typedef struct nav2_msgs__msg__BehaviorTreeStatusChange__Sequence
{
  nav2_msgs__msg__BehaviorTreeStatusChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__BehaviorTreeStatusChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_H_
