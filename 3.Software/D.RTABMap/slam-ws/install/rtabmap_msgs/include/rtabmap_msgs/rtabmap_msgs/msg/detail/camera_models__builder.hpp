// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/CameraModels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/camera_models__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraModels_models
{
public:
  Init_CameraModels_models()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_msgs::msg::CameraModels models(::rtabmap_msgs::msg::CameraModels::_models_type arg)
  {
    msg_.models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::CameraModels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::CameraModels>()
{
  return rtabmap_msgs::msg::builder::Init_CameraModels_models();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__BUILDER_HPP_
