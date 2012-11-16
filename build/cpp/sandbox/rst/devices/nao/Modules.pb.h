/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/devices/nao/Module.pb.h>

namespace rst {
namespace devices {
namespace nao {

class Modules{
public:
  // Accessors
  /**
   * Field number of the "modules" field.
   */
  static const int kmodulesFieldNumber = 0;
  
  /**
   * Return true if the "modules" field is present.
   */
  inline bool has_modules() const;
  
  /**
   * Return the number of elements in "modules".
   */
  inline int modules_size() const;
  /**
   * Return the element at @a index of "modules".
   */
  inline const rst::devices::nao::Module& modules(unsigned int index) const;
  /**
   * Return value of "modules" field.
   */
  inline const std::vector<rst::devices::nao::Module>&modules() const;
  
  
  /**
   * Set element at index @a index of "modules" to @a newValue.
   */
  inline void set_modules(unsigned int index,const rst::devices::nao::Module& newValue);
  /**
   * Append an item to "modules" and return a pointer to it.
   */
  inline rst::devices::nao::Module* add_modules();
  
  /**
   * Field number of the "framemanager_modules" field.
   */
  static const int kframemanager_modulesFieldNumber = 0;
  
  /**
   * Return true if the "framemanager_modules" field is present.
   */
  inline bool has_framemanager_modules() const;
  
  /**
   * Return the number of elements in "framemanager_modules".
   */
  inline int framemanager_modules_size() const;
  /**
   * Return the element at @a index of "framemanager_modules".
   */
  inline const rst::devices::nao::Module& framemanager_modules(unsigned int index) const;
  /**
   * Return value of "framemanager_modules" field.
   */
  inline const std::vector<rst::devices::nao::Module>&framemanager_modules() const;
  
  
  /**
   * Set element at index @a index of "framemanager_modules" to @a newValue.
   */
  inline void set_framemanager_modules(unsigned int index,const rst::devices::nao::Module& newValue);
  /**
   * Append an item to "framemanager_modules" and return a pointer to it.
   */
  inline rst::devices::nao::Module* add_framemanager_modules();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Modules& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Modules* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::devices::nao::Module> _modules;
  std::vector<rst::devices::nao::Module> _framemanager_modules;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::nao::Modules

 bool rst::devices::nao::Modules::has_modules() const{
  return true;
}

 int rst::devices::nao::Modules::modules_size() const{
  return this->_modules.size();
}
 const rst::devices::nao::Module& rst::devices::nao::Modules::modules(unsigned int index) const{
  return this->_modules[index];
}
 const std::vector<rst::devices::nao::Module>&rst::devices::nao::Modules::modules() const{
  return this->_modules;
}



 void rst::devices::nao::Modules::set_modules(unsigned int index,const rst::devices::nao::Module& newValue){
  if(this->_modules.size()<=index){
    this->_modules.resize(index+1);
  }
  this->_modules[index]=newValue;

}
 rst::devices::nao::Module* rst::devices::nao::Modules::add_modules(){
  this->_modules.resize(this->_modules.size()+1);
  return &this->_modules.back();

}

 bool rst::devices::nao::Modules::has_framemanager_modules() const{
  return true;
}

 int rst::devices::nao::Modules::framemanager_modules_size() const{
  return this->_framemanager_modules.size();
}
 const rst::devices::nao::Module& rst::devices::nao::Modules::framemanager_modules(unsigned int index) const{
  return this->_framemanager_modules[index];
}
 const std::vector<rst::devices::nao::Module>&rst::devices::nao::Modules::framemanager_modules() const{
  return this->_framemanager_modules;
}



 void rst::devices::nao::Modules::set_framemanager_modules(unsigned int index,const rst::devices::nao::Module& newValue){
  if(this->_framemanager_modules.size()<=index){
    this->_framemanager_modules.resize(index+1);
  }
  this->_framemanager_modules[index]=newValue;

}
 rst::devices::nao::Module* rst::devices::nao::Modules::add_framemanager_modules(){
  this->_framemanager_modules.resize(this->_framemanager_modules.size()+1);
  return &this->_framemanager_modules.back();

}


