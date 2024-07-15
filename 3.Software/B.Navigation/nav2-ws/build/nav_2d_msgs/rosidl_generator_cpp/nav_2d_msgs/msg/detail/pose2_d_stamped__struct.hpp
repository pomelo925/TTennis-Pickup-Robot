// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav_2d_msgs__msg__Pose2DStamped __attribute__((deprecated))
#else
# define DEPRECATED__nav_2d_msgs__msg__Pose2DStamped __declspec(deprecated)
#endif

namespace nav_2d_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose2DStamped_
{
  using Type = Pose2DStamped_<ContainerAllocator>;

  explicit Pose2DStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit Pose2DStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_2d_msgs__msg__Pose2DStamped
    std::shared_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_2d_msgs__msg__Pose2DStamped
    std::shared_ptr<nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose2DStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose2DStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose2DStamped_

// alias to use template instance with default allocator
using Pose2DStamped =
  nav_2d_msgs::msg::Pose2DStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav_2d_msgs

#endif  // NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_HPP_
