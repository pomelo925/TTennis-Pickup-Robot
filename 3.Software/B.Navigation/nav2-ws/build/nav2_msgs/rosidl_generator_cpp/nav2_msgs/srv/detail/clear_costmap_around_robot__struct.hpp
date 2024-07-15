// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearCostmapAroundRobot_Request_
{
  using Type = ClearCostmapAroundRobot_Request_<ContainerAllocator>;

  explicit ClearCostmapAroundRobot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_distance = 0.0f;
    }
  }

  explicit ClearCostmapAroundRobot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_distance = 0.0f;
    }
  }

  // field types and members
  using _reset_distance_type =
    float;
  _reset_distance_type reset_distance;

  // setters for named parameter idiom
  Type & set__reset_distance(
    const float & _arg)
  {
    this->reset_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Request
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Request
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearCostmapAroundRobot_Request_ & other) const
  {
    if (this->reset_distance != other.reset_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearCostmapAroundRobot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearCostmapAroundRobot_Request_

// alias to use template instance with default allocator
using ClearCostmapAroundRobot_Request =
  nav2_msgs::srv::ClearCostmapAroundRobot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


// Include directives for member types
// Member 'response'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearCostmapAroundRobot_Response_
{
  using Type = ClearCostmapAroundRobot_Response_<ContainerAllocator>;

  explicit ClearCostmapAroundRobot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit ClearCostmapAroundRobot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Response
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__ClearCostmapAroundRobot_Response
    std::shared_ptr<nav2_msgs::srv::ClearCostmapAroundRobot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearCostmapAroundRobot_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearCostmapAroundRobot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearCostmapAroundRobot_Response_

// alias to use template instance with default allocator
using ClearCostmapAroundRobot_Response =
  nav2_msgs::srv::ClearCostmapAroundRobot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct ClearCostmapAroundRobot
{
  using Request = nav2_msgs::srv::ClearCostmapAroundRobot_Request;
  using Response = nav2_msgs::srv::ClearCostmapAroundRobot_Response;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__STRUCT_HPP_
