// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__ResetPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__ResetPose_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetPose_Request_
{
  using Type = ResetPose_Request_<ContainerAllocator>;

  explicit ResetPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit ResetPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__ResetPose_Request
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__ResetPose_Request
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetPose_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetPose_Request_

// alias to use template instance with default allocator
using ResetPose_Request =
  rtabmap_msgs::srv::ResetPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__ResetPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__ResetPose_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetPose_Response_
{
  using Type = ResetPose_Response_<ContainerAllocator>;

  explicit ResetPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ResetPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__ResetPose_Response
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__ResetPose_Response
    std::shared_ptr<rtabmap_msgs::srv::ResetPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetPose_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetPose_Response_

// alias to use template instance with default allocator
using ResetPose_Response =
  rtabmap_msgs::srv::ResetPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct ResetPose
{
  using Request = rtabmap_msgs::srv::ResetPose_Request;
  using Response = rtabmap_msgs::srv::ResetPose_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_HPP_
