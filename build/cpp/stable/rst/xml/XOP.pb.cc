/* This file is generated - do not edit. */

#include "XOP.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstxmlXOP,rst.xml.XOP);

// Type-independent protocol buffer API for rst::xml::XOP

 const rst::xml::XOP& rst::xml::XOP::default_instance(){
  static rst::xml::XOP*instance=NULL;
  if(!instance)instance=new XOP();
  return *instance;
}

 const std::string rst::xml::XOP::GetTypeName(){
  return "rst.xml.XOP";
}

rst::xml::XOP* rst::xml::XOP::New(){
  return new rst::xml::XOP();
}

int rst::xml::XOP::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstxmlXOP>(*this);

}

bool rst::xml::XOP::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstxmlXOP>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstxmlXOP>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::xml::XOP::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstxmlXOP>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::xml::XOP::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstxmlXOP>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::xml::XOP::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstxmlXOP>(temp,*this,0,size);
  return true;
  

}


