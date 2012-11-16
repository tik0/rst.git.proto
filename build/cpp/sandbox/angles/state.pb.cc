/* This file is generated - do not edit. */

#include "state.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(anglesstate,angles.state);

// Type-independent protocol buffer API for angles::state

 const angles::state& angles::state::default_instance(){
  static angles::state*instance=NULL;
  if(!instance)instance=new state();
  return *instance;
}

 const std::string angles::state::GetTypeName(){
  return "angles.state";
}

angles::state* angles::state::New(){
  return new angles::state();
}

int angles::state::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::anglesstate>(*this);

}

bool angles::state::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::anglesstate>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::anglesstate>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool angles::state::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::anglesstate>(temp,*this,0,temp.size());
  return true;
  

}



bool angles::state::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::anglesstate>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool angles::state::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::anglesstate>(temp,*this,0,size);
  return true;
  

}


