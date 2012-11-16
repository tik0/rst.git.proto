/* This file is generated - do not edit. */

#include "Timestamp.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingTimestamp,rst.timing.Timestamp);

// Type-independent protocol buffer API for rst::timing::Timestamp

 const rst::timing::Timestamp& rst::timing::Timestamp::default_instance(){
  static rst::timing::Timestamp*instance=NULL;
  if(!instance)instance=new Timestamp();
  return *instance;
}

 const std::string rst::timing::Timestamp::GetTypeName(){
  return "rst.timing.Timestamp";
}

rst::timing::Timestamp* rst::timing::Timestamp::New(){
  return new rst::timing::Timestamp();
}

int rst::timing::Timestamp::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingTimestamp>(*this);

}

bool rst::timing::Timestamp::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingTimestamp>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingTimestamp>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::timing::Timestamp::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingTimestamp>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::timing::Timestamp::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingTimestamp>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::timing::Timestamp::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingTimestamp>(temp,*this,0,size);
  return true;
  

}


