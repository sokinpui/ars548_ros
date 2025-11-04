// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/object_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_ObjectList_objectlist_objects
{
public:
  explicit Init_ObjectList_objectlist_objects(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::ObjectList objectlist_objects(::ars548_messages::msg::ObjectList::_objectlist_objects_type arg)
  {
    msg_.objectlist_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_objectlist_numofobjects
{
public:
  explicit Init_ObjectList_objectlist_numofobjects(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_objectlist_objects objectlist_numofobjects(::ars548_messages::msg::ObjectList::_objectlist_numofobjects_type arg)
  {
    msg_.objectlist_numofobjects = std::move(arg);
    return Init_ObjectList_objectlist_objects(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_extendedqualifier
{
public:
  explicit Init_ObjectList_extendedqualifier(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_objectlist_numofobjects extendedqualifier(::ars548_messages::msg::ObjectList::_extendedqualifier_type arg)
  {
    msg_.extendedqualifier = std::move(arg);
    return Init_ObjectList_objectlist_numofobjects(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_eventdataqualifier
{
public:
  explicit Init_ObjectList_eventdataqualifier(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_extendedqualifier eventdataqualifier(::ars548_messages::msg::ObjectList::_eventdataqualifier_type arg)
  {
    msg_.eventdataqualifier = std::move(arg);
    return Init_ObjectList_extendedqualifier(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_timestamp_syncstatus
{
public:
  explicit Init_ObjectList_timestamp_syncstatus(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_eventdataqualifier timestamp_syncstatus(::ars548_messages::msg::ObjectList::_timestamp_syncstatus_type arg)
  {
    msg_.timestamp_syncstatus = std::move(arg);
    return Init_ObjectList_eventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_timestamp_seconds
{
public:
  explicit Init_ObjectList_timestamp_seconds(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_timestamp_syncstatus timestamp_seconds(::ars548_messages::msg::ObjectList::_timestamp_seconds_type arg)
  {
    msg_.timestamp_seconds = std::move(arg);
    return Init_ObjectList_timestamp_syncstatus(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_timestamp_nanoseconds
{
public:
  explicit Init_ObjectList_timestamp_nanoseconds(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_timestamp_seconds timestamp_nanoseconds(::ars548_messages::msg::ObjectList::_timestamp_nanoseconds_type arg)
  {
    msg_.timestamp_nanoseconds = std::move(arg);
    return Init_ObjectList_timestamp_seconds(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_dataid
{
public:
  explicit Init_ObjectList_dataid(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_timestamp_nanoseconds dataid(::ars548_messages::msg::ObjectList::_dataid_type arg)
  {
    msg_.dataid = std::move(arg);
    return Init_ObjectList_timestamp_nanoseconds(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_sqc
{
public:
  explicit Init_ObjectList_sqc(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_dataid sqc(::ars548_messages::msg::ObjectList::_sqc_type arg)
  {
    msg_.sqc = std::move(arg);
    return Init_ObjectList_dataid(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_length
{
public:
  explicit Init_ObjectList_length(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_sqc length(::ars548_messages::msg::ObjectList::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ObjectList_sqc(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_crc
{
public:
  explicit Init_ObjectList_crc(::ars548_messages::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_length crc(::ars548_messages::msg::ObjectList::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_ObjectList_length(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

class Init_ObjectList_header
{
public:
  Init_ObjectList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectList_crc header(::ars548_messages::msg::ObjectList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectList_crc(msg_);
  }

private:
  ::ars548_messages::msg::ObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::ObjectList>()
{
  return ars548_messages::msg::builder::Init_ObjectList_header();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
