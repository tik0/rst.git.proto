/* This file is generated - do not edit. */

#include "Image.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionImage,rst.vision.Image);
DEFINE_WIRE_SCHEMA(rstvisionImageDepth,rst.vision.Image.Depth);
DEFINE_WIRE_SCHEMA(rstvisionImageColorMode,rst.vision.Image.ColorMode);
DEFINE_WIRE_SCHEMA(rstvisionImageDataOrder,rst.vision.Image.DataOrder);







// Type-independent protocol buffer API for rst::vision::Image

 const rst::vision::Image& rst::vision::Image::default_instance(){
  static rst::vision::Image*instance=NULL;
  if(!instance)instance=new Image();
  return *instance;
}

 const std::string rst::vision::Image::GetTypeName(){
  return "rst.vision.Image";
}

rst::vision::Image* rst::vision::Image::New(){
  return new rst::vision::Image();
}

int rst::vision::Image::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionImage>(*this);

}

bool rst::vision::Image::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionImage>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionImage>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::Image::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionImage>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::Image::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionImage>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::Image::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionImage>(temp,*this,0,size);
  return true;
  

}


