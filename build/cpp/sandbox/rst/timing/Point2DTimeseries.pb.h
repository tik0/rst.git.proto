/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/timing/Point2DTimestampPair.pb.h>
#include <rst/math/Vec2DFloat.pb.h>
#include <rst/timing/Timestamp.pb.h>

namespace rst {
namespace timing {

class Point2DTimeseries{
public:
  // Accessors
  /**
   * Field number of the "entry" field.
   */
  static const int kentryFieldNumber = 0;
  
  /**
   * Return true if the "entry" field is present.
   */
  inline bool has_entry() const;
  
  /**
   * Return the number of elements in "entry".
   */
  inline int entry_size() const;
  /**
   * Return the element at @a index of "entry".
   */
  inline const rst::timing::Point2DTimestampPair& entry(unsigned int index) const;
  /**
   * Return value of "entry" field.
   */
  inline const std::vector<rst::timing::Point2DTimestampPair>&entry() const;
  
  
  /**
   * Set element at index @a index of "entry" to @a newValue.
   */
  inline void set_entry(unsigned int index,const rst::timing::Point2DTimestampPair& newValue);
  /**
   * Append an item to "entry" and return a pointer to it.
   */
  inline rst::timing::Point2DTimestampPair* add_entry();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Point2DTimeseries& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Point2DTimeseries* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::timing::Point2DTimestampPair> _entry;
  
};
}
}

// Inlined Stuff

// Accessors for rst::timing::Point2DTimeseries

 bool rst::timing::Point2DTimeseries::has_entry() const{
  return true;
}

 int rst::timing::Point2DTimeseries::entry_size() const{
  return this->_entry.size();
}
 const rst::timing::Point2DTimestampPair& rst::timing::Point2DTimeseries::entry(unsigned int index) const{
  return this->_entry[index];
}
 const std::vector<rst::timing::Point2DTimestampPair>&rst::timing::Point2DTimeseries::entry() const{
  return this->_entry;
}



 void rst::timing::Point2DTimeseries::set_entry(unsigned int index,const rst::timing::Point2DTimestampPair& newValue){
  if(this->_entry.size()<=index){
    this->_entry.resize(index+1);
  }
  this->_entry[index]=newValue;

}
 rst::timing::Point2DTimestampPair* rst::timing::Point2DTimeseries::add_entry(){
  this->_entry.resize(this->_entry.size()+1);
  return &this->_entry.back();

}


