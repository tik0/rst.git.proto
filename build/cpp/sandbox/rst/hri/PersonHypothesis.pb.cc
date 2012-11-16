/* This file is generated - do not edit. */

#include "PersonHypothesis.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsthriPersonHypothesis,rst.hri.PersonHypothesis);

// Type-independent protocol buffer API for rst::hri::PersonHypothesis

 const rst::hri::PersonHypothesis& rst::hri::PersonHypothesis::default_instance(){
  static rst::hri::PersonHypothesis*instance=NULL;
  if(!instance)instance=new PersonHypothesis();
  return *instance;
}

 const std::string rst::hri::PersonHypothesis::GetTypeName(){
  return "rst.hri.PersonHypothesis";
}

rst::hri::PersonHypothesis* rst::hri::PersonHypothesis::New(){
  return new rst::hri::PersonHypothesis();
}

int rst::hri::PersonHypothesis::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypothesis>(*this);

}

bool rst::hri::PersonHypothesis::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypothesis>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypothesis>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::hri::PersonHypothesis::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypothesis>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::hri::PersonHypothesis::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypothesis>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::hri::PersonHypothesis::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypothesis>(temp,*this,0,size);
  return true;
  

}


