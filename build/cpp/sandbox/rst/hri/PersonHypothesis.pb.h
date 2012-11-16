/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/tracking/TrackingInfo.pb.h>
#include <rst/math/Vec2DFloat.pb.h>
#include <rst/vision/Face.pb.h>
#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>

namespace rst {
namespace hri {

class PersonHypothesis{
public:
  // Accessors
  /**
   * Field number of the "tracking_info" field.
   */
  static const int ktracking_infoFieldNumber = 0;
  
  /**
   * Return true if the "tracking_info" field is present.
   */
  inline bool has_tracking_info() const;
  
  /**
   * Return value of "tracking_info" field.
   */
  inline const rst::tracking::TrackingInfo&tracking_info() const;
  
  /**
   * Return value of "tracking_info" field.
   */
  inline rst::tracking::TrackingInfo*mutable_tracking_info();
  
  inline void set_tracking_info(const rst::tracking::TrackingInfo&newValue);
  
  
  /**
   * Field number of the "position" field.
   */
  static const int kpositionFieldNumber = 0;
  
  /**
   * Return true if the "position" field is present.
   */
  inline bool has_position() const;
  
  /**
   * Return value of "position" field.
   */
  inline const rst::math::Vec2DFloat&position() const;
  
  /**
   * Return value of "position" field.
   */
  inline rst::math::Vec2DFloat*mutable_position();
  
  inline void set_position(const rst::math::Vec2DFloat&newValue);
  
  
  /**
   * Field number of the "face" field.
   */
  static const int kfaceFieldNumber = 0;
  
  /**
   * Return true if the "face" field is present.
   */
  inline bool has_face() const;
  
  /**
   * Return value of "face" field.
   */
  inline const rst::vision::Face&face() const;
  
  /**
   * Return value of "face" field.
   */
  inline rst::vision::Face*mutable_face();
  
  inline void set_face(const rst::vision::Face&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const PersonHypothesis& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  PersonHypothesis* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::tracking::TrackingInfo _tracking_info;
  rst::math::Vec2DFloat _position;
  rst::vision::Face _face;
  
};
}
}

// Inlined Stuff

// Accessors for rst::hri::PersonHypothesis

 bool rst::hri::PersonHypothesis::has_tracking_info() const{
  return true;
}

 const rst::tracking::TrackingInfo&rst::hri::PersonHypothesis::tracking_info() const{
  return this->_tracking_info;
}

 rst::tracking::TrackingInfo*rst::hri::PersonHypothesis::mutable_tracking_info(){
  return &this->_tracking_info;
}

 void rst::hri::PersonHypothesis::set_tracking_info(const rst::tracking::TrackingInfo&newValue){
  this->_tracking_info=newValue;
}



 bool rst::hri::PersonHypothesis::has_position() const{
  return true;
}

 const rst::math::Vec2DFloat&rst::hri::PersonHypothesis::position() const{
  return this->_position;
}

 rst::math::Vec2DFloat*rst::hri::PersonHypothesis::mutable_position(){
  return &this->_position;
}

 void rst::hri::PersonHypothesis::set_position(const rst::math::Vec2DFloat&newValue){
  this->_position=newValue;
}



 bool rst::hri::PersonHypothesis::has_face() const{
  return true;
}

 const rst::vision::Face&rst::hri::PersonHypothesis::face() const{
  return this->_face;
}

 rst::vision::Face*rst::hri::PersonHypothesis::mutable_face(){
  return &this->_face;
}

 void rst::hri::PersonHypothesis::set_face(const rst::vision::Face&newValue){
  this->_face=newValue;
}




