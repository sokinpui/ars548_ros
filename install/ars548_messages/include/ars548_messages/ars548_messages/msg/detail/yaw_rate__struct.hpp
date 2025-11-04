// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/YawRate.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__YawRate __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__YawRate __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YawRate_
{
  using Type = YawRate_<ContainerAllocator>;

  explicit YawRate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yawrateerramp = 0.0f;
      this->yawrateerramp_invalidflag = 0;
      this->qualifieryawrate = 0;
      this->yawrate = 0.0f;
      this->yawrate_invalidflag = 0;
      this->yawrateeventdataqualifier = 0;
    }
  }

  explicit YawRate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yawrateerramp = 0.0f;
      this->yawrateerramp_invalidflag = 0;
      this->qualifieryawrate = 0;
      this->yawrate = 0.0f;
      this->yawrate_invalidflag = 0;
      this->yawrateeventdataqualifier = 0;
    }
  }

  // field types and members
  using _yawrateerramp_type =
    float;
  _yawrateerramp_type yawrateerramp;
  using _yawrateerramp_invalidflag_type =
    uint8_t;
  _yawrateerramp_invalidflag_type yawrateerramp_invalidflag;
  using _qualifieryawrate_type =
    uint8_t;
  _qualifieryawrate_type qualifieryawrate;
  using _yawrate_type =
    float;
  _yawrate_type yawrate;
  using _yawrate_invalidflag_type =
    uint8_t;
  _yawrate_invalidflag_type yawrate_invalidflag;
  using _yawrateeventdataqualifier_type =
    uint8_t;
  _yawrateeventdataqualifier_type yawrateeventdataqualifier;

  // setters for named parameter idiom
  Type & set__yawrateerramp(
    const float & _arg)
  {
    this->yawrateerramp = _arg;
    return *this;
  }
  Type & set__yawrateerramp_invalidflag(
    const uint8_t & _arg)
  {
    this->yawrateerramp_invalidflag = _arg;
    return *this;
  }
  Type & set__qualifieryawrate(
    const uint8_t & _arg)
  {
    this->qualifieryawrate = _arg;
    return *this;
  }
  Type & set__yawrate(
    const float & _arg)
  {
    this->yawrate = _arg;
    return *this;
  }
  Type & set__yawrate_invalidflag(
    const uint8_t & _arg)
  {
    this->yawrate_invalidflag = _arg;
    return *this;
  }
  Type & set__yawrateeventdataqualifier(
    const uint8_t & _arg)
  {
    this->yawrateeventdataqualifier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::YawRate_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::YawRate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::YawRate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::YawRate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::YawRate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::YawRate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::YawRate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::YawRate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::YawRate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::YawRate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__YawRate
    std::shared_ptr<ars548_messages::msg::YawRate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__YawRate
    std::shared_ptr<ars548_messages::msg::YawRate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YawRate_ & other) const
  {
    if (this->yawrateerramp != other.yawrateerramp) {
      return false;
    }
    if (this->yawrateerramp_invalidflag != other.yawrateerramp_invalidflag) {
      return false;
    }
    if (this->qualifieryawrate != other.qualifieryawrate) {
      return false;
    }
    if (this->yawrate != other.yawrate) {
      return false;
    }
    if (this->yawrate_invalidflag != other.yawrate_invalidflag) {
      return false;
    }
    if (this->yawrateeventdataqualifier != other.yawrateeventdataqualifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const YawRate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YawRate_

// alias to use template instance with default allocator
using YawRate =
  ars548_messages::msg::YawRate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__STRUCT_HPP_
