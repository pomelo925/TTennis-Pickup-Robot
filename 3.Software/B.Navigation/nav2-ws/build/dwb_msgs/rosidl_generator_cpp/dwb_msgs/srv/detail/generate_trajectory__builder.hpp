// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/generate_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTrajectory_Request_cmd_vel
{
public:
  explicit Init_GenerateTrajectory_Request_cmd_vel(::dwb_msgs::srv::GenerateTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::GenerateTrajectory_Request cmd_vel(::dwb_msgs::srv::GenerateTrajectory_Request::_cmd_vel_type arg)
  {
    msg_.cmd_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTrajectory_Request msg_;
};

class Init_GenerateTrajectory_Request_start_vel
{
public:
  explicit Init_GenerateTrajectory_Request_start_vel(::dwb_msgs::srv::GenerateTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateTrajectory_Request_cmd_vel start_vel(::dwb_msgs::srv::GenerateTrajectory_Request::_start_vel_type arg)
  {
    msg_.start_vel = std::move(arg);
    return Init_GenerateTrajectory_Request_cmd_vel(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTrajectory_Request msg_;
};

class Init_GenerateTrajectory_Request_start_pose
{
public:
  Init_GenerateTrajectory_Request_start_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateTrajectory_Request_start_vel start_pose(::dwb_msgs::srv::GenerateTrajectory_Request::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_GenerateTrajectory_Request_start_vel(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return dwb_msgs::srv::builder::Init_GenerateTrajectory_Request_start_pose();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTrajectory_Response_traj
{
public:
  Init_GenerateTrajectory_Response_traj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::GenerateTrajectory_Response traj(::dwb_msgs::srv::GenerateTrajectory_Response::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return dwb_msgs::srv::builder::Init_GenerateTrajectory_Response_traj();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__BUILDER_HPP_
