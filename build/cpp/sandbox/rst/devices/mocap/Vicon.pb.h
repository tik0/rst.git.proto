/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/math/Vec3DDouble.pb.h>

namespace rst {
namespace devices {
namespace mocap {

class Vicon{
public:
  // Nested Types
  class UnlabeledMarker{
  public:
    // Accessors
    /**
     * Field number of the "name" field.
     */
    static const int knameFieldNumber = 0;
    
    /**
     * Return true if the "name" field is present.
     */
    inline bool has_name() const;
    
    /**
     * Return value of "name" field.
     */
    inline const std::string&name() const;
    
    /**
     * Return value of "name" field.
     */
    inline std::string*mutable_name();
    
    inline void set_name(const std::string&newValue);
    
    
    /**
     * Field number of the "translation" field.
     */
    static const int ktranslationFieldNumber = 0;
    
    /**
     * Return true if the "translation" field is present.
     */
    inline bool has_translation() const;
    
    /**
     * Return value of "translation" field.
     */
    inline const rst::math::Vec3DDouble&translation() const;
    
    /**
     * Return value of "translation" field.
     */
    inline rst::math::Vec3DDouble*mutable_translation();
    
    inline void set_translation(const rst::math::Vec3DDouble&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const UnlabeledMarker& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    UnlabeledMarker* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::string _name;
    rst::math::Vec3DDouble _translation;
    
  };
  
  class Timecode{
  public:
    // Accessors
    /**
     * Field number of the "hours" field.
     */
    static const int khoursFieldNumber = 0;
    
    /**
     * Return true if the "hours" field is present.
     */
    inline bool has_hours() const;
    
    /**
     * Return value of "hours" field.
     */
    inline const boost::uint32_t&hours() const;
    
    inline void set_hours(const boost::uint32_t&newValue);
    
    
    /**
     * Field number of the "minutes" field.
     */
    static const int kminutesFieldNumber = 0;
    
    /**
     * Return true if the "minutes" field is present.
     */
    inline bool has_minutes() const;
    
    /**
     * Return value of "minutes" field.
     */
    inline const boost::uint32_t&minutes() const;
    
    inline void set_minutes(const boost::uint32_t&newValue);
    
    
    /**
     * Field number of the "seconds" field.
     */
    static const int ksecondsFieldNumber = 0;
    
    /**
     * Return true if the "seconds" field is present.
     */
    inline bool has_seconds() const;
    
    /**
     * Return value of "seconds" field.
     */
    inline const boost::uint32_t&seconds() const;
    
    inline void set_seconds(const boost::uint32_t&newValue);
    
    
    /**
     * Field number of the "frames" field.
     */
    static const int kframesFieldNumber = 0;
    
    /**
     * Return true if the "frames" field is present.
     */
    inline bool has_frames() const;
    
    /**
     * Return value of "frames" field.
     */
    inline const boost::uint32_t&frames() const;
    
    inline void set_frames(const boost::uint32_t&newValue);
    
    
    /**
     * Field number of the "sub_frame" field.
     */
    static const int ksub_frameFieldNumber = 0;
    
    /**
     * Return true if the "sub_frame" field is present.
     */
    inline bool has_sub_frame() const;
    
    /**
     * Return value of "sub_frame" field.
     */
    inline const boost::uint32_t&sub_frame() const;
    
    inline void set_sub_frame(const boost::uint32_t&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Timecode& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Timecode* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    boost::uint32_t _hours;
    boost::uint32_t _minutes;
    boost::uint32_t _seconds;
    boost::uint32_t _frames;
    boost::uint32_t _sub_frame;
    
  };
  
  class Segment{
  public:
    // Nested Types
    class Marker{
    public:
      // Accessors
      /**
       * Field number of the "name" field.
       */
      static const int knameFieldNumber = 0;
      
      /**
       * Return true if the "name" field is present.
       */
      inline bool has_name() const;
      
      /**
       * Return value of "name" field.
       */
      inline const std::string&name() const;
      
      /**
       * Return value of "name" field.
       */
      inline std::string*mutable_name();
      
      inline void set_name(const std::string&newValue);
      
      
      /**
       * Field number of the "translation" field.
       */
      static const int ktranslationFieldNumber = 0;
      
      /**
       * Return true if the "translation" field is present.
       */
      inline bool has_translation() const;
      
      /**
       * Return value of "translation" field.
       */
      inline const rst::math::Vec3DDouble&translation() const;
      
