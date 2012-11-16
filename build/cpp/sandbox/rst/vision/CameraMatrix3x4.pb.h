/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace vision {

class CameraMatrix3x4{
public:
  // Accessors
  /**
   * Field number of the "c11" field.
   */
  static const int kc11FieldNumber = 0;
  
  /**
   * Return true if the "c11" field is present.
   */
  inline bool has_c11() const;
  
  /**
   * Return value of "c11" field.
   */
  inline const float&c11() const;
  
  inline void set_c11(const float&newValue);
  
  
  /**
   * Field number of the "c12" field.
   */
  static const int kc12FieldNumber = 0;
  
  /**
   * Return true if the "c12" field is present.
   */
  inline bool has_c12() const;
  
  /**
   * Return value of "c12" field.
   */
  inline const float&c12() const;
  
  inline void set_c12(const float&newValue);
  
  
  /**
   * Field number of the "c13" field.
   */
  static const int kc13FieldNumber = 0;
  
  /**
   * Return true if the "c13" field is present.
   */
  inline bool has_c13() const;
  
  /**
   * Return value of "c13" field.
   */
  inline const float&c13() const;
  
  inline void set_c13(const float&newValue);
  
  
  /**
   * Field number of the "c14" field.
   */
  static const int kc14FieldNumber = 0;
  
  /**
   * Return true if the "c14" field is present.
   */
  inline bool has_c14() const;
  
  /**
   * Return value of "c14" field.
   */
  inline const float&c14() const;
  
  inline void set_c14(const float&newValue);
  
  
  /**
   * Field number of the "c21" field.
   */
  static const int kc21FieldNumber = 0;
  
  /**
   * Return true if the "c21" field is present.
   */
  inline bool has_c21() const;
  
  /**
   * Return value of "c21" field.
   */
  inline const float&c21() const;
  
  inline void set_c21(const float&newValue);
  
  
  /**
   * Field number of the "c22" field.
   */
  static const int kc22FieldNumber = 0;
  
  /**
   * Return true if the "c22" field is present.
   */
  inline bool has_c22() const;
  
  /**
   * Return value of "c22" field.
   */
  inline const float&c22() const;
  
  inline void set_c22(const float&newValue);
  
  
  /**
   * Field number of the "c23" field.
   */
  static const int kc23FieldNumber = 0;
  
  /**
   * Return true if the "c23" field is present.
   */
  inline bool has_c23() const;
  
  /**
   * Return value of "c23" field.
   */
  inline const float&c23() const;
  
  inline void set_c23(const float&newValue);
  
  
  /**
   * Field number of the "c24" field.
   */
  static const int kc24FieldNumber = 0;
  
  /**
   * Return true if the "c24" field is present.
   */
  inline bool has_c24() const;
  
  /**
   * Return value of "c24" field.
   */
  inline const float&c24() const;
  
  inline void set_c24(const float&newValue);
  
  
  /**
   * Field number of the "c31" field.
   */
  static const int kc31FieldNumber = 0;
  
  /**
   * Return true if the "c31" field is present.
   */
  inline bool has_c31() const;
  
  /**
   * Return value of "c31" field.
   */
  inline const float&c31() const;
  
  inline void set_c31(const float&newValue);
  
  
  /**
   * Field number of the "c32" field.
   */
  static const int kc32FieldNumber = 0;
  
  /**
   * Return true if the "c32" field is present.
   */
  inline bool has_c32() const;
  
  /**
   * Return value of "c32" field.
   */
  inline const float&c32() const;
  
  inline void set_c32(const float&newValue);
  
  
  /**
   * Field number of the "c33" field.
   */
  static const int kc33FieldNumber = 0;
  
  /**
   * Return true if the "c33" field is present.
   */
  inline bool has_c33() const;
  
  /**
   * Return value of "c33" field.
   */
  inline const float&c33() const;
  
  inline void set_c33(const float&newValue);
  
  
  /**
   * Field number of the "c34" field.
   */
  static const int kc34FieldNumber = 0;
  
  /**
   * Return true if the "c34" field is present.
   */
  inline bool has_c34() const;
  
  /**
   * Return value of "c34" field.
   */
  inline const float&c34() const;
  
  inline void set_c34(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const CameraMatrix3x4& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  CameraMatrix3x4* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _c11;
  float _c12;
  float _c13;
  float _c14;
  float _c21;
  float _c22;
  float _c23;
  float _c24;
  float _c31;
  float _c32;
  float _c33;
  float _c34;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::CameraMatrix3x4

 bool rst::vision::CameraMatrix3x4::has_c11() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c11() const{
  return this->_c11;
}

 void rst::vision::CameraMatrix3x4::set_c11(const float&newValue){
  this->_c11=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c12() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c12() const{
  return this->_c12;
}

 void rst::vision::CameraMatrix3x4::set_c12(const float&newValue){
  this->_c12=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c13() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c13() const{
  return this->_c13;
}

 void rst::vision::CameraMatrix3x4::set_c13(const float&newValue){
  this->_c13=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c14() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c14() const{
  return this->_c14;
}

 void rst::vision::CameraMatrix3x4::set_c14(const float&newValue){
  this->_c14=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c21() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c21() const{
  return this->_c21;
}

 void rst::vision::CameraMatrix3x4::set_c21(const float&newValue){
  this->_c21=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c22() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c22() const{
  return this->_c22;
}

 void rst::vision::CameraMatrix3x4::set_c22(const float&newValue){
  this->_c22=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c23() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c23() const{
  return this->_c23;
}

 void rst::vision::CameraMatrix3x4::set_c23(const float&newValue){
  this->_c23=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c24() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c24() const{
  return this->_c24;
}

 void rst::vision::CameraMatrix3x4::set_c24(const float&newValue){
  this->_c24=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c31() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c31() const{
  return this->_c31;
}

 void rst::vision::CameraMatrix3x4::set_c31(const float&newValue){
  this->_c31=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c32() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c32() const{
  return this->_c32;
}

 void rst::vision::CameraMatrix3x4::set_c32(const float&newValue){
  this->_c32=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c33() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c33() const{
  return this->_c33;
}

 void rst::vision::CameraMatrix3x4::set_c33(const float&newValue){
  this->_c33=newValue;
}



 bool rst::vision::CameraMatrix3x4::has_c34() const{
  return true;
}

 const float&rst::vision::CameraMatrix3x4::c34() const{
  return this->_c34;
}

 void rst::vision::CameraMatrix3x4::set_c34(const float&newValue){
  this->_c34=newValue;
}




