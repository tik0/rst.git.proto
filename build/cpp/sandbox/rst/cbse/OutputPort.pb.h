/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace cbse {

class OutputPort{
public:
  // Accessors
  /**
   * Field number of the "scope" field.
   */
  static const int kscopeFieldNumber = 0;
  
  /**
   * Return true if the "scope" field is present.
   */
  inline bool has_scope() const;
  
  /**
   * Return value of "scope" field.
   */
  inline const std::string&scope() const;
  
  /**
   * Return value of "scope" field.
   */
  inline std::string*mutable_scope();
  
  inline void set_scope(const std::string&newValue);
  
  
  /**
   * Field number of the "buffersize" field.
   */
  static const int kbuffersizeFieldNumber = 0;
  
  /**
   * Return true if the "buffersize" field is present.
   */
  inline bool has_buffersize() const;
  
  /**
   * Return value of "buffersize" field.
   */
  inline const boost::uint64_t&buffersize() const;
  
  inline void set_buffersize(const boost::uint64_t&newValue);
  
  
  /**
   * Field number of the "filling" field.
   */
  static const int kfillingFieldNumber = 0;
  
  /**
   * Return true if the "filling" field is present.
   */
  inline bool has_filling() const;
  
  /**
   * Return value of "filling" field.
   */
  inline const boost::uint64_t&filling() const;
  
  inline void set_filling(const boost::uint64_t&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const OutputPort& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  OutputPort* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _scope;
  boost::uint64_t _buffersize;
  boost::uint64_t _filling;
  
};
}
}

// Inlined Stuff

// Accessors for rst::cbse::OutputPort

 bool rst::cbse::OutputPort::has_scope() const{
  return true;
}

 const std::string&rst::cbse::OutputPort::scope() const{
  return this->_scope;
}

 std::string*rst::cbse::OutputPort::mutable_scope(){
  return &this->_scope;
}

 void rst::cbse::OutputPort::set_scope(const std::string&newValue){
  this->_scope=newValue;
}



 bool rst::cbse::OutputPort::has_buffersize() const{
  return true;
}

 const boost::uint64_t&rst::cbse::OutputPort::buffersize() const{
  return this->_buffersize;
}

 void rst::cbse::OutputPort::set_buffersize(const boost::uint64_t&newValue){
  this->_buffersize=newValue;
}



 bool rst::cbse::OutputPort::has_filling() const{
  return true;
}

 const boost::uint64_t&rst::cbse::OutputPort::filling() const{
  return this->_filling;
}

 void rst::cbse::OutputPort::set_filling(const boost::uint64_t&newValue){
  this->_filling=newValue;
}




