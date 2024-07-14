// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GetPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GetPlan_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Request_
{
  using Type = GetPlan_Request_<ContainerAllocator>;

  explicit GetPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_node = 0l;
      this->tolerance = 0.0f;
    }
  }

  explicit GetPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_node = 0l;
      this->tolerance = 0.0f;
    }
  }

  // field types and members
  using _goal_node_type =
    int32_t;
  _goal_node_type goal_node;
  using _goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _tolerance_type =
    float;
  _tolerance_type tolerance;

  // setters for named parameter idiom
  Type & set__goal_node(
    const int32_t & _arg)
  {
    this->goal_node = _arg;
    return *this;
  }
  Type & set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__tolerance(
    const float & _arg)
  {
    this->tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GetPlan_Request
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GetPlan_Request
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Request_ & other) const
  {
    if (this->goal_node != other.goal_node) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->tolerance != other.tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Request_

// alias to use template instance with default allocator
using GetPlan_Request =
  rtabmap_msgs::srv::GetPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


// Include directives for member types
// Member 'plan'
#include "rtabmap_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GetPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GetPlan_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Response_
{
  using Type = GetPlan_Response_<ContainerAllocator>;

  explicit GetPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_init)
  {
    (void)_init;
  }

  explicit GetPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _plan_type =
    rtabmap_msgs::msg::Path_<ContainerAllocator>;
  _plan_type plan;

  // setters for named parameter idiom
  Type & set__plan(
    const rtabmap_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->plan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GetPlan_Response
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GetPlan_Response
    std::shared_ptr<rtabmap_msgs::srv::GetPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Response_ & other) const
  {
    if (this->plan != other.plan) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Response_

// alias to use template instance with default allocator
using GetPlan_Response =
  rtabmap_msgs::srv::GetPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct GetPlan
{
  using Request = rtabmap_msgs::srv::GetPlan_Request;
  using Response = rtabmap_msgs::srv::GetPlan_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_HPP_
