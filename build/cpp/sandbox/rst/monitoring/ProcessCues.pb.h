/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace monitoring {

class ProcessCues{
public:
  // Nested Types
  class Cues{
  public:
    // Accessors
    /**
     * Field number of the "source" field.
     */
    static const int ksourceFieldNumber = 0;
    
    /**
     * Return true if the "source" field is present.
     */
    inline bool has_source() const;
    
    /**
     * Return value of "source" field.
     */
    inline const std::vector<unsigned char>&source() const;
    
    /**
     * Return value of "source" field.
     */
    inline std::vector<unsigned char>*mutable_source();
    
    inline void set_source(const std::vector<unsigned char>&newValue);
    inline void set_source(const std::string&newValue);
    inline void set_source(const boost::uint8_t* data,unsigned int size);
    
    /**
     * Field number of the "utime" field.
     */
    static const int kutimeFieldNumber = 0;
    
    /**
     * Return true if the "utime" field is present.
     */
    inline bool has_utime() const;
    
    /**
     * Return value of "utime" field.
     */
    inline const boost::uint64_t&utime() const;
    
    inline void set_utime(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "stime" field.
     */
    static const int kstimeFieldNumber = 0;
    
    /**
     * Return true if the "stime" field is present.
     */
    inline bool has_stime() const;
    
    /**
     * Return value of "stime" field.
     */
    inline const boost::uint64_t&stime() const;
    
    inline void set_stime(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "num_threads" field.
     */
    static const int knum_threadsFieldNumber = 0;
    
    /**
     * Return true if the "num_threads" field is present.
     */
    inline bool has_num_threads() const;
    
    /**
     * Return value of "num_threads" field.
     */
    inline const boost::uint64_t&num_threads() const;
    
    inline void set_num_threads(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "vsize" field.
     */
    static const int kvsizeFieldNumber = 0;
    
    /**
     * Return true if the "vsize" field is present.
     */
    inline bool has_vsize() const;
    
    /**
     * Return value of "vsize" field.
     */
    inline const boost::uint64_t&vsize() const;
    
    inline void set_vsize(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "rss" field.
     */
    static const int krssFieldNumber = 0;
    
    /**
     * Return true if the "rss" field is present.
     */
    inline bool has_rss() const;
    
    /**
     * Return value of "rss" field.
     */
    inline const boost::uint64_t&rss() const;
    
    inline void set_rss(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "wall_time" field.
     */
    static const int kwall_timeFieldNumber = 0;
    
    /**
     * Return true if the "wall_time" field is present.
     */
    inline bool has_wall_time() const;
    
    /**
     * Return value of "wall_time" field.
     */
    inline const boost::uint64_t&wall_time() const;
    
    inline void set_wall_time(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "virtual_time" field.
     */
    static const int kvirtual_timeFieldNumber = 0;
    
    /**
     * Return true if the "virtual_time" field is present.
     */
    inline bool has_virtual_time() const;
    
    /**
     * Return value of "virtual_time" field.
     */
    inline const boost::uint64_t&virtual_time() const;
    
    inline void set_virtual_time(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "etime" field.
     */
    static const int ketimeFieldNumber = 0;
    
    /**
     * Return true if the "etime" field is present.
     */
    inline bool has_etime() const;
    
    /**
     * Return value of "etime" field.
     */
    inline const boost::uint64_t&etime() const;
    
    inline void set_etime(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "utime_scaled" field.
     */
    static const int kutime_scaledFieldNumber = 0;
    
    /**
     * Return true if the "utime_scaled" field is present.
     */
    inline bool has_utime_scaled() const;
    
    /**
     * Return value of "utime_scaled" field.
     */
    inline const boost::uint64_t&utime_scaled() const;
    
    inline void set_utime_scaled(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "stime_scaled" field.
     */
    static const int kstime_scaledFieldNumber = 0;
    
    /**
     * Return true if the "stime_scaled" field is present.
     */
    inline bool has_stime_scaled() const;
    
    /**
     * Return value of "stime_scaled" field.
     */
    inline const boost::uint64_t&stime_scaled() const;
    
    inline void set_stime_scaled(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "wall_time_scaled" field.
     */
    static const int kwall_time_scaledFieldNumber = 0;
    
    /**
     * Return true if the "wall_time_scaled" field is present.
     */
    inline bool has_wall_time_scaled() const;
    
    /**
     * Return value of "wall_time_scaled" field.
     */
    inline const boost::uint64_t&wall_time_scaled() const;
    
    inline void set_wall_time_scaled(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "rchar" field.
     */
    static const int krcharFieldNumber = 0;
    
    /**
     * Return true if the "rchar" field is present.
     */
    inline bool has_rchar() const;
    
    /**
     * Return value of "rchar" field.
     */
    inline const boost::uint64_t&rchar() const;
    
    inline void set_rchar(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "wchar" field.
     */
    static const int kwcharFieldNumber = 0;
    
    /**
     * Return true if the "wchar" field is present.
     */
    inline bool has_wchar() const;
    
    /**
     * Return value of "wchar" field.
     */
    inline const boost::uint64_t&wchar() const;
    
    inline void set_wchar(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "read_bytes" field.
     */
    static const int kread_bytesFieldNumber = 0;
    
    /**
     * Return true if the "read_bytes" field is present.
     */
    inline bool has_read_bytes() const;
    
    /**
     * Return value of "read_bytes" field.
     */
    inline const boost::uint64_t&read_bytes() const;
    
    inline void set_read_bytes(const boost::uint64_t&newValue);
    
    
    /**
     * Field number of the "write_bytes" field.
     */
    static const int kwrite_bytesFieldNumber = 0;
    
    /**
     * Return true if the "write_bytes" field is present.
     */
    inline bool has_write_bytes() const;
    
    /**
     * Return value of "write_bytes" field.
     */
    inline const boost::uint64_t&write_bytes() const;
    
    inline void set_write_bytes(const boost::uint64_t&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Cues& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Cues* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::vector<unsigned char> _source;
    boost::uint64_t _utime;
    boost::uint64_t _stime;
    boost::uint64_t _num_threads;
    boost::uint64_t _vsize;
    boost::uint64_t _rss;
    boost::uint64_t _wall_time;
    boost::uint64_t _virtual_time;
    boost::uint64_t _etime;
    boost::uint64_t _utime_scaled;
    boost::uint64_t _stime_scaled;
    boost::uint64_t _wall_time_scaled;
    boost::uint64_t _rchar;
    boost::uint64_t _wchar;
    boost::uint64_t _read_bytes;
    boost::uint64_t _write_bytes;
    
  };
  
  // Accessors
  /**
   * Field number of the "pid" field.
   */
  static const int kpidFieldNumber = 0;
  
  /**
   * Return true if the "pid" field is present.
   */
  inline bool has_pid() const;
  
  /**
   * Return value of "pid" field.
   */
  inline const boost::uint32_t&pid() const;
  
  inline void set_pid(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "name" field.
   */
  static const int knameFieldNumber = 0;
  
  /**
   * Return true if the "name" field is present.
   */
  inline bool has_name() const;
  
  /**
   * Return value of "name" field.
   */
  inline const std::vector<unsigned char>&name() const;
  
  /**
   * Return value of "name" field.
   */
  inline std::vector<unsigned char>*mutable_name();
  
  inline void set_name(const std::vector<unsigned char>&newValue);
  inline void set_name(const std::string&newValue);
  inline void set_name(const boost::uint8_t* data,unsigned int size);
  
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
   * Field number of the "cues" field.
   */
  static const int kcuesFieldNumber = 0;
  
  /**
   * Return true if the "cues" field is present.
   */
  inline bool has_cues() const;
  
  /**
   * Return the number of elements in "cues".
   */
  inline int cues_size() const;
  /**
   * Return the element at @a index of "cues".
   */
  inline const rst::monitoring::ProcessCues::Cues& cues(unsigned int index) const;
  /**
   * Return value of "cues" field.
   */
  inline const std::vector<rst::monitoring::ProcessCues::Cues>&cues() const;
  
  
  /**
   * Set element at index @a index of "cues" to @a newValue.
   */
  inline void set_cues(unsigned int index,const rst::monitoring::ProcessCues::Cues& newValue);
  /**
   * Append an item to "cues" and return a pointer to it.
   */
  inline rst::monitoring::ProcessCues::Cues* add_cues();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const ProcessCues& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  ProcessCues* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  boost::uint32_t _pid;
  std::vector<unsigned char> _name;
  std::vector<unsigned char> _host_name;
  std::vector<rst::monitoring::ProcessCues::Cues> _cues;
  
};
}
}

// Inlined Stuff

// Accessors for rst::monitoring::processCues::Cues

 bool rst::monitoring::ProcessCues::Cues::has_source() const{
  return true;
}

 const std::vector<unsigned char>&rst::monitoring::ProcessCues::Cues::source() const{
  return this->_source;
}

 std::vector<unsigned char>*rst::monitoring::ProcessCues::Cues::mutable_source(){
  return &this->_source;
}

 void rst::monitoring::ProcessCues::Cues::set_source(const std::vector<unsigned char>&newValue){
  this->_source=newValue;
}
 void rst::monitoring::ProcessCues::Cues::set_source(const std::string&newValue){
  this->_source.resize(newValue.size());
  memcpy(&this->_source[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::monitoring::ProcessCues::Cues::set_source(const boost::uint8_t* data,unsigned int size){
  this->_source.resize(size);
  memcpy(&this->_source[0],data,size);
}


 bool rst::monitoring::ProcessCues::Cues::has_utime() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::utime() const{
  return this->_utime;
}

 void rst::monitoring::ProcessCues::Cues::set_utime(const boost::uint64_t&newValue){
  this->_utime=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_stime() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::stime() const{
  return this->_stime;
}

 void rst::monitoring::ProcessCues::Cues::set_stime(const boost::uint64_t&newValue){
  this->_stime=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_num_threads() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::num_threads() const{
  return this->_num_threads;
}

 void rst::monitoring::ProcessCues::Cues::set_num_threads(const boost::uint64_t&newValue){
  this->_num_threads=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_vsize() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::vsize() const{
  return this->_vsize;
}

 void rst::monitoring::ProcessCues::Cues::set_vsize(const boost::uint64_t&newValue){
  this->_vsize=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_rss() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::rss() const{
  return this->_rss;
}

 void rst::monitoring::ProcessCues::Cues::set_rss(const boost::uint64_t&newValue){
  this->_rss=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_wall_time() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::wall_time() const{
  return this->_wall_time;
}

 void rst::monitoring::ProcessCues::Cues::set_wall_time(const boost::uint64_t&newValue){
  this->_wall_time=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_virtual_time() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::virtual_time() const{
  return this->_virtual_time;
}

 void rst::monitoring::ProcessCues::Cues::set_virtual_time(const boost::uint64_t&newValue){
  this->_virtual_time=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_etime() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::etime() const{
  return this->_etime;
}

 void rst::monitoring::ProcessCues::Cues::set_etime(const boost::uint64_t&newValue){
  this->_etime=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_utime_scaled() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::utime_scaled() const{
  return this->_utime_scaled;
}

 void rst::monitoring::ProcessCues::Cues::set_utime_scaled(const boost::uint64_t&newValue){
  this->_utime_scaled=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_stime_scaled() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::stime_scaled() const{
  return this->_stime_scaled;
}

 void rst::monitoring::ProcessCues::Cues::set_stime_scaled(const boost::uint64_t&newValue){
  this->_stime_scaled=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_wall_time_scaled() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::wall_time_scaled() const{
  return this->_wall_time_scaled;
}

 void rst::monitoring::ProcessCues::Cues::set_wall_time_scaled(const boost::uint64_t&newValue){
  this->_wall_time_scaled=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_rchar() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::rchar() const{
  return this->_rchar;
}

 void rst::monitoring::ProcessCues::Cues::set_rchar(const boost::uint64_t&newValue){
  this->_rchar=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_wchar() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::wchar() const{
  return this->_wchar;
}

 void rst::monitoring::ProcessCues::Cues::set_wchar(const boost::uint64_t&newValue){
  this->_wchar=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_read_bytes() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::read_bytes() const{
  return this->_read_bytes;
}

 void rst::monitoring::ProcessCues::Cues::set_read_bytes(const boost::uint64_t&newValue){
  this->_read_bytes=newValue;
}



 bool rst::monitoring::ProcessCues::Cues::has_write_bytes() const{
  return true;
}

 const boost::uint64_t&rst::monitoring::ProcessCues::Cues::write_bytes() const{
  return this->_write_bytes;
}

 void rst::monitoring::ProcessCues::Cues::set_write_bytes(const boost::uint64_t&newValue){
  this->_write_bytes=newValue;
}





// Accessors for rst::monitoring::ProcessCues

 bool rst::monitoring::ProcessCues::has_pid() const{
  return true;
}

 const boost::uint32_t&rst::monitoring::ProcessCues::pid() const{
  return this->_pid;
}

 void rst::monitoring::ProcessCues::set_pid(const boost::uint32_t&newValue){
  this->_pid=newValue;
}



 bool rst::monitoring::ProcessCues::has_name() const{
  return true;
}

 const std::vector<unsigned char>&rst::monitoring::ProcessCues::name() const{
  return this->_name;
}

 std::vector<unsigned char>*rst::monitoring::ProcessCues::mutable_name(){
  return &this->_name;
}

 void rst::monitoring::ProcessCues::set_name(const std::vector<unsigned char>&newValue){
  this->_name=newValue;
}
 void rst::monitoring::ProcessCues::set_name(const std::string&newValue){
  this->_name.resize(newValue.size());
  memcpy(&this->_name[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::monitoring::ProcessCues::set_name(const boost::uint8_t* data,unsigned int size){
  this->_name.resize(size);
  memcpy(&this->_name[0],data,size);
}


 bool rst::monitoring::ProcessCues::has_host_name() const{
  return true;
}

 const std::vector<unsigned char>&rst::monitoring::ProcessCues::host_name() const{
  return this->_host_name;
}

 std::vector<unsigned char>*rst::monitoring::ProcessCues::mutable_host_name(){
  return &this->_host_name;
}

 void rst::monitoring::ProcessCues::set_host_name(const std::vector<unsigned char>&newValue){
  this->_host_name=newValue;
}
 void rst::monitoring::ProcessCues::set_host_name(const std::string&newValue){
  this->_host_name.resize(newValue.size());
  memcpy(&this->_host_name[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::monitoring::ProcessCues::set_host_name(const boost::uint8_t* data,unsigned int size){
  this->_host_name.resize(size);
  memcpy(&this->_host_name[0],data,size);
}


 bool rst::monitoring::ProcessCues::has_cues() const{
  return true;
}

 int rst::monitoring::ProcessCues::cues_size() const{
  return this->_cues.size();
}
 const rst::monitoring::ProcessCues::Cues& rst::monitoring::ProcessCues::cues(unsigned int index) const{
  return this->_cues[index];
}
 const std::vector<rst::monitoring::ProcessCues::Cues>&rst::monitoring::ProcessCues::cues() const{
  return this->_cues;
}



 void rst::monitoring::ProcessCues::set_cues(unsigned int index,const rst::monitoring::ProcessCues::Cues& newValue){
  if(this->_cues.size()<=index){
    this->_cues.resize(index+1);
  }
  this->_cues[index]=newValue;

}
 rst::monitoring::ProcessCues::Cues* rst::monitoring::ProcessCues::add_cues(){
  this->_cues.resize(this->_cues.size()+1);
  return &this->_cues.back();

}


