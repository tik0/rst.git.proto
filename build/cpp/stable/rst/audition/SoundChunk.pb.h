/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace audition {

class SoundChunk{
public:
  // Nested Types
  enum SampleType{
    SAMPLE_S8=0,
    SAMPLE_U8=1,
    SAMPLE_S16=2,
    SAMPLE_U16=4,
    SAMPLE_S24=8,
    SAMPLE_U24=16
    
  };
  
  enum EndianNess{
    ENDIAN_LITTLE=0,
    ENDIAN_BIG=1
    
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
   * Return value of "data" field.
   */
  inline const std::vector<unsigned char>&data() const;
  
  /**
   * Return value of "data" field.
   */
  inline std::vector<unsigned char>*mutable_data();
  
  inline void set_data(const std::vector<unsigned char>&newValue);
  inline void set_data(const std::string&newValue);
  inline void set_data(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "sample_count" field.
   */
  static const int ksample_countFieldNumber = 0;
  
  /**
   * Return true if the "sample_count" field is present.
   */
  inline bool has_sample_count() const;
  
  /**
   * Return value of "sample_count" field.
   */
  inline const boost::uint32_t&sample_count() const;
  
  inline void set_sample_count(const boost::uint32_t&newValue);
  
  
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
   * Field number of the "sample_type" field.
   */
  static const int ksample_typeFieldNumber = 0;
  
  /**
   * Return true if the "sample_type" field is present.
   */
  inline bool has_sample_type() const;
  
  /**
   * Return value of "sample_type" field.
   */
  inline const rst::audition::SoundChunk::SampleType&sample_type() const;
  
  /**
   * Return value of "sample_type" field.
   */
  inline rst::audition::SoundChunk::SampleType*mutable_sample_type();
  
  inline void set_sample_type(const rst::audition::SoundChunk::SampleType&newValue);
  
  
  /**
   * Field number of the "endianness" field.
   */
  static const int kendiannessFieldNumber = 0;
  
  /**
   * Return true if the "endianness" field is present.
   */
  inline bool has_endianness() const;
  
  /**
   * Return value of "endianness" field.
   */
  inline const rst::audition::SoundChunk::EndianNess&endianness() const;
  
  /**
   * Return value of "endianness" field.
   */
  inline rst::audition::SoundChunk::EndianNess*mutable_endianness();
  
  inline void set_endianness(const rst::audition::SoundChunk::EndianNess&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const SoundChunk& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  SoundChunk* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<unsigned char> _data;
  boost::uint32_t _sample_count;
  boost::uint32_t _channels;
  boost::uint32_t _rate;
  rst::audition::SoundChunk::SampleType _sample_type;
  rst::audition::SoundChunk::EndianNess _endianness;
  
};
}
}

// Inlined Stuff





// Accessors for rst::audition::SoundChunk

 bool rst::audition::SoundChunk::has_data() const{
  return true;
}

 const std::vector<unsigned char>&rst::audition::SoundChunk::data() const{
  return this->_data;
}

 std::vector<unsigned char>*rst::audition::SoundChunk::mutable_data(){
  return &this->_data;
}

 void rst::audition::SoundChunk::set_data(const std::vector<unsigned char>&newValue){
  this->_data=newValue;
}
 void rst::audition::SoundChunk::set_data(const std::string&newValue){
  this->_data.resize(newValue.size());
  memcpy(&this->_data[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::audition::SoundChunk::set_data(const boost::uint8_t* data,unsigned int size){
  this->_data.resize(size);
  memcpy(&this->_data[0],data,size);
}


 bool rst::audition::SoundChunk::has_sample_count() const{
  return true;
}

 const boost::uint32_t&rst::audition::SoundChunk::sample_count() const{
  return this->_sample_count;
}

 void rst::audition::SoundChunk::set_sample_count(const boost::uint32_t&newValue){
  this->_sample_count=newValue;
}



 bool rst::audition::SoundChunk::has_channels() const{
  return true;
}

 const boost::uint32_t&rst::audition::SoundChunk::channels() const{
  return this->_channels;
}

 void rst::audition::SoundChunk::set_channels(const boost::uint32_t&newValue){
  this->_channels=newValue;
}



 bool rst::audition::SoundChunk::has_rate() const{
  return true;
}

 const boost::uint32_t&rst::audition::SoundChunk::rate() const{
  return this->_rate;
}

 void rst::audition::SoundChunk::set_rate(const boost::uint32_t&newValue){
  this->_rate=newValue;
}



 bool rst::audition::SoundChunk::has_sample_type() const{
  return true;
}

 const rst::audition::SoundChunk::SampleType&rst::audition::SoundChunk::sample_type() const{
  return this->_sample_type;
}

 rst::audition::SoundChunk::SampleType*rst::audition::SoundChunk::mutable_sample_type(){
  return &this->_sample_type;
}

 void rst::audition::SoundChunk::set_sample_type(const rst::audition::SoundChunk::SampleType&newValue){
  this->_sample_type=newValue;
}



 bool rst::audition::SoundChunk::has_endianness() const{
  return true;
}

 const rst::audition::SoundChunk::EndianNess&rst::audition::SoundChunk::endianness() const{
  return this->_endianness;
}

 rst::audition::SoundChunk::EndianNess*rst::audition::SoundChunk::mutable_endianness(){
  return &this->_endianness;
}

 void rst::audition::SoundChunk::set_endianness(const rst::audition::SoundChunk::EndianNess&newValue){
  this->_endianness=newValue;
}




