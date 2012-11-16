/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/stochastics/Gaussian1D.pb.h>

namespace rst {
namespace stochastics {

class MixtureOfGaussian1D{
public:
  // Nested Types
  class GaussianComponent1D{
  public:
    // Accessors
    /**
     * Field number of the "gaussian" field.
     */
    static const int kgaussianFieldNumber = 0;
    
    /**
     * Return true if the "gaussian" field is present.
     */
    inline bool has_gaussian() const;
    
    /**
     * Return value of "gaussian" field.
     */
    inline const rst::stochastics::Gaussian1D&gaussian() const;
    
    /**
     * Return value of "gaussian" field.
     */
    inline rst::stochastics::Gaussian1D*mutable_gaussian();
    
    inline void set_gaussian(const rst::stochastics::Gaussian1D&newValue);
    
    
    /**
     * Field number of the "weight" field.
     */
    static const int kweightFieldNumber = 0;
    
    /**
     * Return true if the "weight" field is present.
     */
    inline bool has_weight() const;
    
    /**
     * Return value of "weight" field.
     */
    inline const float&weight() const;
    
    inline void set_weight(const float&newValue);
    
    
    /**
     * Field number of the "probability_state" field.
     */
    static const int kprobability_stateFieldNumber = 0;
    
    /**
     * Return true if the "probability_state" field is present.
     */
    inline bool has_probability_state() const;
    
    /**
     * Return value of "probability_state" field.
     */
    inline const float&probability_state() const;
    
    inline void set_probability_state(const float&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const GaussianComponent1D& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    GaussianComponent1D* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    rst::stochastics::Gaussian1D _gaussian;
    float _weight;
    float _probability_state;
    
  };
  
  // Accessors
  /**
   * Field number of the "components" field.
   */
  static const int kcomponentsFieldNumber = 0;
  
  /**
   * Return true if the "components" field is present.
   */
  inline bool has_components() const;
  
  /**
   * Return the number of elements in "components".
   */
  inline int components_size() const;
  /**
   * Return the element at @a index of "components".
   */
  inline const rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D& components(unsigned int index) const;
  /**
   * Return value of "components" field.
   */
  inline const std::vector<rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D>&components() const;
  
  
  /**
   * Set element at index @a index of "components" to @a newValue.
   */
  inline void set_components(unsigned int index,const rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D& newValue);
  /**
   * Append an item to "components" and return a pointer to it.
   */
  inline rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D* add_components();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const MixtureOfGaussian1D& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  MixtureOfGaussian1D* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D> _components;
  
};
}
}

// Inlined Stuff

// Accessors for rst::stochastics::mixtureOfGaussian1D::GaussianComponent1D

 bool rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::has_gaussian() const{
  return true;
}

 const rst::stochastics::Gaussian1D&rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::gaussian() const{
  return this->_gaussian;
}

 rst::stochastics::Gaussian1D*rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::mutable_gaussian(){
  return &this->_gaussian;
}

 void rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::set_gaussian(const rst::stochastics::Gaussian1D&newValue){
  this->_gaussian=newValue;
}



 bool rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::has_weight() const{
  return true;
}

 const float&rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::weight() const{
  return this->_weight;
}

 void rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::set_weight(const float&newValue){
  this->_weight=newValue;
}



 bool rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::has_probability_state() const{
  return true;
}

 const float&rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::probability_state() const{
  return this->_probability_state;
}

 void rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::set_probability_state(const float&newValue){
  this->_probability_state=newValue;
}





// Accessors for rst::stochastics::MixtureOfGaussian1D

 bool rst::stochastics::MixtureOfGaussian1D::has_components() const{
  return true;
}

 int rst::stochastics::MixtureOfGaussian1D::components_size() const{
  return this->_components.size();
}
 const rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D& rst::stochastics::MixtureOfGaussian1D::components(unsigned int index) const{
  return this->_components[index];
}
 const std::vector<rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D>&rst::stochastics::MixtureOfGaussian1D::components() const{
  return this->_components;
}



 void rst::stochastics::MixtureOfGaussian1D::set_components(unsigned int index,const rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D& newValue){
  if(this->_components.size()<=index){
    this->_components.resize(index+1);
  }
  this->_components[index]=newValue;

}
 rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D* rst::stochastics::MixtureOfGaussian1D::add_components(){
  this->_components.resize(this->_components.size()+1);
  return &this->_components.back();

}


