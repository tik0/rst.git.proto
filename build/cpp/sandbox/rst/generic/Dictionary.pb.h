/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/generic/KeyValuePair.pb.h>
#include <rst/generic/Value.pb.h>

namespace rst {
namespace generic {

class Dictionary{
public:
  // Accessors
  /**
   * Field number of the "entries" field.
   */
  static const int kentriesFieldNumber = 0;
  
  /**
   * Return true if the "entries" field is present.
   */
  inline bool has_entries() const;
  
  /**
   * Return the number of elements in "entries".
   */
  inline int entries_size() const;
  /**
   * Return the element at @a index of "entries".
   */
  inline const rst::generic::KeyValuePair& entries(unsigned int index) const;
  /**
   * Return value of "entries" field.
   */
  inline const std::vector<rst::generic::KeyValuePair>&entries() const;
  
  
  /**
   * Set element at index @a index of "entries" to @a newValue.
   */
  inline void set_entries(unsigned int index,const rst::generic::KeyValuePair& newValue);
  /**
   * Append an item to "entries" and return a pointer to it.
   */
  inline rst::generic::KeyValuePair* add_entries();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Dictionary& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Dictionary* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::generic::KeyValuePair> _entries;
  
};
}
}

// Inlined Stuff

// Accessors for rst::generic::Dictionary

 bool rst::generic::Dictionary::has_entries() const{
  return true;
}

 int rst::generic::Dictionary::entries_size() const{
  return this->_entries.size();
}
 const rst::generic::KeyValuePair& rst::generic::Dictionary::entries(unsigned int index) const{
  return this->_entries[index];
}
 const std::vector<rst::generic::KeyValuePair>&rst::generic::Dictionary::entries() const{
  return this->_entries;
}



 void rst::generic::Dictionary::set_entries(unsigned int index,const rst::generic::KeyValuePair& newValue){
  if(this->_entries.size()<=index){
    this->_entries.resize(index+1);
  }
  this->_entries[index]=newValue;

}
 rst::generic::KeyValuePair* rst::generic::Dictionary::add_entries(){
  this->_entries.resize(this->_entries.size()+1);
  return &this->_entries.back();

}


