/* This file is generated - do not edit. */

#include "image.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(icubimage,icub.image);
DEFINE_WIRE_SCHEMA(icubimageINNER9462,icub.image.INNER9462);
DEFINE_WIRE_SCHEMA(icubimageINNER9463,icub.image.INNER9463);
DEFINE_WIRE_SCHEMA(icubimageINNER9464,icub.image.INNER9464);





// Type-independent protocol buffer API for icub::image::INNER9464

 const icub::image::INNER9464& icub::image::INNER9464::default_instance(){
  static icub::image::INNER9464*instance=NULL;
  if(!instance)instance=new INNER9464();
  return *instance;
}

 const std::string icub::image::INNER9464::GetTypeName(){
  return "icub.image.INNER9464";
}

icub::image::INNER9464* icub::image::INNER9464::New(){
  return new icub::image::INNER9464();
}

int icub::image::INNER9464::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::icubimageINNER9464>(*this);

}

bool icub::image::INNER9464::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::icubimageINNER9464>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::icubimageINNER9464>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool icub::image::INNER9464::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::icubimageINNER9464>(temp,*this,0,temp.size());
  return true;
  

}



bool icub::image::INNER9464::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::icubimageINNER9464>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool icub::image::INNER9464::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::icubimageINNER9464>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for icub::image

 const icub::image& icub::image::default_instance(){
  static icub::image*instance=NULL;
  if(!instance)instance=new image();
  return *instance;
}

 const std::string icub::image::GetTypeName(){
  return "icub.image";
}

icub::image* icub::image::New(){
  return new icub::image();
}

int icub::image::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::icubimage>(*this);

}

bool icub::image::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::icubimage>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::icubimage>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool icub::image::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::icubimage>(temp,*this,0,temp.size());
  return true;
  

}



bool icub::image::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::icubimage>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool icub::image::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::icubimage>(temp,*this,0,size);
  return true;
  

}


