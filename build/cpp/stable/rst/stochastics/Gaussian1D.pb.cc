/* This file is generated - do not edit. */

#include "Gaussian1D.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rststochasticsGaussian1D,rst.stochastics.Gaussian1D);

// Type-independent protocol buffer API for rst::stochastics::Gaussian1D

 const rst::stochastics::Gaussian1D& rst::stochastics::Gaussian1D::default_instance(){
  static rst::stochastics::Gaussian1D*instance=NULL;
  if(!instance)instance=new Gaussian1D();
  return *instance;
}

 const std::string rst::stochastics::Gaussian1D::GetTypeName(){
  return "rst.stochastics.Gaussian1D";
}

rst::stochastics::Gaussian1D* rst::stochastics::Gaussian1D::New(){
  return new rst::stochastics::Gaussian1D();
}

int rst::stochastics::Gaussian1D::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rststochasticsGaussian1D>(*this);

}

bool rst::stochastics::Gaussian1D::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rststochasticsGaussian1D>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rststochasticsGaussian1D>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::stochastics::Gaussian1D::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rststochasticsGaussian1D>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::stochastics::Gaussian1D::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rststochasticsGaussian1D>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::stochastics::Gaussian1D::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rststochasticsGaussian1D>(temp,*this,0,size);
  return true;
  

}


