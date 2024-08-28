// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__STRUCT_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'start_vel'
// Member 'cmd_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Request __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateTrajectory_Request_
{
  using Type = GenerateTrajectory_Request_<ContainerAllocator>;

  explicit GenerateTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_pose(_init),
    start_vel(_init),
    cmd_vel(_init)
  {
    (void)_init;
  }

  explicit GenerateTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_pose(_alloc, _init),
    start_vel(_alloc, _init),
    cmd_vel(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _start_pose_type start_pose;
  using _start_vel_type =
    nav_2d_msgs::msg::Twist2D_<ContainerAllocator>;
  _start_vel_type start_vel;
  using _cmd_vel_type =
    nav_2d_msgs::msg::Twist2D_<ContainerAllocator>;
  _cmd_vel_type cmd_vel;

  // setters for named parameter idiom
  Type & set__start_pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->start_pose = _arg;
    return *this;
  }
  Type & set__start_vel(
    const nav_2d_msgs::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->start_vel = _arg;
    return *this;
  }
  Type & set__cmd_vel(
    const nav_2d_msgs::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->cmd_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Request
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Request
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateTrajectory_Request_ & other) const
  {
    if (this->start_pose != other.start_pose) {
      return false;
    }
    if (this->start_vel != other.start_vel) {
      return false;
    }
    if (this->cmd_vel != other.cmd_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateTrajectory_Request_

// alias to use template instance with default allocator
using GenerateTrajectory_Request =
  dwb_msgs::srv::GenerateTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs


// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Response __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateTrajectory_Response_
{
  using Type = GenerateTrajectory_Response_<ContainerAllocator>;

  explicit GenerateTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : traj(_init)
  {
    (void)_init;
  }

  explicit GenerateTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : traj(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _traj_type =
    dwb_msgs::msg::Trajectory2D_<ContainerAllocator>;
  _traj_type traj;

  // setters for named parameter idiom
  Type & set__traj(
    const dwb_msgs::msg::Trajectory2D_<ContainerAllocator> & _arg)
  {
    this->traj = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Response
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GenerateTrajectory_Response
    std::shared_ptr<dwb_msgs::srv::GenerateTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateTrajectory_Response_ & other) const
  {
    if (this->traj != other.traj) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateTrajectory_Response_

// alias to use template instance with default allocator
using GenerateTrajectory_Response =
  dwb_msgs::srv::GenerateTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs

namespace dwb_msgs
{

namespace srv
{

struct GenerateTrajectory
{
  using Request = dwb_msgs::srv::GenerateTrajectory_Request;
  using Response = dwb_msgs::srv::GenerateTrajectory_Response;
};

}  // namespace srv

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__STRUCT_HPP_
