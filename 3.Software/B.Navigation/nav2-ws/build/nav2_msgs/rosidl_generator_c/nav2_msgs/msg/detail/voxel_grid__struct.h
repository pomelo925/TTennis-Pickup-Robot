// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'resolutions'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/VoxelGrid in the package nav2_msgs.
typedef struct nav2_msgs__msg__VoxelGrid
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint32__Sequence data;
  geometry_msgs__msg__Point32 origin;
  geometry_msgs__msg__Vector3 resolutions;
  uint32_t size_x;
  uint32_t size_y;
  uint32_t size_z;
} nav2_msgs__msg__VoxelGrid;

// Struct for a sequence of nav2_msgs__msg__VoxelGrid.
typedef struct nav2_msgs__msg__VoxelGrid__Sequence
{
  nav2_msgs__msg__VoxelGrid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__VoxelGrid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__STRUCT_H_
