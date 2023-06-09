// Generated by gencpp from file bebop_msgs/CommonFlightPlanStateLockStateChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONFLIGHTPLANSTATELOCKSTATECHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONFLIGHTPLANSTATELOCKSTATECHANGED_H


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
struct CommonFlightPlanStateLockStateChanged_
{
  typedef CommonFlightPlanStateLockStateChanged_<ContainerAllocator> Type;

  CommonFlightPlanStateLockStateChanged_()
    : header()
    , LockState(0)  {
    }
  CommonFlightPlanStateLockStateChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , LockState(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _LockState_type;
  _LockState_type LockState;





  typedef boost::shared_ptr< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonFlightPlanStateLockStateChanged_

typedef ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<std::allocator<void> > CommonFlightPlanStateLockStateChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonFlightPlanStateLockStateChanged > CommonFlightPlanStateLockStateChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonFlightPlanStateLockStateChanged const> CommonFlightPlanStateLockStateChangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.LockState == rhs.LockState;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "589c834fe271c4b4d92bfc1fd4d150a2";
  }

  static const char* value(const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x589c834fe271c4b4ULL;
  static const uint64_t static_value2 = 0xd92bfc1fd4d150a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonFlightPlanStateLockStateChanged";
  }

  static const char* value(const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonFlightPlanStateLockStateChanged\n"
"# auto-generated from up stream XML files at\n"
"#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n"
"# To check upstream commit hash, refer to last_build_info file\n"
"# Do not modify this file by hand. Check scripts/meta folder for generator files.\n"
"#\n"
"# SDK Comment: FlightPlan lock state.\\n Represents the fact that the controller is able or not to stop or pause a playing FlightPlan\n"
"\n"
"Header header\n"
"\n"
"# 1 if FlightPlan is locked: cant pause or stop FlightPlan. 0 if FlightPlan is unlocked: pause or stop available.\n"
"uint8 LockState\n"
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

  static const char* value(const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.LockState);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonFlightPlanStateLockStateChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonFlightPlanStateLockStateChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "LockState: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LockState);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONFLIGHTPLANSTATELOCKSTATECHANGED_H
