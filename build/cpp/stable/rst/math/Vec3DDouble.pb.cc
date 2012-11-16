/* This file is generated - do not edit. */

#include "Vec3DDouble.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec3DDouble,rst.math.Vec3DDouble);

// Type-independent protocol buffer API for rst::math::Vec3DDouble

 const rst::math::Vec3DDouble& rst::math::Vec3DDouble::default_instance(){
  static rst::math::Vec3DDouble*instance=NULL;
  if(!instance)instance=new Vec3DDouble();
  return *instance;
}

 const std::string rst::math::Vec3DDouble::GetTypeName(){
  return "rst.math.Vec3DDouble";
}

rst::math::Vec3DDouble* rst::math::Vec3DDouble::New(){
  return new rst::math::Vec3DDouble();
}

int rst::math::Vec3DDouble::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec3DDouble>(*this);

}

bool rst::math::Vec3DDouble::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec3DDouble>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DDouble>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::Vec3DDouble::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DDouble>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::Vec3DDouble::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DDouble>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::Vec3DDouble::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DDouble>(temp,*this,0,size);
  return true;
  

}


