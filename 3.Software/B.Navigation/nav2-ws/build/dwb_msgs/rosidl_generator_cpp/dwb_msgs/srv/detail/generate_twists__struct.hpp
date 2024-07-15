// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__STRUCT_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GenerateTwists_Request __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GenerateTwists_Request __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateTwists_Request_
{
  using Type = GenerateTwists_Request_<ContainerAllocator>;

  explicit GenerateTwists_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_vel(_init)
  {
    (void)_init;
  }

  explicit GenerateTwists_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_vel(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_vel_type =
    nav_2d_msgs::msg::Twist2D_<ContainerAllocator>;
  _current_vel_type current_vel;

  // setters for named parameter idiom
  Type & set__current_vel(
    const nav_2d_msgs::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->current_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GenerateTwists_Request
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GenerateTwists_Request
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateTwists_Request_ & other) const
  {
    if (this->current_vel != other.current_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateTwists_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateTwists_Request_

// alias to use template instance with default allocator
using GenerateTwists_Request =
  dwb_msgs::srv::GenerateTwists_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs


// Include directives for member types
// Member 'twists'
// already included above
// #include "nav_2d_msgs/msg/detail/twist2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GenerateTwists_Response __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GenerateTwists_Response __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateTwists_Response_
{
  using Type = GenerateTwists_Response_<ContainerAllocator>;

  explicit GenerateTwists_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GenerateTwists_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _twists_type =
    std::vector<nav_2d_msgs::msg::Twist2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_2d_msgs::msg::Twist2D_<ContainerAllocator>>>;
  _twists_type twists;

  // setters for named parameter idiom
  Type & set__twists(
    const std::vector<nav_2d_msgs::msg::Twist2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_2d_msgs::msg::Twist2D_<ContainerAllocator>>> & _arg)
  {
    this->twists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GenerateTwists_Response
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GenerateTwists_Response
    std::shared_ptr<dwb_msgs::srv::GenerateTwists_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateTwists_Response_ & other) const
  {
    if (this->twists != other.twists) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateTwists_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateTwists_Response_

// alias to use template instance with default allocator
using GenerateTwists_Response =
  dwb_msgs::srv::GenerateTwists_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs

namespace dwb_msgs
{

namespace srv
{

struct GenerateTwists
{
  using Request = dwb_msgs::srv::GenerateTwists_Request;
  using Response = dwb_msgs::srv::GenerateTwists_Response;
};

}  // namespace srv

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__STRUCT_HPP_
