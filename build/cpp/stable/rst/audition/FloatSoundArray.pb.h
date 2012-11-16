/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace audition {

class FloatSoundArray{
public:
  // Accessors
  /**
   * Field number of the "floatbuffer" field.
   */
  static const int kfloatbufferFieldNumber = 0;
  
  /**
   * Return true if the "floatbuffer" field is present.
   */
  inline bool has_floatbuffer() const;
  
  /**
   * Return the number of elements in "floatbuffer".
   */
  inline int floatbuffer_size() const;
  /**
   * Return the element at @a index of "floatbuffer".
   */
  inline const float& floatbuffer(unsigned int index) const;
  /**
   * Return value of "floatbuffer" field.
   */
  inline const std::vector<float>&floatbuffer() const;
  
  
  /**
   * Set element at index @a index of "floatbuffer" to @a newValue.
   */
  inline void set_floatbuffer(unsigned int index,const float& newValue);
  /**
   * Append an item to "floatbuffer" and return a pointer to it.
   */
  inline void add_floatbuffer(const float& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const FloatSoundArray& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  FloatSoundArray* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<float> _floatbuffer;
  
};
}
}

// Inlined Stuff

// Accessors for rst::audition::FloatSoundArray

 bool rst::audition::FloatSoundArray::has_floatbuffer() const{
  return true;
}

 int rst::audition::FloatSoundArray::floatbuffer_size() const{
  return this->_floatbuffer.size();
}
 const float& rst::audition::FloatSoundArray::floatbuffer(unsigned int index) const{
  return this->_floatbuffer[index];
}
 const std::vector<float>&rst::audition::FloatSoundArray::floatbuffer() const{
  return this->_floatbuffer;
}



 void rst::audition::FloatSoundArray::set_floatbuffer(unsigned int index,const float& newValue){
  if(this->_floatbuffer.size()<=index){
    this->_floatbuffer.resize(index+1);
  }
  this->_floatbuffer[index]=newValue;

}
 void rst::audition::FloatSoundArray::add_floatbuffer(const float& newValue){
  this->_floatbuffer.push_back(newValue);
}


