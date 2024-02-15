// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abb_bot_msgs:action/AbbBotTask.idl
// generated code does not contain a copyright notice

#ifndef ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__FUNCTIONS_H_
#define ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "abb_bot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "abb_bot_msgs/action/detail/abb_bot_task__struct.h"

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_Goal
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Goal__init(abb_bot_msgs__action__AbbBotTask_Goal * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Goal__fini(abb_bot_msgs__action__AbbBotTask_Goal * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_Goal *
abb_bot_msgs__action__AbbBotTask_Goal__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Goal__destroy(abb_bot_msgs__action__AbbBotTask_Goal * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Goal__are_equal(const abb_bot_msgs__action__AbbBotTask_Goal * lhs, const abb_bot_msgs__action__AbbBotTask_Goal * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Goal__copy(
  const abb_bot_msgs__action__AbbBotTask_Goal * input,
  abb_bot_msgs__action__AbbBotTask_Goal * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Goal__Sequence__init(abb_bot_msgs__action__AbbBotTask_Goal__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Goal__Sequence__fini(abb_bot_msgs__action__AbbBotTask_Goal__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_Goal__Sequence *
abb_bot_msgs__action__AbbBotTask_Goal__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Goal__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_Goal__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Goal__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_Goal__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_Goal__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Goal__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_Goal__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_Goal__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_Result
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Result__init(abb_bot_msgs__action__AbbBotTask_Result * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Result__fini(abb_bot_msgs__action__AbbBotTask_Result * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_Result *
abb_bot_msgs__action__AbbBotTask_Result__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Result__destroy(abb_bot_msgs__action__AbbBotTask_Result * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Result__are_equal(const abb_bot_msgs__action__AbbBotTask_Result * lhs, const abb_bot_msgs__action__AbbBotTask_Result * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Result__copy(
  const abb_bot_msgs__action__AbbBotTask_Result * input,
  abb_bot_msgs__action__AbbBotTask_Result * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Result__Sequence__init(abb_bot_msgs__action__AbbBotTask_Result__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Result__Sequence__fini(abb_bot_msgs__action__AbbBotTask_Result__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_Result__Sequence *
abb_bot_msgs__action__AbbBotTask_Result__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Result__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_Result__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Result__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_Result__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_Result__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Result__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_Result__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_Result__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_Feedback
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Feedback__init(abb_bot_msgs__action__AbbBotTask_Feedback * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Feedback__fini(abb_bot_msgs__action__AbbBotTask_Feedback * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_Feedback *
abb_bot_msgs__action__AbbBotTask_Feedback__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Feedback__destroy(abb_bot_msgs__action__AbbBotTask_Feedback * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Feedback__are_equal(const abb_bot_msgs__action__AbbBotTask_Feedback * lhs, const abb_bot_msgs__action__AbbBotTask_Feedback * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Feedback__copy(
  const abb_bot_msgs__action__AbbBotTask_Feedback * input,
  abb_bot_msgs__action__AbbBotTask_Feedback * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__init(abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__fini(abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence *
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_Feedback__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_Feedback__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__init(abb_bot_msgs__action__AbbBotTask_SendGoal_Request * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__fini(abb_bot_msgs__action__AbbBotTask_SendGoal_Request * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_SendGoal_Request *
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__destroy(abb_bot_msgs__action__AbbBotTask_SendGoal_Request * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__are_equal(const abb_bot_msgs__action__AbbBotTask_SendGoal_Request * lhs, const abb_bot_msgs__action__AbbBotTask_SendGoal_Request * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__copy(
  const abb_bot_msgs__action__AbbBotTask_SendGoal_Request * input,
  abb_bot_msgs__action__AbbBotTask_SendGoal_Request * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__init(abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__fini(abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence *
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__init(abb_bot_msgs__action__AbbBotTask_SendGoal_Response * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__fini(abb_bot_msgs__action__AbbBotTask_SendGoal_Response * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_SendGoal_Response *
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__destroy(abb_bot_msgs__action__AbbBotTask_SendGoal_Response * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__are_equal(const abb_bot_msgs__action__AbbBotTask_SendGoal_Response * lhs, const abb_bot_msgs__action__AbbBotTask_SendGoal_Response * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__copy(
  const abb_bot_msgs__action__AbbBotTask_SendGoal_Response * input,
  abb_bot_msgs__action__AbbBotTask_SendGoal_Response * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__init(abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__fini(abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence *
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Request__init(abb_bot_msgs__action__AbbBotTask_GetResult_Request * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Request__fini(abb_bot_msgs__action__AbbBotTask_GetResult_Request * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_GetResult_Request *
abb_bot_msgs__action__AbbBotTask_GetResult_Request__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Request__destroy(abb_bot_msgs__action__AbbBotTask_GetResult_Request * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Request__are_equal(const abb_bot_msgs__action__AbbBotTask_GetResult_Request * lhs, const abb_bot_msgs__action__AbbBotTask_GetResult_Request * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Request__copy(
  const abb_bot_msgs__action__AbbBotTask_GetResult_Request * input,
  abb_bot_msgs__action__AbbBotTask_GetResult_Request * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__init(abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__fini(abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence *
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Response__init(abb_bot_msgs__action__AbbBotTask_GetResult_Response * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Response__fini(abb_bot_msgs__action__AbbBotTask_GetResult_Response * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_GetResult_Response *
abb_bot_msgs__action__AbbBotTask_GetResult_Response__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Response__destroy(abb_bot_msgs__action__AbbBotTask_GetResult_Response * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Response__are_equal(const abb_bot_msgs__action__AbbBotTask_GetResult_Response * lhs, const abb_bot_msgs__action__AbbBotTask_GetResult_Response * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Response__copy(
  const abb_bot_msgs__action__AbbBotTask_GetResult_Response * input,
  abb_bot_msgs__action__AbbBotTask_GetResult_Response * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__init(abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__fini(abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence *
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence * output);

/// Initialize action/AbbBotTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage
 * )) before or use
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__init(abb_bot_msgs__action__AbbBotTask_FeedbackMessage * msg);

/// Finalize action/AbbBotTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__fini(abb_bot_msgs__action__AbbBotTask_FeedbackMessage * msg);

/// Create action/AbbBotTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_FeedbackMessage *
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__create();

/// Destroy action/AbbBotTask message.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__destroy(abb_bot_msgs__action__AbbBotTask_FeedbackMessage * msg);

/// Check for action/AbbBotTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__are_equal(const abb_bot_msgs__action__AbbBotTask_FeedbackMessage * lhs, const abb_bot_msgs__action__AbbBotTask_FeedbackMessage * rhs);

/// Copy a action/AbbBotTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__copy(
  const abb_bot_msgs__action__AbbBotTask_FeedbackMessage * input,
  abb_bot_msgs__action__AbbBotTask_FeedbackMessage * output);

/// Initialize array of action/AbbBotTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__init(abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__fini(abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * array);

/// Create array of action/AbbBotTask messages.
/**
 * It allocates the memory for the array and calls
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence *
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/AbbBotTask messages.
/**
 * It calls
 * abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
void
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__destroy(abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * array);

/// Check for action/AbbBotTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__are_equal(const abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * lhs, const abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/AbbBotTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_bot_msgs
bool
abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence__copy(
  const abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * input,
  abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__FUNCTIONS_H_
