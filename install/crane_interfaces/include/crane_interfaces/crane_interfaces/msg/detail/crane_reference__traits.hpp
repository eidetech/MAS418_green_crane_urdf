// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crane_interfaces:msg/CraneReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__TRAITS_HPP_
#define CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crane_interfaces/msg/detail/crane_reference__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CraneReference & msg,
  std::ostream & out)
{
  out << "{";
  // member: crane_cylinder_velocity_reference
  {
    out << "crane_cylinder_velocity_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.crane_cylinder_velocity_reference, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CraneReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: crane_cylinder_velocity_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crane_cylinder_velocity_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.crane_cylinder_velocity_reference, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CraneReference & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace crane_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crane_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crane_interfaces::msg::CraneReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  crane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const crane_interfaces::msg::CraneReference & msg)
{
  return crane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crane_interfaces::msg::CraneReference>()
{
  return "crane_interfaces::msg::CraneReference";
}

template<>
inline const char * name<crane_interfaces::msg::CraneReference>()
{
  return "crane_interfaces/msg/CraneReference";
}

template<>
struct has_fixed_size<crane_interfaces::msg::CraneReference>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crane_interfaces::msg::CraneReference>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crane_interfaces::msg::CraneReference>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__TRAITS_HPP_
