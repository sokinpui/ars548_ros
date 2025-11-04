// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/DrivingDirection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__DrivingDirection __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__DrivingDirection __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivingDirection_
{
  using Type = DrivingDirection_<ContainerAllocator>;

  explicit DrivingDirection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drivingdirectionunconfirmed = 0;
      this->drivingdirectionconfirmed = 0;
    }
  }

  explicit DrivingDirection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drivingdirectionunconfirmed = 0;
      this->drivingdirectionconfirmed = 0;
    }
  }

  // field types and members
  using _drivingdirectionunconfirmed_type =
    uint8_t;
  _drivingdirectionunconfirmed_type drivingdirectionunconfirmed;
  using _drivingdirectionconfirmed_type =
    uint8_t;
  _drivingdirectionconfirmed_type drivingdirectionconfirmed;

  // setters for named parameter idiom
  Type & set__drivingdirectionunconfirmed(
    const uint8_t & _arg)
  {
    this->drivingdirectionunconfirmed = _arg;
    return *this;
  }
  Type & set__drivingdirectionconfirmed(
    const uint8_t & _arg)
  {
    this->drivingdirectionconfirmed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::DrivingDirection_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::DrivingDirection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::DrivingDirection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::DrivingDirection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__DrivingDirection
    std::shared_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__DrivingDirection
    std::shared_ptr<ars548_messages::msg::DrivingDirection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingDirection_ & other) const
  {
    if (this->drivingdirectionunconfirmed != other.drivingdirectionunconfirmed) {
      return false;
    }
    if (this->drivingdirectionconfirmed != other.drivingdirectionconfirmed) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingDirection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingDirection_

// alias to use template instance with default allocator
using DrivingDirection =
  ars548_messages::msg::DrivingDirection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__STRUCT_HPP_
