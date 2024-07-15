// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_META_DATA__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_load_time'
// Member 'update_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'layer'
#include "rosidl_runtime_c/string.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/CostmapMetaData in the package nav2_msgs.
/**
  * This hold basic information about the characteristics of the Costmap
 */
typedef struct nav2_msgs__msg__CostmapMetaData
{
  /// The time at which the static map was loaded
  builtin_interfaces__msg__Time map_load_time;
  /// The time of the last update to costmap
  builtin_interfaces__msg__Time update_time;
  /// The corresponding layer name
  rosidl_runtime_c__String layer;
  /// The map resolution
  float resolution;
  /// Number of cells in the horizontal direction
  uint32_t size_x;
  /// Number of cells in the vertical direction
  uint32_t size_y;
  /// The origin of the costmap [m, m, rad].
  /// This is the real-world pose of the cell (0,0) in the map.
  geometry_msgs__msg__Pose origin;
} nav2_msgs__msg__CostmapMetaData;

// Struct for a sequence of nav2_msgs__msg__CostmapMetaData.
typedef struct nav2_msgs__msg__CostmapMetaData__Sequence
{
  nav2_msgs__msg__CostmapMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__CostmapMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_META_DATA__STRUCT_H_
