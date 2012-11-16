/* This file is generated - do not edit. */

#include "CpuMemory.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesgenericCpuMemory,rst.devices.generic.CpuMemory);
DEFINE_WIRE_SCHEMA(rstdevicesgenericCpuMemoryCpu,rst.devices.generic.CpuMemory.Cpu);

// Type-independent protocol buffer API for rst::devices::generic::cpuMemory::Cpu

 const rst::devices::generic::CpuMemory::Cpu& rst::devices::generic::CpuMemory::Cpu::default_instance(){
  static rst::devices::generic::CpuMemory::Cpu*instance=NULL;
  if(!instance)instance=new Cpu();
  return *instance;
}

 const std::string rst::devices::generic::CpuMemory::Cpu::GetTypeName(){
  return "rst.devices.generic.cpuMemory.Cpu";
}

rst::devices::generic::CpuMemory::Cpu* rst::devices::generic::CpuMemory::Cpu::New(){
  return new rst::devices::generic::CpuMemory::Cpu();
}

int rst::devices::generic::CpuMemory::Cpu::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemoryCpu>(*this);

}

bool rst::devices::generic::CpuMemory::Cpu::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemoryCpu>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemoryCpu>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::generic::CpuMemory::Cpu::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemoryCpu>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::generic::CpuMemory::Cpu::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemoryCpu>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::generic::CpuMemory::Cpu::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemoryCpu>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::devices::generic::CpuMemory

 const rst::devices::generic::CpuMemory& rst::devices::generic::CpuMemory::default_instance(){
  static rst::devices::generic::CpuMemory*instance=NULL;
  if(!instance)instance=new CpuMemory();
  return *instance;
}

 const std::string rst::devices::generic::CpuMemory::GetTypeName(){
  return "rst.devices.generic.CpuMemory";
}

rst::devices::generic::CpuMemory* rst::devices::generic::CpuMemory::New(){
  return new rst::devices::generic::CpuMemory();
}

int rst::devices::generic::CpuMemory::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemory>(*this);

}

bool rst::devices::generic::CpuMemory::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemory>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemory>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::generic::CpuMemory::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemory>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::generic::CpuMemory::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemory>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::generic::CpuMemory::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesgenericCpuMemory>(temp,*this,0,size);
  return true;
  

}


