/* This file is generated - do not edit. */

#include "output.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(pf3dtrackeroutput,pf3dtracker.output);

// Type-independent protocol buffer API for pf3dtracker::output

 const pf3dtracker::output& pf3dtracker::output::default_instance(){
  static pf3dtracker::output*instance=NULL;
  if(!instance)instance=new output();
  return *instance;
}

 const std::string pf3dtracker::output::GetTypeName(){
  return "pf3dtracker.output";
}

pf3dtracker::output* pf3dtracker::output::New(){
  return new pf3dtracker::output();
}

int pf3dtracker::output::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::pf3dtrackeroutput>(*this);

}

bool pf3dtracker::output::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::pf3dtrackeroutput>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::pf3dtrackeroutput>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool pf3dtracker::output::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::pf3dtrackeroutput>(temp,*this,0,temp.size());
  return true;
  

}



bool pf3dtracker::output::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::pf3dtrackeroutput>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool pf3dtracker::output::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::pf3dtrackeroutput>(temp,*this,0,size);
  return true;
  

}


