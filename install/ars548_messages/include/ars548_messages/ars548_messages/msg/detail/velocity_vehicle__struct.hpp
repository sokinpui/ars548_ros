// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/VelocityVehicle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__VelocityVehicle __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__VelocityVehicle __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityVehicle_
{
  using Type = VelocityVehicle_<ContainerAllocator>;

  explicit VelocityVehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statusvelocitynearstandstill = 0;
      this->qualifiervelocityvehicle = 0;
      this->velocityvehicleeventdataqualifier = 0;
      this->velocityvehicle = 0.0f;
      this->velocityvehicle_invalidflag = 0;
    }
  }

  explicit VelocityVehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statusvelocitynearstandstill = 0;
      this->qualifiervelocityvehicle = 0;
      this->velocityvehicleeventdataqualifier = 0;
      this->velocityvehicle = 0.0f;
      this->velocityvehicle_invalidflag = 0;
    }
  }

  // field types and members
  using _statusvelocitynearstandstill_type =
    uint8_t;
  _statusvelocitynearstandstill_type statusvelocitynearstandstill;
  using _qualifiervelocityvehicle_type =
    uint8_t;
  _qualifiervelocityvehicle_type qualifiervelocityvehicle;
  using _velocityvehicleeventdataqualifier_type =
    uint8_t;
  _velocityvehicleeventdataqualifier_type velocityvehicleeventdataqualifier;
  using _velocityvehicle_type =
    float;
  _velocityvehicle_type velocityvehicle;
  using _velocityvehicle_invalidflag_type =
    uint8_t;
  _velocityvehicle_invalidflag_type velocityvehicle_invalidflag;

  // setters for named parameter idiom
  Type & set__statusvelocitynearstandstill(
    const uint8_t & _arg)
  {
    this->statusvelocitynearstandstill = _arg;
    return *this;
  }
  Type & set__qualifiervelocityvehicle(
    const uint8_t & _arg)
  {
    this->qualifiervelocityvehicle = _arg;
    return *this;
  }
  Type & set__velocityvehicleeventdataqualifier(
    const uint8_t & _arg)
  {
    this->velocityvehicleeventdataqualifier = _arg;
    return *this;
  }
  Type & set__velocityvehicle(
    const float & _arg)
  {
    this->velocityvehicle = _arg;
    return *this;
  }
  Type & set__velocityvehicle_invalidflag(
    const uint8_t & _arg)
  {
    this->velocityvehicle_invalidflag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::VelocityVehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::VelocityVehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::VelocityVehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::VelocityVehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__VelocityVehicle
    std::shared_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__VelocityVehicle
    std::shared_ptr<ars548_messages::msg::VelocityVehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityVehicle_ & other) const
  {
    if (this->statusvelocitynearstandstill != other.statusvelocitynearstandstill) {
      return false;
    }
    if (this->qualifiervelocityvehicle != other.qualifiervelocityvehicle) {
      return false;
    }
    if (this->velocityvehicleeventdataqualifier != other.velocityvehicleeventdataqualifier) {
      return false;
    }
    if (this->velocityvehicle != other.velocityvehicle) {
      return false;
    }
    if (this->velocityvehicle_invalidflag != other.velocityvehicle_invalidflag) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityVehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityVehicle_

// alias to use template instance with default allocator
using VelocityVehicle =
  ars548_messages::msg::VelocityVehicle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__STRUCT_HPP_
