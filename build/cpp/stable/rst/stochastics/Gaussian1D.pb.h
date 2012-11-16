/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace stochastics {

class Gaussian1D{
public:
  // Accessors
  /**
   * Field number of the "mean" field.
   */
  static const int kmeanFieldNumber = 0;
  
  /**
   * Return true if the "mean" field is present.
   */
  inline bool has_mean() const;
  
  /**
   * Return value of "mean" field.
   */
  inline const float&mean() const;
  
  inline void set_mean(const float&newValue);
  
  
  /**
   * Field number of the "variance" field.
   */
  static const int kvarianceFieldNumber = 0;
  
  /**
   * Return true if the "variance" field is present.
   */
  inline bool has_variance() const;
  
  /**
   * Return value of "variance" field.
   */
  inline const float&variance() const;
  
  inline void set_variance(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Gaussian1D& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Gaussian1D* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _mean;
  float _variance;
  
};
}
}

// Inlined Stuff

// Accessors for rst::stochastics::Gaussian1D

 bool rst::stochastics::Gaussian1D::has_mean() const{
  return true;
}

 const float&rst::stochastics::Gaussian1D::mean() const{
  return this->_mean;
}

 void rst::stochastics::Gaussian1D::set_mean(const float&newValue){
  this->_mean=newValue;
}



 bool rst::stochastics::Gaussian1D::has_variance() const{
  return true;
}

 const float&rst::stochastics::Gaussian1D::variance() const{
  return this->_variance;
}

 void rst::stochastics::Gaussian1D::set_variance(const float&newValue){
  this->_variance=newValue;
}




