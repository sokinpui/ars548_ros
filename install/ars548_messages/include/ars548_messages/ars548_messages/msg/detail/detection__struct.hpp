// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__Detection __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f_azimuthangle = 0.0f;
      this->f_azimuthanglestd = 0.0f;
      this->u_invalidflags = 0;
      this->f_elevationangle = 0.0f;
      this->f_elevationanglestd = 0.0f;
      this->f_range = 0.0f;
      this->f_rangestd = 0.0f;
      this->f_rangerate = 0.0f;
      this->f_rangeratestd = 0.0f;
      this->s_rcs = 0;
      this->u_measurementid = 0;
      this->u_positivepredictivevalue = 0;
      this->u_classification = 0;
      this->u_multitargetprobabilitym = 0;
      this->u_objectid = 0;
      this->u_ambiguityflag = 0;
      this->u_sortindex = 0;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f_azimuthangle = 0.0f;
      this->f_azimuthanglestd = 0.0f;
      this->u_invalidflags = 0;
      this->f_elevationangle = 0.0f;
      this->f_elevationanglestd = 0.0f;
      this->f_range = 0.0f;
      this->f_rangestd = 0.0f;
      this->f_rangerate = 0.0f;
      this->f_rangeratestd = 0.0f;
      this->s_rcs = 0;
      this->u_measurementid = 0;
      this->u_positivepredictivevalue = 0;
      this->u_classification = 0;
      this->u_multitargetprobabilitym = 0;
      this->u_objectid = 0;
      this->u_ambiguityflag = 0;
      this->u_sortindex = 0;
    }
  }

  // field types and members
  using _f_azimuthangle_type =
    float;
  _f_azimuthangle_type f_azimuthangle;
  using _f_azimuthanglestd_type =
    float;
  _f_azimuthanglestd_type f_azimuthanglestd;
  using _u_invalidflags_type =
    uint8_t;
  _u_invalidflags_type u_invalidflags;
  using _f_elevationangle_type =
    float;
  _f_elevationangle_type f_elevationangle;
  using _f_elevationanglestd_type =
    float;
  _f_elevationanglestd_type f_elevationanglestd;
  using _f_range_type =
    float;
  _f_range_type f_range;
  using _f_rangestd_type =
    float;
  _f_rangestd_type f_rangestd;
  using _f_rangerate_type =
    float;
  _f_rangerate_type f_rangerate;
  using _f_rangeratestd_type =
    float;
  _f_rangeratestd_type f_rangeratestd;
  using _s_rcs_type =
    int8_t;
  _s_rcs_type s_rcs;
  using _u_measurementid_type =
    uint16_t;
  _u_measurementid_type u_measurementid;
  using _u_positivepredictivevalue_type =
    uint8_t;
  _u_positivepredictivevalue_type u_positivepredictivevalue;
  using _u_classification_type =
    uint8_t;
  _u_classification_type u_classification;
  using _u_multitargetprobabilitym_type =
    uint8_t;
  _u_multitargetprobabilitym_type u_multitargetprobabilitym;
  using _u_objectid_type =
    uint16_t;
  _u_objectid_type u_objectid;
  using _u_ambiguityflag_type =
    uint8_t;
  _u_ambiguityflag_type u_ambiguityflag;
  using _u_sortindex_type =
    uint16_t;
  _u_sortindex_type u_sortindex;

  // setters for named parameter idiom
  Type & set__f_azimuthangle(
    const float & _arg)
  {
    this->f_azimuthangle = _arg;
    return *this;
  }
  Type & set__f_azimuthanglestd(
    const float & _arg)
  {
    this->f_azimuthanglestd = _arg;
    return *this;
  }
  Type & set__u_invalidflags(
    const uint8_t & _arg)
  {
    this->u_invalidflags = _arg;
    return *this;
  }
  Type & set__f_elevationangle(
    const float & _arg)
  {
    this->f_elevationangle = _arg;
    return *this;
  }
  Type & set__f_elevationanglestd(
    const float & _arg)
  {
    this->f_elevationanglestd = _arg;
    return *this;
  }
  Type & set__f_range(
    const float & _arg)
  {
    this->f_range = _arg;
    return *this;
  }
  Type & set__f_rangestd(
    const float & _arg)
  {
    this->f_rangestd = _arg;
    return *this;
  }
  Type & set__f_rangerate(
    const float & _arg)
  {
    this->f_rangerate = _arg;
    return *this;
  }
  Type & set__f_rangeratestd(
    const float & _arg)
  {
    this->f_rangeratestd = _arg;
    return *this;
  }
  Type & set__s_rcs(
    const int8_t & _arg)
  {
    this->s_rcs = _arg;
    return *this;
  }
  Type & set__u_measurementid(
    const uint16_t & _arg)
  {
    this->u_measurementid = _arg;
    return *this;
  }
  Type & set__u_positivepredictivevalue(
    const uint8_t & _arg)
  {
    this->u_positivepredictivevalue = _arg;
    return *this;
  }
  Type & set__u_classification(
    const uint8_t & _arg)
  {
    this->u_classification = _arg;
    return *this;
  }
  Type & set__u_multitargetprobabilitym(
    const uint8_t & _arg)
  {
    this->u_multitargetprobabilitym = _arg;
    return *this;
  }
  Type & set__u_objectid(
    const uint16_t & _arg)
  {
    this->u_objectid = _arg;
    return *this;
  }
  Type & set__u_ambiguityflag(
    const uint8_t & _arg)
  {
    this->u_ambiguityflag = _arg;
    return *this;
  }
  Type & set__u_sortindex(
    const uint16_t & _arg)
  {
    this->u_sortindex = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__Detection
    std::shared_ptr<ars548_messages::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__Detection
    std::shared_ptr<ars548_messages::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->f_azimuthangle != other.f_azimuthangle) {
      return false;
    }
    if (this->f_azimuthanglestd != other.f_azimuthanglestd) {
      return false;
    }
    if (this->u_invalidflags != other.u_invalidflags) {
      return false;
    }
    if (this->f_elevationangle != other.f_elevationangle) {
      return false;
    }
    if (this->f_elevationanglestd != other.f_elevationanglestd) {
      return false;
    }
    if (this->f_range != other.f_range) {
      return false;
    }
    if (this->f_rangestd != other.f_rangestd) {
      return false;
    }
    if (this->f_rangerate != other.f_rangerate) {
      return false;
    }
    if (this->f_rangeratestd != other.f_rangeratestd) {
      return false;
    }
    if (this->s_rcs != other.s_rcs) {
      return false;
    }
    if (this->u_measurementid != other.u_measurementid) {
      return false;
    }
    if (this->u_positivepredictivevalue != other.u_positivepredictivevalue) {
      return false;
    }
    if (this->u_classification != other.u_classification) {
      return false;
    }
    if (this->u_multitargetprobabilitym != other.u_multitargetprobabilitym) {
      return false;
    }
    if (this->u_objectid != other.u_objectid) {
      return false;
    }
    if (this->u_ambiguityflag != other.u_ambiguityflag) {
      return false;
    }
    if (this->u_sortindex != other.u_sortindex) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  ars548_messages::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION__STRUCT_HPP_
