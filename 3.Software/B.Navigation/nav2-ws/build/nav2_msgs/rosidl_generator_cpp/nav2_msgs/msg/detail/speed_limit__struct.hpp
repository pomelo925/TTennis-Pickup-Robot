// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__SpeedLimit __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__SpeedLimit __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimit_
{
  using Type = SpeedLimit_<ContainerAllocator>;

  explicit SpeedLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = false;
      this->speed_limit = 0.0;
    }
  }

  explicit SpeedLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = false;
      this->speed_limit = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _percentage_type =
    bool;
  _percentage_type percentage;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__percentage(
    const bool & _arg)
  {
    this->percentage = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::SpeedLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::SpeedLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::SpeedLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::SpeedLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__SpeedLimit
    std::shared_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__SpeedLimit
    std::shared_ptr<nav2_msgs::msg::SpeedLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimit_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->percentage != other.percentage) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimit_

// alias to use template instance with default allocator
using SpeedLimit =
  nav2_msgs::msg::SpeedLimit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_
