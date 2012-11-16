/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/dynamics/Forces.pb.h>
#include <rst/dynamics/Torques.pb.h>

namespace rst {
namespace dynamics {

class Wrench{
public:
  // Accessors
  /**
   * Field number of the "forces" field.
   */
  static const int kforcesFieldNumber = 0;
  
  /**
   * Return true if the "forces" field is present.
   */
  inline bool has_forces() const;
  
  /**
   * Return value of "forces" field.
   */
  inline const rst::dynamics::Forces&forces() const;
  
  /**
   * Return value of "forces" field.
   */
  inline rst::dynamics::Forces*mutable_forces();
  
  inline void set_forces(const rst::dynamics::Forces&newValue);
  
  
  /**
   * Field number of the "torques" field.
   */
  static const int ktorquesFieldNumber = 0;
  
  /**
   * Return true if the "torques" field is present.
   */
  inline bool has_torques() const;
  
  /**
   * Return value of "torques" field.
   */
  inline const rst::dynamics::Torques&torques() const;
  
  /**
   * Return value of "torques" field.
   */
  inline rst::dynamics::Torques*mutable_torques();
  
  inline void set_torques(const rst::dynamics::Torques&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Wrench& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Wrench* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::dynamics::Forces _forces;
  rst::dynamics::Torques _torques;
  
};
}
}

// Inlined Stuff

// Accessors for rst::dynamics::Wrench

 bool rst::dynamics::Wrench::has_forces() const{
  return true;
}

 const rst::dynamics::Forces&rst::dynamics::Wrench::forces() const{
  return this->_forces;
}

 rst::dynamics::Forces*rst::dynamics::Wrench::mutable_forces(){
  return &this->_forces;
}

 void rst::dynamics::Wrench::set_forces(const rst::dynamics::Forces&newValue){
  this->_forces=newValue;
}



 bool rst::dynamics::Wrench::has_torques() const{
  return true;
}

 const rst::dynamics::Torques&rst::dynamics::Wrench::torques() const{
  return this->_torques;
}

 rst::dynamics::Torques*rst::dynamics::Wrench::mutable_torques(){
  return &this->_torques;
}

 void rst::dynamics::Wrench::set_torques(const rst::dynamics::Torques&newValue){
  this->_torques=newValue;
}




