// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Square.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SQUARE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__SQUARE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Square_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Square_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Square_Request_
{
  using Type = Square_Request_<ContainerAllocator>;

  explicit Square_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0ll;
    }
  }

  explicit Square_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0ll;
    }
  }

  // field types and members
  using _n_type =
    int64_t;
  _n_type n;

  // setters for named parameter idiom
  Type & set__n(
    const int64_t & _arg)
  {
    this->n = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Square_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Square_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Square_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Square_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Square_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Square_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Square_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Square_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Square_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Square_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Square_Request
    std::shared_ptr<interfaces::srv::Square_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Square_Request
    std::shared_ptr<interfaces::srv::Square_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Square_Request_ & other) const
  {
    if (this->n != other.n) {
      return false;
    }
    return true;
  }
  bool operator!=(const Square_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Square_Request_

// alias to use template instance with default allocator
using Square_Request =
  interfaces::srv::Square_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Square_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Square_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Square_Response_
{
  using Type = Square_Response_<ContainerAllocator>;

  explicit Square_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sq = 0ll;
    }
  }

  explicit Square_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sq = 0ll;
    }
  }

  // field types and members
  using _sq_type =
    int64_t;
  _sq_type sq;

  // setters for named parameter idiom
  Type & set__sq(
    const int64_t & _arg)
  {
    this->sq = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Square_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Square_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Square_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Square_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Square_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Square_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Square_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Square_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Square_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Square_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Square_Response
    std::shared_ptr<interfaces::srv::Square_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Square_Response
    std::shared_ptr<interfaces::srv::Square_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Square_Response_ & other) const
  {
    if (this->sq != other.sq) {
      return false;
    }
    return true;
  }
  bool operator!=(const Square_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Square_Response_

// alias to use template instance with default allocator
using Square_Response =
  interfaces::srv::Square_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Square
{
  using Request = interfaces::srv::Square_Request;
  using Response = interfaces::srv::Square_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SQUARE__STRUCT_HPP_
