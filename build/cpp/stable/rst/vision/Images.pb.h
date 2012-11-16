/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/vision/Image.pb.h>

namespace rst {
namespace vision {

class Images{
public:
  // Accessors
  /**
   * Field number of the "images" field.
   */
  static const int kimagesFieldNumber = 0;
  
  /**
   * Return true if the "images" field is present.
   */
  inline bool has_images() const;
  
  /**
   * Return the number of elements in "images".
   */
  inline int images_size() const;
  /**
   * Return the element at @a index of "images".
   */
  inline const rst::vision::Image& images(unsigned int index) const;
  /**
   * Return value of "images" field.
   */
  inline const std::vector<rst::vision::Image>&images() const;
  
  
  /**
   * Set element at index @a index of "images" to @a newValue.
   */
  inline void set_images(unsigned int index,const rst::vision::Image& newValue);
  /**
   * Append an item to "images" and return a pointer to it.
   */
  inline rst::vision::Image* add_images();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Images& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Images* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::vision::Image> _images;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::Images

 bool rst::vision::Images::has_images() const{
  return true;
}

 int rst::vision::Images::images_size() const{
  return this->_images.size();
}
 const rst::vision::Image& rst::vision::Images::images(unsigned int index) const{
  return this->_images[index];
}
 const std::vector<rst::vision::Image>&rst::vision::Images::images() const{
  return this->_images;
}



 void rst::vision::Images::set_images(unsigned int index,const rst::vision::Image& newValue){
  if(this->_images.size()<=index){
    this->_images.resize(index+1);
  }
  this->_images[index]=newValue;

}
 rst::vision::Image* rst::vision::Images::add_images(){
  this->_images.resize(this->_images.size()+1);
  return &this->_images.back();

}


