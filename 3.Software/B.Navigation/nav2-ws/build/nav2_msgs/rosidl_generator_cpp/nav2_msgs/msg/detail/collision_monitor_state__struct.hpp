// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__CollisionMonitorState __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__CollisionMonitorState __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionMonitorState_
{
  using Type = CollisionMonitorState_<ContainerAllocator>;

  explicit CollisionMonitorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_type = 0;
      this->polygon_name = "";
    }
  }

  explicit CollisionMonitorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_type = 0;
      this->polygon_name = "";
    }
  }

  // field types and members
  using _action_type_type =
    uint8_t;
  _action_type_type action_type;
  using _polygon_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _polygon_name_type polygon_name;

  // setters for named parameter idiom
  Type & set__action_type(
    const uint8_t & _arg)
  {
    this->action_type = _arg;
    return *this;
  }
  Type & set__polygon_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->polygon_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DO_NOTHING =
    0u;
  static constexpr uint8_t STOP =
    1u;
  static constexpr uint8_t SLOWDOWN =
    2u;
  static constexpr uint8_t APPROACH =
    3u;

  // pointer types
  using RawPtr =
    nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__CollisionMonitorState
    std::shared_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__CollisionMonitorState
    std::shared_ptr<nav2_msgs::msg::CollisionMonitorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionMonitorState_ & other) const
  {
    if (this->action_type != other.action_type) {
      return false;
    }
    if (this->polygon_name != other.polygon_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionMonitorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionMonitorState_

// alias to use template instance with default allocator
using CollisionMonitorState =
  nav2_msgs::msg::CollisionMonitorState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionMonitorState_<ContainerAllocator>::DO_NOTHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionMonitorState_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionMonitorState_<ContainerAllocator>::SLOWDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionMonitorState_<ContainerAllocator>::APPROACH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__STRUCT_HPP_
