// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_H_

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
// Member 'local_bundle_ids'
// Member 'words_keys'
// Member 'word_matches'
// Member 'word_inliers'
// Member 'local_map_keys'
// Member 'corner_inliers'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'local_bundle_models'
#include "rtabmap_msgs/msg/detail/camera_models__struct.h"
// Member 'local_bundle_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'transform'
// Member 'transform_filtered'
// Member 'transform_ground_truth'
// Member 'guess'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'words_values'
#include "rtabmap_msgs/msg/detail/key_point__struct.h"
// Member 'local_map_values'
#include "rtabmap_msgs/msg/detail/point3f__struct.h"
// Member 'local_scan_map'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'ref_corners'
// Member 'new_corners'
#include "rtabmap_msgs/msg/detail/point2f__struct.h"

/// Struct defined in msg/OdomInfo in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__OdomInfo
{
  std_msgs__msg__Header header;
  bool lost;
  int32_t matches;
  int32_t inliers;
  float icp_inliers_ratio;
  float icp_rotation;
  float icp_translation;
  float icp_structural_complexity;
  float icp_structural_distribution;
  int32_t icp_correspondences;
  double covariance[36];
  int32_t features;
  int32_t local_map_size;
  int32_t local_scan_map_size;
  int32_t local_key_frames;
  int32_t local_bundle_outliers;
  int32_t local_bundle_constraints;
  float local_bundle_time;
  bool key_frame_added;
  float time_estimation;
  float time_particle_filtering;
  float stamp;
  float interval;
  float distance_travelled;
  /// MB
  int32_t memory_usage;
  float gravity_roll_error;
  float gravity_pitch_error;
  /// Local bundle camera ids
  rosidl_runtime_c__int32__Sequence local_bundle_ids;
  /// Local bundle camera models
  rtabmap_msgs__msg__CameraModels__Sequence local_bundle_models;
  /// Local bundle camera poses
  geometry_msgs__msg__Pose__Sequence local_bundle_poses;
  geometry_msgs__msg__Transform transform;
  geometry_msgs__msg__Transform transform_filtered;
  geometry_msgs__msg__Transform transform_ground_truth;
  geometry_msgs__msg__Transform guess;
  /// 0=F2M, 1=F2F
  int32_t type;
  /// F2M odometry
  ///   std::multimap<int, cv::KeyPoint> words;
  ///   std::vector<int> wordMatches;
  ///   std::vector<int> wordInliers;
  rosidl_runtime_c__int32__Sequence words_keys;
  rtabmap_msgs__msg__KeyPoint__Sequence words_values;
  rosidl_runtime_c__int32__Sequence word_matches;
  rosidl_runtime_c__int32__Sequence word_inliers;
  rosidl_runtime_c__int32__Sequence local_map_keys;
  rtabmap_msgs__msg__Point3f__Sequence local_map_values;
  /// local scan map data
  sensor_msgs__msg__PointCloud2 local_scan_map;
  /// F2F odometry
  ///   std::vector<cv::Point2f> ref_corners;
  ///   std::vector<cv::Point2f> new_corners;
  ///   std::vector<int> corner_inliers;
  rtabmap_msgs__msg__Point2f__Sequence ref_corners;
  rtabmap_msgs__msg__Point2f__Sequence new_corners;
  rosidl_runtime_c__int32__Sequence corner_inliers;
} rtabmap_msgs__msg__OdomInfo;

// Struct for a sequence of rtabmap_msgs__msg__OdomInfo.
typedef struct rtabmap_msgs__msg__OdomInfo__Sequence
{
  rtabmap_msgs__msg__OdomInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__OdomInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_H_
