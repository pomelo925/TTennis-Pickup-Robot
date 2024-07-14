// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'local_bundle_models'
#include "rtabmap_msgs/msg/detail/camera_models__struct.hpp"
// Member 'local_bundle_poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'transform'
// Member 'transform_filtered'
// Member 'transform_ground_truth'
// Member 'guess'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'words_values'
#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
// Member 'local_map_values'
#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
// Member 'local_scan_map'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'ref_corners'
// Member 'new_corners'
#include "rtabmap_msgs/msg/detail/point2f__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__OdomInfo __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__OdomInfo __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OdomInfo_
{
  using Type = OdomInfo_<ContainerAllocator>;

  explicit OdomInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    transform(_init),
    transform_filtered(_init),
    transform_ground_truth(_init),
    guess(_init),
    local_scan_map(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lost = false;
      this->matches = 0l;
      this->inliers = 0l;
      this->icp_inliers_ratio = 0.0f;
      this->icp_rotation = 0.0f;
      this->icp_translation = 0.0f;
      this->icp_structural_complexity = 0.0f;
      this->icp_structural_distribution = 0.0f;
      this->icp_correspondences = 0l;
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
      this->features = 0l;
      this->local_map_size = 0l;
      this->local_scan_map_size = 0l;
      this->local_key_frames = 0l;
      this->local_bundle_outliers = 0l;
      this->local_bundle_constraints = 0l;
      this->local_bundle_time = 0.0f;
      this->key_frame_added = false;
      this->time_estimation = 0.0f;
      this->time_particle_filtering = 0.0f;
      this->stamp = 0.0f;
      this->interval = 0.0f;
      this->distance_travelled = 0.0f;
      this->memory_usage = 0l;
      this->gravity_roll_error = 0.0f;
      this->gravity_pitch_error = 0.0f;
      this->type = 0l;
    }
  }

  explicit OdomInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    covariance(_alloc),
    transform(_alloc, _init),
    transform_filtered(_alloc, _init),
    transform_ground_truth(_alloc, _init),
    guess(_alloc, _init),
    local_scan_map(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lost = false;
      this->matches = 0l;
      this->inliers = 0l;
      this->icp_inliers_ratio = 0.0f;
      this->icp_rotation = 0.0f;
      this->icp_translation = 0.0f;
      this->icp_structural_complexity = 0.0f;
      this->icp_structural_distribution = 0.0f;
      this->icp_correspondences = 0l;
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
      this->features = 0l;
      this->local_map_size = 0l;
      this->local_scan_map_size = 0l;
      this->local_key_frames = 0l;
      this->local_bundle_outliers = 0l;
      this->local_bundle_constraints = 0l;
      this->local_bundle_time = 0.0f;
      this->key_frame_added = false;
      this->time_estimation = 0.0f;
      this->time_particle_filtering = 0.0f;
      this->stamp = 0.0f;
      this->interval = 0.0f;
      this->distance_travelled = 0.0f;
      this->memory_usage = 0l;
      this->gravity_roll_error = 0.0f;
      this->gravity_pitch_error = 0.0f;
      this->type = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lost_type =
    bool;
  _lost_type lost;
  using _matches_type =
    int32_t;
  _matches_type matches;
  using _inliers_type =
    int32_t;
  _inliers_type inliers;
  using _icp_inliers_ratio_type =
    float;
  _icp_inliers_ratio_type icp_inliers_ratio;
  using _icp_rotation_type =
    float;
  _icp_rotation_type icp_rotation;
  using _icp_translation_type =
    float;
  _icp_translation_type icp_translation;
  using _icp_structural_complexity_type =
    float;
  _icp_structural_complexity_type icp_structural_complexity;
  using _icp_structural_distribution_type =
    float;
  _icp_structural_distribution_type icp_structural_distribution;
  using _icp_correspondences_type =
    int32_t;
  _icp_correspondences_type icp_correspondences;
  using _covariance_type =
    std::array<double, 36>;
  _covariance_type covariance;
  using _features_type =
    int32_t;
  _features_type features;
  using _local_map_size_type =
    int32_t;
  _local_map_size_type local_map_size;
  using _local_scan_map_size_type =
    int32_t;
  _local_scan_map_size_type local_scan_map_size;
  using _local_key_frames_type =
    int32_t;
  _local_key_frames_type local_key_frames;
  using _local_bundle_outliers_type =
    int32_t;
  _local_bundle_outliers_type local_bundle_outliers;
  using _local_bundle_constraints_type =
    int32_t;
  _local_bundle_constraints_type local_bundle_constraints;
  using _local_bundle_time_type =
    float;
  _local_bundle_time_type local_bundle_time;
  using _key_frame_added_type =
    bool;
  _key_frame_added_type key_frame_added;
  using _time_estimation_type =
    float;
  _time_estimation_type time_estimation;
  using _time_particle_filtering_type =
    float;
  _time_particle_filtering_type time_particle_filtering;
  using _stamp_type =
    float;
  _stamp_type stamp;
  using _interval_type =
    float;
  _interval_type interval;
  using _distance_travelled_type =
    float;
  _distance_travelled_type distance_travelled;
  using _memory_usage_type =
    int32_t;
  _memory_usage_type memory_usage;
  using _gravity_roll_error_type =
    float;
  _gravity_roll_error_type gravity_roll_error;
  using _gravity_pitch_error_type =
    float;
  _gravity_pitch_error_type gravity_pitch_error;
  using _local_bundle_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _local_bundle_ids_type local_bundle_ids;
  using _local_bundle_models_type =
    std::vector<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>>;
  _local_bundle_models_type local_bundle_models;
  using _local_bundle_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _local_bundle_poses_type local_bundle_poses;
  using _transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_type transform;
  using _transform_filtered_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_filtered_type transform_filtered;
  using _transform_ground_truth_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_ground_truth_type transform_ground_truth;
  using _guess_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _guess_type guess;
  using _type_type =
    int32_t;
  _type_type type;
  using _words_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _words_keys_type words_keys;
  using _words_values_type =
    std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>>;
  _words_values_type words_values;
  using _word_matches_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _word_matches_type word_matches;
  using _word_inliers_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _word_inliers_type word_inliers;
  using _local_map_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _local_map_keys_type local_map_keys;
  using _local_map_values_type =
    std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>>;
  _local_map_values_type local_map_values;
  using _local_scan_map_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _local_scan_map_type local_scan_map;
  using _ref_corners_type =
    std::vector<rtabmap_msgs::msg::Point2f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point2f_<ContainerAllocator>>>;
  _ref_corners_type ref_corners;
  using _new_corners_type =
    std::vector<rtabmap_msgs::msg::Point2f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point2f_<ContainerAllocator>>>;
  _new_corners_type new_corners;
  using _corner_inliers_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _corner_inliers_type corner_inliers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lost(
    const bool & _arg)
  {
    this->lost = _arg;
    return *this;
  }
  Type & set__matches(
    const int32_t & _arg)
  {
    this->matches = _arg;
    return *this;
  }
  Type & set__inliers(
    const int32_t & _arg)
  {
    this->inliers = _arg;
    return *this;
  }
  Type & set__icp_inliers_ratio(
    const float & _arg)
  {
    this->icp_inliers_ratio = _arg;
    return *this;
  }
  Type & set__icp_rotation(
    const float & _arg)
  {
    this->icp_rotation = _arg;
    return *this;
  }
  Type & set__icp_translation(
    const float & _arg)
  {
    this->icp_translation = _arg;
    return *this;
  }
  Type & set__icp_structural_complexity(
    const float & _arg)
  {
    this->icp_structural_complexity = _arg;
    return *this;
  }
  Type & set__icp_structural_distribution(
    const float & _arg)
  {
    this->icp_structural_distribution = _arg;
    return *this;
  }
  Type & set__icp_correspondences(
    const int32_t & _arg)
  {
    this->icp_correspondences = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 36> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }
  Type & set__features(
    const int32_t & _arg)
  {
    this->features = _arg;
    return *this;
  }
  Type & set__local_map_size(
    const int32_t & _arg)
  {
    this->local_map_size = _arg;
    return *this;
  }
  Type & set__local_scan_map_size(
    const int32_t & _arg)
  {
    this->local_scan_map_size = _arg;
    return *this;
  }
  Type & set__local_key_frames(
    const int32_t & _arg)
  {
    this->local_key_frames = _arg;
    return *this;
  }
  Type & set__local_bundle_outliers(
    const int32_t & _arg)
  {
    this->local_bundle_outliers = _arg;
    return *this;
  }
  Type & set__local_bundle_constraints(
    const int32_t & _arg)
  {
    this->local_bundle_constraints = _arg;
    return *this;
  }
  Type & set__local_bundle_time(
    const float & _arg)
  {
    this->local_bundle_time = _arg;
    return *this;
  }
  Type & set__key_frame_added(
    const bool & _arg)
  {
    this->key_frame_added = _arg;
    return *this;
  }
  Type & set__time_estimation(
    const float & _arg)
  {
    this->time_estimation = _arg;
    return *this;
  }
  Type & set__time_particle_filtering(
    const float & _arg)
  {
    this->time_particle_filtering = _arg;
    return *this;
  }
  Type & set__stamp(
    const float & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__interval(
    const float & _arg)
  {
    this->interval = _arg;
    return *this;
  }
  Type & set__distance_travelled(
    const float & _arg)
  {
    this->distance_travelled = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const int32_t & _arg)
  {
    this->memory_usage = _arg;
    return *this;
  }
  Type & set__gravity_roll_error(
    const float & _arg)
  {
    this->gravity_roll_error = _arg;
    return *this;
  }
  Type & set__gravity_pitch_error(
    const float & _arg)
  {
    this->gravity_pitch_error = _arg;
    return *this;
  }
  Type & set__local_bundle_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->local_bundle_ids = _arg;
    return *this;
  }
  Type & set__local_bundle_models(
    const std::vector<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>> & _arg)
  {
    this->local_bundle_models = _arg;
    return *this;
  }
  Type & set__local_bundle_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->local_bundle_poses = _arg;
    return *this;
  }
  Type & set__transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__transform_filtered(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform_filtered = _arg;
    return *this;
  }
  Type & set__transform_ground_truth(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform_ground_truth = _arg;
    return *this;
  }
  Type & set__guess(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->guess = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__words_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->words_keys = _arg;
    return *this;
  }
  Type & set__words_values(
    const std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->words_values = _arg;
    return *this;
  }
  Type & set__word_matches(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->word_matches = _arg;
    return *this;
  }
  Type & set__word_inliers(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->word_inliers = _arg;
    return *this;
  }
  Type & set__local_map_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->local_map_keys = _arg;
    return *this;
  }
  Type & set__local_map_values(
    const std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>> & _arg)
  {
    this->local_map_values = _arg;
    return *this;
  }
  Type & set__local_scan_map(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->local_scan_map = _arg;
    return *this;
  }
  Type & set__ref_corners(
    const std::vector<rtabmap_msgs::msg::Point2f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point2f_<ContainerAllocator>>> & _arg)
  {
    this->ref_corners = _arg;
    return *this;
  }
  Type & set__new_corners(
    const std::vector<rtabmap_msgs::msg::Point2f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point2f_<ContainerAllocator>>> & _arg)
  {
    this->new_corners = _arg;
    return *this;
  }
  Type & set__corner_inliers(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->corner_inliers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::OdomInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::OdomInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::OdomInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::OdomInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__OdomInfo
    std::shared_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__OdomInfo
    std::shared_ptr<rtabmap_msgs::msg::OdomInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdomInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lost != other.lost) {
      return false;
    }
    if (this->matches != other.matches) {
      return false;
    }
    if (this->inliers != other.inliers) {
      return false;
    }
    if (this->icp_inliers_ratio != other.icp_inliers_ratio) {
      return false;
    }
    if (this->icp_rotation != other.icp_rotation) {
      return false;
    }
    if (this->icp_translation != other.icp_translation) {
      return false;
    }
    if (this->icp_structural_complexity != other.icp_structural_complexity) {
      return false;
    }
    if (this->icp_structural_distribution != other.icp_structural_distribution) {
      return false;
    }
    if (this->icp_correspondences != other.icp_correspondences) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    if (this->features != other.features) {
      return false;
    }
    if (this->local_map_size != other.local_map_size) {
      return false;
    }
    if (this->local_scan_map_size != other.local_scan_map_size) {
      return false;
    }
    if (this->local_key_frames != other.local_key_frames) {
      return false;
    }
    if (this->local_bundle_outliers != other.local_bundle_outliers) {
      return false;
    }
    if (this->local_bundle_constraints != other.local_bundle_constraints) {
      return false;
    }
    if (this->local_bundle_time != other.local_bundle_time) {
      return false;
    }
    if (this->key_frame_added != other.key_frame_added) {
      return false;
    }
    if (this->time_estimation != other.time_estimation) {
      return false;
    }
    if (this->time_particle_filtering != other.time_particle_filtering) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->interval != other.interval) {
      return false;
    }
    if (this->distance_travelled != other.distance_travelled) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->gravity_roll_error != other.gravity_roll_error) {
      return false;
    }
    if (this->gravity_pitch_error != other.gravity_pitch_error) {
      return false;
    }
    if (this->local_bundle_ids != other.local_bundle_ids) {
      return false;
    }
    if (this->local_bundle_models != other.local_bundle_models) {
      return false;
    }
    if (this->local_bundle_poses != other.local_bundle_poses) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    if (this->transform_filtered != other.transform_filtered) {
      return false;
    }
    if (this->transform_ground_truth != other.transform_ground_truth) {
      return false;
    }
    if (this->guess != other.guess) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->words_keys != other.words_keys) {
      return false;
    }
    if (this->words_values != other.words_values) {
      return false;
    }
    if (this->word_matches != other.word_matches) {
      return false;
    }
    if (this->word_inliers != other.word_inliers) {
      return false;
    }
    if (this->local_map_keys != other.local_map_keys) {
      return false;
    }
    if (this->local_map_values != other.local_map_values) {
      return false;
    }
    if (this->local_scan_map != other.local_scan_map) {
      return false;
    }
    if (this->ref_corners != other.ref_corners) {
      return false;
    }
    if (this->new_corners != other.new_corners) {
      return false;
    }
    if (this->corner_inliers != other.corner_inliers) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdomInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdomInfo_

// alias to use template instance with default allocator
using OdomInfo =
  rtabmap_msgs::msg::OdomInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_HPP_
