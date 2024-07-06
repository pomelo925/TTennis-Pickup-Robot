// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/SmoothPath.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/smooth_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_Goal_check_for_collisions
{
public:
  explicit Init_SmoothPath_Goal_check_for_collisions(::nav2_msgs::action::SmoothPath_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::SmoothPath_Goal check_for_collisions(::nav2_msgs::action::SmoothPath_Goal::_check_for_collisions_type arg)
  {
    msg_.check_for_collisions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Goal msg_;
};

class Init_SmoothPath_Goal_max_smoothing_duration
{
public:
  explicit Init_SmoothPath_Goal_max_smoothing_duration(::nav2_msgs::action::SmoothPath_Goal & msg)
  : msg_(msg)
  {}
  Init_SmoothPath_Goal_check_for_collisions max_smoothing_duration(::nav2_msgs::action::SmoothPath_Goal::_max_smoothing_duration_type arg)
  {
    msg_.max_smoothing_duration = std::move(arg);
    return Init_SmoothPath_Goal_check_for_collisions(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Goal msg_;
};

class Init_SmoothPath_Goal_smoother_id
{
public:
  explicit Init_SmoothPath_Goal_smoother_id(::nav2_msgs::action::SmoothPath_Goal & msg)
  : msg_(msg)
  {}
  Init_SmoothPath_Goal_max_smoothing_duration smoother_id(::nav2_msgs::action::SmoothPath_Goal::_smoother_id_type arg)
  {
    msg_.smoother_id = std::move(arg);
    return Init_SmoothPath_Goal_max_smoothing_duration(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Goal msg_;
};

class Init_SmoothPath_Goal_path
{
public:
  Init_SmoothPath_Goal_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmoothPath_Goal_smoother_id path(::nav2_msgs::action::SmoothPath_Goal::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_SmoothPath_Goal_smoother_id(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_Goal>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_Goal_path();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_Result_was_completed
{
public:
  explicit Init_SmoothPath_Result_was_completed(::nav2_msgs::action::SmoothPath_Result & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::SmoothPath_Result was_completed(::nav2_msgs::action::SmoothPath_Result::_was_completed_type arg)
  {
    msg_.was_completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Result msg_;
};

class Init_SmoothPath_Result_smoothing_duration
{
public:
  explicit Init_SmoothPath_Result_smoothing_duration(::nav2_msgs::action::SmoothPath_Result & msg)
  : msg_(msg)
  {}
  Init_SmoothPath_Result_was_completed smoothing_duration(::nav2_msgs::action::SmoothPath_Result::_smoothing_duration_type arg)
  {
    msg_.smoothing_duration = std::move(arg);
    return Init_SmoothPath_Result_was_completed(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Result msg_;
};

class Init_SmoothPath_Result_path
{
public:
  Init_SmoothPath_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmoothPath_Result_smoothing_duration path(::nav2_msgs::action::SmoothPath_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_SmoothPath_Result_smoothing_duration(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_Result>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_Result_path();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_Feedback>()
{
  return ::nav2_msgs::action::SmoothPath_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_SendGoal_Request_goal
{
public:
  explicit Init_SmoothPath_SendGoal_Request_goal(::nav2_msgs::action::SmoothPath_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::SmoothPath_SendGoal_Request goal(::nav2_msgs::action::SmoothPath_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_SendGoal_Request msg_;
};

class Init_SmoothPath_SendGoal_Request_goal_id
{
public:
  Init_SmoothPath_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmoothPath_SendGoal_Request_goal goal_id(::nav2_msgs::action::SmoothPath_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SmoothPath_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_SendGoal_Response_stamp
{
public:
  explicit Init_SmoothPath_SendGoal_Response_stamp(::nav2_msgs::action::SmoothPath_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::SmoothPath_SendGoal_Response stamp(::nav2_msgs::action::SmoothPath_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_SendGoal_Response msg_;
};

class Init_SmoothPath_SendGoal_Response_accepted
{
public:
  Init_SmoothPath_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmoothPath_SendGoal_Response_stamp accepted(::nav2_msgs::action::SmoothPath_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SmoothPath_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_GetResult_Request_goal_id
{
public:
  Init_SmoothPath_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::SmoothPath_GetResult_Request goal_id(::nav2_msgs::action::SmoothPath_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_GetResult_Response_result
{
public:
  explicit Init_SmoothPath_GetResult_Response_result(::nav2_msgs::action::SmoothPath_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::SmoothPath_GetResult_Response result(::nav2_msgs::action::SmoothPath_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_GetResult_Response msg_;
};

class Init_SmoothPath_GetResult_Response_status
{
public:
  Init_SmoothPath_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmoothPath_GetResult_Response_result status(::nav2_msgs::action::SmoothPath_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SmoothPath_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_SmoothPath_FeedbackMessage_feedback
{
public:
  explicit Init_SmoothPath_FeedbackMessage_feedback(::nav2_msgs::action::SmoothPath_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::SmoothPath_FeedbackMessage feedback(::nav2_msgs::action::SmoothPath_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_FeedbackMessage msg_;
};

class Init_SmoothPath_FeedbackMessage_goal_id
{
public:
  Init_SmoothPath_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmoothPath_FeedbackMessage_feedback goal_id(::nav2_msgs::action::SmoothPath_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SmoothPath_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::SmoothPath_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::SmoothPath_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_SmoothPath_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__BUILDER_HPP_
