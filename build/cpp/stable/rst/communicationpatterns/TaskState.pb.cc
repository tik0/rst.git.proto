/* This file is generated - do not edit. */

#include "TaskState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcommunicationpatternsTaskState,rst.communicationpatterns.TaskState);
DEFINE_WIRE_SCHEMA(rstcommunicationpatternsTaskStateState,rst.communicationpatterns.TaskState.State);
DEFINE_WIRE_SCHEMA(rstcommunicationpatternsTaskStateOrigin,rst.communicationpatterns.TaskState.Origin);





// Type-independent protocol buffer API for rst::communicationpatterns::TaskState

 const rst::communicationpatterns::TaskState& rst::communicationpatterns::TaskState::default_instance(){
  static rst::communicationpatterns::TaskState*instance=NULL;
  if(!instance)instance=new TaskState();
  return *instance;
}

 const std::string rst::communicationpatterns::TaskState::GetTypeName(){
  return "rst.communicationpatterns.TaskState";
}

rst::communicationpatterns::TaskState* rst::communicationpatterns::TaskState::New(){
  return new rst::communicationpatterns::TaskState();
}

int rst::communicationpatterns::TaskState::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcommunicationpatternsTaskState>(*this);

}

bool rst::communicationpatterns::TaskState::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcommunicationpatternsTaskState>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcommunicationpatternsTaskState>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::communicationpatterns::TaskState::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcommunicationpatternsTaskState>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::communicationpatterns::TaskState::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcommunicationpatternsTaskState>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::communicationpatterns::TaskState::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcommunicationpatternsTaskState>(temp,*this,0,size);
  return true;
  

}


