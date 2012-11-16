/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/vision/Image.pb.h>
#include <rst/vision/Face.pb.h>
#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>

namespace rst {
namespace vision {

class IFaces{
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
   * Field number of the "faces" field.
   */
  static const int kfacesFieldNumber = 0;
  
  /**
   * Return true if the "faces" field is present.
   */
  inline bool has_faces() const;
  
  /**
   * Return the number of elements in "faces".
   */
  inline int faces_size() const;
  /**
   * Return the element at @a index of "faces".
   */
  inline const rst::vision::Face& faces(unsigned int index) const;
  /**
   * Return value of "faces" field.
   */
  inline const std::vector<rst::vision::Face>&faces() const;
  
  
  /**
   * Set element at index @a index of "faces" to @a newValue.
   */
  inline void set_faces(unsigned int index,const rst::vision::Face& newValue);
  /**
   * Append an item to "faces" and return a pointer to it.
   */
  inline rst::vision::Face* add_faces();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const IFaces& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  IFaces* New();
  
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
  std::vector<rst::vision::Face> _faces;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::IFaces

 bool rst::vision::IFaces::has_image() const{
  return true;
}

 const rst::vision::Image&rst::vision::IFaces::image() const{
  return this->_image;
}

 rst::vision::Image*rst::vision::IFaces::mutable_image(){
  return &this->_image;
}

 void rst::vision::IFaces::set_image(const rst::vision::Image&newValue){
  this->_image=newValue;
}



 bool rst::vision::IFaces::has_faces() const{
  return true;
}

 int rst::vision::IFaces::faces_size() const{
  return this->_faces.size();
}
 const rst::vision::Face& rst::vision::IFaces::faces(unsigned int index) const{
  return this->_faces[index];
}
 const std::vector<rst::vision::Face>&rst::vision::IFaces::faces() const{
  return this->_faces;
}



 void rst::vision::IFaces::set_faces(unsigned int index,const rst::vision::Face& newValue){
  if(this->_faces.size()<=index){
    this->_faces.resize(index+1);
  }
  this->_faces[index]=newValue;

}
 rst::vision::Face* rst::vision::IFaces::add_faces(){
  this->_faces.resize(this->_faces.size()+1);
  return &this->_faces.back();

}


