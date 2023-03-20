// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crane_interfaces:msg/CraneReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__STRUCT_HPP_
#define CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crane_interfaces__msg__CraneReference __attribute__((deprecated))
#else
# define DEPRECATED__crane_interfaces__msg__CraneReference __declspec(deprecated)
#endif

namespace crane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CraneReference_
{
  using Type = CraneReference_<ContainerAllocator>;

  explicit CraneReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crane_cylinder_velocity_reference = 0.0;
    }
  }

  explicit CraneReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crane_cylinder_velocity_reference = 0.0;
    }
  }

  // field types and members
  using _crane_cylinder_velocity_reference_type =
    double;
  _crane_cylinder_velocity_reference_type crane_cylinder_velocity_reference;

  // setters for named parameter idiom
  Type & set__crane_cylinder_velocity_reference(
    const double & _arg)
  {
    this->crane_cylinder_velocity_reference = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crane_interfaces::msg::CraneReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const crane_interfaces::msg::CraneReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crane_interfaces::msg::CraneReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crane_interfaces::msg::CraneReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crane_interfaces__msg__CraneReference
    std::shared_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crane_interfaces__msg__CraneReference
    std::shared_ptr<crane_interfaces::msg::CraneReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CraneReference_ & other) const
  {
    if (this->crane_cylinder_velocity_reference != other.crane_cylinder_velocity_reference) {
      return false;
    }
    return true;
  }
  bool operator!=(const CraneReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CraneReference_

// alias to use template instance with default allocator
using CraneReference =
  crane_interfaces::msg::CraneReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crane_interfaces

#endif  // CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__STRUCT_HPP_
