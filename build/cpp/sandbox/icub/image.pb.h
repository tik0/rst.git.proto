/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace icub {

class image{
public:
  // Nested Types
  enum INNER9462{
    mat=7627117
    
  };
  
  enum INNER9463{
    rgb=6449010
    
  };
  
  class INNER9464{
  public:
    // Accessors
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
     * Field number of the "num_bytes" field.
     */
    static const int knum_bytesFieldNumber = 0;
    
    /**
     * Return true if the "num_bytes" field is present.
     */
    inline bool has_num_bytes() const;
    
    /**
     * Return value of "num_bytes" field.
     */
    inline const boost::uint32_t&num_bytes() const;
    
    inline void set_num_bytes(const boost::uint32_t&newValue);
    
    
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
    inline const boost::uint32_t&depth() const;
    
    inline void set_depth(const boost::uint32_t&newValue);
    
    
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
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const INNER9464& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    INNER9464* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    boost::uint32_t _channels;
    boost::uint32_t _num_bytes;
    boost::uint32_t _depth;
    boost::uint32_t _width;
    boost::uint32_t _height;
    
  };
  
  // Accessors
  /**
   * Field number of the "mat_tag" field.
   */
  static const int kmat_tagFieldNumber = 0;
  
  /**
   * Return true if the "mat_tag" field is present.
   */
  inline bool has_mat_tag() const;
  
  /**
   * Return value of "mat_tag" field.
   */
  inline const icub::image::INNER9462&mat_tag() const;
  
  /**
   * Return value of "mat_tag" field.
   */
  inline icub::image::INNER9462*mutable_mat_tag();
  
  inline void set_mat_tag(const icub::image::INNER9462&newValue);
  
  
  /**
   * Field number of the "color_space" field.
   */
  static const int kcolor_spaceFieldNumber = 0;
  
  /**
   * Return true if the "color_space" field is present.
   */
  inline bool has_color_space() const;
  
  /**
   * Return value of "color_space" field.
   */
  inline const icub::image::INNER9463&color_space() const;
  
  /**
   * Return value of "color_space" field.
   */
  inline icub::image::INNER9463*mutable_color_space();
  
  inline void set_color_space(const icub::image::INNER9463&newValue);
  
  
  /**
   * Field number of the "geometry" field.
   */
  static const int kgeometryFieldNumber = 0;
  
  /**
   * Return true if the "geometry" field is present.
   */
  inline bool has_geometry() const;
  
  /**
   * Return value of "geometry" field.
   */
  inline const icub::image::INNER9464&geometry() const;
  
  /**
   * Return value of "geometry" field.
   */
  inline icub::image::INNER9464*mutable_geometry();
  
  inline void set_geometry(const icub::image::INNER9464&newValue);
  
  
  /**
   * Field number of the "pixels" field.
   */
  static const int kpixelsFieldNumber = 0;
  
  /**
   * Return true if the "pixels" field is present.
   */
  inline bool has_pixels() const;
  
  /**
   * Return value of "pixels" field.
   */
  inline const std::vector<unsigned char>&pixels() const;
  
  /**
   * Return value of "pixels" field.
   */
  inline std::vector<unsigned char>*mutable_pixels();
  
  inline void set_pixels(const std::vector<unsigned char>&newValue);
  inline void set_pixels(const std::string&newValue);
  inline void set_pixels(const boost::uint8_t* data,unsigned int size);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const image& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  image* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  icub::image::INNER9462 _mat_tag;
  icub::image::INNER9463 _color_space;
  icub::image::INNER9464 _geometry;
  std::vector<unsigned char> _pixels;
  
};
}

// Inlined Stuff





// Accessors for icub::image::INNER9464

 bool icub::image::INNER9464::has_channels() const{
  return true;
}

 const boost::uint32_t&icub::image::INNER9464::channels() const{
  return this->_channels;
}

 void icub::image::INNER9464::set_channels(const boost::uint32_t&newValue){
  this->_channels=newValue;
}



 bool icub::image::INNER9464::has_num_bytes() const{
  return true;
}

 const boost::uint32_t&icub::image::INNER9464::num_bytes() const{
  return this->_num_bytes;
}

 void icub::image::INNER9464::set_num_bytes(const boost::uint32_t&newValue){
  this->_num_bytes=newValue;
}



 bool icub::image::INNER9464::has_depth() const{
  return true;
}

 const boost::uint32_t&icub::image::INNER9464::depth() const{
  return this->_depth;
}

 void icub::image::INNER9464::set_depth(const boost::uint32_t&newValue){
  this->_depth=newValue;
}



 bool icub::image::INNER9464::has_width() const{
  return true;
}

 const boost::uint32_t&icub::image::INNER9464::width() const{
  return this->_width;
}

 void icub::image::INNER9464::set_width(const boost::uint32_t&newValue){
  this->_width=newValue;
}



 bool icub::image::INNER9464::has_height() const{
  return true;
}

 const boost::uint32_t&icub::image::INNER9464::height() const{
  return this->_height;
}

 void icub::image::INNER9464::set_height(const boost::uint32_t&newValue){
  this->_height=newValue;
}





// Accessors for icub::image

 bool icub::image::has_mat_tag() const{
  return true;
}

 const icub::image::INNER9462&icub::image::mat_tag() const{
  return this->_mat_tag;
}

 icub::image::INNER9462*icub::image::mutable_mat_tag(){
  return &this->_mat_tag;
}

 void icub::image::set_mat_tag(const icub::image::INNER9462&newValue){
  this->_mat_tag=newValue;
}



 bool icub::image::has_color_space() const{
  return true;
}

 const icub::image::INNER9463&icub::image::color_space() const{
  return this->_color_space;
}

 icub::image::INNER9463*icub::image::mutable_color_space(){
  return &this->_color_space;
}

 void icub::image::set_color_space(const icub::image::INNER9463&newValue){
  this->_color_space=newValue;
}



 bool icub::image::has_geometry() const{
  return true;
}

 const icub::image::INNER9464&icub::image::geometry() const{
  return this->_geometry;
}

 icub::image::INNER9464*icub::image::mutable_geometry(){
  return &this->_geometry;
}

 void icub::image::set_geometry(const icub::image::INNER9464&newValue){
  this->_geometry=newValue;
}



 bool icub::image::has_pixels() const{
  return true;
}

 const std::vector<unsigned char>&icub::image::pixels() const{
  return this->_pixels;
}

 std::vector<unsigned char>*icub::image::mutable_pixels(){
  return &this->_pixels;
}

 void icub::image::set_pixels(const std::vector<unsigned char>&newValue){
  this->_pixels=newValue;
}
 void icub::image::set_pixels(const std::string&newValue){
  this->_pixels.resize(newValue.size());
  memcpy(&this->_pixels[0],(unsigned char*)&newValue[0],newValue.size());
}
 void icub::image::set_pixels(const boost::uint8_t* data,unsigned int size){
  this->_pixels.resize(size);
  memcpy(&this->_pixels[0],data,size);
}



