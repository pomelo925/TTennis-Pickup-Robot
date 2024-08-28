// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__BUILDER_HPP_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/msg/detail/trajectory_score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryScore_total
{
public:
  explicit Init_TrajectoryScore_total(::dwb_msgs::msg::TrajectoryScore & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::msg::TrajectoryScore total(::dwb_msgs::msg::TrajectoryScore::_total_type arg)
  {
    msg_.total = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::msg::TrajectoryScore msg_;
};

class Init_TrajectoryScore_scores
{
public:
  explicit Init_TrajectoryScore_scores(::dwb_msgs::msg::TrajectoryScore & msg)
  : msg_(msg)
  {}
  Init_TrajectoryScore_total scores(::dwb_msgs::msg::TrajectoryScore::_scores_type arg)
  {
    msg_.scores = std::move(arg);
    return Init_TrajectoryScore_total(msg_);
  }

private:
  ::dwb_msgs::msg::TrajectoryScore msg_;
};

class Init_TrajectoryScore_traj
{
public:
  Init_TrajectoryScore_traj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryScore_scores traj(::dwb_msgs::msg::TrajectoryScore::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return Init_TrajectoryScore_scores(msg_);
  }

private:
  ::dwb_msgs::msg::TrajectoryScore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::msg::TrajectoryScore>()
{
  return dwb_msgs::msg::builder::Init_TrajectoryScore_traj();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__BUILDER_HPP_
