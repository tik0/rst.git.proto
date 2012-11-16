/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/generic/Value.pb.h>

namespace rst {
namespace generic {

class MethodCall{
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
  inline const std::vector<unsigned char>&name() const;
  
  /**
   * Return value of "name" field.
   */
  inline std::vector<unsigned char>*mutable_name();
  
  inline void set_name(const std::vector<unsigned char>&newValue);
  inline void set_name(const std::string&newValue);
  inline void set_name(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "arguments" field.
   */
  static const int kargumentsFieldNumber = 0;
  
  /**
   * Return true if the "arguments" field is present.
   */
  inline bool has_arguments() const;
  
  /**
   * Return the number of elements in "arguments".
   */
  inline int arguments_size() const;
  /**
   * Return the element at @a index of "arguments".
   */
  inline const rst::generic::Value& arguments(unsigned int index) const;
  /**
   * Return value of "arguments" field.
   */
  inline const std::vector<rst::generic::Value>&arguments() const;
  
  
  /**
   * Set element at index @a index of "arguments" to @a newValue.
   */
  inline void set_arguments(unsigned int index,const rst::generic::Value& newValue);
  /**
   * Append an item to "arguments" and return a pointer to it.
   */
  inline rst::generic::Value* add_arguments();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const MethodCall& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  MethodCall* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<unsigned char> _name;
  std::vector<rst::generic::Value> _arguments;
  
};
}
}

// Inlined Stuff

// Accessors for rst::generic::MethodCall

 bool rst::generic::MethodCall::has_name() const{
  return true;
}

 const std::vector<unsigned char>&rst::generic::MethodCall::name() const{
  return this->_name;
}

 std::vector<unsigned char>*rst::generic::MethodCall::mutable_name(){
  return &this->_name;
}

 void rst::generic::MethodCall::set_name(const std::vector<unsigned char>&newValue){
  this->_name=newValue;
}
 void rst::generic::MethodCall::set_name(const std::string&newValue){
  this->_name.resize(newValue.size());
  memcpy(&this->_name[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::generic::MethodCall::set_name(const boost::uint8_t* data,unsigned int size){
  this->_name.resize(size);
  memcpy(&this->_name[0],data,size);
}


 bool rst::generic::MethodCall::has_arguments() const{
  return true;
}

 int rst::generic::MethodCall::arguments_size() const{
  return this->_arguments.size();
}
 const rst::generic::Value& rst::generic::MethodCall::arguments(unsigned int index) const{
  return this->_arguments[index];
}
 const std::vector<rst::generic::Value>&rst::generic::MethodCall::arguments() const{
  return this->_arguments;
}



 void rst::generic::MethodCall::set_arguments(unsigned int index,const rst::generic::Value& newValue){
  if(this->_arguments.size()<=index){
    this->_arguments.resize(index+1);
  }
  this->_arguments[index]=newValue;

}
 rst::generic::Value* rst::generic::MethodCall::add_arguments(){
  this->_arguments.resize(this->_arguments.size()+1);
  return &this->_arguments.back();

}


