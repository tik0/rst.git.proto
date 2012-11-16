/* This file is generated - do not edit. */

#include "Module.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoModule,rst.devices.nao.Module);

// Type-independent protocol buffer API for rst::devices::nao::Module

 const rst::devices::nao::Module& rst::devices::nao::Module::default_instance(){
  static rst::devices::nao::Module*instance=NULL;
  if(!instance)instance=new Module();
  return *instance;
}

 const std::string rst::devices::nao::Module::GetTypeName(){
  return "rst.devices.nao.Module";
}

rst::devices::nao::Module* rst::devices::nao::Module::New(){
  return new rst::devices::nao::Module();
}

int rst::devices::nao::Module::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModule>(*this);

}

bool rst::devices::nao::Module::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModule>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModule>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::nao::Module::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModule>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::nao::Module::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModule>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::nao::Module::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModule>(temp,*this,0,size);
  return true;
  

}


