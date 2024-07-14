// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/get_nodes_in_radius__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodesInRadius_Request_k
{
public:
  explicit Init_GetNodesInRadius_Request_k(::rtabmap_msgs::srv::GetNodesInRadius_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::GetNodesInRadius_Request k(::rtabmap_msgs::srv::GetNodesInRadius_Request::_k_type arg)
  {
    msg_.k = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Request msg_;
};

class Init_GetNodesInRadius_Request_radius
{
public:
  explicit Init_GetNodesInRadius_Request_radius(::rtabmap_msgs::srv::GetNodesInRadius_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodesInRadius_Request_k radius(::rtabmap_msgs::srv::GetNodesInRadius_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_GetNodesInRadius_Request_k(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Request msg_;
};

class Init_GetNodesInRadius_Request_z
{
public:
  explicit Init_GetNodesInRadius_Request_z(::rtabmap_msgs::srv::GetNodesInRadius_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodesInRadius_Request_radius z(::rtabmap_msgs::srv::GetNodesInRadius_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GetNodesInRadius_Request_radius(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Request msg_;
};

class Init_GetNodesInRadius_Request_y
{
public:
  explicit Init_GetNodesInRadius_Request_y(::rtabmap_msgs::srv::GetNodesInRadius_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodesInRadius_Request_z y(::rtabmap_msgs::srv::GetNodesInRadius_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetNodesInRadius_Request_z(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Request msg_;
};

class Init_GetNodesInRadius_Request_x
{
public:
  explicit Init_GetNodesInRadius_Request_x(::rtabmap_msgs::srv::GetNodesInRadius_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodesInRadius_Request_y x(::rtabmap_msgs::srv::GetNodesInRadius_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetNodesInRadius_Request_y(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Request msg_;
};

class Init_GetNodesInRadius_Request_node_id
{
public:
  Init_GetNodesInRadius_Request_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNodesInRadius_Request_x node_id(::rtabmap_msgs::srv::GetNodesInRadius_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_GetNodesInRadius_Request_x(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetNodesInRadius_Request>()
{
  return rtabmap_msgs::srv::builder::Init_GetNodesInRadius_Request_node_id();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodesInRadius_Response_dists_sqr
{
public:
  explicit Init_GetNodesInRadius_Response_dists_sqr(::rtabmap_msgs::srv::GetNodesInRadius_Response & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::GetNodesInRadius_Response dists_sqr(::rtabmap_msgs::srv::GetNodesInRadius_Response::_dists_sqr_type arg)
  {
    msg_.dists_sqr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Response msg_;
};

class Init_GetNodesInRadius_Response_poses
{
public:
  explicit Init_GetNodesInRadius_Response_poses(::rtabmap_msgs::srv::GetNodesInRadius_Response & msg)
  : msg_(msg)
  {}
  Init_GetNodesInRadius_Response_dists_sqr poses(::rtabmap_msgs::srv::GetNodesInRadius_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_GetNodesInRadius_Response_dists_sqr(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Response msg_;
};

class Init_GetNodesInRadius_Response_ids
{
public:
  Init_GetNodesInRadius_Response_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNodesInRadius_Response_poses ids(::rtabmap_msgs::srv::GetNodesInRadius_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_GetNodesInRadius_Response_poses(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetNodesInRadius_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetNodesInRadius_Response>()
{
  return rtabmap_msgs::srv::builder::Init_GetNodesInRadius_Response_ids();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_NODES_IN_RADIUS__BUILDER_HPP_
