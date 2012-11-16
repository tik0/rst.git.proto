/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>
#include <rst/math/Vec3DFloat.pb.h>

namespace rst {
namespace vision {

class Stereo{
public:
  // Accessors
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
  inline const rst::geometry::BoundingBox&face() const;
  
  /**
   * Return value of "face" field.
   */
  inline rst::geometry::BoundingBox*mutable_face();
  
  inline void set_face(const rst::geometry::BoundingBox&newValue);
  
  
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
  inline const rst::math::Vec3DFloat&position() const;
  
  /**
   * Return value of "position" field.
   */
  inline rst::math::Vec3DFloat*mutable_position();
  
  inline void set_position(const rst::math::Vec3DFloat&newValue);
  
  
  /**
   * Field number of the "speaking_probability" field.
   */
  static const int kspeaking_probabilityFieldNumber = 0;
  
  /**
   * Return true if the "speaking_probability" field is present.
   */
  inline bool has_speaking_probability() const;
  
  /**
   * Return value of "speaking_probability" field.
   */
  inline const float&speaking_probability() const;
  
  inline void set_speaking_probability(const float&newValue);
  
  
  /**
   * Field number of the "mapped_itd" field.
   */
  static const int kmapped_itdFieldNumber = 0;
  
  /**
   * Return true if the "mapped_itd" field is present.
   */
  inline bool has_mapped_itd() const;
  
  /**
   * Return value of "mapped_itd" field.
   */
  inline const float&mapped_itd() const;
  
  inline void set_mapped_itd(const float&newValue);
  
  
  /**
   * Field number of the "track_id" field.
   */
  static const int ktrack_idFieldNumber = 0;
  
  /**
   * Return true if the "track_id" field is present.
   */
  inline bool has_track_id() const;
  
  /**
   * Return value of "track_id" field.
   */
  inline const boost::uint32_t&track_id() const;
  
  inline void set_track_id(const boost::uint32_t&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Stereo& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Stereo* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::geometry::BoundingBox _face;
  rst::math::Vec3DFloat _position;
  float _speaking_probability;
  float _mapped_itd;
  boost::uint32_t _track_id;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::Stereo

 bool rst::vision::Stereo::has_face() const{
  return true;
}

 const rst::geometry::BoundingBox&rst::vision::Stereo::face() const{
  return this->_face;
}

 rst::geometry::BoundingBox*rst::vision::Stereo::mutable_face(){
  return &this->_face;
}

 void rst::vision::Stereo::set_face(const rst::geometry::BoundingBox&newValue){
  this->_face=newValue;
}



 bool rst::vision::Stereo::has_position() const{
  return true;
}

 const rst::math::Vec3DFloat&rst::vision::Stereo::position() const{
  return this->_position;
}

 rst::math::Vec3DFloat*rst::vision::Stereo::mutable_position(){
  return &this->_position;
}

 void rst::vision::Stereo::set_position(const rst::math::Vec3DFloat&newValue){
  this->_position=newValue;
}



 bool rst::vision::Stereo::has_speaking_probability() const{
  return true;
}

 const float&rst::vision::Stereo::speaking_probability() const{
  return this->_speaking_probability;
}

 void rst::vision::Stereo::set_speaking_probability(const float&newValue){
  this->_speaking_probability=newValue;
}



 bool rst::vision::Stereo::has_mapped_itd() const{
  return true;
}

 const float&rst::vision::Stereo::mapped_itd() const{
  return this->_mapped_itd;
}

 void rst::vision::Stereo::set_mapped_itd(const float&newValue){
  this->_mapped_itd=newValue;
}



 bool rst::vision::Stereo::has_track_id() const{
  return true;
}

 const boost::uint32_t&rst::vision::Stereo::track_id() const{
  return this->_track_id;
}

 void rst::vision::Stereo::set_track_id(const boost::uint32_t&newValue){
  this->_track_id=newValue;
}




