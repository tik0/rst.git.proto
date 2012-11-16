/* This file is generated - do not edit. */

#include "BoundingBox.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryBoundingBox,rst.geometry.BoundingBox);

// Type-independent protocol buffer API for rst::geometry::BoundingBox

 const rst::geometry::BoundingBox& rst::geometry::BoundingBox::default_instance(){
  static rst::geometry::BoundingBox*instance=NULL;
  if(!instance)instance=new BoundingBox();
  return *instance;
}

 const std::string rst::geometry::BoundingBox::GetTypeName(){
  return "rst.geometry.BoundingBox";
}

rst::geometry::BoundingBox* rst::geometry::BoundingBox::New(){
  return new rst::geometry::BoundingBox();
}

int rst::geometry::BoundingBox::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryBoundingBox>(*this);

}

bool rst::geometry::BoundingBox::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryBoundingBox>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryBoundingBox>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::BoundingBox::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryBoundingBox>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::BoundingBox::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryBoundingBox>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::BoundingBox::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryBoundingBox>(temp,*this,0,size);
  return true;
  

}


