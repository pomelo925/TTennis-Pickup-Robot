// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_HPP_

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
// Member 'event_log'
#include "nav2_msgs/msg/detail/behavior_tree_status_change__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__BehaviorTreeLog __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__BehaviorTreeLog __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorTreeLog_
{
  using Type = BehaviorTreeLog_<ContainerAllocator>;

  explicit BehaviorTreeLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    (void)_init;
  }

  explicit BehaviorTreeLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _event_log_type =
    std::vector<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>>;
  _event_log_type event_log;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__event_log(
    const std::vector<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::BehaviorTreeStatusChange_<ContainerAllocator>>> & _arg)
  {
    this->event_log = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__BehaviorTreeLog
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__BehaviorTreeLog
    std::shared_ptr<nav2_msgs::msg::BehaviorTreeLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorTreeLog_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->event_log != other.event_log) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorTreeLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorTreeLog_

// alias to use template instance with default allocator
using BehaviorTreeLog =
  nav2_msgs::msg::BehaviorTreeLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_HPP_
