/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/hri/PersonHypothesis.pb.h>
#include <rst/tracking/TrackingInfo.pb.h>
#include <rst/math/Vec2DFloat.pb.h>
#include <rst/vision/Face.pb.h>
#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>

namespace rst {
namespace hri {

class PersonHypotheses{
public:
  // Accessors
  /**
   * Field number of the "persons" field.
   */
  static const int kpersonsFieldNumber = 0;
  
  /**
   * Return true if the "persons" field is present.
   */
  inline bool has_persons() const;
  
  /**
   * Return the number of elements in "persons".
   */
  inline int persons_size() const;
  /**
   * Return the element at @a index of "persons".
   */
  inline const rst::hri::PersonHypothesis& persons(unsigned int index) const;
  /**
   * Return value of "persons" field.
   */
  inline const std::vector<rst::hri::PersonHypothesis>&persons() const;
  
  
  /**
   * Set element at index @a index of "persons" to @a newValue.
   */
  inline void set_persons(unsigned int index,const rst::hri::PersonHypothesis& newValue);
  /**
   * Append an item to "persons" and return a pointer to it.
   */
  inline rst::hri::PersonHypothesis* add_persons();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const PersonHypotheses& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  PersonHypotheses* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::hri::PersonHypothesis> _persons;
  
};
}
}

// Inlined Stuff

// Accessors for rst::hri::PersonHypotheses

 bool rst::hri::PersonHypotheses::has_persons() const{
  return true;
}

 int rst::hri::PersonHypotheses::persons_size() const{
  return this->_persons.size();
}
 const rst::hri::PersonHypothesis& rst::hri::PersonHypotheses::persons(unsigned int index) const{
  return this->_persons[index];
}
 const std::vector<rst::hri::PersonHypothesis>&rst::hri::PersonHypotheses::persons() const{
  return this->_persons;
}



 void rst::hri::PersonHypotheses::set_persons(unsigned int index,const rst::hri::PersonHypothesis& newValue){
  if(this->_persons.size()<=index){
    this->_persons.resize(index+1);
  }
  this->_persons[index]=newValue;

}
 rst::hri::PersonHypothesis* rst::hri::PersonHypotheses::add_persons(){
  this->_persons.resize(this->_persons.size()+1);
  return &this->_persons.back();

}


