// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bot_msgs:action/BotTask.idl
// generated code does not contain a copyright notice

#ifndef BOT_MSGS__ACTION__DETAIL__BOT_TASK__STRUCT_HPP_
#define BOT_MSGS__ACTION__DETAIL__BOT_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_Goal __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_Goal __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_Goal_
{
  using Type = BotTask_Goal_<ContainerAllocator>;

  explicit BotTask_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_munber = 0l;
    }
  }

  explicit BotTask_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_munber = 0l;
    }
  }

  // field types and members
  using _task_munber_type =
    int32_t;
  _task_munber_type task_munber;

  // setters for named parameter idiom
  Type & set__task_munber(
    const int32_t & _arg)
  {
    this->task_munber = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_Goal
    std::shared_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_Goal
    std::shared_ptr<bot_msgs::action::BotTask_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_Goal_ & other) const
  {
    if (this->task_munber != other.task_munber) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_Goal_

// alias to use template instance with default allocator
using BotTask_Goal =
  bot_msgs::action::BotTask_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs


#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_Result __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_Result __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_Result_
{
  using Type = BotTask_Result_<ContainerAllocator>;

  explicit BotTask_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BotTask_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_Result
    std::shared_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_Result
    std::shared_ptr<bot_msgs::action::BotTask_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_Result_

// alias to use template instance with default allocator
using BotTask_Result =
  bot_msgs::action::BotTask_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs


#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_Feedback __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_Feedback_
{
  using Type = BotTask_Feedback_<ContainerAllocator>;

  explicit BotTask_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  explicit BotTask_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  // field types and members
  using _percentage_type =
    int32_t;
  _percentage_type percentage;

  // setters for named parameter idiom
  Type & set__percentage(
    const int32_t & _arg)
  {
    this->percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_Feedback
    std::shared_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_Feedback
    std::shared_ptr<bot_msgs::action::BotTask_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_Feedback_ & other) const
  {
    if (this->percentage != other.percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_Feedback_

// alias to use template instance with default allocator
using BotTask_Feedback =
  bot_msgs::action::BotTask_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "bot_msgs/action/detail/bot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_SendGoal_Request __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_SendGoal_Request_
{
  using Type = BotTask_SendGoal_Request_<ContainerAllocator>;

  explicit BotTask_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit BotTask_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    bot_msgs::action::BotTask_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const bot_msgs::action::BotTask_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_SendGoal_Request
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_SendGoal_Request
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_SendGoal_Request_

// alias to use template instance with default allocator
using BotTask_SendGoal_Request =
  bot_msgs::action::BotTask_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_SendGoal_Response __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_SendGoal_Response_
{
  using Type = BotTask_SendGoal_Response_<ContainerAllocator>;

  explicit BotTask_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit BotTask_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_SendGoal_Response
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_SendGoal_Response
    std::shared_ptr<bot_msgs::action::BotTask_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_SendGoal_Response_

// alias to use template instance with default allocator
using BotTask_SendGoal_Response =
  bot_msgs::action::BotTask_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs

namespace bot_msgs
{

namespace action
{

struct BotTask_SendGoal
{
  using Request = bot_msgs::action::BotTask_SendGoal_Request;
  using Response = bot_msgs::action::BotTask_SendGoal_Response;
};

}  // namespace action

}  // namespace bot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_GetResult_Request __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_GetResult_Request_
{
  using Type = BotTask_GetResult_Request_<ContainerAllocator>;

  explicit BotTask_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit BotTask_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_GetResult_Request
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_GetResult_Request
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_GetResult_Request_

// alias to use template instance with default allocator
using BotTask_GetResult_Request =
  bot_msgs::action::BotTask_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "bot_msgs/action/detail/bot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_GetResult_Response __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_GetResult_Response_
{
  using Type = BotTask_GetResult_Response_<ContainerAllocator>;

  explicit BotTask_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit BotTask_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    bot_msgs::action::BotTask_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const bot_msgs::action::BotTask_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_GetResult_Response
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_GetResult_Response
    std::shared_ptr<bot_msgs::action::BotTask_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_GetResult_Response_

// alias to use template instance with default allocator
using BotTask_GetResult_Response =
  bot_msgs::action::BotTask_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs

namespace bot_msgs
{

namespace action
{

struct BotTask_GetResult
{
  using Request = bot_msgs::action::BotTask_GetResult_Request;
  using Response = bot_msgs::action::BotTask_GetResult_Response;
};

}  // namespace action

}  // namespace bot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "bot_msgs/action/detail/bot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bot_msgs__action__BotTask_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__bot_msgs__action__BotTask_FeedbackMessage __declspec(deprecated)
#endif

namespace bot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BotTask_FeedbackMessage_
{
  using Type = BotTask_FeedbackMessage_<ContainerAllocator>;

  explicit BotTask_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit BotTask_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    bot_msgs::action::BotTask_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const bot_msgs::action::BotTask_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bot_msgs__action__BotTask_FeedbackMessage
    std::shared_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bot_msgs__action__BotTask_FeedbackMessage
    std::shared_ptr<bot_msgs::action::BotTask_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotTask_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotTask_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotTask_FeedbackMessage_

// alias to use template instance with default allocator
using BotTask_FeedbackMessage =
  bot_msgs::action::BotTask_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace bot_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace bot_msgs
{

namespace action
{

struct BotTask
{
  /// The goal message defined in the action definition.
  using Goal = bot_msgs::action::BotTask_Goal;
  /// The result message defined in the action definition.
  using Result = bot_msgs::action::BotTask_Result;
  /// The feedback message defined in the action definition.
  using Feedback = bot_msgs::action::BotTask_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = bot_msgs::action::BotTask_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = bot_msgs::action::BotTask_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = bot_msgs::action::BotTask_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct BotTask BotTask;

}  // namespace action

}  // namespace bot_msgs

#endif  // BOT_MSGS__ACTION__DETAIL__BOT_TASK__STRUCT_HPP_
