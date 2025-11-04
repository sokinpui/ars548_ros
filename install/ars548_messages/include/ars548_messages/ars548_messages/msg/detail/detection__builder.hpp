// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_Detection_u_sortindex
{
public:
  explicit Init_Detection_u_sortindex(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::Detection u_sortindex(::ars548_messages::msg::Detection::_u_sortindex_type arg)
  {
    msg_.u_sortindex = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_ambiguityflag
{
public:
  explicit Init_Detection_u_ambiguityflag(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_sortindex u_ambiguityflag(::ars548_messages::msg::Detection::_u_ambiguityflag_type arg)
  {
    msg_.u_ambiguityflag = std::move(arg);
    return Init_Detection_u_sortindex(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_objectid
{
public:
  explicit Init_Detection_u_objectid(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_ambiguityflag u_objectid(::ars548_messages::msg::Detection::_u_objectid_type arg)
  {
    msg_.u_objectid = std::move(arg);
    return Init_Detection_u_ambiguityflag(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_multitargetprobabilitym
{
public:
  explicit Init_Detection_u_multitargetprobabilitym(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_objectid u_multitargetprobabilitym(::ars548_messages::msg::Detection::_u_multitargetprobabilitym_type arg)
  {
    msg_.u_multitargetprobabilitym = std::move(arg);
    return Init_Detection_u_objectid(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_classification
{
public:
  explicit Init_Detection_u_classification(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_multitargetprobabilitym u_classification(::ars548_messages::msg::Detection::_u_classification_type arg)
  {
    msg_.u_classification = std::move(arg);
    return Init_Detection_u_multitargetprobabilitym(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_positivepredictivevalue
{
public:
  explicit Init_Detection_u_positivepredictivevalue(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_classification u_positivepredictivevalue(::ars548_messages::msg::Detection::_u_positivepredictivevalue_type arg)
  {
    msg_.u_positivepredictivevalue = std::move(arg);
    return Init_Detection_u_classification(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_measurementid
{
public:
  explicit Init_Detection_u_measurementid(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_positivepredictivevalue u_measurementid(::ars548_messages::msg::Detection::_u_measurementid_type arg)
  {
    msg_.u_measurementid = std::move(arg);
    return Init_Detection_u_positivepredictivevalue(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_s_rcs
{
public:
  explicit Init_Detection_s_rcs(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_measurementid s_rcs(::ars548_messages::msg::Detection::_s_rcs_type arg)
  {
    msg_.s_rcs = std::move(arg);
    return Init_Detection_u_measurementid(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_rangeratestd
{
public:
  explicit Init_Detection_f_rangeratestd(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_s_rcs f_rangeratestd(::ars548_messages::msg::Detection::_f_rangeratestd_type arg)
  {
    msg_.f_rangeratestd = std::move(arg);
    return Init_Detection_s_rcs(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_rangerate
{
public:
  explicit Init_Detection_f_rangerate(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_f_rangeratestd f_rangerate(::ars548_messages::msg::Detection::_f_rangerate_type arg)
  {
    msg_.f_rangerate = std::move(arg);
    return Init_Detection_f_rangeratestd(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_rangestd
{
public:
  explicit Init_Detection_f_rangestd(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_f_rangerate f_rangestd(::ars548_messages::msg::Detection::_f_rangestd_type arg)
  {
    msg_.f_rangestd = std::move(arg);
    return Init_Detection_f_rangerate(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_range
{
public:
  explicit Init_Detection_f_range(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_f_rangestd f_range(::ars548_messages::msg::Detection::_f_range_type arg)
  {
    msg_.f_range = std::move(arg);
    return Init_Detection_f_rangestd(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_elevationanglestd
{
public:
  explicit Init_Detection_f_elevationanglestd(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_f_range f_elevationanglestd(::ars548_messages::msg::Detection::_f_elevationanglestd_type arg)
  {
    msg_.f_elevationanglestd = std::move(arg);
    return Init_Detection_f_range(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_elevationangle
{
public:
  explicit Init_Detection_f_elevationangle(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_f_elevationanglestd f_elevationangle(::ars548_messages::msg::Detection::_f_elevationangle_type arg)
  {
    msg_.f_elevationangle = std::move(arg);
    return Init_Detection_f_elevationanglestd(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_u_invalidflags
{
public:
  explicit Init_Detection_u_invalidflags(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_f_elevationangle u_invalidflags(::ars548_messages::msg::Detection::_u_invalidflags_type arg)
  {
    msg_.u_invalidflags = std::move(arg);
    return Init_Detection_f_elevationangle(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_azimuthanglestd
{
public:
  explicit Init_Detection_f_azimuthanglestd(::ars548_messages::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_u_invalidflags f_azimuthanglestd(::ars548_messages::msg::Detection::_f_azimuthanglestd_type arg)
  {
    msg_.f_azimuthanglestd = std::move(arg);
    return Init_Detection_u_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

class Init_Detection_f_azimuthangle
{
public:
  Init_Detection_f_azimuthangle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_f_azimuthanglestd f_azimuthangle(::ars548_messages::msg::Detection::_f_azimuthangle_type arg)
  {
    msg_.f_azimuthangle = std::move(arg);
    return Init_Detection_f_azimuthanglestd(msg_);
  }

private:
  ::ars548_messages::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::Detection>()
{
  return ars548_messages::msg::builder::Init_Detection_f_azimuthangle();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION__BUILDER_HPP_
