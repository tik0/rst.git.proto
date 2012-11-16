/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/vision/Image.pb.h>
#include <rst/vision/Stereo.pb.h>
#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>
#include <rst/math/Vec3DFloat.pb.h>

namespace rst {
namespace vision {

class ViSpeaking{
public:
  // Accessors
  /**
   * Field number of the "image" field.
   */
  static const int kimageFieldNumber = 0;
  
  /**
   * Return true if the "image" field is present.
   */
  inline bool has_image() const;
  
  /**
   * Return value of "image" field.
   */
  inline const rst::vision::Image&image() const;
  
  /**
   * Return value of "image" field.
   */
  inline rst::vision::Image*mutable_image();
  
  inline void set_image(const rst::vision::Image&newValue);
  
  
  /**
   * Field number of the "stereo" field.
   */
  static const int kstereoFieldNumber = 0;
  
  /**
   * Return true if the "stereo" field is present.
   */
  inline bool has_stereo() const;
  
  /**
   * Return the number of elements in "stereo".
   */
  inline int stereo_size() const;
  /**
   * Return the element at @a index of "stereo".
   */
  inline const rst::vision::Stereo& stereo(unsigned int index) const;
  /**
   * Return value of "stereo" field.
   */
  inline const std::vector<rst::vision::Stereo>&stereo() const;
  
  
  /**
   * Set element at index @a index of "stereo" to @a newValue.
   */
  inline void set_stereo(unsigned int index,const rst::vision::Stereo& newValue);
  /**
   * Append an item to "stereo" and return a pointer to it.
   */
  inline rst::vision::Stereo* add_stereo();
  
  /**
   * Field number of the "itds" field.
   */
  static const int kitdsFieldNumber = 0;
  
  /**
   * Return true if the "itds" field is present.
   */
  inline bool has_itds() const;
  
  /**
   * Return the number of elements in "itds".
   */
  inline int itds_size() const;
  /**
   * Return the element at @a index of "itds".
   */
  inline const float& itds(unsigned int index) const;
  /**
   * Return value of "itds" field.
   */
  inline const std::vector<float>&itds() const;
  
  
  /**
   * Set element at index @a index of "itds" to @a newValue.
   */
  inline void set_itds(unsigned int index,const float& newValue);
  /**
   * Append an item to "itds" and return a pointer to it.
   */
  inline void add_itds(const float& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const ViSpeaking& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  ViSpeaking* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::vision::Image _image;
  std::vector<rst::vision::Stereo> _stereo;
  std::vector<float> _itds;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::ViSpeaking

 bool rst::vision::ViSpeaking::has_image() const{
  return true;
}

 const rst::vision::Image&rst::vision::ViSpeaking::image() const{
  return this->_image;
}

 rst::vision::Image*rst::vision::ViSpeaking::mutable_image(){
  return &this->_image;
}

 void rst::vision::ViSpeaking::set_image(const rst::vision::Image&newValue){
  this->_image=newValue;
}



 bool rst::vision::ViSpeaking::has_stereo() const{
  return true;
}

 int rst::vision::ViSpeaking::stereo_size() const{
  return this->_stereo.size();
}
 const rst::vision::Stereo& rst::vision::ViSpeaking::stereo(unsigned int index) const{
  return this->_stereo[index];
}
 const std::vector<rst::vision::Stereo>&rst::vision::ViSpeaking::stereo() const{
  return this->_stereo;
}



 void rst::vision::ViSpeaking::set_stereo(unsigned int index,const rst::vision::Stereo& newValue){
  if(this->_stereo.size()<=index){
    this->_stereo.resize(index+1);
  }
  this->_stereo[index]=newValue;

}
 rst::vision::Stereo* rst::vision::ViSpeaking::add_stereo(){
  this->_stereo.resize(this->_stereo.size()+1);
  return &this->_stereo.back();

}

 bool rst::vision::ViSpeaking::has_itds() const{
  return true;
}

 int rst::vision::ViSpeaking::itds_size() const{
  return this->_itds.size();
}
 const float& rst::vision::ViSpeaking::itds(unsigned int index) const{
  return this->_itds[index];
}
 const std::vector<float>&rst::vision::ViSpeaking::itds() const{
  return this->_itds;
}



 void rst::vision::ViSpeaking::set_itds(unsigned int index,const float& newValue){
  if(this->_itds.size()<=index){
    this->_itds.resize(index+1);
  }
  this->_itds[index]=newValue;

}
 void rst::vision::ViSpeaking::add_itds(const float& newValue){
  this->_itds.push_back(newValue);
}


