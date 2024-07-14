// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetNodesInRadius in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetNodesInRadius_Request
{
  /// In mapping mode (Mem/IncrementalMemory=true), if target pose
  ///   and node_id are all zeros, poses around the latest node
  ///   in the graph are returned.
  /// In localization mode (Mem/IncrementalMemory=false), if target pose
  ///   and node_id are all zeros, poses around the latest localization
  ///   pose are returned.
  /// If node_id is not zero, target pose is ignored.
  /// Node id
  int32_t node_id;
  /// Target pose:
  float x;
  float y;
  float z;
  /// Radius, <=0 means that RGBD/LocalRadius will be used
  /// if k is also 0. If k>0 and a radius of 0 means all nearest
  /// poses up to k.
  float radius;
  /// Maximum number of nearest poses
  int32_t k;
} rtabmap_msgs__srv__GetNodesInRadius_Request;

// Struct for a sequence of rtabmap_msgs__srv__GetNodesInRadius_Request.
typedef struct rtabmap_msgs__srv__GetNodesInRadius_Request__Sequence
{
  rtabmap_msgs__srv__GetNodesInRadius_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetNodesInRadius_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ids'
// Member 'dists_sqr'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetNodesInRadius in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetNodesInRadius_Response
{
  rosidl_runtime_c__int32__Sequence ids;
  geometry_msgs__msg__Pose__Sequence poses;
  rosidl_runtime_c__float__Sequence dists_sqr;
} rtabmap_msgs__srv__GetNodesInRadius_Response;

// Struct for a sequence of rtabmap_msgs__srv__GetNodesInRadius_Response.
typedef struct rtabmap_msgs__srv__GetNodesInRadius_Response__Sequence
{
  rtabmap_msgs__srv__GetNodesInRadius_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetNodesInRadius_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__STRUCT_H_
