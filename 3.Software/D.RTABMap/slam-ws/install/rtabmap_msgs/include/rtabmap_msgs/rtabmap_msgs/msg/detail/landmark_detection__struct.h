// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/LandmarkDetection.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__STRUCT_H_

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
// Member 'landmark_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"

/// Struct defined in msg/LandmarkDetection in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__LandmarkDetection
{
  /// header.stamp: the timestamp of the detection (e.g. image timestamp)
  /// header.frame_id: the base frame of pose (e.g., camera optical frame)
  std_msgs__msg__Header header;
  /// Landmark's frame id
  rosidl_runtime_c__String landmark_frame_id;
  /// Landmark's unique ID: should be >0
  int32_t id;
  /// Size in meters of the landmark/tag (optional, set 0 to not use it).
  float size;
  /// Pose of the landmark in header.frame_id frame.
  /// If covariance is unknown, keep it as null matrix.
  /// rtabmap_slam/rtabmap's landmark_angular_variance and
  /// landmark_linear_variance parameters can be used
  /// for convenience if covariance is null.
  geometry_msgs__msg__PoseWithCovariance pose;
} rtabmap_msgs__msg__LandmarkDetection;

// Struct for a sequence of rtabmap_msgs__msg__LandmarkDetection.
typedef struct rtabmap_msgs__msg__LandmarkDetection__Sequence
{
  rtabmap_msgs__msg__LandmarkDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__LandmarkDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__STRUCT_H_