      /**
       * Return value of "translation" field.
       */
      inline rst::math::Vec3DDouble*mutable_translation();
      
      inline void set_translation(const rst::math::Vec3DDouble&newValue);
      
      
      // Type-independent protocol buffer API
      
      /**
       * Return the default instance of this class.
       * 
       * @return A reference to the default instance.
      
       */
      static const Marker& default_instance();
      
      /**
       * Return the fully qualified name of this class.
       */
      static const std::string GetTypeName();
      
      /**
       * Return a new instance of this class.
       */
      Marker* New();
      
      /**
       * Return the number of octets required to store the serialized
       * representation of this object.
      
       */
      int ByteSize() const;
      
      bool SerializeToString(std::string* destination) const;
      
      bool ParseFromString(const std::string& source);
      
      bool SerializeToArray(void* destination,int size) const;
      
      bool ParseFromArray(const void* source,int size);
      
      std::string _name;
      rst::math::Vec3DDouble _translation;
      
    };
    
    // Accessors
    /**
     * Field number of the "name" field.
     */
    static const int knameFieldNumber = 0;
    
    /**
     * Return true if the "name" field is present.
     */
    inline bool has_name() const;
    
    /**
     * Return value of "name" field.
     */
    inline const std::string&name() const;
    
    /**
     * Return value of "name" field.
     */
    inline std::string*mutable_name();
    
    inline void set_name(const std::string&newValue);
    
    
    /**
     * Field number of the "markers" field.
     */
    static const int kmarkersFieldNumber = 0;
    
    /**
     * Return true if the "markers" field is present.
     */
    inline bool has_markers() const;
    
    /**
     * Return the number of elements in "markers".
     */
    inline int markers_size() const;
    /**
     * Return the element at @a index of "markers".
     */
    inline const rst::devices::mocap::Vicon::Segment::Marker& markers(unsigned int index) const;
    /**
     * Return value of "markers" field.
     */
    inline const std::vector<rst::devices::mocap::Vicon::Segment::Marker>&markers() const;
    
    
    /**
     * Set element at index @a index of "markers" to @a newValue.
     */
    inline void set_markers(unsigned int index,const rst::devices::mocap::Vicon::Segment::Marker& newValue);
    /**
     * Append an item to "markers" and return a pointer to it.
     */
    inline rst::devices::mocap::Vicon::Segment::Marker* add_markers();
    
    /**
     * Field number of the "translation" field.
     */
    static const int ktranslationFieldNumber = 0;
    
    /**
     * Return true if the "translation" field is present.
     */
    inline bool has_translation() const;
    
    /**
     * Return value of "translation" field.
     */
    inline const rst::math::Vec3DDouble&translation() const;
    
    /**
     * Return value of "translation" field.
     */
    inline rst::math::Vec3DDouble*mutable_translation();
    
    inline void set_translation(const rst::math::Vec3DDouble&newValue);
    
    
    /**
     * Field number of the "euler_orientation" field.
     */
    static const int keuler_orientationFieldNumber = 0;
    
    /**
     * Return true if the "euler_orientation" field is present.
     */
    inline bool has_euler_orientation() const;
    
    /**
     * Return value of "euler_orientation" field.
     */
    inline const rst::math::Vec3DDouble&euler_orientation() const;
    
    /**
     * Return value of "euler_orientation" field.
     */
    inline rst::math::Vec3DDouble*mutable_euler_orientation();
    
    inline void set_euler_orientation(const rst::math::Vec3DDouble&newValue);
    
    
    /**
     * Field number of the "helical_orientation" field.
     */
    static const int khelical_orientationFieldNumber = 0;
    
    /**
     * Return true if the "helical_orientation" field is present.
     */
    inline bool has_helical_orientation() const;
    
    /**
     * Return value of "helical_orientation" field.
     */
    inline const rst::math::Vec3DDouble&helical_orientation() const;
    
    /**
     * Return value of "helical_orientation" field.
     */
    inline rst::math::Vec3DDouble*mutable_helical_orientation();
    
    inline void set_helical_orientation(const rst::math::Vec3DDouble&newValue);
    
    
    /**
     * Field number of the "quaternionen_orientation" field.
     */
    static const int kquaternionen_orientationFieldNumber = 0;
    
    /**
     * Return true if the "quaternionen_orientation" field is present.
     */
    inline bool has_quaternionen_orientation() const;
    
    /**
     * Return value of "quaternionen_orientation" field.
     */
    inline const rst::math::Vec3DDouble&quaternionen_orientation() const;
    
