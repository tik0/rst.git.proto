/* This file is generated - do not edit. */

#include "Battery.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesgenericBattery,rst.devices.generic.Battery);

// Type-independent protocol buffer API for rst::devices::generic::Battery

 const rst::devices::generic::Battery& rst::devices::generic::Battery::default_instance(){
  static rst::devices::generic::Battery*instance=NULL;
  if(!instance)instance=new Battery();
  return *instance;
}

 const std::string rst::devices::generic::Battery::GetTypeName(){
  return "rst.devices.generic.Battery";
}

rst::devices::generic::Battery* rst::devices::generic::Battery::New(){
  return new rst::devices::generic::Battery();
}

int rst::devices::generic::Battery::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericBattery>(*this);

}

bool rst::devices::generic::Battery::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericBattery>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericBattery>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::generic::Battery::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericBattery>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::generic::Battery::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericBattery>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::generic::Battery::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericBattery>(temp,*this,0,size);
  return true;
  

}


