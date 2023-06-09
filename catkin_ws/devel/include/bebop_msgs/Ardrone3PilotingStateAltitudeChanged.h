// Generated by gencpp from file bebop_msgs/Ardrone3PilotingStateAltitudeChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_ARDRONE3PILOTINGSTATEALTITUDECHANGED_H
#define BEBOP_MSGS_MESSAGE_ARDRONE3PILOTINGSTATEALTITUDECHANGED_H


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
struct Ardrone3PilotingStateAltitudeChanged_
{
  typedef Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> Type;

  Ardrone3PilotingStateAltitudeChanged_()
    : header()
    , altitude(0.0)  {
    }
  Ardrone3PilotingStateAltitudeChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , altitude(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _altitude_type;
  _altitude_type altitude;





  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> const> ConstPtr;

}; // struct Ardrone3PilotingStateAltitudeChanged_

typedef ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<std::allocator<void> > Ardrone3PilotingStateAltitudeChanged;

typedef boost::shared_ptr< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged > Ardrone3PilotingStateAltitudeChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged const> Ardrone3PilotingStateAltitudeChangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.altitude == rhs.altitude;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5073f650d09c8192d358641b48a0204b";
  }

  static const char* value(const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5073f650d09c8192ULL;
  static const uint64_t static_value2 = 0xd358641b48a0204bULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/Ardrone3PilotingStateAltitudeChanged";
  }

  static const char* value(const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ardrone3PilotingStateAltitudeChanged\n"
"# auto-generated from up stream XML files at\n"
"#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n"
"# To check upstream commit hash, refer to last_build_info file\n"
"# Do not modify this file by hand. Check scripts/meta folder for generator files.\n"
"#\n"
"# SDK Comment: Drones altitude changed.\\n The altitude reported is the altitude above the take off point.\\n To get the altitude above sea level, see [PositionChanged](#1-4-4).\n"
"\n"
"Header header\n"
"\n"
"# Altitude in meters\n"
"float64 altitude\n"
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

  static const char* value(const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ardrone3PilotingStateAltitudeChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::Ardrone3PilotingStateAltitudeChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_ARDRONE3PILOTINGSTATEALTITUDECHANGED_H
