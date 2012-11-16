/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace math {

class MatrixDouble{
public:
  // Nested Types
  class Size{
  public:
    // Accessors
    /**
     * Field number of the "m" field.
     */
    static const int kmFieldNumber = 0;
    
    /**
     * Return true if the "m" field is present.
     */
    inline bool has_m() const;
    
    /**
     * Return value of "m" field.
     */
    inline const boost::uint32_t&m() const;
    
    inline void set_m(const boost::uint32_t&newValue);
    
    
    /**
     * Field number of the "n" field.
     */
    static const int knFieldNumber = 0;
    
    /**
     * Return true if the "n" field is present.
     */
    inline bool has_n() const;
    
    /**
     * Return value of "n" field.
     */
    inline const boost::uint32_t&n() const;
    
    inline void set_n(const boost::uint32_t&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Size& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Size* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    boost::uint32_t _m;
    boost::uint32_t _n;
    
  };
  
  class Data{
  public:
    // Accessors
    /**
     * Field number of the "value" field.
     */
    static const int kvalueFieldNumber = 0;
    
    /**
     * Return true if the "value" field is present.
     */
    inline bool has_value() const;
    
    /**
     * Return the number of elements in "value".
     */
    inline int value_size() const;
    /**
     * Return the element at @a index of "value".
     */
    inline const double& value(unsigned int index) const;
    /**
     * Return value of "value" field.
     */
    inline const std::vector<double>&value() const;
    
    
    /**
     * Set element at index @a index of "value" to @a newValue.
     */
    inline void set_value(unsigned int index,const double& newValue);
    /**
     * Append an item to "value" and return a pointer to it.
     */
    inline void add_value(const double& newValue);
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const Data& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    Data* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::vector<double> _value;
    
  };
  
  // Accessors
  /**
   * Field number of the "size" field.
   */
  static const int ksizeFieldNumber = 0;
  
  /**
   * Return true if the "size" field is present.
   */
  inline bool has_size() const;
  
  /**
   * Return value of "size" field.
   */
  inline const rst::math::MatrixDouble::Size&size() const;
  
  /**
   * Return value of "size" field.
   */
  inline rst::math::MatrixDouble::Size*mutable_size();
  
  inline void set_size(const rst::math::MatrixDouble::Size&newValue);
  
  
  /**
   * Field number of the "data" field.
   */
  static const int kdataFieldNumber = 0;
  
  /**
   * Return true if the "data" field is present.
   */
  inline bool has_data() const;
  
  /**
   * Return value of "data" field.
   */
  inline const rst::math::MatrixDouble::Data&data() const;
  
  /**
   * Return value of "data" field.
   */
  inline rst::math::MatrixDouble::Data*mutable_data();
  
  inline void set_data(const rst::math::MatrixDouble::Data&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const MatrixDouble& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  MatrixDouble* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::math::MatrixDouble::Size _size;
  rst::math::MatrixDouble::Data _data;
  
};
}
}

// Inlined Stuff

// Accessors for rst::math::matrixDouble::Size

 bool rst::math::MatrixDouble::Size::has_m() const{
  return true;
}

 const boost::uint32_t&rst::math::MatrixDouble::Size::m() const{
  return this->_m;
}

 void rst::math::MatrixDouble::Size::set_m(const boost::uint32_t&newValue){
  this->_m=newValue;
}



 bool rst::math::MatrixDouble::Size::has_n() const{
  return true;
}

 const boost::uint32_t&rst::math::MatrixDouble::Size::n() const{
  return this->_n;
}

 void rst::math::MatrixDouble::Size::set_n(const boost::uint32_t&newValue){
  this->_n=newValue;
}





// Accessors for rst::math::matrixDouble::Data

 bool rst::math::MatrixDouble::Data::has_value() const{
  return true;
}

 int rst::math::MatrixDouble::Data::value_size() const{
  return this->_value.size();
}
 const double& rst::math::MatrixDouble::Data::value(unsigned int index) const{
  return this->_value[index];
}
 const std::vector<double>&rst::math::MatrixDouble::Data::value() const{
  return this->_value;
}



 void rst::math::MatrixDouble::Data::set_value(unsigned int index,const double& newValue){
  if(this->_value.size()<=index){
    this->_value.resize(index+1);
  }
  this->_value[index]=newValue;

}
 void rst::math::MatrixDouble::Data::add_value(const double& newValue){
  this->_value.push_back(newValue);
}



// Accessors for rst::math::MatrixDouble

 bool rst::math::MatrixDouble::has_size() const{
  return true;
}

 const rst::math::MatrixDouble::Size&rst::math::MatrixDouble::size() const{
  return this->_size;
}

 rst::math::MatrixDouble::Size*rst::math::MatrixDouble::mutable_size(){
  return &this->_size;
}

 void rst::math::MatrixDouble::set_size(const rst::math::MatrixDouble::Size&newValue){
  this->_size=newValue;
}



 bool rst::math::MatrixDouble::has_data() const{
  return true;
}

 const rst::math::MatrixDouble::Data&rst::math::MatrixDouble::data() const{
  return this->_data;
}

 rst::math::MatrixDouble::Data*rst::math::MatrixDouble::mutable_data(){
  return &this->_data;
}

 void rst::math::MatrixDouble::set_data(const rst::math::MatrixDouble::Data&newValue){
  this->_data=newValue;
}




