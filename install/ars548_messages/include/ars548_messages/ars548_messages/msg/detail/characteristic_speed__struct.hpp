// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/CharacteristicSpeed.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__CharacteristicSpeed __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__CharacteristicSpeed __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CharacteristicSpeed_
{
  using Type = CharacteristicSpeed_<ContainerAllocator>;

  explicit CharacteristicSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->characteristicspeederramp = 0;
      this->qualifiercharacteristicspeed = 0;
      this->characteristicspeed = 0;
    }
  }

  explicit CharacteristicSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->characteristicspeederramp = 0;
      this->qualifiercharacteristicspeed = 0;
      this->characteristicspeed = 0;
    }
  }

  // field types and members
  using _characteristicspeederramp_type =
    uint8_t;
  _characteristicspeederramp_type characteristicspeederramp;
  using _qualifiercharacteristicspeed_type =
    uint8_t;
  _qualifiercharacteristicspeed_type qualifiercharacteristicspeed;
  using _characteristicspeed_type =
    uint8_t;
  _characteristicspeed_type characteristicspeed;

  // setters for named parameter idiom
  Type & set__characteristicspeederramp(
    const uint8_t & _arg)
  {
    this->characteristicspeederramp = _arg;
    return *this;
  }
  Type & set__qualifiercharacteristicspeed(
    const uint8_t & _arg)
  {
    this->qualifiercharacteristicspeed = _arg;
    return *this;
  }
  Type & set__characteristicspeed(
    const uint8_t & _arg)
  {
    this->characteristicspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__CharacteristicSpeed
    std::shared_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__CharacteristicSpeed
    std::shared_ptr<ars548_messages::msg::CharacteristicSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CharacteristicSpeed_ & other) const
  {
    if (this->characteristicspeederramp != other.characteristicspeederramp) {
      return false;
    }
    if (this->qualifiercharacteristicspeed != other.qualifiercharacteristicspeed) {
      return false;
    }
    if (this->characteristicspeed != other.characteristicspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const CharacteristicSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CharacteristicSpeed_

// alias to use template instance with default allocator
using CharacteristicSpeed =
  ars548_messages::msg::CharacteristicSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__STRUCT_HPP_
