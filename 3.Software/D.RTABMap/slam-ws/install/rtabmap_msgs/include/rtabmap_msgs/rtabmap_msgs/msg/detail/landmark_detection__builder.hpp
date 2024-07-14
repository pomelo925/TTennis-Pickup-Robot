// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/LandmarkDetection.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/landmark_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_LandmarkDetection_pose
{
public:
  explicit Init_LandmarkDetection_pose(::rtabmap_msgs::msg::LandmarkDetection & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::LandmarkDetection pose(::rtabmap_msgs::msg::LandmarkDetection::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetection msg_;
};

class Init_LandmarkDetection_size
{
public:
  explicit Init_LandmarkDetection_size(::rtabmap_msgs::msg::LandmarkDetection & msg)
  : msg_(msg)
  {}
  Init_LandmarkDetection_pose size(::rtabmap_msgs::msg::LandmarkDetection::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_LandmarkDetection_pose(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetection msg_;
};

class Init_LandmarkDetection_id
{
public:
  explicit Init_LandmarkDetection_id(::rtabmap_msgs::msg::LandmarkDetection & msg)
  : msg_(msg)
  {}
  Init_LandmarkDetection_size id(::rtabmap_msgs::msg::LandmarkDetection::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LandmarkDetection_size(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetection msg_;
};

class Init_LandmarkDetection_landmark_frame_id
{
public:
  explicit Init_LandmarkDetection_landmark_frame_id(::rtabmap_msgs::msg::LandmarkDetection & msg)
  : msg_(msg)
  {}
  Init_LandmarkDetection_id landmark_frame_id(::rtabmap_msgs::msg::LandmarkDetection::_landmark_frame_id_type arg)
  {
    msg_.landmark_frame_id = std::move(arg);
    return Init_LandmarkDetection_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetection msg_;
};

class Init_LandmarkDetection_header
{
public:
  Init_LandmarkDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandmarkDetection_landmark_frame_id header(::rtabmap_msgs::msg::LandmarkDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LandmarkDetection_landmark_frame_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::LandmarkDetection>()
{
  return rtabmap_msgs::msg::builder::Init_LandmarkDetection_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTION__BUILDER_HPP_
