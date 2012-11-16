/* This file is generated - do not edit. */

#include "PointPair.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryPointPair,rst.geometry.PointPair);

// Type-independent protocol buffer API for rst::geometry::PointPair

 const rst::geometry::PointPair& rst::geometry::PointPair::default_instance(){
  static rst::geometry::PointPair*instance=NULL;
  if(!instance)instance=new PointPair();
  return *instance;
}

 const std::string rst::geometry::PointPair::GetTypeName(){
  return "rst.geometry.PointPair";
}

rst::geometry::PointPair* rst::geometry::PointPair::New(){
  return new rst::geometry::PointPair();
}

int rst::geometry::PointPair::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryPointPair>(*this);

}

bool rst::geometry::PointPair::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryPointPair>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointPair>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::PointPair::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointPair>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::PointPair::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointPair>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::PointPair::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryPointPair>(temp,*this,0,size);
  return true;
  

}


