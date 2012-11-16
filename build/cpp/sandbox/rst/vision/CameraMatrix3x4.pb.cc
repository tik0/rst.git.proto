/* This file is generated - do not edit. */

#include "CameraMatrix3x4.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionCameraMatrix3x4,rst.vision.CameraMatrix3x4);

// Type-independent protocol buffer API for rst::vision::CameraMatrix3x4

 const rst::vision::CameraMatrix3x4& rst::vision::CameraMatrix3x4::default_instance(){
  static rst::vision::CameraMatrix3x4*instance=NULL;
  if(!instance)instance=new CameraMatrix3x4();
  return *instance;
}

 const std::string rst::vision::CameraMatrix3x4::GetTypeName(){
  return "rst.vision.CameraMatrix3x4";
}

rst::vision::CameraMatrix3x4* rst::vision::CameraMatrix3x4::New(){
  return new rst::vision::CameraMatrix3x4();
}

int rst::vision::CameraMatrix3x4::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionCameraMatrix3x4>(*this);

}

bool rst::vision::CameraMatrix3x4::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionCameraMatrix3x4>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionCameraMatrix3x4>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::CameraMatrix3x4::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionCameraMatrix3x4>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::CameraMatrix3x4::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionCameraMatrix3x4>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::CameraMatrix3x4::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionCameraMatrix3x4>(temp,*this,0,size);
  return true;
  

}


