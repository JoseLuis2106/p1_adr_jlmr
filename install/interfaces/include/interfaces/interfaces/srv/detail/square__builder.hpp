// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Square.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SQUARE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SQUARE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/square__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Square_Request_n
{
public:
  Init_Square_Request_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Square_Request n(::interfaces::srv::Square_Request::_n_type arg)
  {
    msg_.n = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Square_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Square_Request>()
{
  return interfaces::srv::builder::Init_Square_Request_n();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Square_Response_sq
{
public:
  Init_Square_Response_sq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Square_Response sq(::interfaces::srv::Square_Response::_sq_type arg)
  {
    msg_.sq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Square_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Square_Response>()
{
  return interfaces::srv::builder::Init_Square_Response_sq();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SQUARE__BUILDER_HPP_
