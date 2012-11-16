/* This file is generated - do not edit. */

#include "Images.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionImages,rst.vision.Images);

// Type-independent protocol buffer API for rst::vision::Images

 const rst::vision::Images& rst::vision::Images::default_instance(){
  static rst::vision::Images*instance=NULL;
  if(!instance)instance=new Images();
  return *instance;
}

 const std::string rst::vision::Images::GetTypeName(){
  return "rst.vision.Images";
}

rst::vision::Images* rst::vision::Images::New(){
  return new rst::vision::Images();
}

int rst::vision::Images::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionImages>(*this);

}

bool rst::vision::Images::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionImages>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionImages>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::Images::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionImages>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::Images::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionImages>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::Images::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionImages>(temp,*this,0,size);
  return true;
  

}


