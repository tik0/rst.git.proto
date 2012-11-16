/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/math/Vec2DInt.pb.h>

namespace rst {
namespace geometry {

class BoundingBox{
public:
  // Accessors
  /**
   * Field number of the "top_left" field.
   */
  static const int ktop_leftFieldNumber = 0;
  
  /**
   * Return true if the "top_left" field is present.
   */
  inline bool has_top_left() const;
  
  /**
   * Return value of "top_left" field.
   */
  inline const rst::math::Vec2DInt&top_left() const;
  
  /**
   * Return value of "top_left" field.
   */
  inline rst::math::Vec2DInt*mutable_top_left();
  
  inline void set_top_left(const rst::math::Vec2DInt&newValue);
  
  
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
   * Field number of the "image_width" field.
   */
  static const int kimage_widthFieldNumber = 0;
  
  /**
   * Return true if the "image_width" field is present.
   */
  inline bool has_image_width() const;
  
  /**
   * Return value of "image_width" field.
   */
  inline const boost::uint32_t&image_width() const;
  
  inline void set_image_width(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "image_height" field.
   */
  static const int kimage_heightFieldNumber = 0;
  
  /**
   * Return true if the "image_height" field is present.
   */
  inline bool has_image_height() const;
  
  /**
   * Return value of "image_height" field.
   */
  inline const boost::uint32_t&image_height() const;
  
  inline void set_image_height(const boost::uint32_t&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const BoundingBox& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  BoundingBox* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::math::Vec2DInt _top_left;
  boost::uint32_t _width;
  boost::uint32_t _height;
  boost::uint32_t _image_width;
  boost::uint32_t _image_height;
  
};
}
}

// Inlined Stuff

// Accessors for rst::geometry::BoundingBox

 bool rst::geometry::BoundingBox::has_top_left() const{
  return true;
}

 const rst::math::Vec2DInt&rst::geometry::BoundingBox::top_left() const{
  return this->_top_left;
}

 rst::math::Vec2DInt*rst::geometry::BoundingBox::mutable_top_left(){
  return &this->_top_left;
}

 void rst::geometry::BoundingBox::set_top_left(const rst::math::Vec2DInt&newValue){
  this->_top_left=newValue;
}



 bool rst::geometry::BoundingBox::has_width() const{
  return true;
}

 const boost::uint32_t&rst::geometry::BoundingBox::width() const{
  return this->_width;
}

 void rst::geometry::BoundingBox::set_width(const boost::uint32_t&newValue){
  this->_width=newValue;
}



 bool rst::geometry::BoundingBox::has_height() const{
  return true;
}

 const boost::uint32_t&rst::geometry::BoundingBox::height() const{
  return this->_height;
}

 void rst::geometry::BoundingBox::set_height(const boost::uint32_t&newValue){
  this->_height=newValue;
}



 bool rst::geometry::BoundingBox::has_image_width() const{
  return true;
}

 const boost::uint32_t&rst::geometry::BoundingBox::image_width() const{
  return this->_image_width;
}

 void rst::geometry::BoundingBox::set_image_width(const boost::uint32_t&newValue){
  this->_image_width=newValue;
}



 bool rst::geometry::BoundingBox::has_image_height() const{
  return true;
}

 const boost::uint32_t&rst::geometry::BoundingBox::image_height() const{
  return this->_image_height;
}

 void rst::geometry::BoundingBox::set_image_height(const boost::uint32_t&newValue){
  this->_image_height=newValue;
}




