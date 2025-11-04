// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/SensorConfiguration.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__SensorConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__SensorConfiguration __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorConfiguration_
{
  using Type = SensorConfiguration_<ContainerAllocator>;

  explicit SensorConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
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
      this->frequencslot = 0;
      this->cycletime = 0;
      this->timeslot = 0;
      this->hcc = 0;
      this->powersave_standstill = 0;
      this->sensoripaddress_0 = 0ul;
      this->sensoripaddress_1 = 0ul;
      this->newsensormounting = 0;
      this->newvehicleparameters = 0;
      this->newradarparameters = 0;
      this->newnetworkconfiguration = 0;
    }
  }

  explicit SensorConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
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
      this->frequencslot = 0;
      this->cycletime = 0;
      this->timeslot = 0;
      this->hcc = 0;
      this->powersave_standstill = 0;
      this->sensoripaddress_0 = 0ul;
      this->sensoripaddress_1 = 0ul;
      this->newsensormounting = 0;
      this->newvehicleparameters = 0;
      this->newradarparameters = 0;
      this->newnetworkconfiguration = 0;
    }
  }

  // field types and members
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
  using _frequencslot_type =
    uint8_t;
  _frequencslot_type frequencslot;
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
  using _newsensormounting_type =
    uint8_t;
  _newsensormounting_type newsensormounting;
  using _newvehicleparameters_type =
    uint8_t;
  _newvehicleparameters_type newvehicleparameters;
  using _newradarparameters_type =
    uint8_t;
  _newradarparameters_type newradarparameters;
  using _newnetworkconfiguration_type =
    uint8_t;
  _newnetworkconfiguration_type newnetworkconfiguration;

  // setters for named parameter idiom
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
  Type & set__frequencslot(
    const uint8_t & _arg)
  {
    this->frequencslot = _arg;
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
  Type & set__newsensormounting(
    const uint8_t & _arg)
  {
    this->newsensormounting = _arg;
    return *this;
  }
  Type & set__newvehicleparameters(
    const uint8_t & _arg)
  {
    this->newvehicleparameters = _arg;
    return *this;
  }
  Type & set__newradarparameters(
    const uint8_t & _arg)
  {
    this->newradarparameters = _arg;
    return *this;
  }
  Type & set__newnetworkconfiguration(
    const uint8_t & _arg)
  {
    this->newnetworkconfiguration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::SensorConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::SensorConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::SensorConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::SensorConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__SensorConfiguration
    std::shared_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__SensorConfiguration
    std::shared_ptr<ars548_messages::msg::SensorConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorConfiguration_ & other) const
  {
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
    if (this->frequencslot != other.frequencslot) {
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
    if (this->newsensormounting != other.newsensormounting) {
      return false;
    }
    if (this->newvehicleparameters != other.newvehicleparameters) {
      return false;
    }
    if (this->newradarparameters != other.newradarparameters) {
      return false;
    }
    if (this->newnetworkconfiguration != other.newnetworkconfiguration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorConfiguration_

// alias to use template instance with default allocator
using SensorConfiguration =
  ars548_messages::msg::SensorConfiguration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__STRUCT_HPP_
