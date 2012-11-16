/* This file is generated - do not edit. */

#include "Stereo.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionStereo,rst.vision.Stereo);

// Type-independent protocol buffer API for rst::vision::Stereo

 const rst::vision::Stereo& rst::vision::Stereo::default_instance(){
  static rst::vision::Stereo*instance=NULL;
  if(!instance)instance=new Stereo();
  return *instance;
}

 const std::string rst::vision::Stereo::GetTypeName(){
  return "rst.vision.Stereo";
}

rst::vision::Stereo* rst::vision::Stereo::New(){
  return new rst::vision::Stereo();
}

int rst::vision::Stereo::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionStereo>(*this);

}

bool rst::vision::Stereo::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionStereo>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionStereo>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::Stereo::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionStereo>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::Stereo::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionStereo>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::Stereo::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionStereo>(temp,*this,0,size);
  return true;
  

}


