/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/geometry/Translation.pb.h>
#include <rst/geometry/Rotation.pb.h>

namespace rst {
namespace geometry {

class Pose{
public:
  // Accessors
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
  inline const rst::geometry::Translation&translation() const;
  
  /**
   * Return value of "translation" field.
   */
  inline rst::geometry::Translation*mutable_translation();
  
  inline void set_translation(const rst::geometry::Translation&newValue);
  
  
  /**
   * Field number of the "rotation" field.
   */
  static const int krotationFieldNumber = 0;
  
  /**
   * Return true if the "rotation" field is present.
   */
  inline bool has_rotation() const;
  
  /**
   * Return value of "rotation" field.
   */
  inline const rst::geometry::Rotation&rotation() const;
  
  /**
   * Return value of "rotation" field.
   */
  inline rst::geometry::Rotation*mutable_rotation();
  
  inline void set_rotation(const rst::geometry::Rotation&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Pose& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Pose* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::geometry::Translation _translation;
  rst::geometry::Rotation _rotation;
  
};
}
}

// Inlined Stuff

// Accessors for rst::geometry::Pose

 bool rst::geometry::Pose::has_translation() const{
  return true;
}

 const rst::geometry::Translation&rst::geometry::Pose::translation() const{
  return this->_translation;
}

 rst::geometry::Translation*rst::geometry::Pose::mutable_translation(){
  return &this->_translation;
}

 void rst::geometry::Pose::set_translation(const rst::geometry::Translation&newValue){
  this->_translation=newValue;
}



 bool rst::geometry::Pose::has_rotation() const{
  return true;
}

 const rst::geometry::Rotation&rst::geometry::Pose::rotation() const{
  return this->_rotation;
}

 rst::geometry::Rotation*rst::geometry::Pose::mutable_rotation(){
  return &this->_rotation;
}

 void rst::geometry::Pose::set_rotation(const rst::geometry::Rotation&newValue){
  this->_rotation=newValue;
}




