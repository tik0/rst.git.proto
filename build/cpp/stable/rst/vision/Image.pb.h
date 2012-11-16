/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace vision {

class Image{
public:
  // Nested Types
  enum Depth{
    DEPTH_8U=8,
    DEPTH_16U=16,
    DEPTH_32F=32
    
  };
  
  enum ColorMode{
    COLOR_GRAYSCALE=0,
    COLOR_RGB=1,
    COLOR_BGR=2,
    COLOR_YUV=4,
    COLOR_YUV422=8
    
  };
  
  enum DataOrder{
    DATA_SEPARATE=0,
    DATA_INTERLEAVED=1
    
  };
  
  // Accessors
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
   * Field number of the "channels" field.
   */
  static const int kchannelsFieldNumber = 0;
  
  /**
   * Return true if the "channels" field is present.
   */
  inline bool has_channels() const;
  
  /**
   * Return value of "channels" field.
   */
  inline const boost::uint32_t&channels() const;
  
  inline void set_channels(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "depth" field.
   */
  static const int kdepthFieldNumber = 0;
  
  /**
   * Return true if the "depth" field is present.
   */
  inline bool has_depth() const;
  
  /**
   * Return value of "depth" field.
   */
  inline const rst::vision::Image::Depth&depth() const;
  
  /**
   * Return value of "depth" field.
   */
  inline rst::vision::Image::Depth*mutable_depth();
  
  inline void set_depth(const rst::vision::Image::Depth&newValue);
  
  
  /**
   * Field number of the "color_mode" field.
   */
  static const int kcolor_modeFieldNumber = 0;
  
  /**
   * Return true if the "color_mode" field is present.
   */
  inline bool has_color_mode() const;
  
  /**
   * Return value of "color_mode" field.
   */
  inline const rst::vision::Image::ColorMode&color_mode() const;
  
  /**
   * Return value of "color_mode" field.
   */
  inline rst::vision::Image::ColorMode*mutable_color_mode();
  
  inline void set_color_mode(const rst::vision::Image::ColorMode&newValue);
  
  
  /**
   * Field number of the "data_order" field.
   */
  static const int kdata_orderFieldNumber = 0;
  
  /**
   * Return true if the "data_order" field is present.
   */
  inline bool has_data_order() const;
  
  /**
   * Return value of "data_order" field.
   */
  inline const rst::vision::Image::DataOrder&data_order() const;
  
  /**
   * Return value of "data_order" field.
   */
  inline rst::vision::Image::DataOrder*mutable_data_order();
  
  inline void set_data_order(const rst::vision::Image::DataOrder&newValue);
  
  
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
  
  std::vector<unsigned char> _data;
  boost::uint32_t _width;
  boost::uint32_t _height;
  boost::uint32_t _channels;
  rst::vision::Image::Depth _depth;
  rst::vision::Image::ColorMode _color_mode;
  rst::vision::Image::DataOrder _data_order;
  
};
}
}

// Inlined Stuff







// Accessors for rst::vision::Image

 bool rst::vision::Image::has_data() const{
  return true;
}

 const std::vector<unsigned char>&rst::vision::Image::data() const{
  return this->_data;
}

 std::vector<unsigned char>*rst::vision::Image::mutable_data(){
  return &this->_data;
}

 void rst::vision::Image::set_data(const std::vector<unsigned char>&newValue){
  this->_data=newValue;
}
 void rst::vision::Image::set_data(const std::string&newValue){
  this->_data.resize(newValue.size());
  memcpy(&this->_data[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::vision::Image::set_data(const boost::uint8_t* data,unsigned int size){
  this->_data.resize(size);
  memcpy(&this->_data[0],data,size);
}


 bool rst::vision::Image::has_width() const{
  return true;
}

 const boost::uint32_t&rst::vision::Image::width() const{
  return this->_width;
}

 void rst::vision::Image::set_width(const boost::uint32_t&newValue){
  this->_width=newValue;
}



 bool rst::vision::Image::has_height() const{
  return true;
}

 const boost::uint32_t&rst::vision::Image::height() const{
  return this->_height;
}

 void rst::vision::Image::set_height(const boost::uint32_t&newValue){
  this->_height=newValue;
}



 bool rst::vision::Image::has_channels() const{
  return true;
}

 const boost::uint32_t&rst::vision::Image::channels() const{
  return this->_channels;
}

 void rst::vision::Image::set_channels(const boost::uint32_t&newValue){
  this->_channels=newValue;
}



 bool rst::vision::Image::has_depth() const{
  return true;
}

 const rst::vision::Image::Depth&rst::vision::Image::depth() const{
  return this->_depth;
}

 rst::vision::Image::Depth*rst::vision::Image::mutable_depth(){
  return &this->_depth;
}

 void rst::vision::Image::set_depth(const rst::vision::Image::Depth&newValue){
  this->_depth=newValue;
}



 bool rst::vision::Image::has_color_mode() const{
  return true;
}

 const rst::vision::Image::ColorMode&rst::vision::Image::color_mode() const{
  return this->_color_mode;
}

 rst::vision::Image::ColorMode*rst::vision::Image::mutable_color_mode(){
  return &this->_color_mode;
}

 void rst::vision::Image::set_color_mode(const rst::vision::Image::ColorMode&newValue){
  this->_color_mode=newValue;
}



 bool rst::vision::Image::has_data_order() const{
  return true;
}

 const rst::vision::Image::DataOrder&rst::vision::Image::data_order() const{
  return this->_data_order;
}

 rst::vision::Image::DataOrder*rst::vision::Image::mutable_data_order(){
  return &this->_data_order;
}

 void rst::vision::Image::set_data_order(const rst::vision::Image::DataOrder&newValue){
  this->_data_order=newValue;
}