    /**
     * Return value of "quaternionen_orientation" field.
     */
    inline rst::math::Vec3DDouble*mutable_quaternionen_orientation();
    
    inline void set_quaternionen_orientation(const rst::math::Vec3DDouble&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Segment& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Segment* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::string _name;
    std::vector<rst::devices::mocap::Vicon::Segment::Marker> _markers;
    rst::math::Vec3DDouble _translation;
    rst::math::Vec3DDouble _euler_orientation;
    rst::math::Vec3DDouble _helical_orientation;
    rst::math::Vec3DDouble _quaternionen_orientation;
    
  };
  
  class Subject{
  public:
    // Accessors
    /**
     * Field number of the "name" field.
     */
    static const int knameFieldNumber = 0;
    
    /**
     * Return true if the "name" field is present.
     */
    inline bool has_name() const;
    
    /**
     * Return value of "name" field.
     */
    inline const std::string&name() const;
    
    /**
     * Return value of "name" field.
     */
    inline std::string*mutable_name();
    
    inline void set_name(const std::string&newValue);
    
    
    /**
     * Field number of the "segments" field.
     */
    static const int ksegmentsFieldNumber = 0;
    
    /**
     * Return true if the "segments" field is present.
     */
    inline bool has_segments() const;
    
    /**
     * Return the number of elements in "segments".
     */
    inline int segments_size() const;
    /**
     * Return the element at @a index of "segments".
     */
    inline const rst::devices::mocap::Vicon::Segment& segments(unsigned int index) const;
    /**
     * Return value of "segments" field.
     */
    inline const std::vector<rst::devices::mocap::Vicon::Segment>&segments() const;
    
    
    /**
     * Set element at index @a index of "segments" to @a newValue.
     */
    inline void set_segments(unsigned int index,const rst::devices::mocap::Vicon::Segment& newValue);
    /**
     * Append an item to "segments" and return a pointer to it.
     */
    inline rst::devices::mocap::Vicon::Segment* add_segments();
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Subject& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Subject* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::string _name;
    std::vector<rst::devices::mocap::Vicon::Segment> _segments;
    
  };
  
  // Accessors
  /**
   * Field number of the "frame" field.
   */
  static const int kframeFieldNumber = 0;
  
  /**
   * Return true if the "frame" field is present.
   */
  inline bool has_frame() const;
  
  /**
   * Return value of "frame" field.
   */
  inline const boost::uint64_t&frame() const;
  
  inline void set_frame(const boost::uint64_t&newValue);
  
  
  /**
   * Field number of the "timecode" field.
   */
  static const int ktimecodeFieldNumber = 0;
  
  /**
   * Return true if the "timecode" field is present.
   */
  inline bool has_timecode() const;
  
  /**
   * Return value of "timecode" field.
   */
  inline const rst::devices::mocap::Vicon::Timecode&timecode() const;
  
  /**
   * Return value of "timecode" field.
   */
  inline rst::devices::mocap::Vicon::Timecode*mutable_timecode();
  
  inline void set_timecode(const rst::devices::mocap::Vicon::Timecode&newValue);
  
  
  /**
   * Field number of the "subject" field.
   */
  static const int ksubjectFieldNumber = 0;
  
  /**
   * Return true if the "subject" field is present.
   */
  inline bool has_subject() const;
  
  /**
   * Return the number of elements in "subject".
   */
  inline int subject_size() const;
  /**
   * Return the element at @a index of "subject".
   */
  inline const rst::devices::mocap::Vicon::Subject& subject(unsigned int index) const;
  /**
   * Return value of "subject" field.
   */
  inline const std::vector<rst::devices::mocap::Vicon::Subject>&subject() const;
  
  
  /**
   * Set element at index @a index of "subject" to @a newValue.
   */
  inline void set_subject(unsigned int index,const rst::devices::mocap::Vicon::Subject& newValue);
  /**
   * Append an item to "subject" and return a pointer to it.
   */
  inline rst::devices::mocap::Vicon::Subject* add_subject();
  
  /**
   * Field number of the "unlabeled_marker" field.
   */
  static const int kunlabeled_markerFieldNumber = 0;
  
  /**
   * Return true if the "unlabeled_marker" field is present.
   */
  inline bool has_unlabeled_marker() const;
  
