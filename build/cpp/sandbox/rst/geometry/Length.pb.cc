/* This file is generated - do not edit. */

#include "Length.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryLength,rst.geometry.Length);

// Type-independent protocol buffer API for rst::geometry::Length

 const rst::geometry::Length& rst::geometry::Length::default_instance(){
  static rst::geometry::Length*instance=NULL;
  if(!instance)instance=new Length();
  return *instance;
}

 const std::string rst::geometry::Length::GetTypeName(){
  return "rst.geometry.Length";
}

rst::geometry::Length* rst::geometry::Length::New(){
  return new rst::geometry::Length();
}

int rst::geometry::Length::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryLength>(*this);

}

bool rst::geometry::Length::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryLength>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryLength>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::Length::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryLength>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::Length::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryLength>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::Length::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryLength>(temp,*this,0,size);
  return true;
  

}


