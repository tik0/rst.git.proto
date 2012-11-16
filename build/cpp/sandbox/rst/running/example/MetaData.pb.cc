/* This file is generated - do not edit. */

#include "MetaData.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstrunningexampleMetaData,rst.running.example.MetaData);

// Type-independent protocol buffer API for rst::running::example::MetaData

 const rst::running::example::MetaData& rst::running::example::MetaData::default_instance(){
  static rst::running::example::MetaData*instance=NULL;
  if(!instance)instance=new MetaData();
  return *instance;
}

 const std::string rst::running::example::MetaData::GetTypeName(){
  return "rst.running.example.MetaData";
}

rst::running::example::MetaData* rst::running::example::MetaData::New(){
  return new rst::running::example::MetaData();
}

int rst::running::example::MetaData::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstrunningexampleMetaData>(*this);

}

bool rst::running::example::MetaData::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstrunningexampleMetaData>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleMetaData>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::running::example::MetaData::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleMetaData>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::running::example::MetaData::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleMetaData>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::running::example::MetaData::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstrunningexampleMetaData>(temp,*this,0,size);
  return true;
  

}


