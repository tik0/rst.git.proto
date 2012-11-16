/* This file is generated - do not edit. */

#include "ComponentInfo.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseComponentInfo,rst.cbse.ComponentInfo);

// Type-independent protocol buffer API for rst::cbse::ComponentInfo

 const rst::cbse::ComponentInfo& rst::cbse::ComponentInfo::default_instance(){
  static rst::cbse::ComponentInfo*instance=NULL;
  if(!instance)instance=new ComponentInfo();
  return *instance;
}

 const std::string rst::cbse::ComponentInfo::GetTypeName(){
  return "rst.cbse.ComponentInfo";
}

rst::cbse::ComponentInfo* rst::cbse::ComponentInfo::New(){
  return new rst::cbse::ComponentInfo();
}

int rst::cbse::ComponentInfo::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseComponentInfo>(*this);

}

bool rst::cbse::ComponentInfo::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseComponentInfo>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentInfo>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::cbse::ComponentInfo::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentInfo>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::cbse::ComponentInfo::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentInfo>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::cbse::ComponentInfo::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseComponentInfo>(temp,*this,0,size);
  return true;
  

}


