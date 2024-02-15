// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_bot_msgs:action/AbbBotTask.idl
// generated code does not contain a copyright notice

#ifndef ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__BUILDER_HPP_
#define ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_Goal_task_number
{
public:
  Init_AbbBotTask_Goal_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_bot_msgs::action::AbbBotTask_Goal task_number(::abb_bot_msgs::action::AbbBotTask_Goal::_task_number_type arg)
  {
    msg_.task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_Goal>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_Goal_task_number();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_Result_success
{
public:
  Init_AbbBotTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_bot_msgs::action::AbbBotTask_Result success(::abb_bot_msgs::action::AbbBotTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_Result>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_Result_success();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_Feedback_percentage
{
public:
  Init_AbbBotTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_bot_msgs::action::AbbBotTask_Feedback percentage(::abb_bot_msgs::action::AbbBotTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_Feedback>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_Feedback_percentage();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_SendGoal_Request_goal
{
public:
  explicit Init_AbbBotTask_SendGoal_Request_goal(::abb_bot_msgs::action::AbbBotTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::abb_bot_msgs::action::AbbBotTask_SendGoal_Request goal(::abb_bot_msgs::action::AbbBotTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_SendGoal_Request msg_;
};

class Init_AbbBotTask_SendGoal_Request_goal_id
{
public:
  Init_AbbBotTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbBotTask_SendGoal_Request_goal goal_id(::abb_bot_msgs::action::AbbBotTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AbbBotTask_SendGoal_Request_goal(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_SendGoal_Request>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_SendGoal_Request_goal_id();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_SendGoal_Response_stamp
{
public:
  explicit Init_AbbBotTask_SendGoal_Response_stamp(::abb_bot_msgs::action::AbbBotTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::abb_bot_msgs::action::AbbBotTask_SendGoal_Response stamp(::abb_bot_msgs::action::AbbBotTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_SendGoal_Response msg_;
};

class Init_AbbBotTask_SendGoal_Response_accepted
{
public:
  Init_AbbBotTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbBotTask_SendGoal_Response_stamp accepted(::abb_bot_msgs::action::AbbBotTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AbbBotTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_SendGoal_Response>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_SendGoal_Response_accepted();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_GetResult_Request_goal_id
{
public:
  Init_AbbBotTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_bot_msgs::action::AbbBotTask_GetResult_Request goal_id(::abb_bot_msgs::action::AbbBotTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_GetResult_Request>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_GetResult_Request_goal_id();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_GetResult_Response_result
{
public:
  explicit Init_AbbBotTask_GetResult_Response_result(::abb_bot_msgs::action::AbbBotTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::abb_bot_msgs::action::AbbBotTask_GetResult_Response result(::abb_bot_msgs::action::AbbBotTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_GetResult_Response msg_;
};

class Init_AbbBotTask_GetResult_Response_status
{
public:
  Init_AbbBotTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbBotTask_GetResult_Response_result status(::abb_bot_msgs::action::AbbBotTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AbbBotTask_GetResult_Response_result(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_GetResult_Response>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_GetResult_Response_status();
}

}  // namespace abb_bot_msgs


namespace abb_bot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbBotTask_FeedbackMessage_feedback
{
public:
  explicit Init_AbbBotTask_FeedbackMessage_feedback(::abb_bot_msgs::action::AbbBotTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::abb_bot_msgs::action::AbbBotTask_FeedbackMessage feedback(::abb_bot_msgs::action::AbbBotTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_FeedbackMessage msg_;
};

class Init_AbbBotTask_FeedbackMessage_goal_id
{
public:
  Init_AbbBotTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbBotTask_FeedbackMessage_feedback goal_id(::abb_bot_msgs::action::AbbBotTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AbbBotTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::abb_bot_msgs::action::AbbBotTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_bot_msgs::action::AbbBotTask_FeedbackMessage>()
{
  return abb_bot_msgs::action::builder::Init_AbbBotTask_FeedbackMessage_goal_id();
}

}  // namespace abb_bot_msgs

#endif  // ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__BUILDER_HPP_
