// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/AssistedTeleop.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__ASSISTED_TELEOP__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__ASSISTED_TELEOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/assisted_teleop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_Goal_time_allowance
{
public:
  Init_AssistedTeleop_Goal_time_allowance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::AssistedTeleop_Goal time_allowance(::nav2_msgs::action::AssistedTeleop_Goal::_time_allowance_type arg)
  {
    msg_.time_allowance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_Goal>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_Goal_time_allowance();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_Result_total_elapsed_time
{
public:
  Init_AssistedTeleop_Result_total_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::AssistedTeleop_Result total_elapsed_time(::nav2_msgs::action::AssistedTeleop_Result::_total_elapsed_time_type arg)
  {
    msg_.total_elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_Result>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_Result_total_elapsed_time();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_Feedback_current_teleop_duration
{
public:
  Init_AssistedTeleop_Feedback_current_teleop_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::AssistedTeleop_Feedback current_teleop_duration(::nav2_msgs::action::AssistedTeleop_Feedback::_current_teleop_duration_type arg)
  {
    msg_.current_teleop_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_Feedback>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_Feedback_current_teleop_duration();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_SendGoal_Request_goal
{
public:
  explicit Init_AssistedTeleop_SendGoal_Request_goal(::nav2_msgs::action::AssistedTeleop_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::AssistedTeleop_SendGoal_Request goal(::nav2_msgs::action::AssistedTeleop_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_SendGoal_Request msg_;
};

class Init_AssistedTeleop_SendGoal_Request_goal_id
{
public:
  Init_AssistedTeleop_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssistedTeleop_SendGoal_Request_goal goal_id(::nav2_msgs::action::AssistedTeleop_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AssistedTeleop_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_SendGoal_Response_stamp
{
public:
  explicit Init_AssistedTeleop_SendGoal_Response_stamp(::nav2_msgs::action::AssistedTeleop_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::AssistedTeleop_SendGoal_Response stamp(::nav2_msgs::action::AssistedTeleop_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_SendGoal_Response msg_;
};

class Init_AssistedTeleop_SendGoal_Response_accepted
{
public:
  Init_AssistedTeleop_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssistedTeleop_SendGoal_Response_stamp accepted(::nav2_msgs::action::AssistedTeleop_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AssistedTeleop_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_GetResult_Request_goal_id
{
public:
  Init_AssistedTeleop_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::AssistedTeleop_GetResult_Request goal_id(::nav2_msgs::action::AssistedTeleop_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_GetResult_Response_result
{
public:
  explicit Init_AssistedTeleop_GetResult_Response_result(::nav2_msgs::action::AssistedTeleop_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::AssistedTeleop_GetResult_Response result(::nav2_msgs::action::AssistedTeleop_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_GetResult_Response msg_;
};

class Init_AssistedTeleop_GetResult_Response_status
{
public:
  Init_AssistedTeleop_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssistedTeleop_GetResult_Response_result status(::nav2_msgs::action::AssistedTeleop_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AssistedTeleop_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_AssistedTeleop_FeedbackMessage_feedback
{
public:
  explicit Init_AssistedTeleop_FeedbackMessage_feedback(::nav2_msgs::action::AssistedTeleop_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::AssistedTeleop_FeedbackMessage feedback(::nav2_msgs::action::AssistedTeleop_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_FeedbackMessage msg_;
};

class Init_AssistedTeleop_FeedbackMessage_goal_id
{
public:
  Init_AssistedTeleop_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssistedTeleop_FeedbackMessage_feedback goal_id(::nav2_msgs::action::AssistedTeleop_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AssistedTeleop_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::AssistedTeleop_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::AssistedTeleop_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_AssistedTeleop_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__ASSISTED_TELEOP__BUILDER_HPP_
