/* This file is generated - do not edit. */

#include "System.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoSystem,rst.devices.nao.System);

// Type-independent protocol buffer API for rst::devices::nao::System

 const rst::devices::nao::System& rst::devices::nao::System::default_instance(){
  static rst::devices::nao::System*instance=NULL;
  if(!instance)instance=new System();
  return *instance;
}

 const std::string rst::devices::nao::System::GetTypeName(){
  return "rst.devices.nao.System";
}

rst::devices::nao::System* rst::devices::nao::System::New(){
  return new rst::devices::nao::System();
}

int rst::devices::nao::System::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoSystem>(*this);

}

bool rst::devices::nao::System::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoSystem>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoSystem>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::nao::System::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoSystem>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::nao::System::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoSystem>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::nao::System::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoSystem>(temp,*this,0,size);
  return true;
  

}


