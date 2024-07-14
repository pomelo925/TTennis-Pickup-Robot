// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__STRUCT_HPP_

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
// Member 'rgbd_images'
#include "rtabmap_msgs/msg/detail/rgbd_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__RGBDImages __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__RGBDImages __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGBDImages_
{
  using Type = RGBDImages_<ContainerAllocator>;

  explicit RGBDImages_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RGBDImages_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rgbd_images_type =
    std::vector<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>>;
  _rgbd_images_type rgbd_images;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rgbd_images(
    const std::vector<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::RGBDImage_<ContainerAllocator>>> & _arg)
  {
    this->rgbd_images = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::RGBDImages_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::RGBDImages_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::RGBDImages_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::RGBDImages_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__RGBDImages
    std::shared_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__RGBDImages
    std::shared_ptr<rtabmap_msgs::msg::RGBDImages_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGBDImages_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rgbd_images != other.rgbd_images) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGBDImages_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGBDImages_

// alias to use template instance with default allocator
using RGBDImages =
  rtabmap_msgs::msg::RGBDImages_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__STRUCT_HPP_
