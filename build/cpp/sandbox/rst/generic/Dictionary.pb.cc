/* This file is generated - do not edit. */

#include "Dictionary.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericDictionary,rst.generic.Dictionary);

// Type-independent protocol buffer API for rst::generic::Dictionary

 const rst::generic::Dictionary& rst::generic::Dictionary::default_instance(){
  static rst::generic::Dictionary*instance=NULL;
  if(!instance)instance=new Dictionary();
  return *instance;
}

 const std::string rst::generic::Dictionary::GetTypeName(){
  return "rst.generic.Dictionary";
}

rst::generic::Dictionary* rst::generic::Dictionary::New(){
  return new rst::generic::Dictionary();
}

int rst::generic::Dictionary::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericDictionary>(*this);

}

bool rst::generic::Dictionary::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericDictionary>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericDictionary>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::generic::Dictionary::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericDictionary>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::generic::Dictionary::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericDictionary>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::generic::Dictionary::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericDictionary>(temp,*this,0,size);
  return true;
  

}


