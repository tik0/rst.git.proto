/* This file is generated - do not edit. */

#include "HeadObjects.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionHeadObjects,rst.vision.HeadObjects);

// Type-independent protocol buffer API for rst::vision::HeadObjects

 const rst::vision::HeadObjects& rst::vision::HeadObjects::default_instance(){
  static rst::vision::HeadObjects*instance=NULL;
  if(!instance)instance=new HeadObjects();
  return *instance;
}

 const std::string rst::vision::HeadObjects::GetTypeName(){
  return "rst.vision.HeadObjects";
}

rst::vision::HeadObjects* rst::vision::HeadObjects::New(){
  return new rst::vision::HeadObjects();
}

int rst::vision::HeadObjects::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjects>(*this);

}

bool rst::vision::HeadObjects::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjects>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjects>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::HeadObjects::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjects>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::HeadObjects::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjects>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::HeadObjects::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjects>(temp,*this,0,size);
  return true;
  

}


