/* This file is generated - do not edit. */

#include "PersonHypotheses.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsthriPersonHypotheses,rst.hri.PersonHypotheses);

// Type-independent protocol buffer API for rst::hri::PersonHypotheses

 const rst::hri::PersonHypotheses& rst::hri::PersonHypotheses::default_instance(){
  static rst::hri::PersonHypotheses*instance=NULL;
  if(!instance)instance=new PersonHypotheses();
  return *instance;
}

 const std::string rst::hri::PersonHypotheses::GetTypeName(){
  return "rst.hri.PersonHypotheses";
}

rst::hri::PersonHypotheses* rst::hri::PersonHypotheses::New(){
  return new rst::hri::PersonHypotheses();
}

int rst::hri::PersonHypotheses::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypotheses>(*this);

}

bool rst::hri::PersonHypotheses::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypotheses>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypotheses>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::hri::PersonHypotheses::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypotheses>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::hri::PersonHypotheses::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypotheses>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::hri::PersonHypotheses::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsthriPersonHypotheses>(temp,*this,0,size);
  return true;
  

}