  /**
   * Return the number of elements in "unlabeled_marker".
   */
  inline int unlabeled_marker_size() const;
  /**
   * Return the element at @a index of "unlabeled_marker".
   */
  inline const rst::devices::mocap::Vicon::UnlabeledMarker& unlabeled_marker(unsigned int index) const;
  /**
   * Return value of "unlabeled_marker" field.
   */
  inline const std::vector<rst::devices::mocap::Vicon::UnlabeledMarker>&unlabeled_marker() const;
  
  
  /**
   * Set element at index @a index of "unlabeled_marker" to @a newValue.
   */
  inline void set_unlabeled_marker(unsigned int index,const rst::devices::mocap::Vicon::UnlabeledMarker& newValue);
  /**
   * Append an item to "unlabeled_marker" and return a pointer to it.
   */
  inline rst::devices::mocap::Vicon::UnlabeledMarker* add_unlabeled_marker();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Vicon& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Vicon* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  boost::uint64_t _frame;
  rst::devices::mocap::Vicon::Timecode _timecode;
  std::vector<rst::devices::mocap::Vicon::Subject> _subject;
  std::vector<rst::devices::mocap::Vicon::UnlabeledMarker> _unlabeled_marker;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::mocap::vicon::UnlabeledMarker

 bool rst::devices::mocap::Vicon::UnlabeledMarker::has_name() const{
  return true;
}

 const std::string&rst::devices::mocap::Vicon::UnlabeledMarker::name() const{
  return this->_name;
}

 std::string*rst::devices::mocap::Vicon::UnlabeledMarker::mutable_name(){
  return &this->_name;
}

 void rst::devices::mocap::Vicon::UnlabeledMarker::set_name(const std::string&newValue){
  this->_name=newValue;
}



 bool rst::devices::mocap::Vicon::UnlabeledMarker::has_translation() const{
  return true;
}

 const rst::math::Vec3DDouble&rst::devices::mocap::Vicon::UnlabeledMarker::translation() const{
  return this->_translation;
}

 rst::math::Vec3DDouble*rst::devices::mocap::Vicon::UnlabeledMarker::mutable_translation(){
  return &this->_translation;
}

 void rst::devices::mocap::Vicon::UnlabeledMarker::set_translation(const rst::math::Vec3DDouble&newValue){
  this->_translation=newValue;
}





// Accessors for rst::devices::mocap::vicon::Timecode

 bool rst::devices::mocap::Vicon::Timecode::has_hours() const{
  return true;
}

 const boost::uint32_t&rst::devices::mocap::Vicon::Timecode::hours() const{
  return this->_hours;
}

 void rst::devices::mocap::Vicon::Timecode::set_hours(const boost::uint32_t&newValue){
  this->_hours=newValue;
}



 bool rst::devices::mocap::Vicon::Timecode::has_minutes() const{
  return true;
}

 const boost::uint32_t&rst::devices::mocap::Vicon::Timecode::minutes() const{
  return this->_minutes;
}

 void rst::devices::mocap::Vicon::Timecode::set_minutes(const boost::uint32_t&newValue){
  this->_minutes=newValue;
}



 bool rst::devices::mocap::Vicon::Timecode::has_seconds() const{
  return true;
}

 const boost::uint32_t&rst::devices::mocap::Vicon::Timecode::seconds() const{
  return this->_seconds;
}

 void rst::devices::mocap::Vicon::Timecode::set_seconds(const boost::uint32_t&newValue){
  this->_seconds=newValue;
}



 bool rst::devices::mocap::Vicon::Timecode::has_frames() const{
  return true;
}

 const boost::uint32_t&rst::devices::mocap::Vicon::Timecode::frames() const{
  return this->_frames;
}

 void rst::devices::mocap::Vicon::Timecode::set_frames(const boost::uint32_t&newValue){
  this->_frames=newValue;
}



 bool rst::devices::mocap::Vicon::Timecode::has_sub_frame() const{
  return true;
}

 const boost::uint32_t&rst::devices::mocap::Vicon::Timecode::sub_frame() const{
  return this->_sub_frame;
}

 void rst::devices::mocap::Vicon::Timecode::set_sub_frame(const boost::uint32_t&newValue){
  this->_sub_frame=newValue;
}





// Accessors for rst::devices::mocap::vicon::segment::Marker

 bool rst::devices::mocap::Vicon::Segment::Marker::has_name() const{
  return true;
}

 const std::string&rst::devices::mocap::Vicon::Segment::Marker::name() const{
  return this->_name;
}

 std::string*rst::devices::mocap::Vicon::Segment::Marker::mutable_name(){
  return &this->_name;
}

 void rst::devices::mocap::Vicon::Segment::Marker::set_name(const std::string&newValue){
  this->_name=newValue;
}



