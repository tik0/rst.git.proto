/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/audition/FloatSoundArray.pb.h>

namespace rst {
namespace audition {

class FormattedSoundChunk{
public:
  // Nested Types
  enum ChannelType{
    ALL=0,
    LEFT=1,
    RIGHT=2,
    FRONT=3,
    REAR=4
    
  };
  
  // Accessors
  /**
   * Field number of the "data" field.
   */
  static const int kdataFieldNumber = 0;
  
  /**
   * Return true if the "data" field is present.
   */
  inline bool has_data() const;
  
  /**
   * Return the number of elements in "data".
   */
  inline int data_size() const;
  /**
   * Return the element at @a index of "data".
   */
  inline const rst::audition::FloatSoundArray& data(unsigned int index) const;
  /**
   * Return value of "data" field.
   */
  inline const std::vector<rst::audition::FloatSoundArray>&data() const;
  
  
  /**
   * Set element at index @a index of "data" to @a newValue.
   */
  inline void set_data(unsigned int index,const rst::audition::FloatSoundArray& newValue);
  /**
   * Append an item to "data" and return a pointer to it.
   */
  inline rst::audition::FloatSoundArray* add_data();
  
  /**
   * Field number of the "rate" field.
   */
  static const int krateFieldNumber = 0;
  
  /**
   * Return true if the "rate" field is present.
   */
  inline bool has_rate() const;
  
  /**
   * Return value of "rate" field.
   */
  inline const boost::uint32_t&rate() const;
  
  inline void set_rate(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "channels" field.
   */
  static const int kchannelsFieldNumber = 0;
  
  /**
   * Return true if the "channels" field is present.
   */
  inline bool has_channels() const;
  
  /**
   * Return value of "channels" field.
   */
  inline const boost::uint32_t&channels() const;
  
  inline void set_channels(const boost::uint32_t&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const FormattedSoundChunk& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  FormattedSoundChunk* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::audition::FloatSoundArray> _data;
  boost::uint32_t _rate;
  boost::uint32_t _channels;
  
};
}
}

// Inlined Stuff



// Accessors for rst::audition::FormattedSoundChunk

 bool rst::audition::FormattedSoundChunk::has_data() const{
  return true;
}

 int rst::audition::FormattedSoundChunk::data_size() const{
  return this->_data.size();
}
 const rst::audition::FloatSoundArray& rst::audition::FormattedSoundChunk::data(unsigned int index) const{
  return this->_data[index];
}
 const std::vector<rst::audition::FloatSoundArray>&rst::audition::FormattedSoundChunk::data() const{
  return this->_data;
}



 void rst::audition::FormattedSoundChunk::set_data(unsigned int index,const rst::audition::FloatSoundArray& newValue){
  if(this->_data.size()<=index){
    this->_data.resize(index+1);
  }
  this->_data[index]=newValue;

}
 rst::audition::FloatSoundArray* rst::audition::FormattedSoundChunk::add_data(){
  this->_data.resize(this->_data.size()+1);
  return &this->_data.back();

}

 bool rst::audition::FormattedSoundChunk::has_rate() const{
  return true;
}

 const boost::uint32_t&rst::audition::FormattedSoundChunk::rate() const{
  return this->_rate;
}

 void rst::audition::FormattedSoundChunk::set_rate(const boost::uint32_t&newValue){
  this->_rate=newValue;
}



 bool rst::audition::FormattedSoundChunk::has_channels() const{
  return true;
}

 const boost::uint32_t&rst::audition::FormattedSoundChunk::channels() const{
  return this->_channels;
}

 void rst::audition::FormattedSoundChunk::set_channels(const boost::uint32_t&newValue){
  this->_channels=newValue;
}




