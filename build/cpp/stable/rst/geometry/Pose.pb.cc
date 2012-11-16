/* This file is generated - do not edit. */

#include "Pose.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryPose,rst.geometry.Pose);

// Type-independent protocol buffer API for rst::geometry::Pose

 const rst::geometry::Pose& rst::geometry::Pose::default_instance(){
  static rst::geometry::Pose*instance=NULL;
  if(!instance)instance=new Pose();
  return *instance;
}

 const std::string rst::geometry::Pose::GetTypeName(){
  return "rst.geometry.Pose";
}

rst::geometry::Pose* rst::geometry::Pose::New(){
  return new rst::geometry::Pose();
}

int rst::geometry::Pose::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryPose>(*this);

}

bool rst::geometry::Pose::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgeometryPose>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryPose>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::geometry::Pose::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryPose>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::geometry::Pose::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgeometryPose>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::geometry::Pose::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgeometryPose>(temp,*this,0,size);
  return true;
  

}


