// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ars548_messages:msg/ObjectList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ars548_messages/msg/detail/object_list__rosidl_typesupport_introspection_c.h"
#include "ars548_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ars548_messages/msg/detail/object_list__functions.h"
#include "ars548_messages/msg/detail/object_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objectlist_objects`
#include "ars548_messages/msg/object.h"
// Member `objectlist_objects`
#include "ars548_messages/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ars548_messages__msg__ObjectList__init(message_memory);
}

void ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_fini_function(void * message_memory)
{
  ars548_messages__msg__ObjectList__fini(message_memory);
}

size_t ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__size_function__ObjectList__objectlist_objects(
  const void * untyped_member)
{
  (void)untyped_member;
  return 50;
}

const void * ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__get_const_function__ObjectList__objectlist_objects(
  const void * untyped_member, size_t index)
{
  const ars548_messages__msg__Object * member =
    (const ars548_messages__msg__Object *)(untyped_member);
  return &member[index];
}

void * ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__get_function__ObjectList__objectlist_objects(
  void * untyped_member, size_t index)
{
  ars548_messages__msg__Object * member =
    (ars548_messages__msg__Object *)(untyped_member);
  return &member[index];
}

void ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__fetch_function__ObjectList__objectlist_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ars548_messages__msg__Object * item =
    ((const ars548_messages__msg__Object *)
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__get_const_function__ObjectList__objectlist_objects(untyped_member, index));
  ars548_messages__msg__Object * value =
    (ars548_messages__msg__Object *)(untyped_value);
  *value = *item;
}

void ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__assign_function__ObjectList__objectlist_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ars548_messages__msg__Object * item =
    ((ars548_messages__msg__Object *)
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__get_function__ObjectList__objectlist_objects(untyped_member, index));
  const ars548_messages__msg__Object * value =
    (const ars548_messages__msg__Object *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sqc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, sqc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dataid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, dataid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_nanoseconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, timestamp_nanoseconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, timestamp_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_syncstatus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, timestamp_syncstatus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eventdataqualifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, eventdataqualifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extendedqualifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, extendedqualifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objectlist_numofobjects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, objectlist_numofobjects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objectlist_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    50,  // array size
    false,  // is upper bound
    offsetof(ars548_messages__msg__ObjectList, objectlist_objects),  // bytes offset in struct
    NULL,  // default value
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__size_function__ObjectList__objectlist_objects,  // size() function pointer
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__get_const_function__ObjectList__objectlist_objects,  // get_const(index) function pointer
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__get_function__ObjectList__objectlist_objects,  // get(index) function pointer
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__fetch_function__ObjectList__objectlist_objects,  // fetch(index, &value) function pointer
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__assign_function__ObjectList__objectlist_objects,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_members = {
  "ars548_messages__msg",  // message namespace
  "ObjectList",  // message name
  12,  // number of fields
  sizeof(ars548_messages__msg__ObjectList),
  ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array,  // message members
  ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_init_function,  // function to initialize message memory (memory has to be allocated)
  ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle = {
  0,
  &ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ars548_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ars548_messages, msg, ObjectList)() {
  ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ars548_messages, msg, Object)();
  if (!ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle.typesupport_identifier) {
    ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ars548_messages__msg__ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
