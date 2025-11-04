// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/DetectionList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/detection_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_DetectionList_aln_status
{
public:
  explicit Init_DetectionList_aln_status(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::DetectionList aln_status(::ars548_messages::msg::DetectionList::_aln_status_type arg)
  {
    msg_.aln_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_aln_elevationcorrection
{
public:
  explicit Init_DetectionList_aln_elevationcorrection(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_aln_status aln_elevationcorrection(::ars548_messages::msg::DetectionList::_aln_elevationcorrection_type arg)
  {
    msg_.aln_elevationcorrection = std::move(arg);
    return Init_DetectionList_aln_status(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_aln_azimuthcorrection
{
public:
  explicit Init_DetectionList_aln_azimuthcorrection(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_aln_elevationcorrection aln_azimuthcorrection(::ars548_messages::msg::DetectionList::_aln_azimuthcorrection_type arg)
  {
    msg_.aln_azimuthcorrection = std::move(arg);
    return Init_DetectionList_aln_elevationcorrection(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_list_numofdetections
{
public:
  explicit Init_DetectionList_list_numofdetections(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_aln_azimuthcorrection list_numofdetections(::ars548_messages::msg::DetectionList::_list_numofdetections_type arg)
  {
    msg_.list_numofdetections = std::move(arg);
    return Init_DetectionList_aln_azimuthcorrection(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_list_radveldomain_max
{
public:
  explicit Init_DetectionList_list_radveldomain_max(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_list_numofdetections list_radveldomain_max(::ars548_messages::msg::DetectionList::_list_radveldomain_max_type arg)
  {
    msg_.list_radveldomain_max = std::move(arg);
    return Init_DetectionList_list_numofdetections(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_list_radveldomain_min
{
public:
  explicit Init_DetectionList_list_radveldomain_min(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_list_radveldomain_max list_radveldomain_min(::ars548_messages::msg::DetectionList::_list_radveldomain_min_type arg)
  {
    msg_.list_radveldomain_min = std::move(arg);
    return Init_DetectionList_list_radveldomain_max(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_list_detections
{
public:
  explicit Init_DetectionList_list_detections(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_list_radveldomain_min list_detections(::ars548_messages::msg::DetectionList::_list_detections_type arg)
  {
    msg_.list_detections = std::move(arg);
    return Init_DetectionList_list_radveldomain_min(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_list_invalidflags
{
public:
  explicit Init_DetectionList_list_invalidflags(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_list_detections list_invalidflags(::ars548_messages::msg::DetectionList::_list_invalidflags_type arg)
  {
    msg_.list_invalidflags = std::move(arg);
    return Init_DetectionList_list_detections(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_yawstd
{
public:
  explicit Init_DetectionList_origin_yawstd(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_list_invalidflags origin_yawstd(::ars548_messages::msg::DetectionList::_origin_yawstd_type arg)
  {
    msg_.origin_yawstd = std::move(arg);
    return Init_DetectionList_list_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_yaw
{
public:
  explicit Init_DetectionList_origin_yaw(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_yawstd origin_yaw(::ars548_messages::msg::DetectionList::_origin_yaw_type arg)
  {
    msg_.origin_yaw = std::move(arg);
    return Init_DetectionList_origin_yawstd(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_pitchstd
{
public:
  explicit Init_DetectionList_origin_pitchstd(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_yaw origin_pitchstd(::ars548_messages::msg::DetectionList::_origin_pitchstd_type arg)
  {
    msg_.origin_pitchstd = std::move(arg);
    return Init_DetectionList_origin_yaw(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_pitch
{
public:
  explicit Init_DetectionList_origin_pitch(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_pitchstd origin_pitch(::ars548_messages::msg::DetectionList::_origin_pitch_type arg)
  {
    msg_.origin_pitch = std::move(arg);
    return Init_DetectionList_origin_pitchstd(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_rollstd
{
public:
  explicit Init_DetectionList_origin_rollstd(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_pitch origin_rollstd(::ars548_messages::msg::DetectionList::_origin_rollstd_type arg)
  {
    msg_.origin_rollstd = std::move(arg);
    return Init_DetectionList_origin_pitch(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_roll
{
public:
  explicit Init_DetectionList_origin_roll(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_rollstd origin_roll(::ars548_messages::msg::DetectionList::_origin_roll_type arg)
  {
    msg_.origin_roll = std::move(arg);
    return Init_DetectionList_origin_rollstd(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_zstd
{
public:
  explicit Init_DetectionList_origin_zstd(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_roll origin_zstd(::ars548_messages::msg::DetectionList::_origin_zstd_type arg)
  {
    msg_.origin_zstd = std::move(arg);
    return Init_DetectionList_origin_roll(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_zpos
{
public:
  explicit Init_DetectionList_origin_zpos(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_zstd origin_zpos(::ars548_messages::msg::DetectionList::_origin_zpos_type arg)
  {
    msg_.origin_zpos = std::move(arg);
    return Init_DetectionList_origin_zstd(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_ystd
{
public:
  explicit Init_DetectionList_origin_ystd(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_zpos origin_ystd(::ars548_messages::msg::DetectionList::_origin_ystd_type arg)
  {
    msg_.origin_ystd = std::move(arg);
    return Init_DetectionList_origin_zpos(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_ypos
{
public:
  explicit Init_DetectionList_origin_ypos(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_ystd origin_ypos(::ars548_messages::msg::DetectionList::_origin_ypos_type arg)
  {
    msg_.origin_ypos = std::move(arg);
    return Init_DetectionList_origin_ystd(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_xstd
{
public:
  explicit Init_DetectionList_origin_xstd(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_ypos origin_xstd(::ars548_messages::msg::DetectionList::_origin_xstd_type arg)
  {
    msg_.origin_xstd = std::move(arg);
    return Init_DetectionList_origin_ypos(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_xpos
{
public:
  explicit Init_DetectionList_origin_xpos(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_xstd origin_xpos(::ars548_messages::msg::DetectionList::_origin_xpos_type arg)
  {
    msg_.origin_xpos = std::move(arg);
    return Init_DetectionList_origin_xstd(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_origin_invalidflags
{
public:
  explicit Init_DetectionList_origin_invalidflags(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_xpos origin_invalidflags(::ars548_messages::msg::DetectionList::_origin_invalidflags_type arg)
  {
    msg_.origin_invalidflags = std::move(arg);
    return Init_DetectionList_origin_xpos(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_extendedqualifier
{
public:
  explicit Init_DetectionList_extendedqualifier(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_origin_invalidflags extendedqualifier(::ars548_messages::msg::DetectionList::_extendedqualifier_type arg)
  {
    msg_.extendedqualifier = std::move(arg);
    return Init_DetectionList_origin_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_eventdataqualifier
{
public:
  explicit Init_DetectionList_eventdataqualifier(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_extendedqualifier eventdataqualifier(::ars548_messages::msg::DetectionList::_eventdataqualifier_type arg)
  {
    msg_.eventdataqualifier = std::move(arg);
    return Init_DetectionList_extendedqualifier(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_timestamp_syncstatus
{
public:
  explicit Init_DetectionList_timestamp_syncstatus(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_eventdataqualifier timestamp_syncstatus(::ars548_messages::msg::DetectionList::_timestamp_syncstatus_type arg)
  {
    msg_.timestamp_syncstatus = std::move(arg);
    return Init_DetectionList_eventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_timestamp_seconds
{
public:
  explicit Init_DetectionList_timestamp_seconds(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_timestamp_syncstatus timestamp_seconds(::ars548_messages::msg::DetectionList::_timestamp_seconds_type arg)
  {
    msg_.timestamp_seconds = std::move(arg);
    return Init_DetectionList_timestamp_syncstatus(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_timestamp_nanoseconds
{
public:
  explicit Init_DetectionList_timestamp_nanoseconds(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_timestamp_seconds timestamp_nanoseconds(::ars548_messages::msg::DetectionList::_timestamp_nanoseconds_type arg)
  {
    msg_.timestamp_nanoseconds = std::move(arg);
    return Init_DetectionList_timestamp_seconds(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_dataid
{
public:
  explicit Init_DetectionList_dataid(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_timestamp_nanoseconds dataid(::ars548_messages::msg::DetectionList::_dataid_type arg)
  {
    msg_.dataid = std::move(arg);
    return Init_DetectionList_timestamp_nanoseconds(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_sqc
{
public:
  explicit Init_DetectionList_sqc(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_dataid sqc(::ars548_messages::msg::DetectionList::_sqc_type arg)
  {
    msg_.sqc = std::move(arg);
    return Init_DetectionList_dataid(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_length
{
public:
  explicit Init_DetectionList_length(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_sqc length(::ars548_messages::msg::DetectionList::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_DetectionList_sqc(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_crc
{
public:
  explicit Init_DetectionList_crc(::ars548_messages::msg::DetectionList & msg)
  : msg_(msg)
  {}
  Init_DetectionList_length crc(::ars548_messages::msg::DetectionList::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_DetectionList_length(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

class Init_DetectionList_header
{
public:
  Init_DetectionList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionList_crc header(::ars548_messages::msg::DetectionList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionList_crc(msg_);
  }

private:
  ::ars548_messages::msg::DetectionList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::DetectionList>()
{
  return ars548_messages::msg::builder::Init_DetectionList_header();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__BUILDER_HPP_
