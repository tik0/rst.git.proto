/* This file is generated - do not edit. */

#include "ComponentState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseComponentState,rst.cbse.ComponentState);
DEFINE_WIRE_SCHEMA(rstcbseComponentStateState,rst.cbse.ComponentState.State);



// Type-independent protocol buffer API for rst::cbse::ComponentState

 const rst::cbse::ComponentState& rst::cbse::ComponentState::default_instance(){
  static rst::cbse::ComponentState*instance=NULL;
  if(!instance)instance=new ComponentState();
  return *instance;
}

 const std::string rst::cbse::ComponentState::GetTypeName(){
  return "rst.cbse.ComponentState";
}

rst::cbse::ComponentState* rst::cbse::ComponentState::New(){
  return new rst::cbse::ComponentState();
}

int rst::cbse::ComponentState::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseComponentState>(*this);

}

bool rst::cbse::ComponentState::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseComponentState>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentState>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::cbse::ComponentState::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentState>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::cbse::ComponentState::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentState>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::cbse::ComponentState::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentState>(temp,*this,0,size);
  return true;
  

}


