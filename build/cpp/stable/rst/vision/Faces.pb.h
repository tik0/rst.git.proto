/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/vision/Face.pb.h>
#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>

namespace rst {
namespace vision {

class Faces{
public:
  // Accessors
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
  static const Faces& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Faces* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::vision::Face> _faces;
  boost::uint32_t _width;
  boost::uint32_t _height;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::Faces

 bool rst::vision::Faces::has_faces() const{
  return true;
}

 int rst::vision::Faces::faces_size() const{
  return this->_faces.size();
}
 const rst::vision::Face& rst::vision::Faces::faces(unsigned int index) const{
  return this->_faces[index];
}
 const std::vector<rst::vision::Face>&rst::vision::Faces::faces() const{
  return this->_faces;
}



 void rst::vision::Faces::set_faces(unsigned int index,const rst::vision::Face& newValue){
  if(this->_faces.size()<=index){
    this->_faces.resize(index+1);
  }
  this->_faces[index]=newValue;

}
 rst::vision::Face* rst::vision::Faces::add_faces(){
  this->_faces.resize(this->_faces.size()+1);
  return &this->_faces.back();

}

 bool rst::vision::Faces::has_width() const{
  return true;
}

 const boost::uint32_t&rst::vision::Faces::width() const{
  return this->_width;
}

 void rst::vision::Faces::set_width(const boost::uint32_t&newValue){
  this->_width=newValue;
}



 bool rst::vision::Faces::has_height() const{
  return true;
}

 const boost::uint32_t&rst::vision::Faces::height() const{
  return this->_height;
}

 void rst::vision::Faces::set_height(const boost::uint32_t&newValue){
  this->_height=newValue;
}




