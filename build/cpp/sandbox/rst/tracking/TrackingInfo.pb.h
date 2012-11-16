/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace tracking {

class TrackingInfo{
public:
  // Accessors
  /**
   * Field number of the "id" field.
   */
  static const int kidFieldNumber = 0;
  
  /**
   * Return true if the "id" field is present.
   */
  inline bool has_id() const;
  
  /**
   * Return value of "id" field.
   */
  inline const boost::uint32_t&id() const;
  
  inline void set_id(const boost::uint32_t&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const TrackingInfo& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  TrackingInfo* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  boost::uint32_t _id;
  
};
}
}

// Inlined Stuff

// Accessors for rst::tracking::TrackingInfo

 bool rst::tracking::TrackingInfo::has_id() const{
  return true;
}

 const boost::uint32_t&rst::tracking::TrackingInfo::id() const{
  return this->_id;
}

 void rst::tracking::TrackingInfo::set_id(const boost::uint32_t&newValue){
  this->_id=newValue;
}




