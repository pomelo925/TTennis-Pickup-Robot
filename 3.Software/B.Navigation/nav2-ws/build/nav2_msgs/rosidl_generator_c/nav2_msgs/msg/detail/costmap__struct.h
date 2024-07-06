// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP__STRUCT_H_

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
// Member 'metadata'
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Costmap in the package nav2_msgs.
/**
  * This represents a 2-D grid map, in which each cell has an associated cost
 */
typedef struct nav2_msgs__msg__Costmap
{
  std_msgs__msg__Header header;
  /// MetaData for the map
  nav2_msgs__msg__CostmapMetaData metadata;
  /// The cost data, in row-major order, starting with (0,0).
  rosidl_runtime_c__uint8__Sequence data;
} nav2_msgs__msg__Costmap;

// Struct for a sequence of nav2_msgs__msg__Costmap.
typedef struct nav2_msgs__msg__Costmap__Sequence
{
  nav2_msgs__msg__Costmap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__Costmap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP__STRUCT_H_
