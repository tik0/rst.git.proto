/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace angles {

class command{
public:
  // Nested Types
  enum INNER9455{
    set=7628147
    
  };
  
  enum INNER9456{
    poss=1936945008
    
  };
  
  // Accessors
  /**
   * Field number of the "action" field.
   */
  static const int kactionFieldNumber = 0;
  
  /**
   * Return true if the "action" field is present.
   */
  inline bool has_action() const;
  
  /**
   * Return value of "action" field.
   */
  inline const angles::command::INNER9455&action() const;
  
  /**
   * Return value of "action" field.
   */
  inline angles::command::INNER9455*mutable_action();
  
  inline void set_action(const angles::command::INNER9455&newValue);
  
  
  /**
   * Field number of the "mode" field.
   */
  static const int kmodeFieldNumber = 0;
  
  /**
   * Return true if the "mode" field is present.
   */
  inline bool has_mode() const;
  
  /**
   * Return value of "mode" field.
   */
  inline const angles::command::INNER9456&mode() const;
  
  /**
   * Return value of "mode" field.
   */
  inline angles::command::INNER9456*mutable_mode();
  
  inline void set_mode(const angles::command::INNER9456&newValue);
  
  
  /**
   * Field number of the "angles" field.
   */
  static const int kanglesFieldNumber = 0;
  
  /**
   * Return true if the "angles" field is present.
   */
  inline bool has_angles() const;
  
  /**
   * Return the number of elements in "angles".
   */
  inline int angles_size() const;
  /**
   * Return the element at @a index of "angles".
   */
  inline const double& angles(unsigned int index) const;
  /**
   * Return value of "angles" field.
   */
  inline const std::vector<double>&angles() const;
  
  
  /**
   * Set element at index @a index of "angles" to @a newValue.
   */
  inline void set_angles(unsigned int index,const double& newValue);
  /**
   * Append an item to "angles" and return a pointer to it.
   */
  inline void add_angles(const double& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const command& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  command* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  angles::command::INNER9455 _action;
  angles::command::INNER9456 _mode;
  std::vector<double> _angles;
  
};
}

// Inlined Stuff





// Accessors for angles::command

 bool angles::command::has_action() const{
  return true;
}

 const angles::command::INNER9455&angles::command::action() const{
  return this->_action;
}

 angles::command::INNER9455*angles::command::mutable_action(){
  return &this->_action;
}

 void angles::command::set_action(const angles::command::INNER9455&newValue){
  this->_action=newValue;
}



 bool angles::command::has_mode() const{
  return true;
}

 const angles::command::INNER9456&angles::command::mode() const{
  return this->_mode;
}

 angles::command::INNER9456*angles::command::mutable_mode(){
  return &this->_mode;
}

 void angles::command::set_mode(const angles::command::INNER9456&newValue){
  this->_mode=newValue;
}



 bool angles::command::has_angles() const{
  return true;
}

 int angles::command::angles_size() const{
  return this->_angles.size();
}
 const double& angles::command::angles(unsigned int index) const{
  return this->_angles[index];
}
 const std::vector<double>&angles::command::angles() const{
  return this->_angles;
}



 void angles::command::set_angles(unsigned int index,const double& newValue){
  if(this->_angles.size()<=index){
    this->_angles.resize(index+1);
  }
  this->_angles[index]=newValue;

}
 void angles::command::add_angles(const double& newValue){
  this->_angles.push_back(newValue);
}


