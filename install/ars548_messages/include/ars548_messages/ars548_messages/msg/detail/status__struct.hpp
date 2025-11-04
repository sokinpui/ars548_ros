// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STATUS__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__Status __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_nanoseconds = 0ul;
      this->timestamp_seconds = 0ul;
      this->timestamp_syncstatus = 0;
      this->swversion_major = 0;
      this->swversion_minor = 0;
      this->swversion_patch = 0;
      this->longitudinal = 0.0f;
      this->lateral = 0.0f;
      this->vertical = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->plugorientation = 0;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->wheelbase = 0.0f;
      this->maximumdistance = 0;
      this->frequencyslot = 0;
      this->cycletime = 0;
      this->timeslot = 0;
      this->hcc = 0;
      this->powersave_standstill = 0;
      this->sensoripaddress_0 = 0ul;
      this->sensoripaddress_1 = 0ul;
      this->configurationcounter = 0;
      this->status_longitudinalvelocity = 0;
      this->status_longitudinalacceleration = 0;
      this->status_lateralacceleration = 0;
      this->status_yawrate = 0;
      this->status_steeringangle = 0;
      this->status_drivingdirection = 0;
      this->status_characteristicspeed = 0;
      this->status_radarstatus = 0;
      this->status_voltagestatus = 0;
      this->status_temperaturestatus = 0;
      this->status_blockagestatus = 0;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_nanoseconds = 0ul;
      this->timestamp_seconds = 0ul;
      this->timestamp_syncstatus = 0;
      this->swversion_major = 0;
      this->swversion_minor = 0;
      this->swversion_patch = 0;
      this->longitudinal = 0.0f;
      this->lateral = 0.0f;
      this->vertical = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->plugorientation = 0;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->wheelbase = 0.0f;
      this->maximumdistance = 0;
      this->frequencyslot = 0;
      this->cycletime = 0;
      this->timeslot = 0;
      this->hcc = 0;
      this->powersave_standstill = 0;
      this->sensoripaddress_0 = 0ul;
      this->sensoripaddress_1 = 0ul;
      this->configurationcounter = 0;
      this->status_longitudinalvelocity = 0;
      this->status_longitudinalacceleration = 0;
      this->status_lateralacceleration = 0;
      this->status_yawrate = 0;
      this->status_steeringangle = 0;
      this->status_drivingdirection = 0;
      this->status_characteristicspeed = 0;
      this->status_radarstatus = 0;
      this->status_voltagestatus = 0;
      this->status_temperaturestatus = 0;
      this->status_blockagestatus = 0;
    }
  }

  // field types and members
  using _timestamp_nanoseconds_type =
    uint32_t;
  _timestamp_nanoseconds_type timestamp_nanoseconds;
  using _timestamp_seconds_type =
    uint32_t;
  _timestamp_seconds_type timestamp_seconds;
  using _timestamp_syncstatus_type =
    uint8_t;
  _timestamp_syncstatus_type timestamp_syncstatus;
  using _swversion_major_type =
    uint8_t;
  _swversion_major_type swversion_major;
  using _swversion_minor_type =
    uint8_t;
  _swversion_minor_type swversion_minor;
  using _swversion_patch_type =
    uint8_t;
  _swversion_patch_type swversion_patch;
  using _longitudinal_type =
    float;
  _longitudinal_type longitudinal;
  using _lateral_type =
    float;
  _lateral_type lateral;
  using _vertical_type =
    float;
  _vertical_type vertical;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _plugorientation_type =
    uint8_t;
  _plugorientation_type plugorientation;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _wheelbase_type =
    float;
  _wheelbase_type wheelbase;
  using _maximumdistance_type =
    uint16_t;
  _maximumdistance_type maximumdistance;
  using _frequencyslot_type =
    uint8_t;
  _frequencyslot_type frequencyslot;
  using _cycletime_type =
    uint8_t;
  _cycletime_type cycletime;
  using _timeslot_type =
    uint8_t;
  _timeslot_type timeslot;
  using _hcc_type =
    uint8_t;
  _hcc_type hcc;
  using _powersave_standstill_type =
    uint8_t;
  _powersave_standstill_type powersave_standstill;
  using _sensoripaddress_0_type =
    uint32_t;
  _sensoripaddress_0_type sensoripaddress_0;
  using _sensoripaddress_1_type =
    uint32_t;
  _sensoripaddress_1_type sensoripaddress_1;
  using _configurationcounter_type =
    uint8_t;
  _configurationcounter_type configurationcounter;
  using _status_longitudinalvelocity_type =
    uint8_t;
  _status_longitudinalvelocity_type status_longitudinalvelocity;
  using _status_longitudinalacceleration_type =
    uint8_t;
  _status_longitudinalacceleration_type status_longitudinalacceleration;
  using _status_lateralacceleration_type =
    uint8_t;
  _status_lateralacceleration_type status_lateralacceleration;
  using _status_yawrate_type =
    uint8_t;
  _status_yawrate_type status_yawrate;
  using _status_steeringangle_type =
    uint8_t;
  _status_steeringangle_type status_steeringangle;
  using _status_drivingdirection_type =
    uint8_t;
  _status_drivingdirection_type status_drivingdirection;
  using _status_characteristicspeed_type =
    uint8_t;
  _status_characteristicspeed_type status_characteristicspeed;
  using _status_radarstatus_type =
    uint8_t;
  _status_radarstatus_type status_radarstatus;
  using _status_voltagestatus_type =
    uint8_t;
  _status_voltagestatus_type status_voltagestatus;
  using _status_temperaturestatus_type =
    uint8_t;
  _status_temperaturestatus_type status_temperaturestatus;
  using _status_blockagestatus_type =
    uint8_t;
  _status_blockagestatus_type status_blockagestatus;

  // setters for named parameter idiom
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
  Type & set__swversion_major(
    const uint8_t & _arg)
  {
    this->swversion_major = _arg;
    return *this;
  }
  Type & set__swversion_minor(
    const uint8_t & _arg)
  {
    this->swversion_minor = _arg;
    return *this;
  }
  Type & set__swversion_patch(
    const uint8_t & _arg)
  {
    this->swversion_patch = _arg;
    return *this;
  }
  Type & set__longitudinal(
    const float & _arg)
  {
    this->longitudinal = _arg;
    return *this;
  }
  Type & set__lateral(
    const float & _arg)
  {
    this->lateral = _arg;
    return *this;
  }
  Type & set__vertical(
    const float & _arg)
  {
    this->vertical = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__plugorientation(
    const uint8_t & _arg)
  {
    this->plugorientation = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__wheelbase(
    const float & _arg)
  {
    this->wheelbase = _arg;
    return *this;
  }
  Type & set__maximumdistance(
    const uint16_t & _arg)
  {
    this->maximumdistance = _arg;
    return *this;
  }
  Type & set__frequencyslot(
    const uint8_t & _arg)
  {
    this->frequencyslot = _arg;
    return *this;
  }
  Type & set__cycletime(
    const uint8_t & _arg)
  {
    this->cycletime = _arg;
    return *this;
  }
  Type & set__timeslot(
    const uint8_t & _arg)
  {
    this->timeslot = _arg;
    return *this;
  }
  Type & set__hcc(
    const uint8_t & _arg)
  {
    this->hcc = _arg;
    return *this;
  }
  Type & set__powersave_standstill(
    const uint8_t & _arg)
  {
    this->powersave_standstill = _arg;
    return *this;
  }
  Type & set__sensoripaddress_0(
    const uint32_t & _arg)
  {
    this->sensoripaddress_0 = _arg;
    return *this;
  }
  Type & set__sensoripaddress_1(
    const uint32_t & _arg)
  {
    this->sensoripaddress_1 = _arg;
    return *this;
  }
  Type & set__configurationcounter(
    const uint8_t & _arg)
  {
    this->configurationcounter = _arg;
    return *this;
  }
  Type & set__status_longitudinalvelocity(
    const uint8_t & _arg)
  {
    this->status_longitudinalvelocity = _arg;
    return *this;
  }
  Type & set__status_longitudinalacceleration(
    const uint8_t & _arg)
  {
    this->status_longitudinalacceleration = _arg;
    return *this;
  }
  Type & set__status_lateralacceleration(
    const uint8_t & _arg)
  {
    this->status_lateralacceleration = _arg;
    return *this;
  }
  Type & set__status_yawrate(
    const uint8_t & _arg)
  {
    this->status_yawrate = _arg;
    return *this;
  }
  Type & set__status_steeringangle(
    const uint8_t & _arg)
  {
    this->status_steeringangle = _arg;
    return *this;
  }
  Type & set__status_drivingdirection(
    const uint8_t & _arg)
  {
    this->status_drivingdirection = _arg;
    return *this;
  }
  Type & set__status_characteristicspeed(
    const uint8_t & _arg)
  {
    this->status_characteristicspeed = _arg;
    return *this;
  }
  Type & set__status_radarstatus(
    const uint8_t & _arg)
  {
    this->status_radarstatus = _arg;
    return *this;
  }
  Type & set__status_voltagestatus(
    const uint8_t & _arg)
  {
    this->status_voltagestatus = _arg;
    return *this;
  }
  Type & set__status_temperaturestatus(
    const uint8_t & _arg)
  {
    this->status_temperaturestatus = _arg;
    return *this;
  }
  Type & set__status_blockagestatus(
    const uint8_t & _arg)
  {
    this->status_blockagestatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__Status
    std::shared_ptr<ars548_messages::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__Status
    std::shared_ptr<ars548_messages::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->timestamp_nanoseconds != other.timestamp_nanoseconds) {
      return false;
    }
    if (this->timestamp_seconds != other.timestamp_seconds) {
      return false;
    }
    if (this->timestamp_syncstatus != other.timestamp_syncstatus) {
      return false;
    }
    if (this->swversion_major != other.swversion_major) {
      return false;
    }
    if (this->swversion_minor != other.swversion_minor) {
      return false;
    }
    if (this->swversion_patch != other.swversion_patch) {
      return false;
    }
    if (this->longitudinal != other.longitudinal) {
      return false;
    }
    if (this->lateral != other.lateral) {
      return false;
    }
    if (this->vertical != other.vertical) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->plugorientation != other.plugorientation) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->wheelbase != other.wheelbase) {
      return false;
    }
    if (this->maximumdistance != other.maximumdistance) {
      return false;
    }
    if (this->frequencyslot != other.frequencyslot) {
      return false;
    }
    if (this->cycletime != other.cycletime) {
      return false;
    }
    if (this->timeslot != other.timeslot) {
      return false;
    }
    if (this->hcc != other.hcc) {
      return false;
    }
    if (this->powersave_standstill != other.powersave_standstill) {
      return false;
    }
    if (this->sensoripaddress_0 != other.sensoripaddress_0) {
      return false;
    }
    if (this->sensoripaddress_1 != other.sensoripaddress_1) {
      return false;
    }
    if (this->configurationcounter != other.configurationcounter) {
      return false;
    }
    if (this->status_longitudinalvelocity != other.status_longitudinalvelocity) {
      return false;
    }
    if (this->status_longitudinalacceleration != other.status_longitudinalacceleration) {
      return false;
    }
    if (this->status_lateralacceleration != other.status_lateralacceleration) {
      return false;
    }
    if (this->status_yawrate != other.status_yawrate) {
      return false;
    }
    if (this->status_steeringangle != other.status_steeringangle) {
      return false;
    }
    if (this->status_drivingdirection != other.status_drivingdirection) {
      return false;
    }
    if (this->status_characteristicspeed != other.status_characteristicspeed) {
      return false;
    }
    if (this->status_radarstatus != other.status_radarstatus) {
      return false;
    }
    if (this->status_voltagestatus != other.status_voltagestatus) {
      return false;
    }
    if (this->status_temperaturestatus != other.status_temperaturestatus) {
      return false;
    }
    if (this->status_blockagestatus != other.status_blockagestatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  ars548_messages::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__STATUS__STRUCT_HPP_
