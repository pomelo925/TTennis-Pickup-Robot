// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DO_NOTHING'.
/**
  * No action
 */
enum
{
  nav2_msgs__msg__CollisionMonitorState__DO_NOTHING = 0
};

/// Constant 'STOP'.
/**
  * Stop the robot
 */
enum
{
  nav2_msgs__msg__CollisionMonitorState__STOP = 1
};

/// Constant 'SLOWDOWN'.
/**
  * Slowdown in percentage from current operating speed
 */
enum
{
  nav2_msgs__msg__CollisionMonitorState__SLOWDOWN = 2
};

/// Constant 'APPROACH'.
/**
  * Keep constant time interval before collision
 */
enum
{
  nav2_msgs__msg__CollisionMonitorState__APPROACH = 3
};

// Include directives for member types
// Member 'polygon_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CollisionMonitorState in the package nav2_msgs.
/**
  * Action type for robot in Collision Monitor
 */
typedef struct nav2_msgs__msg__CollisionMonitorState
{
  uint8_t action_type;
  /// Name of triggered polygon
  rosidl_runtime_c__String polygon_name;
} nav2_msgs__msg__CollisionMonitorState;

// Struct for a sequence of nav2_msgs__msg__CollisionMonitorState.
typedef struct nav2_msgs__msg__CollisionMonitorState__Sequence
{
  nav2_msgs__msg__CollisionMonitorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__CollisionMonitorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__STRUCT_H_
