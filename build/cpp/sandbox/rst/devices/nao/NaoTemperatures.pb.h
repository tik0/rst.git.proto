/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/devices/nao/JointTemperature.pb.h>

namespace rst {
namespace devices {
namespace nao {

class NaoTemperatures{
public:
  // Accessors
  /**
   * Field number of the "board" field.
   */
  static const int kboardFieldNumber = 0;
  
  /**
   * Return true if the "board" field is present.
   */
  inline bool has_board() const;
  
  /**
   * Return value of "board" field.
   */
  inline const float&board() const;
  
  inline void set_board(const float&newValue);
  
  
  /**
   * Field number of the "head" field.
   */
  static const int kheadFieldNumber = 0;
  
  /**
   * Return true if the "head" field is present.
   */
  inline bool has_head() const;
  
  /**
   * Return value of "head" field.
   */
  inline const float&head() const;
  
  inline void set_head(const float&newValue);
  
  
  /**
   * Field number of the "joints" field.
   */
  static const int kjointsFieldNumber = 0;
  
  /**
   * Return true if the "joints" field is present.
   */
  inline bool has_joints() const;
  
  /**
   * Return the number of elements in "joints".
   */
  inline int joints_size() const;
  /**
   * Return the element at @a index of "joints".
   */
  inline const rst::devices::nao::JointTemperature& joints(unsigned int index) const;
  /**
   * Return value of "joints" field.
   */
  inline const std::vector<rst::devices::nao::JointTemperature>&joints() const;
  
  
  /**
   * Set element at index @a index of "joints" to @a newValue.
   */
  inline void set_joints(unsigned int index,const rst::devices::nao::JointTemperature& newValue);
  /**
   * Append an item to "joints" and return a pointer to it.
   */
  inline rst::devices::nao::JointTemperature* add_joints();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const NaoTemperatures& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  NaoTemperatures* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _board;
  float _head;
  std::vector<rst::devices::nao::JointTemperature> _joints;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::nao::NaoTemperatures

 bool rst::devices::nao::NaoTemperatures::has_board() const{
  return true;
}

 const float&rst::devices::nao::NaoTemperatures::board() const{
  return this->_board;
}

 void rst::devices::nao::NaoTemperatures::set_board(const float&newValue){
  this->_board=newValue;
}



 bool rst::devices::nao::NaoTemperatures::has_head() const{
  return true;
}

 const float&rst::devices::nao::NaoTemperatures::head() const{
  return this->_head;
}

 void rst::devices::nao::NaoTemperatures::set_head(const float&newValue){
  this->_head=newValue;
}



 bool rst::devices::nao::NaoTemperatures::has_joints() const{
  return true;
}

 int rst::devices::nao::NaoTemperatures::joints_size() const{
  return this->_joints.size();
}
 const rst::devices::nao::JointTemperature& rst::devices::nao::NaoTemperatures::joints(unsigned int index) const{
  return this->_joints[index];
}
 const std::vector<rst::devices::nao::JointTemperature>&rst::devices::nao::NaoTemperatures::joints() const{
  return this->_joints;
}



 void rst::devices::nao::NaoTemperatures::set_joints(unsigned int index,const rst::devices::nao::JointTemperature& newValue){
  if(this->_joints.size()<=index){
    this->_joints.resize(index+1);
  }
  this->_joints[index]=newValue;

}
 rst::devices::nao::JointTemperature* rst::devices::nao::NaoTemperatures::add_joints(){
  this->_joints.resize(this->_joints.size()+1);
  return &this->_joints.back();

}


