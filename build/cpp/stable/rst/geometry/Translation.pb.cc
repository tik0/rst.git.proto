/* This file is generated - do not edit. */

#include "Translation.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryTranslation,rst.geometry.Translation);

// Type-independent protocol buffer API for rst::geometry::Translation

 const rst::geometry::Translation& rst::geometry::Translation::default_instance(){
  static rst::geometry::Translation*instance=NULL;
  if(!instance)instance=new Translation();
  return *instance;
}

 const std::string rst::geometry::Translation::GetTypeName(){
  return "rst.geometry.Translation";
}

rst::geometry::Translation* rst::geometry::Translation::New(){
  return new rst::geometry::Translation();
}

int rst::geometry::Translation::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryTranslation>(*this);

}

bool rst::geometry::Translation::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryTranslation>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryTranslation>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::Translation::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryTranslation>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::Translation::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryTranslation>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::Translation::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryTranslation>(temp,*this,0,size);
  return true;
  

}


