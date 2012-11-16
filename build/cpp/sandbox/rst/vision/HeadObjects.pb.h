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
#include <rst/tracking/TrackingInfo.pb.h>
#include <rst/math/Vec3DFloat.pb.h>
#include <rst/vision/HeadObject.pb.h>
#include <rst/classification/ClassificationResult.pb.h>

namespace rst {
namespace vision {

class HeadObjects{
public:
  // Accessors
  /**
   * Field number of the "head_objects" field.
   */
  static const int khead_objectsFieldNumber = 0;
  
  /**
   * Return true if the "head_objects" field is present.
   */
  inline bool has_head_objects() const;
  
  /**
   * Return the number of elements in "head_objects".
   */
  inline int head_objects_size() const;
  /**
   * Return the element at @a index of "head_objects".
   */
  inline const rst::vision::HeadObject& head_objects(unsigned int index) const;
  /**
   * Return value of "head_objects" field.
   */
  inline const std::vector<rst::vision::HeadObject>&head_objects() const;
  
  
  /**
   * Set element at index @a index of "head_objects" to @a newValue.
   */
  inline void set_head_objects(unsigned int index,const rst::vision::HeadObject& newValue);
  /**
   * Append an item to "head_objects" and return a pointer to it.
   */
  inline rst::vision::HeadObject* add_head_objects();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const HeadObjects& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  HeadObjects* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::vision::HeadObject> _head_objects;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::HeadObjects

 bool rst::vision::HeadObjects::has_head_objects() const{
  return true;
}

 int rst::vision::HeadObjects::head_objects_size() const{
  return this->_head_objects.size();
}
 const rst::vision::HeadObject& rst::vision::HeadObjects::head_objects(unsigned int index) const{
  return this->_head_objects[index];
}
 const std::vector<rst::vision::HeadObject>&rst::vision::HeadObjects::head_objects() const{
  return this->_head_objects;
}



 void rst::vision::HeadObjects::set_head_objects(unsigned int index,const rst::vision::HeadObject& newValue){
  if(this->_head_objects.size()<=index){
    this->_head_objects.resize(index+1);
  }
  this->_head_objects[index]=newValue;

}
 rst::vision::HeadObject* rst::vision::HeadObjects::add_head_objects(){
  this->_head_objects.resize(this->_head_objects.size()+1);
  return &this->_head_objects.back();

}


