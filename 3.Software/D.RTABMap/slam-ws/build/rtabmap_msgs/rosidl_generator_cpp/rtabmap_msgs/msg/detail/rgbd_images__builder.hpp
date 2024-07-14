// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/rgbd_images__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_RGBDImages_rgbd_images
{
public:
  explicit Init_RGBDImages_rgbd_images(::rtabmap_msgs::msg::RGBDImages & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::RGBDImages rgbd_images(::rtabmap_msgs::msg::RGBDImages::_rgbd_images_type arg)
  {
    msg_.rgbd_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImages msg_;
};

class Init_RGBDImages_header
{
public:
  Init_RGBDImages_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBDImages_rgbd_images header(::rtabmap_msgs::msg::RGBDImages::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RGBDImages_rgbd_images(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImages msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::RGBDImages>()
{
  return rtabmap_msgs::msg::builder::Init_RGBDImages_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__BUILDER_HPP_
