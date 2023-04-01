// Generated by gencpp from file bebop_msgs/CommonCommonStateMassStorageInfoRemainingListChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONCOMMONSTATEMASSSTORAGEINFOREMAININGLISTCHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONCOMMONSTATEMASSSTORAGEINFOREMAININGLISTCHANGED_H


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
struct CommonCommonStateMassStorageInfoRemainingListChanged_
{
  typedef CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> Type;

  CommonCommonStateMassStorageInfoRemainingListChanged_()
    : header()
    , free_space(0)
    , rec_time(0)
    , photo_remaining(0)  {
    }
  CommonCommonStateMassStorageInfoRemainingListChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , free_space(0)
    , rec_time(0)
    , photo_remaining(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _free_space_type;
  _free_space_type free_space;

   typedef uint16_t _rec_time_type;
  _rec_time_type rec_time;

   typedef uint32_t _photo_remaining_type;
  _photo_remaining_type photo_remaining;





  typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonCommonStateMassStorageInfoRemainingListChanged_

typedef ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<std::allocator<void> > CommonCommonStateMassStorageInfoRemainingListChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged > CommonCommonStateMassStorageInfoRemainingListChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged const> CommonCommonStateMassStorageInfoRemainingListChangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.free_space == rhs.free_space &&
    lhs.rec_time == rhs.rec_time &&
    lhs.photo_remaining == rhs.photo_remaining;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2749dbbf018a8a51c35552e6e0aac2ff";
  }

  static const char* value(const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2749dbbf018a8a51ULL;
  static const uint64_t static_value2 = 0xc35552e6e0aac2ffULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonCommonStateMassStorageInfoRemainingListChanged";
  }

  static const char* value(const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonCommonStateMassStorageInfoRemainingListChanged\n"
"# auto-generated from up stream XML files at\n"
"#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n"
"# To check upstream commit hash, refer to last_build_info file\n"
"# Do not modify this file by hand. Check scripts/meta folder for generator files.\n"
"#\n"
"# SDK Comment: Mass storage remaining data list.\n"
"\n"
"Header header\n"
"\n"
"# Mass storage free space in MBytes\n"
"uint32 free_space\n"
"# Mass storage record time reamining in minute\n"
"uint16 rec_time\n"
"# Mass storage photo remaining\n"
"uint32 photo_remaining\n"
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

  static const char* value(const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.free_space);
      stream.next(m.rec_time);
      stream.next(m.photo_remaining);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonCommonStateMassStorageInfoRemainingListChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonCommonStateMassStorageInfoRemainingListChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "free_space: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.free_space);
    s << indent << "rec_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rec_time);
    s << indent << "photo_remaining: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.photo_remaining);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONCOMMONSTATEMASSSTORAGEINFOREMAININGLISTCHANGED_H