 bool rst::devices::mocap::Vicon::Segment::Marker::has_translation() const{
  return true;
}

 const rst::math::Vec3DDouble&rst::devices::mocap::Vicon::Segment::Marker::translation() const{
  return this->_translation;
}

 rst::math::Vec3DDouble*rst::devices::mocap::Vicon::Segment::Marker::mutable_translation(){
  return &this->_translation;
}

 void rst::devices::mocap::Vicon::Segment::Marker::set_translation(const rst::math::Vec3DDouble&newValue){
  this->_translation=newValue;
}





// Accessors for rst::devices::mocap::vicon::Segment

 bool rst::devices::mocap::Vicon::Segment::has_name() const{
  return true;
}

 const std::string&rst::devices::mocap::Vicon::Segment::name() const{
  return this->_name;
}

 std::string*rst::devices::mocap::Vicon::Segment::mutable_name(){
  return &this->_name;
}

 void rst::devices::mocap::Vicon::Segment::set_name(const std::string&newValue){
  this->_name=newValue;
}



 bool rst::devices::mocap::Vicon::Segment::has_markers() const{
  return true;
}

 int rst::devices::mocap::Vicon::Segment::markers_size() const{
  return this->_markers.size();
}
 const rst::devices::mocap::Vicon::Segment::Marker& rst::devices::mocap::Vicon::Segment::markers(unsigned int index) const{
  return this->_markers[index];
}
 const std::vector<rst::devices::mocap::Vicon::Segment::Marker>&rst::devices::mocap::Vicon::Segment::markers() const{
  return this->_markers;
}



 void rst::devices::mocap::Vicon::Segment::set_markers(unsigned int index,const rst::devices::mocap::Vicon::Segment::Marker& newValue){
  if(this->_markers.size()<=index){
    this->_markers.resize(index+1);
  }
  this->_markers[index]=newValue;

}
 rst::devices::mocap::Vicon::Segment::Marker* rst::devices::mocap::Vicon::Segment::add_markers(){
  this->_markers.resize(this->_markers.size()+1);
  return &this->_markers.back();

}

 bool rst::devices::mocap::Vicon::Segment::has_translation() const{
  return true;
}

 const rst::math::Vec3DDouble&rst::devices::mocap::Vicon::Segment::translation() const{
  return this->_translation;
}

 rst::math::Vec3DDouble*rst::devices::mocap::Vicon::Segment::mutable_translation(){
  return &this->_translation;
}

 void rst::devices::mocap::Vicon::Segment::set_translation(const rst::math::Vec3DDouble&newValue){
  this->_translation=newValue;
}



 bool rst::devices::mocap::Vicon::Segment::has_euler_orientation() const{
  return true;
}

 const rst::math::Vec3DDouble&rst::devices::mocap::Vicon::Segment::euler_orientation() const{
  return this->_euler_orientation;
}

 rst::math::Vec3DDouble*rst::devices::mocap::Vicon::Segment::mutable_euler_orientation(){
  return &this->_euler_orientation;
}

 void rst::devices::mocap::Vicon::Segment::set_euler_orientation(const rst::math::Vec3DDouble&newValue){
  this->_euler_orientation=newValue;
}



 bool rst::devices::mocap::Vicon::Segment::has_helical_orientation() const{
  return true;
}

 const rst::math::Vec3DDouble&rst::devices::mocap::Vicon::Segment::helical_orientation() const{
  return this->_helical_orientation;
}

 rst::math::Vec3DDouble*rst::devices::mocap::Vicon::Segment::mutable_helical_orientation(){
  return &this->_helical_orientation;
}

 void rst::devices::mocap::Vicon::Segment::set_helical_orientation(const rst::math::Vec3DDouble&newValue){
  this->_helical_orientation=newValue;
}



 bool rst::devices::mocap::Vicon::Segment::has_quaternionen_orientation() const{
  return true;
}

 const rst::math::Vec3DDouble&rst::devices::mocap::Vicon::Segment::quaternionen_orientation() const{
  return this->_quaternionen_orientation;
}

 rst::math::Vec3DDouble*rst::devices::mocap::Vicon::Segment::mutable_quaternionen_orientation(){
  return &this->_quaternionen_orientation;
}

 void rst::devices::mocap::Vicon::Segment::set_quaternionen_orientation(const rst::math::Vec3DDouble&newValue){
  this->_quaternionen_orientation=newValue;
}





// Accessors for rst::devices::mocap::vicon::Subject

