// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STATUS__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_Status_status_blockagestatus
{
public:
  explicit Init_Status_status_blockagestatus(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::Status status_blockagestatus(::ars548_messages::msg::Status::_status_blockagestatus_type arg)
  {
    msg_.status_blockagestatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_temperaturestatus
{
public:
  explicit Init_Status_status_temperaturestatus(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_blockagestatus status_temperaturestatus(::ars548_messages::msg::Status::_status_temperaturestatus_type arg)
  {
    msg_.status_temperaturestatus = std::move(arg);
    return Init_Status_status_blockagestatus(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_voltagestatus
{
public:
  explicit Init_Status_status_voltagestatus(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_temperaturestatus status_voltagestatus(::ars548_messages::msg::Status::_status_voltagestatus_type arg)
  {
    msg_.status_voltagestatus = std::move(arg);
    return Init_Status_status_temperaturestatus(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_radarstatus
{
public:
  explicit Init_Status_status_radarstatus(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_voltagestatus status_radarstatus(::ars548_messages::msg::Status::_status_radarstatus_type arg)
  {
    msg_.status_radarstatus = std::move(arg);
    return Init_Status_status_voltagestatus(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_characteristicspeed
{
public:
  explicit Init_Status_status_characteristicspeed(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_radarstatus status_characteristicspeed(::ars548_messages::msg::Status::_status_characteristicspeed_type arg)
  {
    msg_.status_characteristicspeed = std::move(arg);
    return Init_Status_status_radarstatus(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_drivingdirection
{
public:
  explicit Init_Status_status_drivingdirection(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_characteristicspeed status_drivingdirection(::ars548_messages::msg::Status::_status_drivingdirection_type arg)
  {
    msg_.status_drivingdirection = std::move(arg);
    return Init_Status_status_characteristicspeed(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_steeringangle
{
public:
  explicit Init_Status_status_steeringangle(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_drivingdirection status_steeringangle(::ars548_messages::msg::Status::_status_steeringangle_type arg)
  {
    msg_.status_steeringangle = std::move(arg);
    return Init_Status_status_drivingdirection(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_yawrate
{
public:
  explicit Init_Status_status_yawrate(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_steeringangle status_yawrate(::ars548_messages::msg::Status::_status_yawrate_type arg)
  {
    msg_.status_yawrate = std::move(arg);
    return Init_Status_status_steeringangle(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_lateralacceleration
{
public:
  explicit Init_Status_status_lateralacceleration(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_yawrate status_lateralacceleration(::ars548_messages::msg::Status::_status_lateralacceleration_type arg)
  {
    msg_.status_lateralacceleration = std::move(arg);
    return Init_Status_status_yawrate(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_longitudinalacceleration
{
public:
  explicit Init_Status_status_longitudinalacceleration(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_lateralacceleration status_longitudinalacceleration(::ars548_messages::msg::Status::_status_longitudinalacceleration_type arg)
  {
    msg_.status_longitudinalacceleration = std::move(arg);
    return Init_Status_status_lateralacceleration(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_status_longitudinalvelocity
{
public:
  explicit Init_Status_status_longitudinalvelocity(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_longitudinalacceleration status_longitudinalvelocity(::ars548_messages::msg::Status::_status_longitudinalvelocity_type arg)
  {
    msg_.status_longitudinalvelocity = std::move(arg);
    return Init_Status_status_longitudinalacceleration(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_configurationcounter
{
public:
  explicit Init_Status_configurationcounter(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status_longitudinalvelocity configurationcounter(::ars548_messages::msg::Status::_configurationcounter_type arg)
  {
    msg_.configurationcounter = std::move(arg);
    return Init_Status_status_longitudinalvelocity(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_sensoripaddress_1
{
public:
  explicit Init_Status_sensoripaddress_1(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_configurationcounter sensoripaddress_1(::ars548_messages::msg::Status::_sensoripaddress_1_type arg)
  {
    msg_.sensoripaddress_1 = std::move(arg);
    return Init_Status_configurationcounter(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_sensoripaddress_0
{
public:
  explicit Init_Status_sensoripaddress_0(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_sensoripaddress_1 sensoripaddress_0(::ars548_messages::msg::Status::_sensoripaddress_0_type arg)
  {
    msg_.sensoripaddress_0 = std::move(arg);
    return Init_Status_sensoripaddress_1(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_powersave_standstill
{
public:
  explicit Init_Status_powersave_standstill(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_sensoripaddress_0 powersave_standstill(::ars548_messages::msg::Status::_powersave_standstill_type arg)
  {
    msg_.powersave_standstill = std::move(arg);
    return Init_Status_sensoripaddress_0(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_hcc
{
public:
  explicit Init_Status_hcc(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_powersave_standstill hcc(::ars548_messages::msg::Status::_hcc_type arg)
  {
    msg_.hcc = std::move(arg);
    return Init_Status_powersave_standstill(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_timeslot
{
public:
  explicit Init_Status_timeslot(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_hcc timeslot(::ars548_messages::msg::Status::_timeslot_type arg)
  {
    msg_.timeslot = std::move(arg);
    return Init_Status_hcc(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_cycletime
{
public:
  explicit Init_Status_cycletime(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_timeslot cycletime(::ars548_messages::msg::Status::_cycletime_type arg)
  {
    msg_.cycletime = std::move(arg);
    return Init_Status_timeslot(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_frequencyslot
{
public:
  explicit Init_Status_frequencyslot(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_cycletime frequencyslot(::ars548_messages::msg::Status::_frequencyslot_type arg)
  {
    msg_.frequencyslot = std::move(arg);
    return Init_Status_cycletime(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_maximumdistance
{
public:
  explicit Init_Status_maximumdistance(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_frequencyslot maximumdistance(::ars548_messages::msg::Status::_maximumdistance_type arg)
  {
    msg_.maximumdistance = std::move(arg);
    return Init_Status_frequencyslot(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_wheelbase
{
public:
  explicit Init_Status_wheelbase(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_maximumdistance wheelbase(::ars548_messages::msg::Status::_wheelbase_type arg)
  {
    msg_.wheelbase = std::move(arg);
    return Init_Status_maximumdistance(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_height
{
public:
  explicit Init_Status_height(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_wheelbase height(::ars548_messages::msg::Status::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Status_wheelbase(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_width
{
public:
  explicit Init_Status_width(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_height width(::ars548_messages::msg::Status::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Status_height(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_length
{
public:
  explicit Init_Status_length(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_width length(::ars548_messages::msg::Status::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Status_width(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_plugorientation
{
public:
  explicit Init_Status_plugorientation(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_length plugorientation(::ars548_messages::msg::Status::_plugorientation_type arg)
  {
    msg_.plugorientation = std::move(arg);
    return Init_Status_length(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_pitch
{
public:
  explicit Init_Status_pitch(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_plugorientation pitch(::ars548_messages::msg::Status::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Status_plugorientation(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_yaw
{
public:
  explicit Init_Status_yaw(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_pitch yaw(::ars548_messages::msg::Status::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Status_pitch(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_vertical
{
public:
  explicit Init_Status_vertical(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_yaw vertical(::ars548_messages::msg::Status::_vertical_type arg)
  {
    msg_.vertical = std::move(arg);
    return Init_Status_yaw(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_lateral
{
public:
  explicit Init_Status_lateral(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vertical lateral(::ars548_messages::msg::Status::_lateral_type arg)
  {
    msg_.lateral = std::move(arg);
    return Init_Status_vertical(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_longitudinal
{
public:
  explicit Init_Status_longitudinal(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_lateral longitudinal(::ars548_messages::msg::Status::_longitudinal_type arg)
  {
    msg_.longitudinal = std::move(arg);
    return Init_Status_lateral(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_swversion_patch
{
public:
  explicit Init_Status_swversion_patch(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_longitudinal swversion_patch(::ars548_messages::msg::Status::_swversion_patch_type arg)
  {
    msg_.swversion_patch = std::move(arg);
    return Init_Status_longitudinal(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_swversion_minor
{
public:
  explicit Init_Status_swversion_minor(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_swversion_patch swversion_minor(::ars548_messages::msg::Status::_swversion_minor_type arg)
  {
    msg_.swversion_minor = std::move(arg);
    return Init_Status_swversion_patch(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_swversion_major
{
public:
  explicit Init_Status_swversion_major(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_swversion_minor swversion_major(::ars548_messages::msg::Status::_swversion_major_type arg)
  {
    msg_.swversion_major = std::move(arg);
    return Init_Status_swversion_minor(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_timestamp_syncstatus
{
public:
  explicit Init_Status_timestamp_syncstatus(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_swversion_major timestamp_syncstatus(::ars548_messages::msg::Status::_timestamp_syncstatus_type arg)
  {
    msg_.timestamp_syncstatus = std::move(arg);
    return Init_Status_swversion_major(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_timestamp_seconds
{
public:
  explicit Init_Status_timestamp_seconds(::ars548_messages::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_timestamp_syncstatus timestamp_seconds(::ars548_messages::msg::Status::_timestamp_seconds_type arg)
  {
    msg_.timestamp_seconds = std::move(arg);
    return Init_Status_timestamp_syncstatus(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

class Init_Status_timestamp_nanoseconds
{
public:
  Init_Status_timestamp_nanoseconds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_timestamp_seconds timestamp_nanoseconds(::ars548_messages::msg::Status::_timestamp_nanoseconds_type arg)
  {
    msg_.timestamp_nanoseconds = std::move(arg);
    return Init_Status_timestamp_seconds(msg_);
  }

private:
  ::ars548_messages::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::Status>()
{
  return ars548_messages::msg::builder::Init_Status_timestamp_nanoseconds();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__STATUS__BUILDER_HPP_
