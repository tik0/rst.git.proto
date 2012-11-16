/* This file is generated - do not edit. */

#include "Attachment.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstxmlAttachment,rst.xml.Attachment);

// Type-independent protocol buffer API for rst::xml::Attachment

 const rst::xml::Attachment& rst::xml::Attachment::default_instance(){
  static rst::xml::Attachment*instance=NULL;
  if(!instance)instance=new Attachment();
  return *instance;
}

 const std::string rst::xml::Attachment::GetTypeName(){
  return "rst.xml.Attachment";
}

rst::xml::Attachment* rst::xml::Attachment::New(){
  return new rst::xml::Attachment();
}

int rst::xml::Attachment::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstxmlAttachment>(*this);

}

bool rst::xml::Attachment::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstxmlAttachment>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstxmlAttachment>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::xml::Attachment::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstxmlAttachment>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::xml::Attachment::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstxmlAttachment>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::xml::Attachment::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstxmlAttachment>(temp,*this,0,size);
  return true;
  

}


