/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace xml {

class Attachment{
public:
  // Accessors
  /**
   * Field number of the "url" field.
   */
  static const int kurlFieldNumber = 0;
  
  /**
   * Return true if the "url" field is present.
   */
  inline bool has_url() const;
  
  /**
   * Return value of "url" field.
   */
  inline const std::string&url() const;
  
  /**
   * Return value of "url" field.
   */
  inline std::string*mutable_url();
  
  inline void set_url(const std::string&newValue);
  
  
  /**
   * Field number of the "wire_schema" field.
   */
  static const int kwire_schemaFieldNumber = 0;
  
  /**
   * Return true if the "wire_schema" field is present.
   */
  inline bool has_wire_schema() const;
  
  /**
   * Return value of "wire_schema" field.
   */
  inline const std::vector<unsigned char>&wire_schema() const;
  
  /**
   * Return value of "wire_schema" field.
   */
  inline std::vector<unsigned char>*mutable_wire_schema();
  
  inline void set_wire_schema(const std::vector<unsigned char>&newValue);
  inline void set_wire_schema(const std::string&newValue);
  inline void set_wire_schema(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "data" field.
   */
  static const int kdataFieldNumber = 0;
  
  /**
   * Return true if the "data" field is present.
   */
  inline bool has_data() const;
  
  /**
   * Return value of "data" field.
   */
  inline const std::vector<unsigned char>&data() const;
  
  /**
   * Return value of "data" field.
   */
  inline std::vector<unsigned char>*mutable_data();
  
  inline void set_data(const std::vector<unsigned char>&newValue);
  inline void set_data(const std::string&newValue);
  inline void set_data(const boost::uint8_t* data,unsigned int size);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Attachment& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Attachment* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _url;
  std::vector<unsigned char> _wire_schema;
  std::vector<unsigned char> _data;
  
};
}
}

// Inlined Stuff

// Accessors for rst::xml::Attachment

 bool rst::xml::Attachment::has_url() const{
  return true;
}

 const std::string&rst::xml::Attachment::url() const{
  return this->_url;
}

 std::string*rst::xml::Attachment::mutable_url(){
  return &this->_url;
}

 void rst::xml::Attachment::set_url(const std::string&newValue){
  this->_url=newValue;
}



 bool rst::xml::Attachment::has_wire_schema() const{
  return true;
}

 const std::vector<unsigned char>&rst::xml::Attachment::wire_schema() const{
  return this->_wire_schema;
}

 std::vector<unsigned char>*rst::xml::Attachment::mutable_wire_schema(){
  return &this->_wire_schema;
}

 void rst::xml::Attachment::set_wire_schema(const std::vector<unsigned char>&newValue){
  this->_wire_schema=newValue;
}
 void rst::xml::Attachment::set_wire_schema(const std::string&newValue){
  this->_wire_schema.resize(newValue.size());
  memcpy(&this->_wire_schema[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::xml::Attachment::set_wire_schema(const boost::uint8_t* data,unsigned int size){
  this->_wire_schema.resize(size);
  memcpy(&this->_wire_schema[0],data,size);
}


 bool rst::xml::Attachment::has_data() const{
  return true;
}

 const std::vector<unsigned char>&rst::xml::Attachment::data() const{
  return this->_data;
}

 std::vector<unsigned char>*rst::xml::Attachment::mutable_data(){
  return &this->_data;
}

 void rst::xml::Attachment::set_data(const std::vector<unsigned char>&newValue){
  this->_data=newValue;
}
 void rst::xml::Attachment::set_data(const std::string&newValue){
  this->_data.resize(newValue.size());
  memcpy(&this->_data[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::xml::Attachment::set_data(const boost::uint8_t* data,unsigned int size){
  this->_data.resize(size);
  memcpy(&this->_data[0],data,size);
}



