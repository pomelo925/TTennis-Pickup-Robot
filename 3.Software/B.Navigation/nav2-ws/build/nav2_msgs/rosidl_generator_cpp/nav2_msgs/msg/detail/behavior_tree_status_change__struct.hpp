// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__BehaviorTreeStatusChange __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__BehaviorTreeStatusChange __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorTreeStatusChange_
{
  using Type = BehaviorTreeStatusChange_<ContainerAllocator>;

  explicit BehaviorTreeStatusChange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->previous_status = "";
      this->current_status = "";
    }
  }

  explicit BehaviorTreeStatusChange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    node_name(_alloc),
    previous_status(_alloc),
    current_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->previous_status = "";
      this->current_status = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _previous_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _previous_status_type previous_status;
  using _current_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_status_type current_status;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__previous_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->previous_status = _arg;
    return *this;
  }
  Type & set__current_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__BehaviorTreeStatusChange
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__BehaviorTreeStatusChange
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorTreeStatusChange_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->previous_status != other.previous_status) {
      return false;
    }
    if (this->current_status != other.current_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorTreeStatusChange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorTreeStatusChange_

// alias to use template instance with default allocator
using BehaviorTreeStatusChange =
  nav2_msgs::msg::BehaviorTreeStatusChange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_HPP_
