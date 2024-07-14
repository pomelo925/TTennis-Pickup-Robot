// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodesInRadius_Request_
{
  using Type = GetNodesInRadius_Request_<ContainerAllocator>;

  explicit GetNodesInRadius_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->radius = 0.0f;
      this->k = 0l;
    }
  }

  explicit GetNodesInRadius_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->radius = 0.0f;
      this->k = 0l;
    }
  }

  // field types and members
  using _node_id_type =
    int32_t;
  _node_id_type node_id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _radius_type =
    float;
  _radius_type radius;
  using _k_type =
    int32_t;
  _k_type k;

  // setters for named parameter idiom
  Type & set__node_id(
    const int32_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
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
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__k(
    const int32_t & _arg)
  {
    this->k = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Request
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Request
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodesInRadius_Request_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodesInRadius_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodesInRadius_Request_

// alias to use template instance with default allocator
using GetNodesInRadius_Request =
  rtabmap_msgs::srv::GetNodesInRadius_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodesInRadius_Response_
{
  using Type = GetNodesInRadius_Response_<ContainerAllocator>;

  explicit GetNodesInRadius_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetNodesInRadius_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ids_type ids;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;
  using _dists_sqr_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _dists_sqr_type dists_sqr;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__dists_sqr(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->dists_sqr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Response
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GetNodesInRadius_Response
    std::shared_ptr<rtabmap_msgs::srv::GetNodesInRadius_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodesInRadius_Response_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->dists_sqr != other.dists_sqr) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodesInRadius_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodesInRadius_Response_

// alias to use template instance with default allocator
using GetNodesInRadius_Response =
  rtabmap_msgs::srv::GetNodesInRadius_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct GetNodesInRadius
{
  using Request = rtabmap_msgs::srv::GetNodesInRadius_Request;
  using Response = rtabmap_msgs::srv::GetNodesInRadius_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__STRUCT_HPP_
