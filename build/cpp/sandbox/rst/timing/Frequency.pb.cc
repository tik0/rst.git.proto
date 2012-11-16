/* This file is generated - do not edit. */

#include "Frequency.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingFrequency,rst.timing.Frequency);

// Type-independent protocol buffer API for rst::timing::Frequency

 const rst::timing::Frequency& rst::timing::Frequency::default_instance(){
  static rst::timing::Frequency*instance=NULL;
  if(!instance)instance=new Frequency();
  return *instance;
}

 const std::string rst::timing::Frequency::GetTypeName(){
  return "rst.timing.Frequency";
}

rst::timing::Frequency* rst::timing::Frequency::New(){
  return new rst::timing::Frequency();
}

int rst::timing::Frequency::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingFrequency>(*this);

}

bool rst::timing::Frequency::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingFrequency>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingFrequency>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::timing::Frequency::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingFrequency>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::timing::Frequency::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingFrequency>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::timing::Frequency::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingFrequency>(temp,*this,0,size);
  return true;
  

}


