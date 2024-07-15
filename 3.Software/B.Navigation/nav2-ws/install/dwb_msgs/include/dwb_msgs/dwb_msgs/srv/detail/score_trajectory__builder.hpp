// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/score_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTrajectory_Request_traj
{
public:
  explicit Init_ScoreTrajectory_Request_traj(::dwb_msgs::srv::ScoreTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::ScoreTrajectory_Request traj(::dwb_msgs::srv::ScoreTrajectory_Request::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

class Init_ScoreTrajectory_Request_global_plan
{
public:
  explicit Init_ScoreTrajectory_Request_global_plan(::dwb_msgs::srv::ScoreTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ScoreTrajectory_Request_traj global_plan(::dwb_msgs::srv::ScoreTrajectory_Request::_global_plan_type arg)
  {
    msg_.global_plan = std::move(arg);
    return Init_ScoreTrajectory_Request_traj(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

class Init_ScoreTrajectory_Request_velocity
{
public:
  explicit Init_ScoreTrajectory_Request_velocity(::dwb_msgs::srv::ScoreTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ScoreTrajectory_Request_global_plan velocity(::dwb_msgs::srv::ScoreTrajectory_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ScoreTrajectory_Request_global_plan(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

class Init_ScoreTrajectory_Request_pose
{
public:
  Init_ScoreTrajectory_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoreTrajectory_Request_velocity pose(::dwb_msgs::srv::ScoreTrajectory_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ScoreTrajectory_Request_velocity(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::ScoreTrajectory_Request>()
{
  return dwb_msgs::srv::builder::Init_ScoreTrajectory_Request_pose();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTrajectory_Response_score
{
public:
  Init_ScoreTrajectory_Response_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::ScoreTrajectory_Response score(::dwb_msgs::srv::ScoreTrajectory_Response::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::ScoreTrajectory_Response>()
{
  return dwb_msgs::srv::builder::Init_ScoreTrajectory_Response_score();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__BUILDER_HPP_
