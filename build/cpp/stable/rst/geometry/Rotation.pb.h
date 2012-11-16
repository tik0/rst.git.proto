/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace geometry {

class Rotation{
public:
  // Accessors
  /**
   * Field number of the "qw" field.
   */
  static const int kqwFieldNumber = 0;
  
  /**
   * Return true if the "qw" field is present.
   */
  inline bool has_qw() const;
  
  /**
   * Return value of "qw" field.
   */
  inline const double&qw() const;
  
  inline void set_qw(const double&newValue);
  
  
  /**
   * Field number of the "qx" field.
   */
  static const int kqxFieldNumber = 0;
  
  /**
   * Return true if the "qx" field is present.
   */
  inline bool has_qx() const;
  
  /**
   * Return value of "qx" field.
   */
  inline const double&qx() const;
  
  inline void set_qx(const double&newValue);
  
  
  /**
   * Field number of the "qy" field.
   */
  static const int kqyFieldNumber = 0;
  
  /**
   * Return true if the "qy" field is present.
   */
  inline bool has_qy() const;
  
  /**
   * Return value of "qy" field.
   */
  inline const double&qy() const;
  
  inline void set_qy(const double&newValue);
  
  
  /**
   * Field number of the "qz" field.
   */
  static const int kqzFieldNumber = 0;
  
  /**
   * Return true if the "qz" field is present.
   */
  inline bool has_qz() const;
  
  /**
   * Return value of "qz" field.
   */
  inline const double&qz() const;
  
  inline void set_qz(const double&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Rotation& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Rotation* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  double _qw;
  double _qx;
  double _qy;
  double _qz;
  
};
}
}

// Inlined Stuff

// Accessors for rst::geometry::Rotation

 bool rst::geometry::Rotation::has_qw() const{
  return true;
}

 const double&rst::geometry::Rotation::qw() const{
  return this->_qw;
}

 void rst::geometry::Rotation::set_qw(const double&newValue){
  this->_qw=newValue;
}



 bool rst::geometry::Rotation::has_qx() const{
  return true;
}

 const double&rst::geometry::Rotation::qx() const{
  return this->_qx;
}

 void rst::geometry::Rotation::set_qx(const double&newValue){
  this->_qx=newValue;
}



 bool rst::geometry::Rotation::has_qy() const{
  return true;
}

 const double&rst::geometry::Rotation::qy() const{
  return this->_qy;
}

 void rst::geometry::Rotation::set_qy(const double&newValue){
  this->_qy=newValue;
}



 bool rst::geometry::Rotation::has_qz() const{
  return true;
}

 const double&rst::geometry::Rotation::qz() const{
  return this->_qz;
}

 void rst::geometry::Rotation::set_qz(const double&newValue){
  this->_qz=newValue;
}




