/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace timing {

class Timestamp{
public:
  // Accessors
  /**
   * Field number of the "time" field.
   */
  static const int ktimeFieldNumber = 0;
  
  /**
   * Return true if the "time" field is present.
   */
  inline bool has_time() const;
  
  /**
   * Return value of "time" field.
   */
  inline const boost::uint64_t&time() const;
  
  inline void set_time(const boost::uint64_t&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Timestamp& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Timestamp* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  boost::uint64_t _time;
  
};
}
}

// Inlined Stuff

// Accessors for rst::timing::Timestamp

 bool rst::timing::Timestamp::has_time() const{
  return true;
}

 const boost::uint64_t&rst::timing::Timestamp::time() const{
  return this->_time;
}

 void rst::timing::Timestamp::set_time(const boost::uint64_t&newValue){
  this->_time=newValue;
}




