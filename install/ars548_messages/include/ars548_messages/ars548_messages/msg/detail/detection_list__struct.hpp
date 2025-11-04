// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/DetectionList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'list_detections'
#include "ars548_messages/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__DetectionList __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__DetectionList __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionList_
{
  using Type = DetectionList_<ContainerAllocator>;

  explicit DetectionList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0ull;
      this->length = 0ul;
      this->sqc = 0ul;
      this->dataid = 0ul;
      this->timestamp_nanoseconds = 0ul;
      this->timestamp_seconds = 0ul;
      this->timestamp_syncstatus = 0;
      this->eventdataqualifier = 0ul;
      this->extendedqualifier = 0;
      this->origin_invalidflags = 0;
      this->origin_xpos = 0.0f;
      this->origin_xstd = 0.0f;
      this->origin_ypos = 0.0f;
      this->origin_ystd = 0.0f;
      this->origin_zpos = 0.0f;
      this->origin_zstd = 0.0f;
      this->origin_roll = 0.0f;
      this->origin_rollstd = 0.0f;
      this->origin_pitch = 0.0f;
      this->origin_pitchstd = 0.0f;
      this->origin_yaw = 0.0f;
      this->origin_yawstd = 0.0f;
      this->list_invalidflags = 0;
      this->list_detections.fill(ars548_messages::msg::Detection_<ContainerAllocator>{_init});
      this->list_radveldomain_min = 0.0f;
      this->list_radveldomain_max = 0.0f;
      this->list_numofdetections = 0ul;
      this->aln_azimuthcorrection = 0.0f;
      this->aln_elevationcorrection = 0.0f;
      this->aln_status = 0;
    }
  }

  explicit DetectionList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    list_detections(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0ull;
      this->length = 0ul;
      this->sqc = 0ul;
      this->dataid = 0ul;
      this->timestamp_nanoseconds = 0ul;
      this->timestamp_seconds = 0ul;
      this->timestamp_syncstatus = 0;
      this->eventdataqualifier = 0ul;
      this->extendedqualifier = 0;
      this->origin_invalidflags = 0;
      this->origin_xpos = 0.0f;
      this->origin_xstd = 0.0f;
      this->origin_ypos = 0.0f;
      this->origin_ystd = 0.0f;
      this->origin_zpos = 0.0f;
      this->origin_zstd = 0.0f;
      this->origin_roll = 0.0f;
      this->origin_rollstd = 0.0f;
      this->origin_pitch = 0.0f;
      this->origin_pitchstd = 0.0f;
      this->origin_yaw = 0.0f;
      this->origin_yawstd = 0.0f;
      this->list_invalidflags = 0;
      this->list_detections.fill(ars548_messages::msg::Detection_<ContainerAllocator>{_alloc, _init});
      this->list_radveldomain_min = 0.0f;
      this->list_radveldomain_max = 0.0f;
      this->list_numofdetections = 0ul;
      this->aln_azimuthcorrection = 0.0f;
      this->aln_elevationcorrection = 0.0f;
      this->aln_status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _crc_type =
    uint64_t;
  _crc_type crc;
  using _length_type =
    uint32_t;
  _length_type length;
  using _sqc_type =
    uint32_t;
  _sqc_type sqc;
  using _dataid_type =
    uint32_t;
  _dataid_type dataid;
  using _timestamp_nanoseconds_type =
    uint32_t;
  _timestamp_nanoseconds_type timestamp_nanoseconds;
  using _timestamp_seconds_type =
    uint32_t;
  _timestamp_seconds_type timestamp_seconds;
  using _timestamp_syncstatus_type =
    uint8_t;
  _timestamp_syncstatus_type timestamp_syncstatus;
  using _eventdataqualifier_type =
    uint32_t;
  _eventdataqualifier_type eventdataqualifier;
  using _extendedqualifier_type =
    uint8_t;
  _extendedqualifier_type extendedqualifier;
  using _origin_invalidflags_type =
    uint16_t;
  _origin_invalidflags_type origin_invalidflags;
  using _origin_xpos_type =
    float;
  _origin_xpos_type origin_xpos;
  using _origin_xstd_type =
    float;
  _origin_xstd_type origin_xstd;
  using _origin_ypos_type =
    float;
  _origin_ypos_type origin_ypos;
  using _origin_ystd_type =
    float;
  _origin_ystd_type origin_ystd;
  using _origin_zpos_type =
    float;
  _origin_zpos_type origin_zpos;
  using _origin_zstd_type =
    float;
  _origin_zstd_type origin_zstd;
  using _origin_roll_type =
    float;
  _origin_roll_type origin_roll;
  using _origin_rollstd_type =
    float;
  _origin_rollstd_type origin_rollstd;
  using _origin_pitch_type =
    float;
  _origin_pitch_type origin_pitch;
  using _origin_pitchstd_type =
    float;
  _origin_pitchstd_type origin_pitchstd;
  using _origin_yaw_type =
    float;
  _origin_yaw_type origin_yaw;
  using _origin_yawstd_type =
    float;
  _origin_yawstd_type origin_yawstd;
  using _list_invalidflags_type =
    uint8_t;
  _list_invalidflags_type list_invalidflags;
  using _list_detections_type =
    std::array<ars548_messages::msg::Detection_<ContainerAllocator>, 800>;
  _list_detections_type list_detections;
  using _list_radveldomain_min_type =
    float;
  _list_radveldomain_min_type list_radveldomain_min;
  using _list_radveldomain_max_type =
    float;
  _list_radveldomain_max_type list_radveldomain_max;
  using _list_numofdetections_type =
    uint32_t;
  _list_numofdetections_type list_numofdetections;
  using _aln_azimuthcorrection_type =
    float;
  _aln_azimuthcorrection_type aln_azimuthcorrection;
  using _aln_elevationcorrection_type =
    float;
  _aln_elevationcorrection_type aln_elevationcorrection;
  using _aln_status_type =
    uint8_t;
  _aln_status_type aln_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__crc(
    const uint64_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }
  Type & set__length(
    const uint32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__sqc(
    const uint32_t & _arg)
  {
    this->sqc = _arg;
    return *this;
  }
  Type & set__dataid(
    const uint32_t & _arg)
  {
    this->dataid = _arg;
    return *this;
  }
  Type & set__timestamp_nanoseconds(
    const uint32_t & _arg)
  {
    this->timestamp_nanoseconds = _arg;
    return *this;
  }
  Type & set__timestamp_seconds(
    const uint32_t & _arg)
  {
    this->timestamp_seconds = _arg;
    return *this;
  }
  Type & set__timestamp_syncstatus(
    const uint8_t & _arg)
  {
    this->timestamp_syncstatus = _arg;
    return *this;
  }
  Type & set__eventdataqualifier(
    const uint32_t & _arg)
  {
    this->eventdataqualifier = _arg;
    return *this;
  }
  Type & set__extendedqualifier(
    const uint8_t & _arg)
  {
    this->extendedqualifier = _arg;
    return *this;
  }
  Type & set__origin_invalidflags(
    const uint16_t & _arg)
  {
    this->origin_invalidflags = _arg;
    return *this;
  }
  Type & set__origin_xpos(
    const float & _arg)
  {
    this->origin_xpos = _arg;
    return *this;
  }
  Type & set__origin_xstd(
    const float & _arg)
  {
    this->origin_xstd = _arg;
    return *this;
  }
  Type & set__origin_ypos(
    const float & _arg)
  {
    this->origin_ypos = _arg;
    return *this;
  }
  Type & set__origin_ystd(
    const float & _arg)
  {
    this->origin_ystd = _arg;
    return *this;
  }
  Type & set__origin_zpos(
    const float & _arg)
  {
    this->origin_zpos = _arg;
    return *this;
  }
  Type & set__origin_zstd(
    const float & _arg)
  {
    this->origin_zstd = _arg;
    return *this;
  }
  Type & set__origin_roll(
    const float & _arg)
  {
    this->origin_roll = _arg;
    return *this;
  }
  Type & set__origin_rollstd(
    const float & _arg)
  {
    this->origin_rollstd = _arg;
    return *this;
  }
  Type & set__origin_pitch(
    const float & _arg)
  {
    this->origin_pitch = _arg;
    return *this;
  }
  Type & set__origin_pitchstd(
    const float & _arg)
  {
    this->origin_pitchstd = _arg;
    return *this;
  }
  Type & set__origin_yaw(
    const float & _arg)
  {
    this->origin_yaw = _arg;
    return *this;
  }
  Type & set__origin_yawstd(
    const float & _arg)
  {
    this->origin_yawstd = _arg;
    return *this;
  }
  Type & set__list_invalidflags(
    const uint8_t & _arg)
  {
    this->list_invalidflags = _arg;
    return *this;
  }
  Type & set__list_detections(
    const std::array<ars548_messages::msg::Detection_<ContainerAllocator>, 800> & _arg)
  {
    this->list_detections = _arg;
    return *this;
  }
  Type & set__list_radveldomain_min(
    const float & _arg)
  {
    this->list_radveldomain_min = _arg;
    return *this;
  }
  Type & set__list_radveldomain_max(
    const float & _arg)
  {
    this->list_radveldomain_max = _arg;
    return *this;
  }
  Type & set__list_numofdetections(
    const uint32_t & _arg)
  {
    this->list_numofdetections = _arg;
    return *this;
  }
  Type & set__aln_azimuthcorrection(
    const float & _arg)
  {
    this->aln_azimuthcorrection = _arg;
    return *this;
  }
  Type & set__aln_elevationcorrection(
    const float & _arg)
  {
    this->aln_elevationcorrection = _arg;
    return *this;
  }
  Type & set__aln_status(
    const uint8_t & _arg)
  {
    this->aln_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::DetectionList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::DetectionList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::DetectionList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::DetectionList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__DetectionList
    std::shared_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__DetectionList
    std::shared_ptr<ars548_messages::msg::DetectionList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->sqc != other.sqc) {
      return false;
    }
    if (this->dataid != other.dataid) {
      return false;
    }
    if (this->timestamp_nanoseconds != other.timestamp_nanoseconds) {
      return false;
    }
    if (this->timestamp_seconds != other.timestamp_seconds) {
      return false;
    }
    if (this->timestamp_syncstatus != other.timestamp_syncstatus) {
      return false;
    }
    if (this->eventdataqualifier != other.eventdataqualifier) {
      return false;
    }
    if (this->extendedqualifier != other.extendedqualifier) {
      return false;
    }
    if (this->origin_invalidflags != other.origin_invalidflags) {
      return false;
    }
    if (this->origin_xpos != other.origin_xpos) {
      return false;
    }
    if (this->origin_xstd != other.origin_xstd) {
      return false;
    }
    if (this->origin_ypos != other.origin_ypos) {
      return false;
    }
    if (this->origin_ystd != other.origin_ystd) {
      return false;
    }
    if (this->origin_zpos != other.origin_zpos) {
      return false;
    }
    if (this->origin_zstd != other.origin_zstd) {
      return false;
    }
    if (this->origin_roll != other.origin_roll) {
      return false;
    }
    if (this->origin_rollstd != other.origin_rollstd) {
      return false;
    }
    if (this->origin_pitch != other.origin_pitch) {
      return false;
    }
    if (this->origin_pitchstd != other.origin_pitchstd) {
      return false;
    }
    if (this->origin_yaw != other.origin_yaw) {
      return false;
    }
    if (this->origin_yawstd != other.origin_yawstd) {
      return false;
    }
    if (this->list_invalidflags != other.list_invalidflags) {
      return false;
    }
    if (this->list_detections != other.list_detections) {
      return false;
    }
    if (this->list_radveldomain_min != other.list_radveldomain_min) {
      return false;
    }
    if (this->list_radveldomain_max != other.list_radveldomain_max) {
      return false;
    }
    if (this->list_numofdetections != other.list_numofdetections) {
      return false;
    }
    if (this->aln_azimuthcorrection != other.aln_azimuthcorrection) {
      return false;
    }
    if (this->aln_elevationcorrection != other.aln_elevationcorrection) {
      return false;
    }
    if (this->aln_status != other.aln_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionList_

// alias to use template instance with default allocator
using DetectionList =
  ars548_messages::msg::DetectionList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__STRUCT_HPP_
