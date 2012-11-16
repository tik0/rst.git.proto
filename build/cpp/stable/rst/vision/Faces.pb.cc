/* This file is generated - do not edit. */

#include "Faces.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionFaces,rst.vision.Faces);

// Type-independent protocol buffer API for rst::vision::Faces

 const rst::vision::Faces& rst::vision::Faces::default_instance(){
  static rst::vision::Faces*instance=NULL;
  if(!instance)instance=new Faces();
  return *instance;
}

 const std::string rst::vision::Faces::GetTypeName(){
  return "rst.vision.Faces";
}

rst::vision::Faces* rst::vision::Faces::New(){
  return new rst::vision::Faces();
}

int rst::vision::Faces::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionFaces>(*this);

}

bool rst::vision::Faces::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionFaces>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionFaces>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::Faces::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionFaces>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::Faces::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionFaces>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::Faces::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionFaces>(temp,*this,0,size);
  return true;
  

}


