/* This file is generated - do not edit. */

#include "Interval.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingInterval,rst.timing.Interval);

// Type-independent protocol buffer API for rst::timing::Interval

 const rst::timing::Interval& rst::timing::Interval::default_instance(){
  static rst::timing::Interval*instance=NULL;
  if(!instance)instance=new Interval();
  return *instance;
}

 const std::string rst::timing::Interval::GetTypeName(){
  return "rst.timing.Interval";
}

rst::timing::Interval* rst::timing::Interval::New(){
  return new rst::timing::Interval();
}

int rst::timing::Interval::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingInterval>(*this);

}

bool rst::timing::Interval::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingInterval>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingInterval>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::timing::Interval::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingInterval>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::timing::Interval::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingInterval>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::timing::Interval::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingInterval>(temp,*this,0,size);
  return true;
  

}


