// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/SensorConfiguration.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/sensor_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_SensorConfiguration_newnetworkconfiguration
{
public:
  explicit Init_SensorConfiguration_newnetworkconfiguration(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::SensorConfiguration newnetworkconfiguration(::ars548_messages::msg::SensorConfiguration::_newnetworkconfiguration_type arg)
  {
    msg_.newnetworkconfiguration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_newradarparameters
{
public:
  explicit Init_SensorConfiguration_newradarparameters(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_newnetworkconfiguration newradarparameters(::ars548_messages::msg::SensorConfiguration::_newradarparameters_type arg)
  {
    msg_.newradarparameters = std::move(arg);
    return Init_SensorConfiguration_newnetworkconfiguration(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_newvehicleparameters
{
public:
  explicit Init_SensorConfiguration_newvehicleparameters(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_newradarparameters newvehicleparameters(::ars548_messages::msg::SensorConfiguration::_newvehicleparameters_type arg)
  {
    msg_.newvehicleparameters = std::move(arg);
    return Init_SensorConfiguration_newradarparameters(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_newsensormounting
{
public:
  explicit Init_SensorConfiguration_newsensormounting(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_newvehicleparameters newsensormounting(::ars548_messages::msg::SensorConfiguration::_newsensormounting_type arg)
  {
    msg_.newsensormounting = std::move(arg);
    return Init_SensorConfiguration_newvehicleparameters(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_sensoripaddress_1
{
public:
  explicit Init_SensorConfiguration_sensoripaddress_1(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_newsensormounting sensoripaddress_1(::ars548_messages::msg::SensorConfiguration::_sensoripaddress_1_type arg)
  {
    msg_.sensoripaddress_1 = std::move(arg);
    return Init_SensorConfiguration_newsensormounting(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_sensoripaddress_0
{
public:
  explicit Init_SensorConfiguration_sensoripaddress_0(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_sensoripaddress_1 sensoripaddress_0(::ars548_messages::msg::SensorConfiguration::_sensoripaddress_0_type arg)
  {
    msg_.sensoripaddress_0 = std::move(arg);
    return Init_SensorConfiguration_sensoripaddress_1(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_powersave_standstill
{
public:
  explicit Init_SensorConfiguration_powersave_standstill(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_sensoripaddress_0 powersave_standstill(::ars548_messages::msg::SensorConfiguration::_powersave_standstill_type arg)
  {
    msg_.powersave_standstill = std::move(arg);
    return Init_SensorConfiguration_sensoripaddress_0(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_hcc
{
public:
  explicit Init_SensorConfiguration_hcc(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_powersave_standstill hcc(::ars548_messages::msg::SensorConfiguration::_hcc_type arg)
  {
    msg_.hcc = std::move(arg);
    return Init_SensorConfiguration_powersave_standstill(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_timeslot
{
public:
  explicit Init_SensorConfiguration_timeslot(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_hcc timeslot(::ars548_messages::msg::SensorConfiguration::_timeslot_type arg)
  {
    msg_.timeslot = std::move(arg);
    return Init_SensorConfiguration_hcc(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_cycletime
{
public:
  explicit Init_SensorConfiguration_cycletime(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_timeslot cycletime(::ars548_messages::msg::SensorConfiguration::_cycletime_type arg)
  {
    msg_.cycletime = std::move(arg);
    return Init_SensorConfiguration_timeslot(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_frequencslot
{
public:
  explicit Init_SensorConfiguration_frequencslot(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_cycletime frequencslot(::ars548_messages::msg::SensorConfiguration::_frequencslot_type arg)
  {
    msg_.frequencslot = std::move(arg);
    return Init_SensorConfiguration_cycletime(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_maximumdistance
{
public:
  explicit Init_SensorConfiguration_maximumdistance(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_frequencslot maximumdistance(::ars548_messages::msg::SensorConfiguration::_maximumdistance_type arg)
  {
    msg_.maximumdistance = std::move(arg);
    return Init_SensorConfiguration_frequencslot(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_wheelbase
{
public:
  explicit Init_SensorConfiguration_wheelbase(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_maximumdistance wheelbase(::ars548_messages::msg::SensorConfiguration::_wheelbase_type arg)
  {
    msg_.wheelbase = std::move(arg);
    return Init_SensorConfiguration_maximumdistance(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_height
{
public:
  explicit Init_SensorConfiguration_height(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_wheelbase height(::ars548_messages::msg::SensorConfiguration::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SensorConfiguration_wheelbase(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_width
{
public:
  explicit Init_SensorConfiguration_width(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_height width(::ars548_messages::msg::SensorConfiguration::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SensorConfiguration_height(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_length
{
public:
  explicit Init_SensorConfiguration_length(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_width length(::ars548_messages::msg::SensorConfiguration::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SensorConfiguration_width(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_plugorientation
{
public:
  explicit Init_SensorConfiguration_plugorientation(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_length plugorientation(::ars548_messages::msg::SensorConfiguration::_plugorientation_type arg)
  {
    msg_.plugorientation = std::move(arg);
    return Init_SensorConfiguration_length(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_pitch
{
public:
  explicit Init_SensorConfiguration_pitch(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_plugorientation pitch(::ars548_messages::msg::SensorConfiguration::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SensorConfiguration_plugorientation(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_yaw
{
public:
  explicit Init_SensorConfiguration_yaw(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_pitch yaw(::ars548_messages::msg::SensorConfiguration::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SensorConfiguration_pitch(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_vertical
{
public:
  explicit Init_SensorConfiguration_vertical(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_yaw vertical(::ars548_messages::msg::SensorConfiguration::_vertical_type arg)
  {
    msg_.vertical = std::move(arg);
    return Init_SensorConfiguration_yaw(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_lateral
{
public:
  explicit Init_SensorConfiguration_lateral(::ars548_messages::msg::SensorConfiguration & msg)
  : msg_(msg)
  {}
  Init_SensorConfiguration_vertical lateral(::ars548_messages::msg::SensorConfiguration::_lateral_type arg)
  {
    msg_.lateral = std::move(arg);
    return Init_SensorConfiguration_vertical(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

class Init_SensorConfiguration_longitudinal
{
public:
  Init_SensorConfiguration_longitudinal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorConfiguration_lateral longitudinal(::ars548_messages::msg::SensorConfiguration::_longitudinal_type arg)
  {
    msg_.longitudinal = std::move(arg);
    return Init_SensorConfiguration_lateral(msg_);
  }

private:
  ::ars548_messages::msg::SensorConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::SensorConfiguration>()
{
  return ars548_messages::msg::builder::Init_SensorConfiguration_longitudinal();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__BUILDER_HPP_
