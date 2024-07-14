// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/LandmarkDetections.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/landmark_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_LandmarkDetections_landmarks
{
public:
  explicit Init_LandmarkDetections_landmarks(::rtabmap_msgs::msg::LandmarkDetections & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::LandmarkDetections landmarks(::rtabmap_msgs::msg::LandmarkDetections::_landmarks_type arg)
  {
    msg_.landmarks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetections msg_;
};

class Init_LandmarkDetections_header
{
public:
  Init_LandmarkDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandmarkDetections_landmarks header(::rtabmap_msgs::msg::LandmarkDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LandmarkDetections_landmarks(msg_);
  }

private:
  ::rtabmap_msgs::msg::LandmarkDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::LandmarkDetections>()
{
  return rtabmap_msgs::msg::builder::Init_LandmarkDetections_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__BUILDER_HPP_
