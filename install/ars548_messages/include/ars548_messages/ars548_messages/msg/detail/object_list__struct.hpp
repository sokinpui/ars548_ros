// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'objectlist_objects'
#include "ars548_messages/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__ObjectList __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__ObjectList __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectList_
{
  using Type = ObjectList_<ContainerAllocator>;

  explicit ObjectList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0ull;
      this->length = 0ul;
      this->sqc = 0ul;
      this->dataid = 0ul;
      this->timestamp_nanoseconds = 0ul;
      this->timestamp_seconds = 0ul;
      this->timestamp_syncstatus = 0;
      this->eventdataqualifier = 0ul;
      this->extendedqualifier = 0;
      this->objectlist_numofobjects = 0;
      this->objectlist_objects.fill(ars548_messages::msg::Object_<ContainerAllocator>{_init});
    }
  }

  explicit ObjectList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    objectlist_objects(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0ull;
      this->length = 0ul;
      this->sqc = 0ul;
      this->dataid = 0ul;
      this->timestamp_nanoseconds = 0ul;
      this->timestamp_seconds = 0ul;
      this->timestamp_syncstatus = 0;
      this->eventdataqualifier = 0ul;
      this->extendedqualifier = 0;
      this->objectlist_numofobjects = 0;
      this->objectlist_objects.fill(ars548_messages::msg::Object_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _crc_type =
    uint64_t;
  _crc_type crc;
  using _length_type =
    uint32_t;
  _length_type length;
  using _sqc_type =
    uint32_t;
  _sqc_type sqc;
  using _dataid_type =
    uint32_t;
  _dataid_type dataid;
  using _timestamp_nanoseconds_type =
    uint32_t;
  _timestamp_nanoseconds_type timestamp_nanoseconds;
  using _timestamp_seconds_type =
    uint32_t;
  _timestamp_seconds_type timestamp_seconds;
  using _timestamp_syncstatus_type =
    uint8_t;
  _timestamp_syncstatus_type timestamp_syncstatus;
  using _eventdataqualifier_type =
    uint32_t;
  _eventdataqualifier_type eventdataqualifier;
  using _extendedqualifier_type =
    uint8_t;
  _extendedqualifier_type extendedqualifier;
  using _objectlist_numofobjects_type =
    uint8_t;
  _objectlist_numofobjects_type objectlist_numofobjects;
  using _objectlist_objects_type =
    std::array<ars548_messages::msg::Object_<ContainerAllocator>, 50>;
  _objectlist_objects_type objectlist_objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__crc(
    const uint64_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }
  Type & set__length(
    const uint32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__sqc(
    const uint32_t & _arg)
  {
    this->sqc = _arg;
    return *this;
  }
  Type & set__dataid(
    const uint32_t & _arg)
  {
    this->dataid = _arg;
    return *this;
  }
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
  Type & set__eventdataqualifier(
    const uint32_t & _arg)
  {
    this->eventdataqualifier = _arg;
    return *this;
  }
  Type & set__extendedqualifier(
    const uint8_t & _arg)
  {
    this->extendedqualifier = _arg;
    return *this;
  }
  Type & set__objectlist_numofobjects(
    const uint8_t & _arg)
  {
    this->objectlist_numofobjects = _arg;
    return *this;
  }
  Type & set__objectlist_objects(
    const std::array<ars548_messages::msg::Object_<ContainerAllocator>, 50> & _arg)
  {
    this->objectlist_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::ObjectList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::ObjectList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::ObjectList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::ObjectList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__ObjectList
    std::shared_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__ObjectList
    std::shared_ptr<ars548_messages::msg::ObjectList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->sqc != other.sqc) {
      return false;
    }
    if (this->dataid != other.dataid) {
      return false;
    }
    if (this->timestamp_nanoseconds != other.timestamp_nanoseconds) {
      return false;
    }
    if (this->timestamp_seconds != other.timestamp_seconds) {
      return false;
    }
    if (this->timestamp_syncstatus != other.timestamp_syncstatus) {
      return false;
    }
    if (this->eventdataqualifier != other.eventdataqualifier) {
      return false;
    }
    if (this->extendedqualifier != other.extendedqualifier) {
      return false;
    }
    if (this->objectlist_numofobjects != other.objectlist_numofobjects) {
      return false;
    }
    if (this->objectlist_objects != other.objectlist_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectList_

// alias to use template instance with default allocator
using ObjectList =
  ars548_messages::msg::ObjectList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_
