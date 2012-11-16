/* This file is generated - do not edit. */

#include "Wrench.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsWrench,rst.dynamics.Wrench);

// Type-independent protocol buffer API for rst::dynamics::Wrench

 const rst::dynamics::Wrench& rst::dynamics::Wrench::default_instance(){
  static rst::dynamics::Wrench*instance=NULL;
  if(!instance)instance=new Wrench();
  return *instance;
}

 const std::string rst::dynamics::Wrench::GetTypeName(){
  return "rst.dynamics.Wrench";
}

rst::dynamics::Wrench* rst::dynamics::Wrench::New(){
  return new rst::dynamics::Wrench();
}

int rst::dynamics::Wrench::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsWrench>(*this);

}

bool rst::dynamics::Wrench::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsWrench>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsWrench>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::dynamics::Wrench::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsWrench>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::dynamics::Wrench::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsWrench>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::dynamics::Wrench::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsWrench>(temp,*this,0,size);
  return true;
  

}


