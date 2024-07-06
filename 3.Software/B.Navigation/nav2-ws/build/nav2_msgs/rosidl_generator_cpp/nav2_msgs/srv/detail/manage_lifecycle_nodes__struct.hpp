// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManageLifecycleNodes_Request_
{
  using Type = ManageLifecycleNodes_Request_<ContainerAllocator>;

  explicit ManageLifecycleNodes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit ManageLifecycleNodes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STARTUP =
    0u;
  static constexpr uint8_t PAUSE =
    1u;
  static constexpr uint8_t RESUME =
    2u;
  static constexpr uint8_t RESET =
    3u;
  static constexpr uint8_t SHUTDOWN =
    4u;

  // pointer types
  using RawPtr =
    nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Request
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Request
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManageLifecycleNodes_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManageLifecycleNodes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManageLifecycleNodes_Request_

// alias to use template instance with default allocator
using ManageLifecycleNodes_Request =
  nav2_msgs::srv::ManageLifecycleNodes_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManageLifecycleNodes_Request_<ContainerAllocator>::STARTUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManageLifecycleNodes_Request_<ContainerAllocator>::PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManageLifecycleNodes_Request_<ContainerAllocator>::RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManageLifecycleNodes_Request_<ContainerAllocator>::RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManageLifecycleNodes_Request_<ContainerAllocator>::SHUTDOWN;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace nav2_msgs


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManageLifecycleNodes_Response_
{
  using Type = ManageLifecycleNodes_Response_<ContainerAllocator>;

  explicit ManageLifecycleNodes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ManageLifecycleNodes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Response
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__ManageLifecycleNodes_Response
    std::shared_ptr<nav2_msgs::srv::ManageLifecycleNodes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManageLifecycleNodes_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManageLifecycleNodes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManageLifecycleNodes_Response_

// alias to use template instance with default allocator
using ManageLifecycleNodes_Response =
  nav2_msgs::srv::ManageLifecycleNodes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct ManageLifecycleNodes
{
  using Request = nav2_msgs::srv::ManageLifecycleNodes_Request;
  using Response = nav2_msgs::srv::ManageLifecycleNodes_Response;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_HPP_
