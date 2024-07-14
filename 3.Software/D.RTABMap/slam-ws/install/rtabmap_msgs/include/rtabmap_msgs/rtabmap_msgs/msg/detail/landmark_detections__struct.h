// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/LandmarkDetections.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__STRUCT_H_

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
// Member 'landmarks'
#include "rtabmap_msgs/msg/detail/landmark_detection__struct.h"

/// Struct defined in msg/LandmarkDetections in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__LandmarkDetections
{
  /// header.stamp: the timestamp of the detection (e.g. image timestamp)
  /// header.frame_id: the base frame of pose (e.g., camera optical frame)
  std_msgs__msg__Header header;
  rtabmap_msgs__msg__LandmarkDetection__Sequence landmarks;
} rtabmap_msgs__msg__LandmarkDetections;

// Struct for a sequence of rtabmap_msgs__msg__LandmarkDetections.
typedef struct rtabmap_msgs__msg__LandmarkDetections__Sequence
{
  rtabmap_msgs__msg__LandmarkDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__LandmarkDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__STRUCT_H_
