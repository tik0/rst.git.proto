/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace audition {

class InterauralTimeDifference{
public:
  // Accessors
  /**
   * Field number of the "value" field.
   */
  static const int kvalueFieldNumber = 0;
  
  /**
   * Return true if the "value" field is present.
   */
  inline bool has_value() const;
  
  /**
   * Return the number of elements in "value".
   */
  inline int value_size() const;
  /**
   * Return the element at @a index of "value".
   */
  inline const float& value(unsigned int index) const;
  /**
   * Return value of "value" field.
   */
  inline const std::vector<float>&value() const;
  
  
  /**
   * Set element at index @a index of "value" to @a newValue.
   */
  inline void set_value(unsigned int index,const float& newValue);
  /**
   * Append an item to "value" and return a pointer to it.
   */
  inline void add_value(const float& newValue);
  
  /**
   * Field number of the "weight" field.
   */
  static const int kweightFieldNumber = 0;
  
  /**
   * Return true if the "weight" field is present.
   */
  inline bool has_weight() const;
  
  /**
   * Return the number of elements in "weight".
   */
  inline int weight_size() const;
  /**
   * Return the element at @a index of "weight".
   */
  inline const float& weight(unsigned int index) const;
  /**
   * Return value of "weight" field.
   */
  inline const std::vector<float>&weight() const;
  
  
  /**
   * Set element at index @a index of "weight" to @a newValue.
   */
  inline void set_weight(unsigned int index,const float& newValue);
  /**
   * Append an item to "weight" and return a pointer to it.
   */
  inline void add_weight(const float& newValue);
  
  /**
   * Field number of the "frame_shift" field.
   */
  static const int kframe_shiftFieldNumber = 0;
  
  /**
   * Return true if the "frame_shift" field is present.
   */
  inline bool has_frame_shift() const;
  
  /**
   * Return value of "frame_shift" field.
   */
  inline const float&frame_shift() const;
  
  inline void set_frame_shift(const float&newValue);
  
  
  /**
   * Field number of the "time_window" field.
   */
  static const int ktime_windowFieldNumber = 0;
  
  /**
   * Return true if the "time_window" field is present.
   */
  inline bool has_time_window() const;
  
  /**
   * Return value of "time_window" field.
   */
  inline const float&time_window() const;
  
  inline void set_time_window(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const InterauralTimeDifference& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  InterauralTimeDifference* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<float> _value;
  std::vector<float> _weight;
  float _frame_shift;
  float _time_window;
  
};
}
}

// Inlined Stuff

// Accessors for rst::audition::InterauralTimeDifference

 bool rst::audition::InterauralTimeDifference::has_value() const{
  return true;
}

 int rst::audition::InterauralTimeDifference::value_size() const{
  return this->_value.size();
}
 const float& rst::audition::InterauralTimeDifference::value(unsigned int index) const{
  return this->_value[index];
}
 const std::vector<float>&rst::audition::InterauralTimeDifference::value() const{
  return this->_value;
}



 void rst::audition::InterauralTimeDifference::set_value(unsigned int index,const float& newValue){
  if(this->_value.size()<=index){
    this->_value.resize(index+1);
  }
  this->_value[index]=newValue;

}
 void rst::audition::InterauralTimeDifference::add_value(const float& newValue){
  this->_value.push_back(newValue);
}

 bool rst::audition::InterauralTimeDifference::has_weight() const{
  return true;
}

 int rst::audition::InterauralTimeDifference::weight_size() const{
  return this->_weight.size();
}
 const float& rst::audition::InterauralTimeDifference::weight(unsigned int index) const{
  return this->_weight[index];
}
 const std::vector<float>&rst::audition::InterauralTimeDifference::weight() const{
  return this->_weight;
}



 void rst::audition::InterauralTimeDifference::set_weight(unsigned int index,const float& newValue){
  if(this->_weight.size()<=index){
    this->_weight.resize(index+1);
  }
  this->_weight[index]=newValue;

}
 void rst::audition::InterauralTimeDifference::add_weight(const float& newValue){
  this->_weight.push_back(newValue);
}

 bool rst::audition::InterauralTimeDifference::has_frame_shift() const{
  return true;
}

 const float&rst::audition::InterauralTimeDifference::frame_shift() const{
  return this->_frame_shift;
}

 void rst::audition::InterauralTimeDifference::set_frame_shift(const float&newValue){
  this->_frame_shift=newValue;
}



 bool rst::audition::InterauralTimeDifference::has_time_window() const{
  return true;
}

 const float&rst::audition::InterauralTimeDifference::time_window() const{
  return this->_time_window;
}

 void rst::audition::InterauralTimeDifference::set_time_window(const float&newValue){
  this->_time_window=newValue;
}




