// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ars548_messages:msg/SteeringAngleFrontAxle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ars548_messages/msg/detail/steering_angle_front_axle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ars548_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SteeringAngleFrontAxle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ars548_messages::msg::SteeringAngleFrontAxle(_init);
}

void SteeringAngleFrontAxle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ars548_messages::msg::SteeringAngleFrontAxle *>(message_memory);
  typed_message->~SteeringAngleFrontAxle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SteeringAngleFrontAxle_message_member_array[6] = {
  {
    "qualifiersteeringanglefrontaxle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages::msg::SteeringAngleFrontAxle, qualifiersteeringanglefrontaxle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steeringanglefrontaxleerramp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages::msg::SteeringAngleFrontAxle, steeringanglefrontaxleerramp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steeringanglefrontaxleerramp_invalidflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages::msg::SteeringAngleFrontAxle, steeringanglefrontaxleerramp_invalidflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steeringanglefrontaxle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages::msg::SteeringAngleFrontAxle, steeringanglefrontaxle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steeringanglefrontaxle_invalidflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages::msg::SteeringAngleFrontAxle, steeringanglefrontaxle_invalidflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steeringanglefrontaxleeventdataqualifier",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages::msg::SteeringAngleFrontAxle, steeringanglefrontaxleeventdataqualifier),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SteeringAngleFrontAxle_message_members = {
  "ars548_messages::msg",  // message namespace
  "SteeringAngleFrontAxle",  // message name
  6,  // number of fields
  sizeof(ars548_messages::msg::SteeringAngleFrontAxle),
  SteeringAngleFrontAxle_message_member_array,  // message members
  SteeringAngleFrontAxle_init_function,  // function to initialize message memory (memory has to be allocated)
  SteeringAngleFrontAxle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SteeringAngleFrontAxle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SteeringAngleFrontAxle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ars548_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ars548_messages::msg::SteeringAngleFrontAxle>()
{
  return &::ars548_messages::msg::rosidl_typesupport_introspection_cpp::SteeringAngleFrontAxle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ars548_messages, msg, SteeringAngleFrontAxle)() {
  return &::ars548_messages::msg::rosidl_typesupport_introspection_cpp::SteeringAngleFrontAxle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
