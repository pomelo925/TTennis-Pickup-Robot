// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__FOLLOW_PATH__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__FOLLOW_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/follow_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_Goal_goal_checker_id
{
public:
  explicit Init_FollowPath_Goal_goal_checker_id(::nav2_msgs::action::FollowPath_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowPath_Goal goal_checker_id(::nav2_msgs::action::FollowPath_Goal::_goal_checker_id_type arg)
  {
    msg_.goal_checker_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_Goal msg_;
};

class Init_FollowPath_Goal_controller_id
{
public:
  explicit Init_FollowPath_Goal_controller_id(::nav2_msgs::action::FollowPath_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowPath_Goal_goal_checker_id controller_id(::nav2_msgs::action::FollowPath_Goal::_controller_id_type arg)
  {
    msg_.controller_id = std::move(arg);
    return Init_FollowPath_Goal_goal_checker_id(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_Goal msg_;
};

class Init_FollowPath_Goal_path
{
public:
  Init_FollowPath_Goal_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_Goal_controller_id path(::nav2_msgs::action::FollowPath_Goal::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_FollowPath_Goal_controller_id(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_Goal>()
{
  return nav2_msgs::action::builder::Init_FollowPath_Goal_path();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_Result_result
{
public:
  Init_FollowPath_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::FollowPath_Result result(::nav2_msgs::action::FollowPath_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_Result>()
{
  return nav2_msgs::action::builder::Init_FollowPath_Result_result();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_Feedback_speed
{
public:
  explicit Init_FollowPath_Feedback_speed(::nav2_msgs::action::FollowPath_Feedback & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowPath_Feedback speed(::nav2_msgs::action::FollowPath_Feedback::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_Feedback msg_;
};

class Init_FollowPath_Feedback_distance_to_goal
{
public:
  Init_FollowPath_Feedback_distance_to_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_Feedback_speed distance_to_goal(::nav2_msgs::action::FollowPath_Feedback::_distance_to_goal_type arg)
  {
    msg_.distance_to_goal = std::move(arg);
    return Init_FollowPath_Feedback_speed(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_Feedback>()
{
  return nav2_msgs::action::builder::Init_FollowPath_Feedback_distance_to_goal();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_SendGoal_Request_goal
{
public:
  explicit Init_FollowPath_SendGoal_Request_goal(::nav2_msgs::action::FollowPath_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowPath_SendGoal_Request goal(::nav2_msgs::action::FollowPath_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_SendGoal_Request msg_;
};

class Init_FollowPath_SendGoal_Request_goal_id
{
public:
  Init_FollowPath_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_SendGoal_Request_goal goal_id(::nav2_msgs::action::FollowPath_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowPath_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_FollowPath_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_SendGoal_Response_stamp
{
public:
  explicit Init_FollowPath_SendGoal_Response_stamp(::nav2_msgs::action::FollowPath_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowPath_SendGoal_Response stamp(::nav2_msgs::action::FollowPath_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_SendGoal_Response msg_;
};

class Init_FollowPath_SendGoal_Response_accepted
{
public:
  Init_FollowPath_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_SendGoal_Response_stamp accepted(::nav2_msgs::action::FollowPath_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowPath_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_FollowPath_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_GetResult_Request_goal_id
{
public:
  Init_FollowPath_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::FollowPath_GetResult_Request goal_id(::nav2_msgs::action::FollowPath_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_FollowPath_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_GetResult_Response_result
{
public:
  explicit Init_FollowPath_GetResult_Response_result(::nav2_msgs::action::FollowPath_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowPath_GetResult_Response result(::nav2_msgs::action::FollowPath_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_GetResult_Response msg_;
};

class Init_FollowPath_GetResult_Response_status
{
public:
  Init_FollowPath_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_GetResult_Response_result status(::nav2_msgs::action::FollowPath_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowPath_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_FollowPath_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPath_FeedbackMessage_feedback
{
public:
  explicit Init_FollowPath_FeedbackMessage_feedback(::nav2_msgs::action::FollowPath_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::FollowPath_FeedbackMessage feedback(::nav2_msgs::action::FollowPath_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_FeedbackMessage msg_;
};

class Init_FollowPath_FeedbackMessage_goal_id
{
public:
  Init_FollowPath_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_FeedbackMessage_feedback goal_id(::nav2_msgs::action::FollowPath_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowPath_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::FollowPath_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::FollowPath_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_FollowPath_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__FOLLOW_PATH__BUILDER_HPP_
