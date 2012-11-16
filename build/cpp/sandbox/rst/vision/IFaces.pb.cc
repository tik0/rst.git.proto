/* This file is generated - do not edit. */

#include "IFaces.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionIFaces,rst.vision.IFaces);

// Type-independent protocol buffer API for rst::vision::IFaces

 const rst::vision::IFaces& rst::vision::IFaces::default_instance(){
  static rst::vision::IFaces*instance=NULL;
  if(!instance)instance=new IFaces();
  return *instance;
}

 const std::string rst::vision::IFaces::GetTypeName(){
  return "rst.vision.IFaces";
}

rst::vision::IFaces* rst::vision::IFaces::New(){
  return new rst::vision::IFaces();
}

int rst::vision::IFaces::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionIFaces>(*this);

}

bool rst::vision::IFaces::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionIFaces>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionIFaces>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::IFaces::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionIFaces>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::IFaces::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionIFaces>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::IFaces::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionIFaces>(temp,*this,0,size);
  return true;
  

}


