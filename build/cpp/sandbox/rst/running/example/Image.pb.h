/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/running/example/MetaData.pb.h>

namespace rst {
namespace running {
namespace example {

class Image{
public:
  // Accessors
  /**
   * Field number of the "meta_data" field.
   */
  static const int kmeta_dataFieldNumber = 0;
  
  /**
   * Return true if the "meta_data" field is present.
   */
  inline bool has_meta_data() const;
  
  /**
   * Return the number of elements in "meta_data".
   */
  inline int meta_data_size() const;
  /**
   * Return the element at @a index of "meta_data".
   */
  inline const rst::running::example::MetaData& meta_data(unsigned int index) const;
  /**
   * Return value of "meta_data" field.
   */
  inline const std::vector<rst::running::example::MetaData>&meta_data() const;
  
  
  /**
   * Set element at index @a index of "meta_data" to @a newValue.
   */
  inline void set_meta_data(unsigned int index,const rst::running::example::MetaData& newValue);
  /**
   * Append an item to "meta_data" and return a pointer to it.
   */
  inline rst::running::example::MetaData* add_meta_data();
  
  /**
   * Field number of the "width" field.
   */
  static const int kwidthFieldNumber = 0;
  
  /**
   * Return true if the "width" field is present.
   */
  inline bool has_width() const;
  
  /**
   * Return value of "width" field.
   */
  inline const boost::uint32_t&width() const;
  
  inline void set_width(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "height" field.
   */
  static const int kheightFieldNumber = 0;
  
  /**
   * Return true if the "height" field is present.
   */
  inline bool has_height() const;
  
  /**
   * Return value of "height" field.
   */
  inline const boost::uint32_t&height() const;
  
  inline void set_height(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "depths" field.
   */
  static const int kdepthsFieldNumber = 0;
  
  /**
   * Return true if the "depths" field is present.
   */
  inline bool has_depths() const;
  
  /**
   * Return the number of elements in "depths".
   */
  inline int depths_size() const;
  /**
   * Return the element at @a index of "depths".
   */
  inline const boost::uint32_t& depths(unsigned int index) const;
  /**
   * Return value of "depths" field.
   */
  inline const std::vector<boost::uint32_t>&depths() const;
  
  
  /**
   * Set element at index @a index of "depths" to @a newValue.
   */
  inline void set_depths(unsigned int index,const boost::uint32_t& newValue);
  /**
   * Append an item to "depths" and return a pointer to it.
   */
  inline void add_depths(const boost::uint32_t& newValue);
  
  /**
   * Field number of the "data" field.
   */
  static const int kdataFieldNumber = 0;
  
  /**
   * Return true if the "data" field is present.
   */
  inline bool has_data() const;
  
  /**
   * Return value of "data" field.
   */
  inline const std::vector<unsigned char>&data() const;
  
  /**
   * Return value of "data" field.
   */
  inline std::vector<unsigned char>*mutable_data();
  
  inline void set_data(const std::vector<unsigned char>&newValue);
  inline void set_data(const std::string&newValue);
  inline void set_data(const boost::uint8_t* data,unsigned int size);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Image& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Image* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::running::example::MetaData> _meta_data;
  boost::uint32_t _width;
  boost::uint32_t _height;
  std::vector<boost::uint32_t> _depths;
  std::vector<unsigned char> _data;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::running::example::Image

 bool rst::running::example::Image::has_meta_data() const{
  return true;
}

 int rst::running::example::Image::meta_data_size() const{
  return this->_meta_data.size();
}
 const rst::running::example::MetaData& rst::running::example::Image::meta_data(unsigned int index) const{
  return this->_meta_data[index];
}
 const std::vector<rst::running::example::MetaData>&rst::running::example::Image::meta_data() const{
  return this->_meta_data;
}



 void rst::running::example::Image::set_meta_data(unsigned int index,const rst::running::example::MetaData& newValue){
  if(this->_meta_data.size()<=index){
    this->_meta_data.resize(index+1);
  }
  this->_meta_data[index]=newValue;

}
 rst::running::example::MetaData* rst::running::example::Image::add_meta_data(){
  this->_meta_data.resize(this->_meta_data.size()+1);
  return &this->_meta_data.back();

}

 bool rst::running::example::Image::has_width() const{
  return true;
}

 const boost::uint32_t&rst::running::example::Image::width() const{
  return this->_width;
}

 void rst::running::example::Image::set_width(const boost::uint32_t&newValue){
  this->_width=newValue;
}



 bool rst::running::example::Image::has_height() const{
  return true;
}

 const boost::uint32_t&rst::running::example::Image::height() const{
  return this->_height;
}

 void rst::running::example::Image::set_height(const boost::uint32_t&newValue){
  this->_height=newValue;
}



 bool rst::running::example::Image::has_depths() const{
  return true;
}

 int rst::running::example::Image::depths_size() const{
  return this->_depths.size();
}
 const boost::uint32_t& rst::running::example::Image::depths(unsigned int index) const{
  return this->_depths[index];
}
 const std::vector<boost::uint32_t>&rst::running::example::Image::depths() const{
  return this->_depths;
}



 void rst::running::example::Image::set_depths(unsigned int index,const boost::uint32_t& newValue){
  if(this->_depths.size()<=index){
    this->_depths.resize(index+1);
  }
  this->_depths[index]=newValue;

}
 void rst::running::example::Image::add_depths(const boost::uint32_t& newValue){
  this->_depths.push_back(newValue);
}

 bool rst::running::example::Image::has_data() const{
  return true;
}

 const std::vector<unsigned char>&rst::running::example::Image::data() const{
  return this->_data;
}

 std::vector<unsigned char>*rst::running::example::Image::mutable_data(){
  return &this->_data;
}

 void rst::running::example::Image::set_data(const std::vector<unsigned char>&newValue){
  this->_data=newValue;
}
 void rst::running::example::Image::set_data(const std::string&newValue){
  this->_data.resize(newValue.size());
  memcpy(&this->_data[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::running::example::Image::set_data(const boost::uint8_t* data,unsigned int size){
  this->_data.resize(size);
  memcpy(&this->_data[0],data,size);
}



