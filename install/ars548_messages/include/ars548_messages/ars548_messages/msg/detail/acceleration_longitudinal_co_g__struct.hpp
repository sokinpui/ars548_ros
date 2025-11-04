// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__AccelerationLongitudinalCoG __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__AccelerationLongitudinalCoG __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationLongitudinalCoG_
{
  using Type = AccelerationLongitudinalCoG_<ContainerAllocator>;

  explicit AccelerationLongitudinalCoG_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accelerationlongitudinalerramp = 0.0f;
      this->accelerationlongitudinalerramp_invalidflag = 0;
      this->qualifieraccelerationlongitudinal = 0;
      this->accelerationlongitudinal = 0.0f;
      this->accelerationlongitudinal_invalidflag = 0;
      this->accelerationlongitudinaleventdataqualifier = 0;
    }
  }

  explicit AccelerationLongitudinalCoG_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accelerationlongitudinalerramp = 0.0f;
      this->accelerationlongitudinalerramp_invalidflag = 0;
      this->qualifieraccelerationlongitudinal = 0;
      this->accelerationlongitudinal = 0.0f;
      this->accelerationlongitudinal_invalidflag = 0;
      this->accelerationlongitudinaleventdataqualifier = 0;
    }
  }

  // field types and members
  using _accelerationlongitudinalerramp_type =
    float;
  _accelerationlongitudinalerramp_type accelerationlongitudinalerramp;
  using _accelerationlongitudinalerramp_invalidflag_type =
    uint8_t;
  _accelerationlongitudinalerramp_invalidflag_type accelerationlongitudinalerramp_invalidflag;
  using _qualifieraccelerationlongitudinal_type =
    uint8_t;
  _qualifieraccelerationlongitudinal_type qualifieraccelerationlongitudinal;
  using _accelerationlongitudinal_type =
    float;
  _accelerationlongitudinal_type accelerationlongitudinal;
  using _accelerationlongitudinal_invalidflag_type =
    uint8_t;
  _accelerationlongitudinal_invalidflag_type accelerationlongitudinal_invalidflag;
  using _accelerationlongitudinaleventdataqualifier_type =
    uint8_t;
  _accelerationlongitudinaleventdataqualifier_type accelerationlongitudinaleventdataqualifier;

  // setters for named parameter idiom
  Type & set__accelerationlongitudinalerramp(
    const float & _arg)
  {
    this->accelerationlongitudinalerramp = _arg;
    return *this;
  }
  Type & set__accelerationlongitudinalerramp_invalidflag(
    const uint8_t & _arg)
  {
    this->accelerationlongitudinalerramp_invalidflag = _arg;
    return *this;
  }
  Type & set__qualifieraccelerationlongitudinal(
    const uint8_t & _arg)
  {
    this->qualifieraccelerationlongitudinal = _arg;
    return *this;
  }
  Type & set__accelerationlongitudinal(
    const float & _arg)
  {
    this->accelerationlongitudinal = _arg;
    return *this;
  }
  Type & set__accelerationlongitudinal_invalidflag(
    const uint8_t & _arg)
  {
    this->accelerationlongitudinal_invalidflag = _arg;
    return *this;
  }
  Type & set__accelerationlongitudinaleventdataqualifier(
    const uint8_t & _arg)
  {
    this->accelerationlongitudinaleventdataqualifier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__AccelerationLongitudinalCoG
    std::shared_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__AccelerationLongitudinalCoG
    std::shared_ptr<ars548_messages::msg::AccelerationLongitudinalCoG_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationLongitudinalCoG_ & other) const
  {
    if (this->accelerationlongitudinalerramp != other.accelerationlongitudinalerramp) {
      return false;
    }
    if (this->accelerationlongitudinalerramp_invalidflag != other.accelerationlongitudinalerramp_invalidflag) {
      return false;
    }
    if (this->qualifieraccelerationlongitudinal != other.qualifieraccelerationlongitudinal) {
      return false;
    }
    if (this->accelerationlongitudinal != other.accelerationlongitudinal) {
      return false;
    }
    if (this->accelerationlongitudinal_invalidflag != other.accelerationlongitudinal_invalidflag) {
      return false;
    }
    if (this->accelerationlongitudinaleventdataqualifier != other.accelerationlongitudinaleventdataqualifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationLongitudinalCoG_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationLongitudinalCoG_

// alias to use template instance with default allocator
using AccelerationLongitudinalCoG =
  ars548_messages::msg::AccelerationLongitudinalCoG_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__STRUCT_HPP_