 bool rst::devices::mocap::Vicon::Subject::has_name() const{
  return true;
}

 const std::string&rst::devices::mocap::Vicon::Subject::name() const{
  return this->_name;
}

 std::string*rst::devices::mocap::Vicon::Subject::mutable_name(){
  return &this->_name;
}

 void rst::devices::mocap::Vicon::Subject::set_name(const std::string&newValue){
  this->_name=newValue;
}



 bool rst::devices::mocap::Vicon::Subject::has_segments() const{
  return true;
}

 int rst::devices::mocap::Vicon::Subject::segments_size() const{
  return this->_segments.size();
}
 const rst::devices::mocap::Vicon::Segment& rst::devices::mocap::Vicon::Subject::segments(unsigned int index) const{
  return this->_segments[index];
}
 const std::vector<rst::devices::mocap::Vicon::Segment>&rst::devices::mocap::Vicon::Subject::segments() const{
  return this->_segments;
}



 void rst::devices::mocap::Vicon::Subject::set_segments(unsigned int index,const rst::devices::mocap::Vicon::Segment& newValue){
  if(this->_segments.size()<=index){
    this->_segments.resize(index+1);
  }
  this->_segments[index]=newValue;

}
 rst::devices::mocap::Vicon::Segment* rst::devices::mocap::Vicon::Subject::add_segments(){
  this->_segments.resize(this->_segments.size()+1);
  return &this->_segments.back();

}



// Accessors for rst::devices::mocap::Vicon

 bool rst::devices::mocap::Vicon::has_frame() const{
  return true;
}

 const boost::uint64_t&rst::devices::mocap::Vicon::frame() const{
  return this->_frame;
}

 void rst::devices::mocap::Vicon::set_frame(const boost::uint64_t&newValue){
  this->_frame=newValue;
}



 bool rst::devices::mocap::Vicon::has_timecode() const{
  return true;
}

 const rst::devices::mocap::Vicon::Timecode&rst::devices::mocap::Vicon::timecode() const{
  return this->_timecode;
}

 rst::devices::mocap::Vicon::Timecode*rst::devices::mocap::Vicon::mutable_timecode(){
  return &this->_timecode;
}

 void rst::devices::mocap::Vicon::set_timecode(const rst::devices::mocap::Vicon::Timecode&newValue){
  this->_timecode=newValue;
}



 bool rst::devices::mocap::Vicon::has_subject() const{
  return true;
}

 int rst::devices::mocap::Vicon::subject_size() const{
  return this->_subject.size();
}
 const rst::devices::mocap::Vicon::Subject& rst::devices::mocap::Vicon::subject(unsigned int index) const{
  return this->_subject[index];
}
 const std::vector<rst::devices::mocap::Vicon::Subject>&rst::devices::mocap::Vicon::subject() const{
  return this->_subject;
}



 void rst::devices::mocap::Vicon::set_subject(unsigned int index,const rst::devices::mocap::Vicon::Subject& newValue){
  if(this->_subject.size()<=index){
    this->_subject.resize(index+1);
  }
  this->_subject[index]=newValue;

}
 rst::devices::mocap::Vicon::Subject* rst::devices::mocap::Vicon::add_subject(){
  this->_subject.resize(this->_subject.size()+1);
  return &this->_subject.back();

}

 bool rst::devices::mocap::Vicon::has_unlabeled_marker() const{
  return true;
}

 int rst::devices::mocap::Vicon::unlabeled_marker_size() const{
  return this->_unlabeled_marker.size();
}
 const rst::devices::mocap::Vicon::UnlabeledMarker& rst::devices::mocap::Vicon::unlabeled_marker(unsigned int index) const{
  return this->_unlabeled_marker[index];
}
 const std::vector<rst::devices::mocap::Vicon::UnlabeledMarker>&rst::devices::mocap::Vicon::unlabeled_marker() const{
  return this->_unlabeled_marker;
}



 void rst::devices::mocap::Vicon::set_unlabeled_marker(unsigned int index,const rst::devices::mocap::Vicon::UnlabeledMarker& newValue){
  if(this->_unlabeled_marker.size()<=index){
    this->_unlabeled_marker.resize(index+1);
  }
  this->_unlabeled_marker[index]=newValue;

}
 rst::devices::mocap::Vicon::UnlabeledMarker* rst::devices::mocap::Vicon::add_unlabeled_marker(){
  this->_unlabeled_marker.resize(this->_unlabeled_marker.size()+1);
  return &this->_unlabeled_marker.back();

}


