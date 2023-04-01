// Generated by gencpp from file bebop_msgs/CommonAccessoryStateAccessoryConfigChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONACCESSORYSTATEACCESSORYCONFIGCHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONACCESSORYSTATEACCESSORYCONFIGCHANGED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace bebop_msgs
{
template <class ContainerAllocator>
struct CommonAccessoryStateAccessoryConfigChanged_
{
  typedef CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> Type;

  CommonAccessoryStateAccessoryConfigChanged_()
    : header()
    , newAccessory(0)
    , error(0)  {
    }
  CommonAccessoryStateAccessoryConfigChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , newAccessory(0)
    , error(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _newAccessory_type;
  _newAccessory_type newAccessory;

   typedef uint8_t _error_type;
  _error_type error;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(newAccessory_UNCONFIGURED)
  #undef newAccessory_UNCONFIGURED
#endif
#if defined(_WIN32) && defined(newAccessory_NO_ACCESSORY)
  #undef newAccessory_NO_ACCESSORY
#endif
#if defined(_WIN32) && defined(newAccessory_STD_WHEELS)
  #undef newAccessory_STD_WHEELS
#endif
#if defined(_WIN32) && defined(newAccessory_TRUCK_WHEELS)
  #undef newAccessory_TRUCK_WHEELS
#endif
#if defined(_WIN32) && defined(newAccessory_HULL)
  #undef newAccessory_HULL
#endif
#if defined(_WIN32) && defined(newAccessory_HYDROFOIL)
  #undef newAccessory_HYDROFOIL
#endif
#if defined(_WIN32) && defined(newAccessory_IN_PROGRESS)
  #undef newAccessory_IN_PROGRESS
#endif
#if defined(_WIN32) && defined(error_OK)
  #undef error_OK
#endif
#if defined(_WIN32) && defined(error_UNKNOWN)
  #undef error_UNKNOWN
#endif
#if defined(_WIN32) && defined(error_FLYING)
  #undef error_FLYING
#endif

  enum {
    newAccessory_UNCONFIGURED = 0u,
    newAccessory_NO_ACCESSORY = 1u,
    newAccessory_STD_WHEELS = 2u,
    newAccessory_TRUCK_WHEELS = 3u,
    newAccessory_HULL = 4u,
    newAccessory_HYDROFOIL = 5u,
    newAccessory_IN_PROGRESS = 6u,
    error_OK = 0u,
    error_UNKNOWN = 1u,
    error_FLYING = 2u,
  };


  typedef boost::shared_ptr< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonAccessoryStateAccessoryConfigChanged_

typedef ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<std::allocator<void> > CommonAccessoryStateAccessoryConfigChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged > CommonAccessoryStateAccessoryConfigChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged const> CommonAccessoryStateAccessoryConfigChangedConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.newAccessory == rhs.newAccessory &&
    lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e157f9e28ff119a959d19b46621057dd";
  }

  static const char* value(const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe157f9e28ff119a9ULL;
  static const uint64_t static_value2 = 0x59d19b46621057ddULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonAccessoryStateAccessoryConfigChanged";
  }

  static const char* value(const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonAccessoryStateAccessoryConfigChanged\n"
"# auto-generated from up stream XML files at\n"
"#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n"
"# To check upstream commit hash, refer to last_build_info file\n"
"# Do not modify this file by hand. Check scripts/meta folder for generator files.\n"
"#\n"
"# SDK Comment: Accessory config.\n"
"\n"
"Header header\n"
"\n"
"# Accessory configuration reported by firmware.\n"
"uint8 newAccessory_UNCONFIGURED=0  # No accessory configuration set. Controller needs to set one.\n"
"uint8 newAccessory_NO_ACCESSORY=1  # No accessory.\n"
"uint8 newAccessory_STD_WHEELS=2  # Standard wheels\n"
"uint8 newAccessory_TRUCK_WHEELS=3  # Truck wheels\n"
"uint8 newAccessory_HULL=4  # Hull\n"
"uint8 newAccessory_HYDROFOIL=5  # Hydrofoil\n"
"uint8 newAccessory_IN_PROGRESS=6  # Configuration in progress.\n"
"uint8 newAccessory\n"
"# Error code.\n"
"uint8 error_OK=0  # No error. Accessory config change successful.\n"
"uint8 error_UNKNOWN=1  # Cannot change accessory configuration for some reason.\n"
"uint8 error_FLYING=2  # Cannot change accessory configuration while flying.\n"
"uint8 error\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.newAccessory);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonAccessoryStateAccessoryConfigChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonAccessoryStateAccessoryConfigChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "newAccessory: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.newAccessory);
    s << indent << "error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONACCESSORYSTATEACCESSORYCONFIGCHANGED_H
