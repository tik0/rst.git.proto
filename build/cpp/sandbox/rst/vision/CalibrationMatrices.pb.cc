/* This file is generated - do not edit. */

#include "CalibrationMatrices.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionCalibrationMatrices,rst.vision.CalibrationMatrices);

// Type-independent protocol buffer API for rst::vision::CalibrationMatrices

 const rst::vision::CalibrationMatrices& rst::vision::CalibrationMatrices::default_instance(){
  static rst::vision::CalibrationMatrices*instance=NULL;
  if(!instance)instance=new CalibrationMatrices();
  return *instance;
}

 const std::string rst::vision::CalibrationMatrices::GetTypeName(){
  return "rst.vision.CalibrationMatrices";
}

rst::vision::CalibrationMatrices* rst::vision::CalibrationMatrices::New(){
  return new rst::vision::CalibrationMatrices();
}

int rst::vision::CalibrationMatrices::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionCalibrationMatrices>(*this);

}

bool rst::vision::CalibrationMatrices::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionCalibrationMatrices>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionCalibrationMatrices>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::CalibrationMatrices::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionCalibrationMatrices>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::CalibrationMatrices::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionCalibrationMatrices>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::CalibrationMatrices::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionCalibrationMatrices>(temp,*this,0,size);
  return true;
  

}


