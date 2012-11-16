/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>

namespace rst {
namespace vision {

class Face{
public:
  // Accessors
  /**
   * Field number of the "region" field.
   */
  static const int kregionFieldNumber = 0;
  
  /**
   * Return true if the "region" field is present.
   */
  inline bool has_region() const;
  
  /**
   * Return value of "region" field.
   */
  inline const rst::geometry::BoundingBox&region() const;
  
  /**
   * Return value of "region" field.
   */
  inline rst::geometry::BoundingBox*mutable_region();
  
  inline void set_region(const rst::geometry::BoundingBox&newValue);
  
  
  /**
   * Field number of the "confidence" field.
   */
  static const int kconfidenceFieldNumber = 0;
  
  /**
   * Return true if the "confidence" field is present.
   */
  inline bool has_confidence() const;
  
  /**
   * Return value of "confidence" field.
   */
  inline const double&confidence() const;
  
  inline void set_confidence(const double&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Face& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Face* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::geometry::BoundingBox _region;
  double _confidence;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::Face

 bool rst::vision::Face::has_region() const{
  return true;
}

 const rst::geometry::BoundingBox&rst::vision::Face::region() const{
  return this->_region;
}

 rst::geometry::BoundingBox*rst::vision::Face::mutable_region(){
  return &this->_region;
}

 void rst::vision::Face::set_region(const rst::geometry::BoundingBox&newValue){
  this->_region=newValue;
}



 bool rst::vision::Face::has_confidence() const{
  return true;
}

 const double&rst::vision::Face::confidence() const{
  return this->_confidence;
}

 void rst::vision::Face::set_confidence(const double&newValue){
  this->_confidence=newValue;
}




