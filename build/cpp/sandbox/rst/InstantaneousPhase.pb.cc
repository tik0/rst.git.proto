/* This file is generated - do not edit. */

#include "InstantaneousPhase.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstInstantaneousPhase,rst.InstantaneousPhase);

// Type-independent protocol buffer API for rst::InstantaneousPhase

 const rst::InstantaneousPhase& rst::InstantaneousPhase::default_instance(){
  static rst::InstantaneousPhase*instance=NULL;
  if(!instance)instance=new InstantaneousPhase();
  return *instance;
}

 const std::string rst::InstantaneousPhase::GetTypeName(){
  return "rst.InstantaneousPhase";
}

rst::InstantaneousPhase* rst::InstantaneousPhase::New(){
  return new rst::InstantaneousPhase();
}

int rst::InstantaneousPhase::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstInstantaneousPhase>(*this);

}

bool rst::InstantaneousPhase::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstInstantaneousPhase>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstInstantaneousPhase>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::InstantaneousPhase::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstInstantaneousPhase>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::InstantaneousPhase::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstInstantaneousPhase>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::InstantaneousPhase::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstInstantaneousPhase>(temp,*this,0,size);
  return true;
  

}


