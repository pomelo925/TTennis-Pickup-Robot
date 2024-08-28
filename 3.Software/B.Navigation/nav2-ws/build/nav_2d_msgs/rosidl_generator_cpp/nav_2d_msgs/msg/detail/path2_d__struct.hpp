// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__PATH2_D__STRUCT_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__PATH2_D__STRUCT_HPP_

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
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav_2d_msgs__msg__Path2D __attribute__((deprecated))
#else
# define DEPRECATED__nav_2d_msgs__msg__Path2D __declspec(deprecated)
#endif

namespace nav_2d_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Path2D_
{
  using Type = Path2D_<ContainerAllocator>;

  explicit Path2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Path2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_2d_msgs::msg::Path2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_2d_msgs::msg::Path2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_2d_msgs::msg::Path2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_2d_msgs::msg::Path2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_2d_msgs__msg__Path2D
    std::shared_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_2d_msgs__msg__Path2D
    std::shared_ptr<nav_2d_msgs::msg::Path2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path2D_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path2D_

// alias to use template instance with default allocator
using Path2D =
  nav_2d_msgs::msg::Path2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav_2d_msgs

#endif  // NAV_2D_MSGS__MSG__DETAIL__PATH2_D__STRUCT_HPP_
