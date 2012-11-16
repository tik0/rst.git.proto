/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/xml/Attachment.pb.h>

namespace rst {
namespace xml {

class XOP{
public:
  // Accessors
  /**
   * Field number of the "xml" field.
   */
  static const int kxmlFieldNumber = 0;
  
  /**
   * Return true if the "xml" field is present.
   */
  inline bool has_xml() const;
  
  /**
   * Return value of "xml" field.
   */
  inline const std::string&xml() const;
  
  /**
   * Return value of "xml" field.
   */
  inline std::string*mutable_xml();
  
  inline void set_xml(const std::string&newValue);
  
  
  /**
   * Field number of the "attachments" field.
   */
  static const int kattachmentsFieldNumber = 0;
  
  /**
   * Return true if the "attachments" field is present.
   */
  inline bool has_attachments() const;
  
  /**
   * Return the number of elements in "attachments".
   */
  inline int attachments_size() const;
  /**
   * Return the element at @a index of "attachments".
   */
  inline const rst::xml::Attachment& attachments(unsigned int index) const;
  /**
   * Return value of "attachments" field.
   */
  inline const std::vector<rst::xml::Attachment>&attachments() const;
  
  
  /**
   * Set element at index @a index of "attachments" to @a newValue.
   */
  inline void set_attachments(unsigned int index,const rst::xml::Attachment& newValue);
  /**
   * Append an item to "attachments" and return a pointer to it.
   */
  inline rst::xml::Attachment* add_attachments();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const XOP& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  XOP* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _xml;
  std::vector<rst::xml::Attachment> _attachments;
  
};
}
}

// Inlined Stuff

// Accessors for rst::xml::XOP

 bool rst::xml::XOP::has_xml() const{
  return true;
}

 const std::string&rst::xml::XOP::xml() const{
  return this->_xml;
}

 std::string*rst::xml::XOP::mutable_xml(){
  return &this->_xml;
}

 void rst::xml::XOP::set_xml(const std::string&newValue){
  this->_xml=newValue;
}



 bool rst::xml::XOP::has_attachments() const{
  return true;
}

 int rst::xml::XOP::attachments_size() const{
  return this->_attachments.size();
}
 const rst::xml::Attachment& rst::xml::XOP::attachments(unsigned int index) const{
  return this->_attachments[index];
}
 const std::vector<rst::xml::Attachment>&rst::xml::XOP::attachments() const{
  return this->_attachments;
}



 void rst::xml::XOP::set_attachments(unsigned int index,const rst::xml::Attachment& newValue){
  if(this->_attachments.size()<=index){
    this->_attachments.resize(index+1);
  }
  this->_attachments[index]=newValue;

}
 rst::xml::Attachment* rst::xml::XOP::add_attachments(){
  this->_attachments.resize(this->_attachments.size()+1);
  return &this->_attachments.back();

}


