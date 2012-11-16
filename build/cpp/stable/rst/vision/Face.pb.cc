/* This file is generated - do not edit. */

#include "Face.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionFace,rst.vision.Face);

// Type-independent protocol buffer API for rst::vision::Face

 const rst::vision::Face& rst::vision::Face::default_instance(){
  static rst::vision::Face*instance=NULL;
  if(!instance)instance=new Face();
  return *instance;
}

 const std::string rst::vision::Face::GetTypeName(){
  return "rst.vision.Face";
}

rst::vision::Face* rst::vision::Face::New(){
  return new rst::vision::Face();
}

int rst::vision::Face::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionFace>(*this);

}

bool rst::vision::Face::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionFace>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionFace>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::Face::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionFace>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::Face::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionFace>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::Face::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionFace>(temp,*this,0,size);
  return true;
  

}


