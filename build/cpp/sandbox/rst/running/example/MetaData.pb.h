/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace running {
namespace example {

class MetaData{
public:
  // Accessors
  /**
   * Field number of the "key" field.
   */
  static const int kkeyFieldNumber = 0;
  
  /**
   * Return true if the "key" field is present.
   */
  inline bool has_key() const;
  
  /**
   * Return value of "key" field.
   */
  inline const std::string&key() const;
  
  /**
   * Return value of "key" field.
   */
  inline std::string*mutable_key();
  
  inline void set_key(const std::string&newValue);
  
  
  /**
   * Field number of the "value" field.
   */
  static const int kvalueFieldNumber = 0;
  
  /**
   * Return true if the "value" field is present.
   */
  inline bool has_value() const;
  
  /**
   * Return value of "value" field.
   */
  inline const std::string&value() const;
  
  /**
   * Return value of "value" field.
   */
  inline std::string*mutable_value();
  
  inline void set_value(const std::string&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const MetaData& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  MetaData* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _key;
  std::string _value;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::running::example::MetaData

 bool rst::running::example::MetaData::has_key() const{
  return true;
}

 const std::string&rst::running::example::MetaData::key() const{
  return this->_key;
}

 std::string*rst::running::example::MetaData::mutable_key(){
  return &this->_key;
}

 void rst::running::example::MetaData::set_key(const std::string&newValue){
  this->_key=newValue;
}



 bool rst::running::example::MetaData::has_value() const{
  return true;
}

 const std::string&rst::running::example::MetaData::value() const{
  return this->_value;
}

 std::string*rst::running::example::MetaData::mutable_value(){
  return &this->_value;
}

 void rst::running::example::MetaData::set_value(const std::string&newValue){
  this->_value=newValue;
}




