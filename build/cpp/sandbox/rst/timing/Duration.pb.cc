/* This file is generated - do not edit. */

#include "Duration.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingDuration,rst.timing.Duration);

// Type-independent protocol buffer API for rst::timing::Duration

 const rst::timing::Duration& rst::timing::Duration::default_instance(){
  static rst::timing::Duration*instance=NULL;
  if(!instance)instance=new Duration();
  return *instance;
}

 const std::string rst::timing::Duration::GetTypeName(){
  return "rst.timing.Duration";
}

rst::timing::Duration* rst::timing::Duration::New(){
  return new rst::timing::Duration();
}

int rst::timing::Duration::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingDuration>(*this);

}

bool rst::timing::Duration::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingDuration>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingDuration>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::timing::Duration::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingDuration>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::timing::Duration::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingDuration>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::timing::Duration::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingDuration>(temp,*this,0,size);
  return true;
  

}


