/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/math/Vec3DFloat.pb.h>

namespace rst {
namespace geometry {

class PointCloud3DFloat{
public:
  // Accessors
  /**
   * Field number of the "points" field.
   */
  static const int kpointsFieldNumber = 0;
  
  /**
   * Return true if the "points" field is present.
   */
  inline bool has_points() const;
  
  /**
   * Return the number of elements in "points".
   */
  inline int points_size() const;
  /**
   * Return the element at @a index of "points".
   */
  inline const rst::math::Vec3DFloat& points(unsigned int index) const;
  /**
   * Return value of "points" field.
   */
  inline const std::vector<rst::math::Vec3DFloat>&points() const;
  
  
  /**
   * Set element at index @a index of "points" to @a newValue.
   */
  inline void set_points(unsigned int index,const rst::math::Vec3DFloat& newValue);
  /**
   * Append an item to "points" and return a pointer to it.
   */
  inline rst::math::Vec3DFloat* add_points();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const PointCloud3DFloat& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  PointCloud3DFloat* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::math::Vec3DFloat> _points;
  
};
}
}

// Inlined Stuff

// Accessors for rst::geometry::PointCloud3DFloat

 bool rst::geometry::PointCloud3DFloat::has_points() const{
  return true;
}

 int rst::geometry::PointCloud3DFloat::points_size() const{
  return this->_points.size();
}
 const rst::math::Vec3DFloat& rst::geometry::PointCloud3DFloat::points(unsigned int index) const{
  return this->_points[index];
}
 const std::vector<rst::math::Vec3DFloat>&rst::geometry::PointCloud3DFloat::points() const{
  return this->_points;
}



 void rst::geometry::PointCloud3DFloat::set_points(unsigned int index,const rst::math::Vec3DFloat& newValue){
  if(this->_points.size()<=index){
    this->_points.resize(index+1);
  }
  this->_points[index]=newValue;

}
 rst::math::Vec3DFloat* rst::geometry::PointCloud3DFloat::add_points(){
  this->_points.resize(this->_points.size()+1);
  return &this->_points.back();

}


