/* This file is generated - do not edit. */

#include "ProcessCues.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmonitoringProcessCues,rst.monitoring.ProcessCues);
DEFINE_WIRE_SCHEMA(rstmonitoringProcessCuesCues,rst.monitoring.ProcessCues.Cues);

// Type-independent protocol buffer API for rst::monitoring::processCues::Cues

 const rst::monitoring::ProcessCues::Cues& rst::monitoring::ProcessCues::Cues::default_instance(){
  static rst::monitoring::ProcessCues::Cues*instance=NULL;
  if(!instance)instance=new Cues();
  return *instance;
}

 const std::string rst::monitoring::ProcessCues::Cues::GetTypeName(){
  return "rst.monitoring.processCues.Cues";
}

rst::monitoring::ProcessCues::Cues* rst::monitoring::ProcessCues::Cues::New(){
  return new rst::monitoring::ProcessCues::Cues();
}

int rst::monitoring::ProcessCues::Cues::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCuesCues>(*this);

}

bool rst::monitoring::ProcessCues::Cues::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCuesCues>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCuesCues>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::monitoring::ProcessCues::Cues::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCuesCues>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::monitoring::ProcessCues::Cues::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCuesCues>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::monitoring::ProcessCues::Cues::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCuesCues>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::monitoring::ProcessCues

 const rst::monitoring::ProcessCues& rst::monitoring::ProcessCues::default_instance(){
  static rst::monitoring::ProcessCues*instance=NULL;
  if(!instance)instance=new ProcessCues();
  return *instance;
}

 const std::string rst::monitoring::ProcessCues::GetTypeName(){
  return "rst.monitoring.ProcessCues";
}

rst::monitoring::ProcessCues* rst::monitoring::ProcessCues::New(){
  return new rst::monitoring::ProcessCues();
}

int rst::monitoring::ProcessCues::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCues>(*this);

}

bool rst::monitoring::ProcessCues::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCues>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCues>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::monitoring::ProcessCues::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCues>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::monitoring::ProcessCues::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCues>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::monitoring::ProcessCues::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmonitoringProcessCues>(temp,*this,0,size);
  return true;
  

}


