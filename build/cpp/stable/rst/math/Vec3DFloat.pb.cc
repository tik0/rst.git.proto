/* This file is generated - do not edit. */

#include "Vec3DFloat.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec3DFloat,rst.math.Vec3DFloat);

// Type-independent protocol buffer API for rst::math::Vec3DFloat

 const rst::math::Vec3DFloat& rst::math::Vec3DFloat::default_instance(){
  static rst::math::Vec3DFloat*instance=NULL;
  if(!instance)instance=new Vec3DFloat();
  return *instance;
}

 const std::string rst::math::Vec3DFloat::GetTypeName(){
  return "rst.math.Vec3DFloat";
}

rst::math::Vec3DFloat* rst::math::Vec3DFloat::New(){
  return new rst::math::Vec3DFloat();
}

int rst::math::Vec3DFloat::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec3DFloat>(*this);

}

bool rst::math::Vec3DFloat::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec3DFloat>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DFloat>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::Vec3DFloat::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DFloat>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::Vec3DFloat::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DFloat>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::Vec3DFloat::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DFloat>(temp,*this,0,size);
  return true;
  

}


