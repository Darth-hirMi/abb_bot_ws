// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bot_msgs:action/BotTask.idl
// generated code does not contain a copyright notice

#ifndef BOT_MSGS__ACTION__DETAIL__BOT_TASK__BUILDER_HPP_
#define BOT_MSGS__ACTION__DETAIL__BOT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bot_msgs/action/detail/bot_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_Goal_task_munber
{
public:
  Init_BotTask_Goal_task_munber()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_msgs::action::BotTask_Goal task_munber(::bot_msgs::action::BotTask_Goal::_task_munber_type arg)
  {
    msg_.task_munber = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_Goal>()
{
  return bot_msgs::action::builder::Init_BotTask_Goal_task_munber();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_Result_success
{
public:
  Init_BotTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_msgs::action::BotTask_Result success(::bot_msgs::action::BotTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_Result>()
{
  return bot_msgs::action::builder::Init_BotTask_Result_success();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_Feedback_percentage
{
public:
  Init_BotTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_msgs::action::BotTask_Feedback percentage(::bot_msgs::action::BotTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_Feedback>()
{
  return bot_msgs::action::builder::Init_BotTask_Feedback_percentage();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_SendGoal_Request_goal
{
public:
  explicit Init_BotTask_SendGoal_Request_goal(::bot_msgs::action::BotTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::bot_msgs::action::BotTask_SendGoal_Request goal(::bot_msgs::action::BotTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_SendGoal_Request msg_;
};

class Init_BotTask_SendGoal_Request_goal_id
{
public:
  Init_BotTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BotTask_SendGoal_Request_goal goal_id(::bot_msgs::action::BotTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BotTask_SendGoal_Request_goal(msg_);
  }

private:
  ::bot_msgs::action::BotTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_SendGoal_Request>()
{
  return bot_msgs::action::builder::Init_BotTask_SendGoal_Request_goal_id();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_SendGoal_Response_stamp
{
public:
  explicit Init_BotTask_SendGoal_Response_stamp(::bot_msgs::action::BotTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::bot_msgs::action::BotTask_SendGoal_Response stamp(::bot_msgs::action::BotTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_SendGoal_Response msg_;
};

class Init_BotTask_SendGoal_Response_accepted
{
public:
  Init_BotTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BotTask_SendGoal_Response_stamp accepted(::bot_msgs::action::BotTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_BotTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::bot_msgs::action::BotTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_SendGoal_Response>()
{
  return bot_msgs::action::builder::Init_BotTask_SendGoal_Response_accepted();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_GetResult_Request_goal_id
{
public:
  Init_BotTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_msgs::action::BotTask_GetResult_Request goal_id(::bot_msgs::action::BotTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_GetResult_Request>()
{
  return bot_msgs::action::builder::Init_BotTask_GetResult_Request_goal_id();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_GetResult_Response_result
{
public:
  explicit Init_BotTask_GetResult_Response_result(::bot_msgs::action::BotTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::bot_msgs::action::BotTask_GetResult_Response result(::bot_msgs::action::BotTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_GetResult_Response msg_;
};

class Init_BotTask_GetResult_Response_status
{
public:
  Init_BotTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BotTask_GetResult_Response_result status(::bot_msgs::action::BotTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BotTask_GetResult_Response_result(msg_);
  }

private:
  ::bot_msgs::action::BotTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_GetResult_Response>()
{
  return bot_msgs::action::builder::Init_BotTask_GetResult_Response_status();
}

}  // namespace bot_msgs


namespace bot_msgs
{

namespace action
{

namespace builder
{

class Init_BotTask_FeedbackMessage_feedback
{
public:
  explicit Init_BotTask_FeedbackMessage_feedback(::bot_msgs::action::BotTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::bot_msgs::action::BotTask_FeedbackMessage feedback(::bot_msgs::action::BotTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_msgs::action::BotTask_FeedbackMessage msg_;
};

class Init_BotTask_FeedbackMessage_goal_id
{
public:
  Init_BotTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BotTask_FeedbackMessage_feedback goal_id(::bot_msgs::action::BotTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BotTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::bot_msgs::action::BotTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_msgs::action::BotTask_FeedbackMessage>()
{
  return bot_msgs::action::builder::Init_BotTask_FeedbackMessage_goal_id();
}

}  // namespace bot_msgs

#endif  // BOT_MSGS__ACTION__DETAIL__BOT_TASK__BUILDER_HPP_
