/* This file is generated - do not edit. */

#include "Rotation.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryRotation,rst.geometry.Rotation);

// Type-independent protocol buffer API for rst::geometry::Rotation

 const rst::geometry::Rotation& rst::geometry::Rotation::default_instance(){
  static rst::geometry::Rotation*instance=NULL;
  if(!instance)instance=new Rotation();
  return *instance;
}

 const std::string rst::geometry::Rotation::GetTypeName(){
  return "rst.geometry.Rotation";
}

rst::geometry::Rotation* rst::geometry::Rotation::New(){
  return new rst::geometry::Rotation();
}

int rst::geometry::Rotation::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryRotation>(*this);

}

bool rst::geometry::Rotation::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryRotation>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryRotation>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::Rotation::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryRotation>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::Rotation::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryRotation>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::Rotation::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryRotation>(temp,*this,0,size);
  return true;
  

}


