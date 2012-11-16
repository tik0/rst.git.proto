/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace pf3dtracker {

class output{
public:
  // Accessors
  /**
   * Field number of the "mean_x" field.
   */
  static const int kmean_xFieldNumber = 0;
  
  /**
   * Return true if the "mean_x" field is present.
   */
  inline bool has_mean_x() const;
  
  /**
   * Return value of "mean_x" field.
   */
  inline const double&mean_x() const;
  
  inline void set_mean_x(const double&newValue);
  
  
  /**
   * Field number of the "mean_y" field.
   */
  static const int kmean_yFieldNumber = 0;
  
  /**
   * Return true if the "mean_y" field is present.
   */
  inline bool has_mean_y() const;
  
  /**
   * Return value of "mean_y" field.
   */
  inline const double&mean_y() const;
  
  inline void set_mean_y(const double&newValue);
  
  
  /**
   * Field number of the "mean_z" field.
   */
  static const int kmean_zFieldNumber = 0;
  
  /**
   * Return true if the "mean_z" field is present.
   */
  inline bool has_mean_z() const;
  
  /**
   * Return value of "mean_z" field.
   */
  inline const double&mean_z() const;
  
  inline void set_mean_z(const double&newValue);
  
  
  /**
   * Field number of the "max_likelihood" field.
   */
  static const int kmax_likelihoodFieldNumber = 0;
  
  /**
   * Return true if the "max_likelihood" field is present.
   */
  inline bool has_max_likelihood() const;
  
  /**
   * Return value of "max_likelihood" field.
   */
  inline const double&max_likelihood() const;
  
  inline void set_max_likelihood(const double&newValue);
  
  
  /**
   * Field number of the "mean_u" field.
   */
  static const int kmean_uFieldNumber = 0;
  
  /**
   * Return true if the "mean_u" field is present.
   */
  inline bool has_mean_u() const;
  
  /**
   * Return value of "mean_u" field.
   */
  inline const double&mean_u() const;
  
  inline void set_mean_u(const double&newValue);
  
  
  /**
   * Field number of the "mean_v" field.
   */
  static const int kmean_vFieldNumber = 0;
  
  /**
   * Return true if the "mean_v" field is present.
   */
  inline bool has_mean_v() const;
  
  /**
   * Return value of "mean_v" field.
   */
  inline const double&mean_v() const;
  
  inline void set_mean_v(const double&newValue);
  
  
  /**
   * Field number of the "object_detected" field.
   */
  static const int kobject_detectedFieldNumber = 0;
  
  /**
   * Return true if the "object_detected" field is present.
   */
  inline bool has_object_detected() const;
  
  /**
   * Return value of "object_detected" field.
   */
  inline const double&object_detected() const;
  
  inline void set_object_detected(const double&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const output& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  output* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  double _mean_x;
  double _mean_y;
  double _mean_z;
  double _max_likelihood;
  double _mean_u;
  double _mean_v;
  double _object_detected;
  
};
}

// Inlined Stuff

// Accessors for pf3dtracker::output

 bool pf3dtracker::output::has_mean_x() const{
  return true;
}

 const double&pf3dtracker::output::mean_x() const{
  return this->_mean_x;
}

 void pf3dtracker::output::set_mean_x(const double&newValue){
  this->_mean_x=newValue;
}



 bool pf3dtracker::output::has_mean_y() const{
  return true;
}

 const double&pf3dtracker::output::mean_y() const{
  return this->_mean_y;
}

 void pf3dtracker::output::set_mean_y(const double&newValue){
  this->_mean_y=newValue;
}



 bool pf3dtracker::output::has_mean_z() const{
  return true;
}

 const double&pf3dtracker::output::mean_z() const{
  return this->_mean_z;
}

 void pf3dtracker::output::set_mean_z(const double&newValue){
  this->_mean_z=newValue;
}



 bool pf3dtracker::output::has_max_likelihood() const{
  return true;
}

 const double&pf3dtracker::output::max_likelihood() const{
  return this->_max_likelihood;
}

 void pf3dtracker::output::set_max_likelihood(const double&newValue){
  this->_max_likelihood=newValue;
}



 bool pf3dtracker::output::has_mean_u() const{
  return true;
}

 const double&pf3dtracker::output::mean_u() const{
  return this->_mean_u;
}

 void pf3dtracker::output::set_mean_u(const double&newValue){
  this->_mean_u=newValue;
}



 bool pf3dtracker::output::has_mean_v() const{
  return true;
}

 const double&pf3dtracker::output::mean_v() const{
  return this->_mean_v;
}

 void pf3dtracker::output::set_mean_v(const double&newValue){
  this->_mean_v=newValue;
}



 bool pf3dtracker::output::has_object_detected() const{
  return true;
}

 const double&pf3dtracker::output::object_detected() const{
  return this->_object_detected;
}

 void pf3dtracker::output::set_object_detected(const double&newValue){
  this->_object_detected=newValue;
}




