// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crane_interfaces:msg/CraneReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__BUILDER_HPP_
#define CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crane_interfaces/msg/detail/crane_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crane_interfaces
{

namespace msg
{

namespace builder
{

class Init_CraneReference_crane_cylinder_velocity_reference
{
public:
  Init_CraneReference_crane_cylinder_velocity_reference()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crane_interfaces::msg::CraneReference crane_cylinder_velocity_reference(::crane_interfaces::msg::CraneReference::_crane_cylinder_velocity_reference_type arg)
  {
    msg_.crane_cylinder_velocity_reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crane_interfaces::msg::CraneReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crane_interfaces::msg::CraneReference>()
{
  return crane_interfaces::msg::builder::Init_CraneReference_crane_cylinder_velocity_reference();
}

}  // namespace crane_interfaces

#endif  // CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__BUILDER_HPP_
