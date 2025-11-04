// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/AccelerationLateralCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__AccelerationLateralCoG __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__AccelerationLateralCoG __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationLateralCoG_
{
  using Type = AccelerationLateralCoG_<ContainerAllocator>;

  explicit AccelerationLateralCoG_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accelerationlateralerramp = 0.0f;
      this->accelerationlateralerramp_invalidflag = 0;
      this->qualifieraccelerationlateral = 0;
      this->accelerationlateral = 0.0f;
      this->accelerationlateral_invalidflag = 0;
      this->accelerationlateraleventdataqualifier = 0;
    }
  }

  explicit AccelerationLateralCoG_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accelerationlateralerramp = 0.0f;
      this->accelerationlateralerramp_invalidflag = 0;
      this->qualifieraccelerationlateral = 0;
      this->accelerationlateral = 0.0f;
      this->accelerationlateral_invalidflag = 0;
      this->accelerationlateraleventdataqualifier = 0;
    }
  }

  // field types and members
  using _accelerationlateralerramp_type =
    float;
  _accelerationlateralerramp_type accelerationlateralerramp;
  using _accelerationlateralerramp_invalidflag_type =
    uint8_t;
  _accelerationlateralerramp_invalidflag_type accelerationlateralerramp_invalidflag;
  using _qualifieraccelerationlateral_type =
    uint8_t;
  _qualifieraccelerationlateral_type qualifieraccelerationlateral;
  using _accelerationlateral_type =
    float;
  _accelerationlateral_type accelerationlateral;
  using _accelerationlateral_invalidflag_type =
    uint8_t;
  _accelerationlateral_invalidflag_type accelerationlateral_invalidflag;
  using _accelerationlateraleventdataqualifier_type =
    uint8_t;
  _accelerationlateraleventdataqualifier_type accelerationlateraleventdataqualifier;

  // setters for named parameter idiom
  Type & set__accelerationlateralerramp(
    const float & _arg)
  {
    this->accelerationlateralerramp = _arg;
    return *this;
  }
  Type & set__accelerationlateralerramp_invalidflag(
    const uint8_t & _arg)
  {
    this->accelerationlateralerramp_invalidflag = _arg;
    return *this;
  }
  Type & set__qualifieraccelerationlateral(
    const uint8_t & _arg)
  {
    this->qualifieraccelerationlateral = _arg;
    return *this;
  }
  Type & set__accelerationlateral(
    const float & _arg)
  {
    this->accelerationlateral = _arg;
    return *this;
  }
  Type & set__accelerationlateral_invalidflag(
    const uint8_t & _arg)
  {
    this->accelerationlateral_invalidflag = _arg;
    return *this;
  }
  Type & set__accelerationlateraleventdataqualifier(
    const uint8_t & _arg)
  {
    this->accelerationlateraleventdataqualifier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__AccelerationLateralCoG
    std::shared_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__AccelerationLateralCoG
    std::shared_ptr<ars548_messages::msg::AccelerationLateralCoG_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationLateralCoG_ & other) const
  {
    if (this->accelerationlateralerramp != other.accelerationlateralerramp) {
      return false;
    }
    if (this->accelerationlateralerramp_invalidflag != other.accelerationlateralerramp_invalidflag) {
      return false;
    }
    if (this->qualifieraccelerationlateral != other.qualifieraccelerationlateral) {
      return false;
    }
    if (this->accelerationlateral != other.accelerationlateral) {
      return false;
    }
    if (this->accelerationlateral_invalidflag != other.accelerationlateral_invalidflag) {
      return false;
    }
    if (this->accelerationlateraleventdataqualifier != other.accelerationlateraleventdataqualifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationLateralCoG_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationLateralCoG_

// alias to use template instance with default allocator
using AccelerationLateralCoG =
  ars548_messages::msg::AccelerationLateralCoG_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__STRUCT_HPP_
