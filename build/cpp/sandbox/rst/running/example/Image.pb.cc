/* This file is generated - do not edit. */

#include "Image.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstrunningexampleImage,rst.running.example.Image);

// Type-independent protocol buffer API for rst::running::example::Image

 const rst::running::example::Image& rst::running::example::Image::default_instance(){
  static rst::running::example::Image*instance=NULL;
  if(!instance)instance=new Image();
  return *instance;
}

 const std::string rst::running::example::Image::GetTypeName(){
  return "rst.running.example.Image";
}

rst::running::example::Image* rst::running::example::Image::New(){
  return new rst::running::example::Image();
}

int rst::running::example::Image::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstrunningexampleImage>(*this);

}

bool rst::running::example::Image::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstrunningexampleImage>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleImage>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::running::example::Image::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleImage>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::running::example::Image::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleImage>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::running::example::Image::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleImage>(temp,*this,0,size);
  return true;
  

}


