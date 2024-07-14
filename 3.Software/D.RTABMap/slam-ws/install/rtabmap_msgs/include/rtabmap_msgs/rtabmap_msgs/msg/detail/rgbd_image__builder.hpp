// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/rgbd_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_RGBDImage_global_descriptor
{
public:
  explicit Init_RGBDImage_global_descriptor(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::RGBDImage global_descriptor(::rtabmap_msgs::msg::RGBDImage::_global_descriptor_type arg)
  {
    msg_.global_descriptor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_descriptors
{
public:
  explicit Init_RGBDImage_descriptors(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_global_descriptor descriptors(::rtabmap_msgs::msg::RGBDImage::_descriptors_type arg)
  {
    msg_.descriptors = std::move(arg);
    return Init_RGBDImage_global_descriptor(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_points
{
public:
  explicit Init_RGBDImage_points(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_descriptors points(::rtabmap_msgs::msg::RGBDImage::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_RGBDImage_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_key_points
{
public:
  explicit Init_RGBDImage_key_points(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_points key_points(::rtabmap_msgs::msg::RGBDImage::_key_points_type arg)
  {
    msg_.key_points = std::move(arg);
    return Init_RGBDImage_points(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_depth_compressed
{
public:
  explicit Init_RGBDImage_depth_compressed(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_key_points depth_compressed(::rtabmap_msgs::msg::RGBDImage::_depth_compressed_type arg)
  {
    msg_.depth_compressed = std::move(arg);
    return Init_RGBDImage_key_points(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_rgb_compressed
{
public:
  explicit Init_RGBDImage_rgb_compressed(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_depth_compressed rgb_compressed(::rtabmap_msgs::msg::RGBDImage::_rgb_compressed_type arg)
  {
    msg_.rgb_compressed = std::move(arg);
    return Init_RGBDImage_depth_compressed(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_depth
{
public:
  explicit Init_RGBDImage_depth(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_rgb_compressed depth(::rtabmap_msgs::msg::RGBDImage::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_RGBDImage_rgb_compressed(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_rgb
{
public:
  explicit Init_RGBDImage_rgb(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_depth rgb(::rtabmap_msgs::msg::RGBDImage::_rgb_type arg)
  {
    msg_.rgb = std::move(arg);
    return Init_RGBDImage_depth(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_depth_camera_info
{
public:
  explicit Init_RGBDImage_depth_camera_info(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_rgb depth_camera_info(::rtabmap_msgs::msg::RGBDImage::_depth_camera_info_type arg)
  {
    msg_.depth_camera_info = std::move(arg);
    return Init_RGBDImage_rgb(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_rgb_camera_info
{
public:
  explicit Init_RGBDImage_rgb_camera_info(::rtabmap_msgs::msg::RGBDImage & msg)
  : msg_(msg)
  {}
  Init_RGBDImage_depth_camera_info rgb_camera_info(::rtabmap_msgs::msg::RGBDImage::_rgb_camera_info_type arg)
  {
    msg_.rgb_camera_info = std::move(arg);
    return Init_RGBDImage_depth_camera_info(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

class Init_RGBDImage_header
{
public:
  Init_RGBDImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBDImage_rgb_camera_info header(::rtabmap_msgs::msg::RGBDImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RGBDImage_rgb_camera_info(msg_);
  }

private:
  ::rtabmap_msgs::msg::RGBDImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::RGBDImage>()
{
  return rtabmap_msgs::msg::builder::Init_RGBDImage_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__BUILDER_HPP_
