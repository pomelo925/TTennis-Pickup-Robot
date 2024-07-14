// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_Info_odom_cache
{
public:
  explicit Init_Info_odom_cache(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::Info odom_cache(::rtabmap_msgs::msg::Info::_odom_cache_type arg)
  {
    msg_.odom_cache = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_current_goal_id
{
public:
  explicit Init_Info_current_goal_id(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_odom_cache current_goal_id(::rtabmap_msgs::msg::Info::_current_goal_id_type arg)
  {
    msg_.current_goal_id = std::move(arg);
    return Init_Info_odom_cache(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_local_path
{
public:
  explicit Init_Info_local_path(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_current_goal_id local_path(::rtabmap_msgs::msg::Info::_local_path_type arg)
  {
    msg_.local_path = std::move(arg);
    return Init_Info_current_goal_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_stats_values
{
public:
  explicit Init_Info_stats_values(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_local_path stats_values(::rtabmap_msgs::msg::Info::_stats_values_type arg)
  {
    msg_.stats_values = std::move(arg);
    return Init_Info_local_path(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_stats_keys
{
public:
  explicit Init_Info_stats_keys(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_stats_values stats_keys(::rtabmap_msgs::msg::Info::_stats_keys_type arg)
  {
    msg_.stats_keys = std::move(arg);
    return Init_Info_stats_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_labels_values
{
public:
  explicit Init_Info_labels_values(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_stats_keys labels_values(::rtabmap_msgs::msg::Info::_labels_values_type arg)
  {
    msg_.labels_values = std::move(arg);
    return Init_Info_stats_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_labels_keys
{
public:
  explicit Init_Info_labels_keys(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_labels_values labels_keys(::rtabmap_msgs::msg::Info::_labels_keys_type arg)
  {
    msg_.labels_keys = std::move(arg);
    return Init_Info_labels_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_weights_values
{
public:
  explicit Init_Info_weights_values(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_labels_keys weights_values(::rtabmap_msgs::msg::Info::_weights_values_type arg)
  {
    msg_.weights_values = std::move(arg);
    return Init_Info_labels_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_weights_keys
{
public:
  explicit Init_Info_weights_keys(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_weights_values weights_keys(::rtabmap_msgs::msg::Info::_weights_keys_type arg)
  {
    msg_.weights_keys = std::move(arg);
    return Init_Info_weights_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_raw_likelihood_values
{
public:
  explicit Init_Info_raw_likelihood_values(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_weights_keys raw_likelihood_values(::rtabmap_msgs::msg::Info::_raw_likelihood_values_type arg)
  {
    msg_.raw_likelihood_values = std::move(arg);
    return Init_Info_weights_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_raw_likelihood_keys
{
public:
  explicit Init_Info_raw_likelihood_keys(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_raw_likelihood_values raw_likelihood_keys(::rtabmap_msgs::msg::Info::_raw_likelihood_keys_type arg)
  {
    msg_.raw_likelihood_keys = std::move(arg);
    return Init_Info_raw_likelihood_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_likelihood_values
{
public:
  explicit Init_Info_likelihood_values(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_raw_likelihood_keys likelihood_values(::rtabmap_msgs::msg::Info::_likelihood_values_type arg)
  {
    msg_.likelihood_values = std::move(arg);
    return Init_Info_raw_likelihood_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_likelihood_keys
{
public:
  explicit Init_Info_likelihood_keys(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_likelihood_values likelihood_keys(::rtabmap_msgs::msg::Info::_likelihood_keys_type arg)
  {
    msg_.likelihood_keys = std::move(arg);
    return Init_Info_likelihood_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_posterior_values
{
public:
  explicit Init_Info_posterior_values(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_likelihood_keys posterior_values(::rtabmap_msgs::msg::Info::_posterior_values_type arg)
  {
    msg_.posterior_values = std::move(arg);
    return Init_Info_likelihood_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_posterior_keys
{
public:
  explicit Init_Info_posterior_keys(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_posterior_values posterior_keys(::rtabmap_msgs::msg::Info::_posterior_keys_type arg)
  {
    msg_.posterior_keys = std::move(arg);
    return Init_Info_posterior_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_wm_state
{
public:
  explicit Init_Info_wm_state(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_posterior_keys wm_state(::rtabmap_msgs::msg::Info::_wm_state_type arg)
  {
    msg_.wm_state = std::move(arg);
    return Init_Info_posterior_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_loop_closure_transform
{
public:
  explicit Init_Info_loop_closure_transform(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_wm_state loop_closure_transform(::rtabmap_msgs::msg::Info::_loop_closure_transform_type arg)
  {
    msg_.loop_closure_transform = std::move(arg);
    return Init_Info_wm_state(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_landmark_id
{
public:
  explicit Init_Info_landmark_id(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_loop_closure_transform landmark_id(::rtabmap_msgs::msg::Info::_landmark_id_type arg)
  {
    msg_.landmark_id = std::move(arg);
    return Init_Info_loop_closure_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_proximity_detection_id
{
public:
  explicit Init_Info_proximity_detection_id(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_landmark_id proximity_detection_id(::rtabmap_msgs::msg::Info::_proximity_detection_id_type arg)
  {
    msg_.proximity_detection_id = std::move(arg);
    return Init_Info_landmark_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_loop_closure_id
{
public:
  explicit Init_Info_loop_closure_id(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_proximity_detection_id loop_closure_id(::rtabmap_msgs::msg::Info::_loop_closure_id_type arg)
  {
    msg_.loop_closure_id = std::move(arg);
    return Init_Info_proximity_detection_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_ref_id
{
public:
  explicit Init_Info_ref_id(::rtabmap_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_loop_closure_id ref_id(::rtabmap_msgs::msg::Info::_ref_id_type arg)
  {
    msg_.ref_id = std::move(arg);
    return Init_Info_loop_closure_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

class Init_Info_header
{
public:
  Init_Info_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Info_ref_id header(::rtabmap_msgs::msg::Info::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Info_ref_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::Info>()
{
  return rtabmap_msgs::msg::builder::Init_Info_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_
