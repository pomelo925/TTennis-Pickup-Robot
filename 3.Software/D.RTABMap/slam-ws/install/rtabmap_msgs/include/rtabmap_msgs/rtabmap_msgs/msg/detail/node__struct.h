// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'word_id_keys'
// Member 'word_id_values'
// Member 'word_descriptors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'word_kpts'
#include "rtabmap_msgs/msg/detail/key_point__struct.h"
// Member 'word_pts'
#include "rtabmap_msgs/msg/detail/point3f__struct.h"
// Member 'data'
#include "rtabmap_msgs/msg/detail/sensor_data__struct.h"

/// Struct defined in msg/Node in the package rtabmap_msgs.
/**
  * class rtabmap::Signature
 */
typedef struct rtabmap_msgs__msg__Node
{
  int32_t id;
  int32_t map_id;
  int32_t weight;
  double stamp;
  rosidl_runtime_c__String label;
  /// Pose from odometry not corrected
  geometry_msgs__msg__Pose pose;
  /// std::multimap<wordId, index>
  /// std::vector<cv::Keypoint>
  /// std::vector<cv::Point3f>
  rosidl_runtime_c__int32__Sequence word_id_keys;
  rosidl_runtime_c__int32__Sequence word_id_values;
  rtabmap_msgs__msg__KeyPoint__Sequence word_kpts;
  rtabmap_msgs__msg__Point3f__Sequence word_pts;
  /// compressed descriptors
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence word_descriptors;
  rtabmap_msgs__msg__SensorData data;
} rtabmap_msgs__msg__Node;

// Struct for a sequence of rtabmap_msgs__msg__Node.
typedef struct rtabmap_msgs__msg__Node__Sequence
{
  rtabmap_msgs__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE__STRUCT_H_
