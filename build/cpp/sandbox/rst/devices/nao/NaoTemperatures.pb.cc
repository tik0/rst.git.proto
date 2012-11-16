/* This file is generated - do not edit. */

#include "NaoTemperatures.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoNaoTemperatures,rst.devices.nao.NaoTemperatures);

// Type-independent protocol buffer API for rst::devices::nao::NaoTemperatures

 const rst::devices::nao::NaoTemperatures& rst::devices::nao::NaoTemperatures::default_instance(){
  static rst::devices::nao::NaoTemperatures*instance=NULL;
  if(!instance)instance=new NaoTemperatures();
  return *instance;
}

 const std::string rst::devices::nao::NaoTemperatures::GetTypeName(){
  return "rst.devices.nao.NaoTemperatures";
}

rst::devices::nao::NaoTemperatures* rst::devices::nao::NaoTemperatures::New(){
  return new rst::devices::nao::NaoTemperatures();
}

int rst::devices::nao::NaoTemperatures::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoNaoTemperatures>(*this);

}

bool rst::devices::nao::NaoTemperatures::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoNaoTemperatures>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoNaoTemperatures>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::nao::NaoTemperatures::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoNaoTemperatures>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::nao::NaoTemperatures::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoNaoTemperatures>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::nao::NaoTemperatures::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoNaoTemperatures>(temp,*this,0,size);
  return true;
  

}


