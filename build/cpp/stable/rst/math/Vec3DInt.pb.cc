/* This file is generated - do not edit. */

#include "Vec3DInt.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec3DInt,rst.math.Vec3DInt);

// Type-independent protocol buffer API for rst::math::Vec3DInt

 const rst::math::Vec3DInt& rst::math::Vec3DInt::default_instance(){
  static rst::math::Vec3DInt*instance=NULL;
  if(!instance)instance=new Vec3DInt();
  return *instance;
}

 const std::string rst::math::Vec3DInt::GetTypeName(){
  return "rst.math.Vec3DInt";
}

rst::math::Vec3DInt* rst::math::Vec3DInt::New(){
  return new rst::math::Vec3DInt();
}

int rst::math::Vec3DInt::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec3DInt>(*this);

}

bool rst::math::Vec3DInt::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec3DInt>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DInt>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::Vec3DInt::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DInt>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::Vec3DInt::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DInt>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::Vec3DInt::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec3DInt>(temp,*this,0,size);
  return true;
  

}


