/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/vision/CameraMatrix3x4.pb.h>

namespace rst {
namespace vision {

class CalibrationMatrices{
public:
  // Accessors
  /**
   * Field number of the "left" field.
   */
  static const int kleftFieldNumber = 0;
  
  /**
   * Return true if the "left" field is present.
   */
  inline bool has_left() const;
  
  /**
   * Return value of "left" field.
   */
  inline const rst::vision::CameraMatrix3x4&left() const;
  
  /**
   * Return value of "left" field.
   */
  inline rst::vision::CameraMatrix3x4*mutable_left();
  
  inline void set_left(const rst::vision::CameraMatrix3x4&newValue);
  
  
  /**
   * Field number of the "right" field.
   */
  static const int krightFieldNumber = 0;
  
  /**
   * Return true if the "right" field is present.
   */
  inline bool has_right() const;
  
  /**
   * Return value of "right" field.
   */
  inline const rst::vision::CameraMatrix3x4&right() const;
  
  /**
   * Return value of "right" field.
   */
  inline rst::vision::CameraMatrix3x4*mutable_right();
  
  inline void set_right(const rst::vision::CameraMatrix3x4&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const CalibrationMatrices& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  CalibrationMatrices* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::vision::CameraMatrix3x4 _left;
  rst::vision::CameraMatrix3x4 _right;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::CalibrationMatrices

 bool rst::vision::CalibrationMatrices::has_left() const{
  return true;
}

 const rst::vision::CameraMatrix3x4&rst::vision::CalibrationMatrices::left() const{
  return this->_left;
}

 rst::vision::CameraMatrix3x4*rst::vision::CalibrationMatrices::mutable_left(){
  return &this->_left;
}

 void rst::vision::CalibrationMatrices::set_left(const rst::vision::CameraMatrix3x4&newValue){
  this->_left=newValue;
}



 bool rst::vision::CalibrationMatrices::has_right() const{
  return true;
}

 const rst::vision::CameraMatrix3x4&rst::vision::CalibrationMatrices::right() const{
  return this->_right;
}

 rst::vision::CameraMatrix3x4*rst::vision::CalibrationMatrices::mutable_right(){
  return &this->_right;
}

 void rst::vision::CalibrationMatrices::set_right(const rst::vision::CameraMatrix3x4&newValue){
  this->_right=newValue;
}




