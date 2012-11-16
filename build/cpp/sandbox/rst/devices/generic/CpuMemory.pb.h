/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace devices {
namespace generic {

class CpuMemory{
public:
  // Nested Types
  class Cpu{
  public:
    // Accessors
    /**
     * Field number of the "index" field.
     */
    static const int kindexFieldNumber = 0;
    
    /**
     * Return true if the "index" field is present.
     */
    inline bool has_index() const;
    
    /**
     * Return value of "index" field.
     */
    inline const boost::uint32_t&index() const;
    
    inline void set_index(const boost::uint32_t&newValue);
    
    
    /**
     * Field number of the "user" field.
     */
    static const int kuserFieldNumber = 0;
    
    /**
     * Return true if the "user" field is present.
     */
    inline bool has_user() const;
    
    /**
     * Return value of "user" field.
     */
    inline const boost::uint64_t&user() const;
    
    inline void set_user(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "user_low" field.
     */
    static const int kuser_lowFieldNumber = 0;
    
    /**
     * Return true if the "user_low" field is present.
     */
    inline bool has_user_low() const;
    
    /**
     * Return value of "user_low" field.
     */
    inline const boost::uint64_t&user_low() const;
    
    inline void set_user_low(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "system" field.
     */
    static const int ksystemFieldNumber = 0;
    
    /**
     * Return true if the "system" field is present.
     */
    inline bool has_system() const;
    
    /**
     * Return value of "system" field.
     */
    inline const boost::uint64_t&system() const;
    
    inline void set_system(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "idle" field.
     */
    static const int kidleFieldNumber = 0;
    
    /**
     * Return true if the "idle" field is present.
     */
    inline bool has_idle() const;
    
    /**
     * Return value of "idle" field.
     */
    inline const boost::uint64_t&idle() const;
    
    inline void set_idle(const boost::uint64_t&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Cpu& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Cpu* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    boost::uint32_t _index;
    boost::uint64_t _user;
    boost::uint64_t _user_low;
    boost::uint64_t _system;
    boost::uint64_t _idle;
    
  };
  
  // Accessors
  /**
   * Field number of the "memory_free" field.
   */
  static const int kmemory_freeFieldNumber = 0;
  
  /**
   * Return true if the "memory_free" field is present.
   */
  inline bool has_memory_free() const;
  
  /**
   * Return value of "memory_free" field.
   */
  inline const float&memory_free() const;
  
  inline void set_memory_free(const float&newValue);
  
  
  /**
   * Field number of the "memory_total" field.
   */
  static const int kmemory_totalFieldNumber = 0;
  
  /**
   * Return true if the "memory_total" field is present.
   */
  inline bool has_memory_total() const;
  
  /**
   * Return value of "memory_total" field.
   */
  inline const float&memory_total() const;
  
  inline void set_memory_total(const float&newValue);
  
  
  /**
   * Field number of the "memory_used" field.
   */
  static const int kmemory_usedFieldNumber = 0;
  
  /**
   * Return true if the "memory_used" field is present.
   */
  inline bool has_memory_used() const;
  
  /**
   * Return value of "memory_used" field.
   */
  inline const float&memory_used() const;
  
  inline void set_memory_used(const float&newValue);
  
  
  /**
   * Field number of the "jiffy_length" field.
   */
  static const int kjiffy_lengthFieldNumber = 0;
  
  /**
   * Return true if the "jiffy_length" field is present.
   */
  inline bool has_jiffy_length() const;
  
  /**
   * Return value of "jiffy_length" field.
   */
  inline const boost::uint32_t&jiffy_length() const;
  
  inline void set_jiffy_length(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "host_name" field.
   */
  static const int khost_nameFieldNumber = 0;
  
  /**
   * Return true if the "host_name" field is present.
   */
  inline bool has_host_name() const;
  
  /**
   * Return value of "host_name" field.
   */
  inline const std::vector<unsigned char>&host_name() const;
  
  /**
   * Return value of "host_name" field.
   */
  inline std::vector<unsigned char>*mutable_host_name();
  
  inline void set_host_name(const std::vector<unsigned char>&newValue);
  inline void set_host_name(const std::string&newValue);
  inline void set_host_name(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "cpus" field.
   */
  static const int kcpusFieldNumber = 0;
  
  /**
   * Return true if the "cpus" field is present.
   */
  inline bool has_cpus() const;
  
  /**
   * Return the number of elements in "cpus".
   */
  inline int cpus_size() const;
  /**
   * Return the element at @a index of "cpus".
   */
  inline const rst::devices::generic::CpuMemory::Cpu& cpus(unsigned int index) const;
  /**
   * Return value of "cpus" field.
   */
  inline const std::vector<rst::devices::generic::CpuMemory::Cpu>&cpus() const;
  
  
  /**
   * Set element at index @a index of "cpus" to @a newValue.
   */
  inline void set_cpus(unsigned int index,const rst::devices::generic::CpuMemory::Cpu& newValue);
  /**
   * Append an item to "cpus" and return a pointer to it.
   */
  inline rst::devices::generic::CpuMemory::Cpu* add_cpus();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const CpuMemory& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  CpuMemory* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _memory_free;
  float _memory_total;
  float _memory_used;
  boost::uint32_t _jiffy_length;
  std::vector<unsigned char> _host_name;
  std::vector<rst::devices::generic::CpuMemory::Cpu> _cpus;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::generic::cpuMemory::Cpu

 bool rst::devices::generic::CpuMemory::Cpu::has_index() const{
  return true;
}

 const boost::uint32_t&rst::devices::generic::CpuMemory::Cpu::index() const{
  return this->_index;
}

 void rst::devices::generic::CpuMemory::Cpu::set_index(const boost::uint32_t&newValue){
  this->_index=newValue;
}



 bool rst::devices::generic::CpuMemory::Cpu::has_user() const{
  return true;
}

 const boost::uint64_t&rst::devices::generic::CpuMemory::Cpu::user() const{
  return this->_user;
}

 void rst::devices::generic::CpuMemory::Cpu::set_user(const boost::uint64_t&newValue){
  this->_user=newValue;
}



 bool rst::devices::generic::CpuMemory::Cpu::has_user_low() const{
  return true;
}

 const boost::uint64_t&rst::devices::generic::CpuMemory::Cpu::user_low() const{
  return this->_user_low;
}

 void rst::devices::generic::CpuMemory::Cpu::set_user_low(const boost::uint64_t&newValue){
  this->_user_low=newValue;
}



 bool rst::devices::generic::CpuMemory::Cpu::has_system() const{
  return true;
}

 const boost::uint64_t&rst::devices::generic::CpuMemory::Cpu::system() const{
  return this->_system;
}

 void rst::devices::generic::CpuMemory::Cpu::set_system(const boost::uint64_t&newValue){
  this->_system=newValue;
}



 bool rst::devices::generic::CpuMemory::Cpu::has_idle() const{
  return true;
}

 const boost::uint64_t&rst::devices::generic::CpuMemory::Cpu::idle() const{
  return this->_idle;
}

 void rst::devices::generic::CpuMemory::Cpu::set_idle(const boost::uint64_t&newValue){
  this->_idle=newValue;
}





// Accessors for rst::devices::generic::CpuMemory

 bool rst::devices::generic::CpuMemory::has_memory_free() const{
  return true;
}

 const float&rst::devices::generic::CpuMemory::memory_free() const{
  return this->_memory_free;
}

 void rst::devices::generic::CpuMemory::set_memory_free(const float&newValue){
  this->_memory_free=newValue;
}



 bool rst::devices::generic::CpuMemory::has_memory_total() const{
  return true;
}

 const float&rst::devices::generic::CpuMemory::memory_total() const{
  return this->_memory_total;
}

 void rst::devices::generic::CpuMemory::set_memory_total(const float&newValue){
  this->_memory_total=newValue;
}



 bool rst::devices::generic::CpuMemory::has_memory_used() const{
  return true;
}

 const float&rst::devices::generic::CpuMemory::memory_used() const{
  return this->_memory_used;
}

 void rst::devices::generic::CpuMemory::set_memory_used(const float&newValue){
  this->_memory_used=newValue;
}



 bool rst::devices::generic::CpuMemory::has_jiffy_length() const{
  return true;
}

 const boost::uint32_t&rst::devices::generic::CpuMemory::jiffy_length() const{
  return this->_jiffy_length;
}

 void rst::devices::generic::CpuMemory::set_jiffy_length(const boost::uint32_t&newValue){
  this->_jiffy_length=newValue;
}



 bool rst::devices::generic::CpuMemory::has_host_name() const{
  return true;
}

 const std::vector<unsigned char>&rst::devices::generic::CpuMemory::host_name() const{
  return this->_host_name;
}

 std::vector<unsigned char>*rst::devices::generic::CpuMemory::mutable_host_name(){
  return &this->_host_name;
}

 void rst::devices::generic::CpuMemory::set_host_name(const std::vector<unsigned char>&newValue){
  this->_host_name=newValue;
}
 void rst::devices::generic::CpuMemory::set_host_name(const std::string&newValue){
  this->_host_name.resize(newValue.size());
  memcpy(&this->_host_name[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::devices::generic::CpuMemory::set_host_name(const boost::uint8_t* data,unsigned int size){
  this->_host_name.resize(size);
  memcpy(&this->_host_name[0],data,size);
}


 bool rst::devices::generic::CpuMemory::has_cpus() const{
  return true;
}

 int rst::devices::generic::CpuMemory::cpus_size() const{
  return this->_cpus.size();
}
 const rst::devices::generic::CpuMemory::Cpu& rst::devices::generic::CpuMemory::cpus(unsigned int index) const{
  return this->_cpus[index];
}
 const std::vector<rst::devices::generic::CpuMemory::Cpu>&rst::devices::generic::CpuMemory::cpus() const{
  return this->_cpus;
}



 void rst::devices::generic::CpuMemory::set_cpus(unsigned int index,const rst::devices::generic::CpuMemory::Cpu& newValue){
  if(this->_cpus.size()<=index){
    this->_cpus.resize(index+1);
  }
  this->_cpus[index]=newValue;

}
 rst::devices::generic::CpuMemory::Cpu* rst::devices::generic::CpuMemory::add_cpus(){
  this->_cpus.resize(this->_cpus.size()+1);
  return &this->_cpus.back();

}


