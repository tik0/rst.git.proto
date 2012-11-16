/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace classification {

class ClassificationResult{
public:
  // Nested Types
  class ClassWithProbability{
  public:
    // Accessors
    /**
     * Field number of the "name" field.
     */
    static const int knameFieldNumber = 0;
    
    /**
     * Return true if the "name" field is present.
     */
    inline bool has_name() const;
    
    /**
     * Return value of "name" field.
     */
    inline const std::vector<unsigned char>&name() const;
    
    /**
     * Return value of "name" field.
     */
    inline std::vector<unsigned char>*mutable_name();
    
    inline void set_name(const std::vector<unsigned char>&newValue);
    inline void set_name(const std::string&newValue);
    inline void set_name(const boost::uint8_t* data,unsigned int size);
    
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
    inline const float&confidence() const;
    
    inline void set_confidence(const float&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const ClassWithProbability& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    ClassWithProbability* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::vector<unsigned char> _name;
    float _confidence;
    
  };
  
  // Accessors
  /**
   * Field number of the "decided_class" field.
   */
  static const int kdecided_classFieldNumber = 0;
  
  /**
   * Return true if the "decided_class" field is present.
   */
  inline bool has_decided_class() const;
  
  /**
   * Return value of "decided_class" field.
   */
  inline const std::vector<unsigned char>&decided_class() const;
  
  /**
   * Return value of "decided_class" field.
   */
  inline std::vector<unsigned char>*mutable_decided_class();
  
  inline void set_decided_class(const std::vector<unsigned char>&newValue);
  inline void set_decided_class(const std::string&newValue);
  inline void set_decided_class(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "classes" field.
   */
  static const int kclassesFieldNumber = 0;
  
  /**
   * Return true if the "classes" field is present.
   */
  inline bool has_classes() const;
  
  /**
   * Return the number of elements in "classes".
   */
  inline int classes_size() const;
  /**
   * Return the element at @a index of "classes".
   */
  inline const rst::classification::ClassificationResult::ClassWithProbability& classes(unsigned int index) const;
  /**
   * Return value of "classes" field.
   */
  inline const std::vector<rst::classification::ClassificationResult::ClassWithProbability>&classes() const;
  
  
  /**
   * Set element at index @a index of "classes" to @a newValue.
   */
  inline void set_classes(unsigned int index,const rst::classification::ClassificationResult::ClassWithProbability& newValue);
  /**
   * Append an item to "classes" and return a pointer to it.
   */
  inline rst::classification::ClassificationResult::ClassWithProbability* add_classes();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const ClassificationResult& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  ClassificationResult* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<unsigned char> _decided_class;
  std::vector<rst::classification::ClassificationResult::ClassWithProbability> _classes;
  
};
}
}

// Inlined Stuff

// Accessors for rst::classification::classificationResult::ClassWithProbability

 bool rst::classification::ClassificationResult::ClassWithProbability::has_name() const{
  return true;
}

 const std::vector<unsigned char>&rst::classification::ClassificationResult::ClassWithProbability::name() const{
  return this->_name;
}

 std::vector<unsigned char>*rst::classification::ClassificationResult::ClassWithProbability::mutable_name(){
  return &this->_name;
}

 void rst::classification::ClassificationResult::ClassWithProbability::set_name(const std::vector<unsigned char>&newValue){
  this->_name=newValue;
}
 void rst::classification::ClassificationResult::ClassWithProbability::set_name(const std::string&newValue){
  this->_name.resize(newValue.size());
  memcpy(&this->_name[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::classification::ClassificationResult::ClassWithProbability::set_name(const boost::uint8_t* data,unsigned int size){
  this->_name.resize(size);
  memcpy(&this->_name[0],data,size);
}


 bool rst::classification::ClassificationResult::ClassWithProbability::has_confidence() const{
  return true;
}

 const float&rst::classification::ClassificationResult::ClassWithProbability::confidence() const{
  return this->_confidence;
}

 void rst::classification::ClassificationResult::ClassWithProbability::set_confidence(const float&newValue){
  this->_confidence=newValue;
}





// Accessors for rst::classification::ClassificationResult

 bool rst::classification::ClassificationResult::has_decided_class() const{
  return true;
}

 const std::vector<unsigned char>&rst::classification::ClassificationResult::decided_class() const{
  return this->_decided_class;
}

 std::vector<unsigned char>*rst::classification::ClassificationResult::mutable_decided_class(){
  return &this->_decided_class;
}

 void rst::classification::ClassificationResult::set_decided_class(const std::vector<unsigned char>&newValue){
  this->_decided_class=newValue;
}
 void rst::classification::ClassificationResult::set_decided_class(const std::string&newValue){
  this->_decided_class.resize(newValue.size());
  memcpy(&this->_decided_class[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::classification::ClassificationResult::set_decided_class(const boost::uint8_t* data,unsigned int size){
  this->_decided_class.resize(size);
  memcpy(&this->_decided_class[0],data,size);
}


 bool rst::classification::ClassificationResult::has_classes() const{
  return true;
}

 int rst::classification::ClassificationResult::classes_size() const{
  return this->_classes.size();
}
 const rst::classification::ClassificationResult::ClassWithProbability& rst::classification::ClassificationResult::classes(unsigned int index) const{
  return this->_classes[index];
}
 const std::vector<rst::classification::ClassificationResult::ClassWithProbability>&rst::classification::ClassificationResult::classes() const{
  return this->_classes;
}



 void rst::classification::ClassificationResult::set_classes(unsigned int index,const rst::classification::ClassificationResult::ClassWithProbability& newValue){
  if(this->_classes.size()<=index){
    this->_classes.resize(index+1);
  }
  this->_classes[index]=newValue;

}
 rst::classification::ClassificationResult::ClassWithProbability* rst::classification::ClassificationResult::add_classes(){
  this->_classes.resize(this->_classes.size()+1);
  return &this->_classes.back();

}


