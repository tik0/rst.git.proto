/* This file is generated - do not edit. */

#include "FloatSoundArray.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionFloatSoundArray,rst.audition.FloatSoundArray);

// Type-independent protocol buffer API for rst::audition::FloatSoundArray

 const rst::audition::FloatSoundArray& rst::audition::FloatSoundArray::default_instance(){
  static rst::audition::FloatSoundArray*instance=NULL;
  if(!instance)instance=new FloatSoundArray();
  return *instance;
}

 const std::string rst::audition::FloatSoundArray::GetTypeName(){
  return "rst.audition.FloatSoundArray";
}

rst::audition::FloatSoundArray* rst::audition::FloatSoundArray::New(){
  return new rst::audition::FloatSoundArray();
}

int rst::audition::FloatSoundArray::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionFloatSoundArray>(*this);

}

bool rst::audition::FloatSoundArray::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionFloatSoundArray>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionFloatSoundArray>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::audition::FloatSoundArray::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionFloatSoundArray>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::audition::FloatSoundArray::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionFloatSoundArray>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::audition::FloatSoundArray::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionFloatSoundArray>(temp,*this,0,size);
  return true;
  

}


