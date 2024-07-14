// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

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
// Member 'left'
// Member 'right'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'left_compressed'
// Member 'right_compressed'
// Member 'laser_scan_compressed'
// Member 'user_data'
// Member 'grid_ground'
// Member 'grid_obstacles'
// Member 'grid_empty_cells'
// Member 'descriptors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'left_camera_info'
// Member 'right_camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'local_transform'
// Member 'laser_scan_local_transform'
// Member 'imu_local_transform'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'laser_scan'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'grid_view_point'
// Member 'points'
#include "rtabmap_msgs/msg/detail/point3f__struct.h"
// Member 'key_points'
#include "rtabmap_msgs/msg/detail/key_point__struct.h"
// Member 'global_descriptors'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.h"
// Member 'env_sensors'
#include "rtabmap_msgs/msg/detail/env_sensor__struct.h"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"
// Member 'landmarks'
#include "rtabmap_msgs/msg/detail/landmark_detection__struct.h"
// Member 'ground_truth_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'gps'
#include "rtabmap_msgs/msg/detail/gps__struct.h"

/// Struct defined in msg/SensorData in the package rtabmap_msgs.
/**
  * class rtabmap::SensorData
 */
typedef struct rtabmap_msgs__msg__SensorData
{
  std_msgs__msg__Header header;
  /// For RGB-D, left corresponds to rgb camera, and right corresponds to depth camera.
  /// Raw images
  sensor_msgs__msg__Image left;
  sensor_msgs__msg__Image right;
  /// Compressed images
  /// use rtabmap::util3d::uncompressImage() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence left_compressed;
  rosidl_runtime_c__uint8__Sequence right_compressed;
  /// Camera info
  sensor_msgs__msg__CameraInfo__Sequence left_camera_info;
  sensor_msgs__msg__CameraInfo__Sequence right_camera_info;
  /// Transform from base frame to camera frame
  geometry_msgs__msg__Transform__Sequence local_transform;
  /// raw 2d or 3D laser scan
  sensor_msgs__msg__PointCloud2 laser_scan;
  /// compressed 2D or 3D laser scan
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence laser_scan_compressed;
  int32_t laser_scan_max_pts;
  float laser_scan_max_range;
  int32_t laser_scan_format;
  /// local transform (base frame -> laser frame)
  geometry_msgs__msg__Transform laser_scan_local_transform;
  /// compressed user data
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence user_data;
  /// compressed occupancy grid
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence grid_ground;
  rosidl_runtime_c__uint8__Sequence grid_obstacles;
  rosidl_runtime_c__uint8__Sequence grid_empty_cells;
  float grid_cell_size;
  rtabmap_msgs__msg__Point3f grid_view_point;
  /// Local features
  rtabmap_msgs__msg__KeyPoint__Sequence key_points;
  rtabmap_msgs__msg__Point3f__Sequence points;
  /// compressed descriptors
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence descriptors;
  rtabmap_msgs__msg__GlobalDescriptor__Sequence global_descriptors;
  rtabmap_msgs__msg__EnvSensor__Sequence env_sensors;
  sensor_msgs__msg__Imu imu;
  geometry_msgs__msg__Transform imu_local_transform;
  rtabmap_msgs__msg__LandmarkDetection__Sequence landmarks;
  /// Ground truth
  geometry_msgs__msg__Pose ground_truth_pose;
  /// GPS
  rtabmap_msgs__msg__GPS gps;
} rtabmap_msgs__msg__SensorData;

// Struct for a sequence of rtabmap_msgs__msg__SensorData.
typedef struct rtabmap_msgs__msg__SensorData__Sequence
{
  rtabmap_msgs__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
