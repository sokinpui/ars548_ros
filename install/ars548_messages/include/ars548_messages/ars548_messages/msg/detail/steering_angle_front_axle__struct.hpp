// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/SteeringAngleFrontAxle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__SteeringAngleFrontAxle __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__SteeringAngleFrontAxle __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringAngleFrontAxle_
{
  using Type = SteeringAngleFrontAxle_<ContainerAllocator>;

  explicit SteeringAngleFrontAxle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->qualifiersteeringanglefrontaxle = 0;
      this->steeringanglefrontaxleerramp = 0.0f;
      this->steeringanglefrontaxleerramp_invalidflag = 0;
      this->steeringanglefrontaxle = 0.0f;
      this->steeringanglefrontaxle_invalidflag = 0;
      this->steeringanglefrontaxleeventdataqualifier = 0;
    }
  }

  explicit SteeringAngleFrontAxle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->qualifiersteeringanglefrontaxle = 0;
      this->steeringanglefrontaxleerramp = 0.0f;
      this->steeringanglefrontaxleerramp_invalidflag = 0;
      this->steeringanglefrontaxle = 0.0f;
      this->steeringanglefrontaxle_invalidflag = 0;
      this->steeringanglefrontaxleeventdataqualifier = 0;
    }
  }

  // field types and members
  using _qualifiersteeringanglefrontaxle_type =
    uint8_t;
  _qualifiersteeringanglefrontaxle_type qualifiersteeringanglefrontaxle;
  using _steeringanglefrontaxleerramp_type =
    float;
  _steeringanglefrontaxleerramp_type steeringanglefrontaxleerramp;
  using _steeringanglefrontaxleerramp_invalidflag_type =
    uint8_t;
  _steeringanglefrontaxleerramp_invalidflag_type steeringanglefrontaxleerramp_invalidflag;
  using _steeringanglefrontaxle_type =
    float;
  _steeringanglefrontaxle_type steeringanglefrontaxle;
  using _steeringanglefrontaxle_invalidflag_type =
    uint8_t;
  _steeringanglefrontaxle_invalidflag_type steeringanglefrontaxle_invalidflag;
  using _steeringanglefrontaxleeventdataqualifier_type =
    uint8_t;
  _steeringanglefrontaxleeventdataqualifier_type steeringanglefrontaxleeventdataqualifier;

  // setters for named parameter idiom
  Type & set__qualifiersteeringanglefrontaxle(
    const uint8_t & _arg)
  {
    this->qualifiersteeringanglefrontaxle = _arg;
    return *this;
  }
  Type & set__steeringanglefrontaxleerramp(
    const float & _arg)
  {
    this->steeringanglefrontaxleerramp = _arg;
    return *this;
  }
  Type & set__steeringanglefrontaxleerramp_invalidflag(
    const uint8_t & _arg)
  {
    this->steeringanglefrontaxleerramp_invalidflag = _arg;
    return *this;
  }
  Type & set__steeringanglefrontaxle(
    const float & _arg)
  {
    this->steeringanglefrontaxle = _arg;
    return *this;
  }
  Type & set__steeringanglefrontaxle_invalidflag(
    const uint8_t & _arg)
  {
    this->steeringanglefrontaxle_invalidflag = _arg;
    return *this;
  }
  Type & set__steeringanglefrontaxleeventdataqualifier(
    const uint8_t & _arg)
  {
    this->steeringanglefrontaxleeventdataqualifier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__SteeringAngleFrontAxle
    std::shared_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__SteeringAngleFrontAxle
    std::shared_ptr<ars548_messages::msg::SteeringAngleFrontAxle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringAngleFrontAxle_ & other) const
  {
    if (this->qualifiersteeringanglefrontaxle != other.qualifiersteeringanglefrontaxle) {
      return false;
    }
    if (this->steeringanglefrontaxleerramp != other.steeringanglefrontaxleerramp) {
      return false;
    }
    if (this->steeringanglefrontaxleerramp_invalidflag != other.steeringanglefrontaxleerramp_invalidflag) {
      return false;
    }
    if (this->steeringanglefrontaxle != other.steeringanglefrontaxle) {
      return false;
    }
    if (this->steeringanglefrontaxle_invalidflag != other.steeringanglefrontaxle_invalidflag) {
      return false;
    }
    if (this->steeringanglefrontaxleeventdataqualifier != other.steeringanglefrontaxleeventdataqualifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringAngleFrontAxle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringAngleFrontAxle_

// alias to use template instance with default allocator
using SteeringAngleFrontAxle =
  ars548_messages::msg::SteeringAngleFrontAxle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__STRUCT_HPP_
