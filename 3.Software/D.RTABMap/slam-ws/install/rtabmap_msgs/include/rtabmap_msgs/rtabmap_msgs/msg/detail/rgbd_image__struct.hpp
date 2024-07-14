// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__STRUCT_HPP_

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
// Member 'rgb_camera_info'
// Member 'depth_camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'rgb_compressed'
// Member 'depth_compressed'
#include "sensor_msgs/msg/detail/compressed_image__struct.hpp"
// Member 'key_points'
#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
// Member 'points'
#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__RGBDImage __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__RGBDImage __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGBDImage_
{
  using Type = RGBDImage_<ContainerAllocator>;

  explicit RGBDImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    rgb_camera_info(_init),
    depth_camera_info(_init),
    rgb(_init),
    depth(_init),
    rgb_compressed(_init),
    depth_compressed(_init),
    global_descriptor(_init)
  {
    (void)_init;
  }

  explicit RGBDImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rgb_camera_info(_alloc, _init),
    depth_camera_info(_alloc, _init),
    rgb(_alloc, _init),
    depth(_alloc, _init),
    rgb_compressed(_alloc, _init),
    depth_compressed(_alloc, _init),
    global_descriptor(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rgb_camera_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _rgb_camera_info_type rgb_camera_info;
  using _depth_camera_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _depth_camera_info_type depth_camera_info;
  using _rgb_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _rgb_type rgb;
  using _depth_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _depth_type depth;
  using _rgb_compressed_type =
    sensor_msgs::msg::CompressedImage_<ContainerAllocator>;
  _rgb_compressed_type rgb_compressed;
  using _depth_compressed_type =
    sensor_msgs::msg::CompressedImage_<ContainerAllocator>;
  _depth_compressed_type depth_compressed;
  using _key_points_type =
    std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>>;
  _key_points_type key_points;
  using _points_type =
    std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>>;
  _points_type points;
  using _descriptors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _descriptors_type descriptors;
  using _global_descriptor_type =
    rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>;
  _global_descriptor_type global_descriptor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rgb_camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->rgb_camera_info = _arg;
    return *this;
  }
  Type & set__depth_camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->depth_camera_info = _arg;
    return *this;
  }
  Type & set__rgb(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->rgb = _arg;
    return *this;
  }
  Type & set__depth(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__rgb_compressed(
    const sensor_msgs::msg::CompressedImage_<ContainerAllocator> & _arg)
  {
    this->rgb_compressed = _arg;
    return *this;
  }
  Type & set__depth_compressed(
    const sensor_msgs::msg::CompressedImage_<ContainerAllocator> & _arg)
  {
    this->depth_compressed = _arg;
    return *this;
  }
  Type & set__key_points(
    const std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->key_points = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__descriptors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->descriptors = _arg;
    return *this;
  }
  Type & set__global_descriptor(
    const rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator> & _arg)
  {
    this->global_descriptor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::RGBDImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::RGBDImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__RGBDImage
    std::shared_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__RGBDImage
    std::shared_ptr<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGBDImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rgb_camera_info != other.rgb_camera_info) {
      return false;
    }
    if (this->depth_camera_info != other.depth_camera_info) {
      return false;
    }
    if (this->rgb != other.rgb) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->rgb_compressed != other.rgb_compressed) {
      return false;
    }
    if (this->depth_compressed != other.depth_compressed) {
      return false;
    }
    if (this->key_points != other.key_points) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->descriptors != other.descriptors) {
      return false;
    }
    if (this->global_descriptor != other.global_descriptor) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGBDImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGBDImage_

// alias to use template instance with default allocator
using RGBDImage =
  rtabmap_msgs::msg::RGBDImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__STRUCT_HPP_
