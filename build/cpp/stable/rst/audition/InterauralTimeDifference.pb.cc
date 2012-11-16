/* This file is generated - do not edit. */

#include "InterauralTimeDifference.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionInterauralTimeDifference,rst.audition.InterauralTimeDifference);

// Type-independent protocol buffer API for rst::audition::InterauralTimeDifference

 const rst::audition::InterauralTimeDifference& rst::audition::InterauralTimeDifference::default_instance(){
  static rst::audition::InterauralTimeDifference*instance=NULL;
  if(!instance)instance=new InterauralTimeDifference();
  return *instance;
}

 const std::string rst::audition::InterauralTimeDifference::GetTypeName(){
  return "rst.audition.InterauralTimeDifference";
}

rst::audition::InterauralTimeDifference* rst::audition::InterauralTimeDifference::New(){
  return new rst::audition::InterauralTimeDifference();
}

int rst::audition::InterauralTimeDifference::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionInterauralTimeDifference>(*this);

}

bool rst::audition::InterauralTimeDifference::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionInterauralTimeDifference>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionInterauralTimeDifference>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::audition::InterauralTimeDifference::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionInterauralTimeDifference>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::audition::InterauralTimeDifference::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionInterauralTimeDifference>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::audition::InterauralTimeDifference::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionInterauralTimeDifference>(temp,*this,0,size);
  return true;
  

}


