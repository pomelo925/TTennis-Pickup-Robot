// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/FollowWaypoints.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_Goal_poses
{
public:
  Init_FollowWaypoints_Goal_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::FollowWaypoints_Goal poses(::nav2_msgs::action::FollowWaypoints_Goal::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_Goal>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_Goal_poses();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_Result_missed_waypoints
{
public:
  Init_FollowWaypoints_Result_missed_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::FollowWaypoints_Result missed_waypoints(::nav2_msgs::action::FollowWaypoints_Result::_missed_waypoints_type arg)
  {
    msg_.missed_waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_Result>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_Result_missed_waypoints();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_Feedback_current_waypoint
{
public:
  Init_FollowWaypoints_Feedback_current_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::FollowWaypoints_Feedback current_waypoint(::nav2_msgs::action::FollowWaypoints_Feedback::_current_waypoint_type arg)
  {
    msg_.current_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_Feedback>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_Feedback_current_waypoint();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_SendGoal_Request_goal
{
public:
  explicit Init_FollowWaypoints_SendGoal_Request_goal(::nav2_msgs::action::FollowWaypoints_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowWaypoints_SendGoal_Request goal(::nav2_msgs::action::FollowWaypoints_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_SendGoal_Request msg_;
};

class Init_FollowWaypoints_SendGoal_Request_goal_id
{
public:
  Init_FollowWaypoints_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowWaypoints_SendGoal_Request_goal goal_id(::nav2_msgs::action::FollowWaypoints_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowWaypoints_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_SendGoal_Response_stamp
{
public:
  explicit Init_FollowWaypoints_SendGoal_Response_stamp(::nav2_msgs::action::FollowWaypoints_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowWaypoints_SendGoal_Response stamp(::nav2_msgs::action::FollowWaypoints_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_SendGoal_Response msg_;
};

class Init_FollowWaypoints_SendGoal_Response_accepted
{
public:
  Init_FollowWaypoints_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowWaypoints_SendGoal_Response_stamp accepted(::nav2_msgs::action::FollowWaypoints_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowWaypoints_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_GetResult_Request_goal_id
{
public:
  Init_FollowWaypoints_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::FollowWaypoints_GetResult_Request goal_id(::nav2_msgs::action::FollowWaypoints_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_GetResult_Response_result
{
public:
  explicit Init_FollowWaypoints_GetResult_Response_result(::nav2_msgs::action::FollowWaypoints_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowWaypoints_GetResult_Response result(::nav2_msgs::action::FollowWaypoints_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_GetResult_Response msg_;
};

class Init_FollowWaypoints_GetResult_Response_status
{
public:
  Init_FollowWaypoints_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowWaypoints_GetResult_Response_result status(::nav2_msgs::action::FollowWaypoints_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowWaypoints_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowWaypoints_FeedbackMessage_feedback
{
public:
  explicit Init_FollowWaypoints_FeedbackMessage_feedback(::nav2_msgs::action::FollowWaypoints_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowWaypoints_FeedbackMessage feedback(::nav2_msgs::action::FollowWaypoints_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_FeedbackMessage msg_;
};

class Init_FollowWaypoints_FeedbackMessage_goal_id
{
public:
  Init_FollowWaypoints_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowWaypoints_FeedbackMessage_feedback goal_id(::nav2_msgs::action::FollowWaypoints_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowWaypoints_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::FollowWaypoints_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowWaypoints_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_FollowWaypoints_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__BUILDER_HPP_
