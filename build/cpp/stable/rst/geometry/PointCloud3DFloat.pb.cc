/* This file is generated - do not edit. */

#include "PointCloud3DFloat.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryPointCloud3DFloat,rst.geometry.PointCloud3DFloat);

// Type-independent protocol buffer API for rst::geometry::PointCloud3DFloat

 const rst::geometry::PointCloud3DFloat& rst::geometry::PointCloud3DFloat::default_instance(){
  static rst::geometry::PointCloud3DFloat*instance=NULL;
  if(!instance)instance=new PointCloud3DFloat();
  return *instance;
}

 const std::string rst::geometry::PointCloud3DFloat::GetTypeName(){
  return "rst.geometry.PointCloud3DFloat";
}

rst::geometry::PointCloud3DFloat* rst::geometry::PointCloud3DFloat::New(){
  return new rst::geometry::PointCloud3DFloat();
}

int rst::geometry::PointCloud3DFloat::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryPointCloud3DFloat>(*this);

}

bool rst::geometry::PointCloud3DFloat::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryPointCloud3DFloat>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointCloud3DFloat>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::PointCloud3DFloat::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointCloud3DFloat>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::PointCloud3DFloat::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointCloud3DFloat>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::PointCloud3DFloat::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointCloud3DFloat>(temp,*this,0,size);
  return true;
  

}


