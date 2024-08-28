// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/get_critic_score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCriticScore_Request_critic_name
{
public:
  explicit Init_GetCriticScore_Request_critic_name(::dwb_msgs::srv::GetCriticScore_Request & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::GetCriticScore_Request critic_name(::dwb_msgs::srv::GetCriticScore_Request::_critic_name_type arg)
  {
    msg_.critic_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GetCriticScore_Request msg_;
};

class Init_GetCriticScore_Request_traj
{
public:
  explicit Init_GetCriticScore_Request_traj(::dwb_msgs::srv::GetCriticScore_Request & msg)
  : msg_(msg)
  {}
  Init_GetCriticScore_Request_critic_name traj(::dwb_msgs::srv::GetCriticScore_Request::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return Init_GetCriticScore_Request_critic_name(msg_);
  }

private:
  ::dwb_msgs::srv::GetCriticScore_Request msg_;
};

class Init_GetCriticScore_Request_global_plan
{
public:
  explicit Init_GetCriticScore_Request_global_plan(::dwb_msgs::srv::GetCriticScore_Request & msg)
  : msg_(msg)
  {}
  Init_GetCriticScore_Request_traj global_plan(::dwb_msgs::srv::GetCriticScore_Request::_global_plan_type arg)
  {
    msg_.global_plan = std::move(arg);
    return Init_GetCriticScore_Request_traj(msg_);
  }

private:
  ::dwb_msgs::srv::GetCriticScore_Request msg_;
};

class Init_GetCriticScore_Request_velocity
{
public:
  explicit Init_GetCriticScore_Request_velocity(::dwb_msgs::srv::GetCriticScore_Request & msg)
  : msg_(msg)
  {}
  Init_GetCriticScore_Request_global_plan velocity(::dwb_msgs::srv::GetCriticScore_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GetCriticScore_Request_global_plan(msg_);
  }

private:
  ::dwb_msgs::srv::GetCriticScore_Request msg_;
};

class Init_GetCriticScore_Request_pose
{
public:
  Init_GetCriticScore_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCriticScore_Request_velocity pose(::dwb_msgs::srv::GetCriticScore_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GetCriticScore_Request_velocity(msg_);
  }

private:
  ::dwb_msgs::srv::GetCriticScore_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GetCriticScore_Request>()
{
  return dwb_msgs::srv::builder::Init_GetCriticScore_Request_pose();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCriticScore_Response_score
{
public:
  Init_GetCriticScore_Response_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::GetCriticScore_Response score(::dwb_msgs::srv::GetCriticScore_Response::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GetCriticScore_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GetCriticScore_Response>()
{
  return dwb_msgs::srv::builder::Init_GetCriticScore_Response_score();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__BUILDER_HPP_
