/* This file is generated - do not edit. */

#include "Vec2DInt.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec2DInt,rst.math.Vec2DInt);

// Type-independent protocol buffer API for rst::math::Vec2DInt

 const rst::math::Vec2DInt& rst::math::Vec2DInt::default_instance(){
  static rst::math::Vec2DInt*instance=NULL;
  if(!instance)instance=new Vec2DInt();
  return *instance;
}

 const std::string rst::math::Vec2DInt::GetTypeName(){
  return "rst.math.Vec2DInt";
}

rst::math::Vec2DInt* rst::math::Vec2DInt::New(){
  return new rst::math::Vec2DInt();
}

int rst::math::Vec2DInt::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec2DInt>(*this);

}

bool rst::math::Vec2DInt::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathVec2DInt>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec2DInt>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::Vec2DInt::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec2DInt>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::Vec2DInt::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathVec2DInt>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::Vec2DInt::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathVec2DInt>(temp,*this,0,size);
  return true;
  

}


