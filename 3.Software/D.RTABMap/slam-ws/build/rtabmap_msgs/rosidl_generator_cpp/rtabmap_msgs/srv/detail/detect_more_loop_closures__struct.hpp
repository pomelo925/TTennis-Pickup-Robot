// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectMoreLoopClosures_Request_
{
  using Type = DetectMoreLoopClosures_Request_<ContainerAllocator>;

  explicit DetectMoreLoopClosures_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster_radius_max = 0.0f;
      this->cluster_radius_min = 0.0f;
      this->cluster_angle = 0.0f;
      this->iterations = 0l;
      this->intra_only = false;
      this->inter_only = false;
    }
  }

  explicit DetectMoreLoopClosures_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster_radius_max = 0.0f;
      this->cluster_radius_min = 0.0f;
      this->cluster_angle = 0.0f;
      this->iterations = 0l;
      this->intra_only = false;
      this->inter_only = false;
    }
  }

  // field types and members
  using _cluster_radius_max_type =
    float;
  _cluster_radius_max_type cluster_radius_max;
  using _cluster_radius_min_type =
    float;
  _cluster_radius_min_type cluster_radius_min;
  using _cluster_angle_type =
    float;
  _cluster_angle_type cluster_angle;
  using _iterations_type =
    int32_t;
  _iterations_type iterations;
  using _intra_only_type =
    bool;
  _intra_only_type intra_only;
  using _inter_only_type =
    bool;
  _inter_only_type inter_only;

  // setters for named parameter idiom
  Type & set__cluster_radius_max(
    const float & _arg)
  {
    this->cluster_radius_max = _arg;
    return *this;
  }
  Type & set__cluster_radius_min(
    const float & _arg)
  {
    this->cluster_radius_min = _arg;
    return *this;
  }
  Type & set__cluster_angle(
    const float & _arg)
  {
    this->cluster_angle = _arg;
    return *this;
  }
  Type & set__iterations(
    const int32_t & _arg)
  {
    this->iterations = _arg;
    return *this;
  }
  Type & set__intra_only(
    const bool & _arg)
  {
    this->intra_only = _arg;
    return *this;
  }
  Type & set__inter_only(
    const bool & _arg)
  {
    this->inter_only = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Request
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Request
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectMoreLoopClosures_Request_ & other) const
  {
    if (this->cluster_radius_max != other.cluster_radius_max) {
      return false;
    }
    if (this->cluster_radius_min != other.cluster_radius_min) {
      return false;
    }
    if (this->cluster_angle != other.cluster_angle) {
      return false;
    }
    if (this->iterations != other.iterations) {
      return false;
    }
    if (this->intra_only != other.intra_only) {
      return false;
    }
    if (this->inter_only != other.inter_only) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectMoreLoopClosures_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectMoreLoopClosures_Request_

// alias to use template instance with default allocator
using DetectMoreLoopClosures_Request =
  rtabmap_msgs::srv::DetectMoreLoopClosures_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectMoreLoopClosures_Response_
{
  using Type = DetectMoreLoopClosures_Response_<ContainerAllocator>;

  explicit DetectMoreLoopClosures_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = 0l;
    }
  }

  explicit DetectMoreLoopClosures_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = 0l;
    }
  }

  // field types and members
  using _detected_type =
    int32_t;
  _detected_type detected;

  // setters for named parameter idiom
  Type & set__detected(
    const int32_t & _arg)
  {
    this->detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Response
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__DetectMoreLoopClosures_Response
    std::shared_ptr<rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectMoreLoopClosures_Response_ & other) const
  {
    if (this->detected != other.detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectMoreLoopClosures_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectMoreLoopClosures_Response_

// alias to use template instance with default allocator
using DetectMoreLoopClosures_Response =
  rtabmap_msgs::srv::DetectMoreLoopClosures_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct DetectMoreLoopClosures
{
  using Request = rtabmap_msgs::srv::DetectMoreLoopClosures_Request;
  using Response = rtabmap_msgs::srv::DetectMoreLoopClosures_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__STRUCT_HPP_
