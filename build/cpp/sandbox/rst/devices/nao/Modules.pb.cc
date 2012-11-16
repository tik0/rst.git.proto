/* This file is generated - do not edit. */

#include "Modules.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoModules,rst.devices.nao.Modules);

// Type-independent protocol buffer API for rst::devices::nao::Modules

 const rst::devices::nao::Modules& rst::devices::nao::Modules::default_instance(){
  static rst::devices::nao::Modules*instance=NULL;
  if(!instance)instance=new Modules();
  return *instance;
}

 const std::string rst::devices::nao::Modules::GetTypeName(){
  return "rst.devices.nao.Modules";
}

rst::devices::nao::Modules* rst::devices::nao::Modules::New(){
  return new rst::devices::nao::Modules();
}

int rst::devices::nao::Modules::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModules>(*this);

}

bool rst::devices::nao::Modules::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModules>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModules>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::nao::Modules::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModules>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::nao::Modules::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModules>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::nao::Modules::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoModules>(temp,*this,0,size);
  return true;
  

}


