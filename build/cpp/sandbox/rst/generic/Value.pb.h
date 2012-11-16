/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace generic {

class Value{
public:
  // Nested Types
  enum Type{
    VOID=1,
    INT=2,
    DOUBLE=3,
    STRING=4,
    BOOL=5,
    BINARY=6,
    ARRAY=7
    
  };
  
  // Accessors
  /**
   * Field number of the "type" field.
   */
  static const int ktypeFieldNumber = 0;
  
  /**
   * Return true if the "type" field is present.
   */
  inline bool has_type() const;
  
  /**
   * Return value of "type" field.
   */
  inline const rst::generic::Value::Type&type() const;
  
  /**
   * Return value of "type" field.
   */
  inline rst::generic::Value::Type*mutable_type();
  
  inline void set_type(const rst::generic::Value::Type&newValue);
  
  
  /**
   * Field number of the "int_" field.
   */
  static const int kint_FieldNumber = 0;
  
  /**
   * Return true if the "int_" field is present.
   */
  inline bool has_int_() const;
  
  /**
   * Return value of "int_" field.
   */
  inline const boost::uint64_t&int_() const;
  
  inline void set_int_(const boost::uint64_t&newValue);
  
  
  /**
   * Field number of the "double_" field.
   */
  static const int kdouble_FieldNumber = 0;
  
  /**
   * Return true if the "double_" field is present.
   */
  inline bool has_double_() const;
  
  /**
   * Return value of "double_" field.
   */
  inline const double&double_() const;
  
  inline void set_double_(const double&newValue);
  
  
  /**
   * Field number of the "string_" field.
   */
  static const int kstring_FieldNumber = 0;
  
  /**
   * Return true if the "string_" field is present.
   */
  inline bool has_string_() const;
  
  /**
   * Return value of "string_" field.
   */
  inline const std::string&string_() const;
  
  /**
   * Return value of "string_" field.
   */
  inline std::string*mutable_string_();
  
  inline void set_string_(const std::string&newValue);
  
  
  /**
   * Field number of the "bool_" field.
   */
  static const int kbool_FieldNumber = 0;
  
  /**
   * Return true if the "bool_" field is present.
   */
  inline bool has_bool_() const;
  
  /**
   * Return value of "bool_" field.
   */
  inline const bool&bool_() const;
  
  inline void set_bool_(const bool&newValue);
  
  
  /**
   * Field number of the "binary" field.
   */
  static const int kbinaryFieldNumber = 0;
  
  /**
   * Return true if the "binary" field is present.
   */
  inline bool has_binary() const;
  
  /**
   * Return value of "binary" field.
   */
  inline const std::vector<unsigned char>&binary() const;
  
  /**
   * Return value of "binary" field.
   */
  inline std::vector<unsigned char>*mutable_binary();
  
  inline void set_binary(const std::vector<unsigned char>&newValue);
  inline void set_binary(const std::string&newValue);
  inline void set_binary(const boost::uint8_t* data,unsigned int size);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Value& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Value* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::generic::Value::Type _type;
  boost::uint64_t _int_;
  double _double_;
  std::string _string_;
  bool _bool_;
  std::vector<unsigned char> _binary;
  
};
}
}

// Inlined Stuff



// Accessors for rst::generic::Value

 bool rst::generic::Value::has_type() const{
  return true;
}

 const rst::generic::Value::Type&rst::generic::Value::type() const{
  return this->_type;
}

 rst::generic::Value::Type*rst::generic::Value::mutable_type(){
  return &this->_type;
}

 void rst::generic::Value::set_type(const rst::generic::Value::Type&newValue){
  this->_type=newValue;
}



 bool rst::generic::Value::has_int_() const{
  return true;
}

 const boost::uint64_t&rst::generic::Value::int_() const{
  return this->_int_;
}

 void rst::generic::Value::set_int_(const boost::uint64_t&newValue){
  this->_int_=newValue;
}



 bool rst::generic::Value::has_double_() const{
  return true;
}

 const double&rst::generic::Value::double_() const{
  return this->_double_;
}

 void rst::generic::Value::set_double_(const double&newValue){
  this->_double_=newValue;
}



 bool rst::generic::Value::has_string_() const{
  return true;
}

 const std::string&rst::generic::Value::string_() const{
  return this->_string_;
}

 std::string*rst::generic::Value::mutable_string_(){
  return &this->_string_;
}

 void rst::generic::Value::set_string_(const std::string&newValue){
  this->_string_=newValue;
}



 bool rst::generic::Value::has_bool_() const{
  return true;
}

 const bool&rst::generic::Value::bool_() const{
  return this->_bool_;
}

 void rst::generic::Value::set_bool_(const bool&newValue){
  this->_bool_=newValue;
}



 bool rst::generic::Value::has_binary() const{
  return true;
}

 const std::vector<unsigned char>&rst::generic::Value::binary() const{
  return this->_binary;
}

 std::vector<unsigned char>*rst::generic::Value::mutable_binary(){
  return &this->_binary;
}

 void rst::generic::Value::set_binary(const std::vector<unsigned char>&newValue){
  this->_binary=newValue;
}
 void rst::generic::Value::set_binary(const std::string&newValue){
  this->_binary.resize(newValue.size());
  memcpy(&this->_binary[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::generic::Value::set_binary(const boost::uint8_t* data,unsigned int size){
  this->_binary.resize(size);
  memcpy(&this->_binary[0],data,size);
}



