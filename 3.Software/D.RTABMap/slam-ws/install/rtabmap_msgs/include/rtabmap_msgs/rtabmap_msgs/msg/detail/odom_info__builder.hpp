// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/odom_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_OdomInfo_corner_inliers
{
public:
  explicit Init_OdomInfo_corner_inliers(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::OdomInfo corner_inliers(::rtabmap_msgs::msg::OdomInfo::_corner_inliers_type arg)
  {
    msg_.corner_inliers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_new_corners
{
public:
  explicit Init_OdomInfo_new_corners(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_corner_inliers new_corners(::rtabmap_msgs::msg::OdomInfo::_new_corners_type arg)
  {
    msg_.new_corners = std::move(arg);
    return Init_OdomInfo_corner_inliers(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_ref_corners
{
public:
  explicit Init_OdomInfo_ref_corners(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_new_corners ref_corners(::rtabmap_msgs::msg::OdomInfo::_ref_corners_type arg)
  {
    msg_.ref_corners = std::move(arg);
    return Init_OdomInfo_new_corners(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_scan_map
{
public:
  explicit Init_OdomInfo_local_scan_map(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_ref_corners local_scan_map(::rtabmap_msgs::msg::OdomInfo::_local_scan_map_type arg)
  {
    msg_.local_scan_map = std::move(arg);
    return Init_OdomInfo_ref_corners(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_map_values
{
public:
  explicit Init_OdomInfo_local_map_values(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_scan_map local_map_values(::rtabmap_msgs::msg::OdomInfo::_local_map_values_type arg)
  {
    msg_.local_map_values = std::move(arg);
    return Init_OdomInfo_local_scan_map(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_map_keys
{
public:
  explicit Init_OdomInfo_local_map_keys(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_map_values local_map_keys(::rtabmap_msgs::msg::OdomInfo::_local_map_keys_type arg)
  {
    msg_.local_map_keys = std::move(arg);
    return Init_OdomInfo_local_map_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_word_inliers
{
public:
  explicit Init_OdomInfo_word_inliers(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_map_keys word_inliers(::rtabmap_msgs::msg::OdomInfo::_word_inliers_type arg)
  {
    msg_.word_inliers = std::move(arg);
    return Init_OdomInfo_local_map_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_word_matches
{
public:
  explicit Init_OdomInfo_word_matches(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_word_inliers word_matches(::rtabmap_msgs::msg::OdomInfo::_word_matches_type arg)
  {
    msg_.word_matches = std::move(arg);
    return Init_OdomInfo_word_inliers(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_words_values
{
public:
  explicit Init_OdomInfo_words_values(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_word_matches words_values(::rtabmap_msgs::msg::OdomInfo::_words_values_type arg)
  {
    msg_.words_values = std::move(arg);
    return Init_OdomInfo_word_matches(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_words_keys
{
public:
  explicit Init_OdomInfo_words_keys(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_words_values words_keys(::rtabmap_msgs::msg::OdomInfo::_words_keys_type arg)
  {
    msg_.words_keys = std::move(arg);
    return Init_OdomInfo_words_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_type
{
public:
  explicit Init_OdomInfo_type(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_words_keys type(::rtabmap_msgs::msg::OdomInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_OdomInfo_words_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_guess
{
public:
  explicit Init_OdomInfo_guess(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_type guess(::rtabmap_msgs::msg::OdomInfo::_guess_type arg)
  {
    msg_.guess = std::move(arg);
    return Init_OdomInfo_type(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_transform_ground_truth
{
public:
  explicit Init_OdomInfo_transform_ground_truth(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_guess transform_ground_truth(::rtabmap_msgs::msg::OdomInfo::_transform_ground_truth_type arg)
  {
    msg_.transform_ground_truth = std::move(arg);
    return Init_OdomInfo_guess(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_transform_filtered
{
public:
  explicit Init_OdomInfo_transform_filtered(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_transform_ground_truth transform_filtered(::rtabmap_msgs::msg::OdomInfo::_transform_filtered_type arg)
  {
    msg_.transform_filtered = std::move(arg);
    return Init_OdomInfo_transform_ground_truth(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_transform
{
public:
  explicit Init_OdomInfo_transform(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_transform_filtered transform(::rtabmap_msgs::msg::OdomInfo::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_OdomInfo_transform_filtered(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_bundle_poses
{
public:
  explicit Init_OdomInfo_local_bundle_poses(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_transform local_bundle_poses(::rtabmap_msgs::msg::OdomInfo::_local_bundle_poses_type arg)
  {
    msg_.local_bundle_poses = std::move(arg);
    return Init_OdomInfo_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_bundle_models
{
public:
  explicit Init_OdomInfo_local_bundle_models(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_bundle_poses local_bundle_models(::rtabmap_msgs::msg::OdomInfo::_local_bundle_models_type arg)
  {
    msg_.local_bundle_models = std::move(arg);
    return Init_OdomInfo_local_bundle_poses(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_bundle_ids
{
public:
  explicit Init_OdomInfo_local_bundle_ids(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_bundle_models local_bundle_ids(::rtabmap_msgs::msg::OdomInfo::_local_bundle_ids_type arg)
  {
    msg_.local_bundle_ids = std::move(arg);
    return Init_OdomInfo_local_bundle_models(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_gravity_pitch_error
{
public:
  explicit Init_OdomInfo_gravity_pitch_error(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_bundle_ids gravity_pitch_error(::rtabmap_msgs::msg::OdomInfo::_gravity_pitch_error_type arg)
  {
    msg_.gravity_pitch_error = std::move(arg);
    return Init_OdomInfo_local_bundle_ids(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_gravity_roll_error
{
public:
  explicit Init_OdomInfo_gravity_roll_error(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_gravity_pitch_error gravity_roll_error(::rtabmap_msgs::msg::OdomInfo::_gravity_roll_error_type arg)
  {
    msg_.gravity_roll_error = std::move(arg);
    return Init_OdomInfo_gravity_pitch_error(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_memory_usage
{
public:
  explicit Init_OdomInfo_memory_usage(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_gravity_roll_error memory_usage(::rtabmap_msgs::msg::OdomInfo::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_OdomInfo_gravity_roll_error(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_distance_travelled
{
public:
  explicit Init_OdomInfo_distance_travelled(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_memory_usage distance_travelled(::rtabmap_msgs::msg::OdomInfo::_distance_travelled_type arg)
  {
    msg_.distance_travelled = std::move(arg);
    return Init_OdomInfo_memory_usage(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_interval
{
public:
  explicit Init_OdomInfo_interval(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_distance_travelled interval(::rtabmap_msgs::msg::OdomInfo::_interval_type arg)
  {
    msg_.interval = std::move(arg);
    return Init_OdomInfo_distance_travelled(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_stamp
{
public:
  explicit Init_OdomInfo_stamp(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_interval stamp(::rtabmap_msgs::msg::OdomInfo::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_OdomInfo_interval(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_time_particle_filtering
{
public:
  explicit Init_OdomInfo_time_particle_filtering(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_stamp time_particle_filtering(::rtabmap_msgs::msg::OdomInfo::_time_particle_filtering_type arg)
  {
    msg_.time_particle_filtering = std::move(arg);
    return Init_OdomInfo_stamp(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_time_estimation
{
public:
  explicit Init_OdomInfo_time_estimation(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_time_particle_filtering time_estimation(::rtabmap_msgs::msg::OdomInfo::_time_estimation_type arg)
  {
    msg_.time_estimation = std::move(arg);
    return Init_OdomInfo_time_particle_filtering(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_key_frame_added
{
public:
  explicit Init_OdomInfo_key_frame_added(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_time_estimation key_frame_added(::rtabmap_msgs::msg::OdomInfo::_key_frame_added_type arg)
  {
    msg_.key_frame_added = std::move(arg);
    return Init_OdomInfo_time_estimation(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_bundle_time
{
public:
  explicit Init_OdomInfo_local_bundle_time(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_key_frame_added local_bundle_time(::rtabmap_msgs::msg::OdomInfo::_local_bundle_time_type arg)
  {
    msg_.local_bundle_time = std::move(arg);
    return Init_OdomInfo_key_frame_added(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_bundle_constraints
{
public:
  explicit Init_OdomInfo_local_bundle_constraints(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_bundle_time local_bundle_constraints(::rtabmap_msgs::msg::OdomInfo::_local_bundle_constraints_type arg)
  {
    msg_.local_bundle_constraints = std::move(arg);
    return Init_OdomInfo_local_bundle_time(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_bundle_outliers
{
public:
  explicit Init_OdomInfo_local_bundle_outliers(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_bundle_constraints local_bundle_outliers(::rtabmap_msgs::msg::OdomInfo::_local_bundle_outliers_type arg)
  {
    msg_.local_bundle_outliers = std::move(arg);
    return Init_OdomInfo_local_bundle_constraints(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_key_frames
{
public:
  explicit Init_OdomInfo_local_key_frames(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_bundle_outliers local_key_frames(::rtabmap_msgs::msg::OdomInfo::_local_key_frames_type arg)
  {
    msg_.local_key_frames = std::move(arg);
    return Init_OdomInfo_local_bundle_outliers(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_scan_map_size
{
public:
  explicit Init_OdomInfo_local_scan_map_size(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_key_frames local_scan_map_size(::rtabmap_msgs::msg::OdomInfo::_local_scan_map_size_type arg)
  {
    msg_.local_scan_map_size = std::move(arg);
    return Init_OdomInfo_local_key_frames(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_local_map_size
{
public:
  explicit Init_OdomInfo_local_map_size(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_scan_map_size local_map_size(::rtabmap_msgs::msg::OdomInfo::_local_map_size_type arg)
  {
    msg_.local_map_size = std::move(arg);
    return Init_OdomInfo_local_scan_map_size(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_features
{
public:
  explicit Init_OdomInfo_features(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_local_map_size features(::rtabmap_msgs::msg::OdomInfo::_features_type arg)
  {
    msg_.features = std::move(arg);
    return Init_OdomInfo_local_map_size(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_covariance
{
public:
  explicit Init_OdomInfo_covariance(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_features covariance(::rtabmap_msgs::msg::OdomInfo::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return Init_OdomInfo_features(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_icp_correspondences
{
public:
  explicit Init_OdomInfo_icp_correspondences(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_covariance icp_correspondences(::rtabmap_msgs::msg::OdomInfo::_icp_correspondences_type arg)
  {
    msg_.icp_correspondences = std::move(arg);
    return Init_OdomInfo_covariance(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_icp_structural_distribution
{
public:
  explicit Init_OdomInfo_icp_structural_distribution(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_icp_correspondences icp_structural_distribution(::rtabmap_msgs::msg::OdomInfo::_icp_structural_distribution_type arg)
  {
    msg_.icp_structural_distribution = std::move(arg);
    return Init_OdomInfo_icp_correspondences(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_icp_structural_complexity
{
public:
  explicit Init_OdomInfo_icp_structural_complexity(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_icp_structural_distribution icp_structural_complexity(::rtabmap_msgs::msg::OdomInfo::_icp_structural_complexity_type arg)
  {
    msg_.icp_structural_complexity = std::move(arg);
    return Init_OdomInfo_icp_structural_distribution(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_icp_translation
{
public:
  explicit Init_OdomInfo_icp_translation(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_icp_structural_complexity icp_translation(::rtabmap_msgs::msg::OdomInfo::_icp_translation_type arg)
  {
    msg_.icp_translation = std::move(arg);
    return Init_OdomInfo_icp_structural_complexity(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_icp_rotation
{
public:
  explicit Init_OdomInfo_icp_rotation(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_icp_translation icp_rotation(::rtabmap_msgs::msg::OdomInfo::_icp_rotation_type arg)
  {
    msg_.icp_rotation = std::move(arg);
    return Init_OdomInfo_icp_translation(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_icp_inliers_ratio
{
public:
  explicit Init_OdomInfo_icp_inliers_ratio(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_icp_rotation icp_inliers_ratio(::rtabmap_msgs::msg::OdomInfo::_icp_inliers_ratio_type arg)
  {
    msg_.icp_inliers_ratio = std::move(arg);
    return Init_OdomInfo_icp_rotation(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_inliers
{
public:
  explicit Init_OdomInfo_inliers(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_icp_inliers_ratio inliers(::rtabmap_msgs::msg::OdomInfo::_inliers_type arg)
  {
    msg_.inliers = std::move(arg);
    return Init_OdomInfo_icp_inliers_ratio(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_matches
{
public:
  explicit Init_OdomInfo_matches(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_inliers matches(::rtabmap_msgs::msg::OdomInfo::_matches_type arg)
  {
    msg_.matches = std::move(arg);
    return Init_OdomInfo_inliers(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_lost
{
public:
  explicit Init_OdomInfo_lost(::rtabmap_msgs::msg::OdomInfo & msg)
  : msg_(msg)
  {}
  Init_OdomInfo_matches lost(::rtabmap_msgs::msg::OdomInfo::_lost_type arg)
  {
    msg_.lost = std::move(arg);
    return Init_OdomInfo_matches(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

class Init_OdomInfo_header
{
public:
  Init_OdomInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OdomInfo_lost header(::rtabmap_msgs::msg::OdomInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OdomInfo_lost(msg_);
  }

private:
  ::rtabmap_msgs::msg::OdomInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::OdomInfo>()
{
  return rtabmap_msgs::msg::builder::Init_OdomInfo_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__BUILDER_HPP_
