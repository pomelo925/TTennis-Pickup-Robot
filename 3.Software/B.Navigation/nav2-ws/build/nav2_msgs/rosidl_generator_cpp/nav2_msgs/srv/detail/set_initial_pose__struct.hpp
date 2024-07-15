// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/SetInitialPose.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__SetInitialPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__SetInitialPose_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetInitialPose_Request_
{
  using Type = SetInitialPose_Request_<ContainerAllocator>;

  explicit SetInitialPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit SetInitialPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__SetInitialPose_Request
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__SetInitialPose_Request
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetInitialPose_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetInitialPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetInitialPose_Request_

// alias to use template instance with default allocator
using SetInitialPose_Request =
  nav2_msgs::srv::SetInitialPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__SetInitialPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__SetInitialPose_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetInitialPose_Response_
{
  using Type = SetInitialPose_Response_<ContainerAllocator>;

  explicit SetInitialPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetInitialPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__SetInitialPose_Response
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__SetInitialPose_Response
    std::shared_ptr<nav2_msgs::srv::SetInitialPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetInitialPose_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetInitialPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetInitialPose_Response_

// alias to use template instance with default allocator
using SetInitialPose_Response =
  nav2_msgs::srv::SetInitialPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct SetInitialPose
{
  using Request = nav2_msgs::srv::SetInitialPose_Request;
  using Response = nav2_msgs::srv::SetInitialPose_Response;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__STRUCT_HPP_
