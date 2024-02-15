// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bot_msgs:action/BotTask.idl
// generated code does not contain a copyright notice

#ifndef BOT_MSGS__ACTION__DETAIL__BOT_TASK__STRUCT_H_
#define BOT_MSGS__ACTION__DETAIL__BOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_Goal
{
  int32_t task_munber;
} bot_msgs__action__BotTask_Goal;

// Struct for a sequence of bot_msgs__action__BotTask_Goal.
typedef struct bot_msgs__action__BotTask_Goal__Sequence
{
  bot_msgs__action__BotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_Result
{
  bool success;
} bot_msgs__action__BotTask_Result;

// Struct for a sequence of bot_msgs__action__BotTask_Result.
typedef struct bot_msgs__action__BotTask_Result__Sequence
{
  bot_msgs__action__BotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_Feedback
{
  int32_t percentage;
} bot_msgs__action__BotTask_Feedback;

// Struct for a sequence of bot_msgs__action__BotTask_Feedback.
typedef struct bot_msgs__action__BotTask_Feedback__Sequence
{
  bot_msgs__action__BotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "bot_msgs/action/detail/bot_task__struct.h"

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  bot_msgs__action__BotTask_Goal goal;
} bot_msgs__action__BotTask_SendGoal_Request;

// Struct for a sequence of bot_msgs__action__BotTask_SendGoal_Request.
typedef struct bot_msgs__action__BotTask_SendGoal_Request__Sequence
{
  bot_msgs__action__BotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} bot_msgs__action__BotTask_SendGoal_Response;

// Struct for a sequence of bot_msgs__action__BotTask_SendGoal_Response.
typedef struct bot_msgs__action__BotTask_SendGoal_Response__Sequence
{
  bot_msgs__action__BotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} bot_msgs__action__BotTask_GetResult_Request;

// Struct for a sequence of bot_msgs__action__BotTask_GetResult_Request.
typedef struct bot_msgs__action__BotTask_GetResult_Request__Sequence
{
  bot_msgs__action__BotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "bot_msgs/action/detail/bot_task__struct.h"

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_GetResult_Response
{
  int8_t status;
  bot_msgs__action__BotTask_Result result;
} bot_msgs__action__BotTask_GetResult_Response;

// Struct for a sequence of bot_msgs__action__BotTask_GetResult_Response.
typedef struct bot_msgs__action__BotTask_GetResult_Response__Sequence
{
  bot_msgs__action__BotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "bot_msgs/action/detail/bot_task__struct.h"

/// Struct defined in action/BotTask in the package bot_msgs.
typedef struct bot_msgs__action__BotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  bot_msgs__action__BotTask_Feedback feedback;
} bot_msgs__action__BotTask_FeedbackMessage;

// Struct for a sequence of bot_msgs__action__BotTask_FeedbackMessage.
typedef struct bot_msgs__action__BotTask_FeedbackMessage__Sequence
{
  bot_msgs__action__BotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_msgs__action__BotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOT_MSGS__ACTION__DETAIL__BOT_TASK__STRUCT_H_
