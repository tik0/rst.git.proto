/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/timing/Timestamp.pb.h>

namespace rst {
namespace timing {

class Interval{
public:
  // Accessors
  /**
   * Field number of the "begin" field.
   */
  static const int kbeginFieldNumber = 0;
  
  /**
   * Return true if the "begin" field is present.
   */
  inline bool has_begin() const;
  
  /**
   * Return value of "begin" field.
   */
  inline const rst::timing::Timestamp&begin() const;
  
  /**
   * Return value of "begin" field.
   */
  inline rst::timing::Timestamp*mutable_begin();
  
  inline void set_begin(const rst::timing::Timestamp&newValue);
  
  
  /**
   * Field number of the "end" field.
   */
  static const int kendFieldNumber = 0;
  
  /**
   * Return true if the "end" field is present.
   */
  inline bool has_end() const;
  
  /**
   * Return value of "end" field.
   */
  inline const rst::timing::Timestamp&end() const;
  
  /**
   * Return value of "end" field.
   */
  inline rst::timing::Timestamp*mutable_end();
  
  inline void set_end(const rst::timing::Timestamp&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Interval& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Interval* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::timing::Timestamp _begin;
  rst::timing::Timestamp _end;
  
};
}
}

// Inlined Stuff

// Accessors for rst::timing::Interval

 bool rst::timing::Interval::has_begin() const{
  return true;
}

 const rst::timing::Timestamp&rst::timing::Interval::begin() const{
  return this->_begin;
}

 rst::timing::Timestamp*rst::timing::Interval::mutable_begin(){
  return &this->_begin;
}

 void rst::timing::Interval::set_begin(const rst::timing::Timestamp&newValue){
  this->_begin=newValue;
}



 bool rst::timing::Interval::has_end() const{
  return true;
}

 const rst::timing::Timestamp&rst::timing::Interval::end() const{
  return this->_end;
}

 rst::timing::Timestamp*rst::timing::Interval::mutable_end(){
  return &this->_end;
}

 void rst::timing::Interval::set_end(const rst::timing::Timestamp&newValue){
  this->_end=newValue;
}




