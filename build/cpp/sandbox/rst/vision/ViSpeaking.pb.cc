/* This file is generated - do not edit. */

#include "ViSpeaking.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionViSpeaking,rst.vision.ViSpeaking);

// Type-independent protocol buffer API for rst::vision::ViSpeaking

 const rst::vision::ViSpeaking& rst::vision::ViSpeaking::default_instance(){
  static rst::vision::ViSpeaking*instance=NULL;
  if(!instance)instance=new ViSpeaking();
  return *instance;
}

 const std::string rst::vision::ViSpeaking::GetTypeName(){
  return "rst.vision.ViSpeaking";
}

rst::vision::ViSpeaking* rst::vision::ViSpeaking::New(){
  return new rst::vision::ViSpeaking();
}

int rst::vision::ViSpeaking::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionViSpeaking>(*this);

}

bool rst::vision::ViSpeaking::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionViSpeaking>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionViSpeaking>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::ViSpeaking::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionViSpeaking>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::ViSpeaking::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionViSpeaking>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::ViSpeaking::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionViSpeaking>(temp,*this,0,size);
  return true;
  

}


