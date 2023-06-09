// Generated by gencpp from file bebop_msgs/CommonChargerStateMaxChargeRateChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONCHARGERSTATEMAXCHARGERATECHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONCHARGERSTATEMAXCHARGERATECHANGED_H


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
struct CommonChargerStateMaxChargeRateChanged_
{
  typedef CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> Type;

  CommonChargerStateMaxChargeRateChanged_()
    : header()
    , rate(0)  {
    }
  CommonChargerStateMaxChargeRateChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rate(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _rate_type;
  _rate_type rate;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(rate_SLOW)
  #undef rate_SLOW
#endif
#if defined(_WIN32) && defined(rate_MODERATE)
  #undef rate_MODERATE
#endif
#if defined(_WIN32) && defined(rate_FAST)
  #undef rate_FAST
#endif

  enum {
    rate_SLOW = 0u,
    rate_MODERATE = 1u,
    rate_FAST = 2u,
  };


  typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonChargerStateMaxChargeRateChanged_

typedef ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<std::allocator<void> > CommonChargerStateMaxChargeRateChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged > CommonChargerStateMaxChargeRateChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged const> CommonChargerStateMaxChargeRateChangedConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.rate == rhs.rate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "941b1a17fd6fd05c4901386c552253e8";
  }

  static const char* value(const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x941b1a17fd6fd05cULL;
  static const uint64_t static_value2 = 0x4901386c552253e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonChargerStateMaxChargeRateChanged";
  }

  static const char* value(const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonChargerStateMaxChargeRateChanged\n"
"# auto-generated from up stream XML files at\n"
"#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n"
"# To check upstream commit hash, refer to last_build_info file\n"
"# Do not modify this file by hand. Check scripts/meta folder for generator files.\n"
"#\n"
"# SDK Comment: Max charge rate.\n"
"\n"
"Header header\n"
"\n"
"# The current maximum charge rate.\n"
"uint8 rate_SLOW=0  # Fully charge the battery at a slow rate. Typically limit max charge current to 512 mA.\n"
"uint8 rate_MODERATE=1  # Almost fully-charge the battery at moderate rate (&gt; 512 mA) but slower than the fastest rate.\n"
"uint8 rate_FAST=2  # Almost fully-charge the battery at the highest possible rate supported by the charger.\n"
"uint8 rate\n"
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

  static const char* value(const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonChargerStateMaxChargeRateChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonChargerStateMaxChargeRateChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONCHARGERSTATEMAXCHARGERATECHANGED_H
