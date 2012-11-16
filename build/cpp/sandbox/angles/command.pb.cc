/* This file is generated - do not edit. */

#include "command.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(anglescommand,angles.command);
DEFINE_WIRE_SCHEMA(anglescommandINNER9455,angles.command.INNER9455);
DEFINE_WIRE_SCHEMA(anglescommandINNER9456,angles.command.INNER9456);





// Type-independent protocol buffer API for angles::command

 const angles::command& angles::command::default_instance(){
  static angles::command*instance=NULL;
  if(!instance)instance=new command();
  return *instance;
}

 const std::string angles::command::GetTypeName(){
  return "angles.command";
}

angles::command* angles::command::New(){
  return new angles::command();
}

int angles::command::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::anglescommand>(*this);

}

bool angles::command::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::anglescommand>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::anglescommand>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool angles::command::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::anglescommand>(temp,*this,0,temp.size());
  return true;
  

}



bool angles::command::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::anglescommand>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool angles::command::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::anglescommand>(temp,*this,0,size);
  return true;
  

}


