/* This file is generated - do not edit. */

#include "SoundEvent.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionSoundEvent,rst.audition.SoundEvent);

// Type-independent protocol buffer API for rst::audition::SoundEvent

 const rst::audition::SoundEvent& rst::audition::SoundEvent::default_instance(){
  static rst::audition::SoundEvent*instance=NULL;
  if(!instance)instance=new SoundEvent();
  return *instance;
}

 const std::string rst::audition::SoundEvent::GetTypeName(){
  return "rst.audition.SoundEvent";
}

rst::audition::SoundEvent* rst::audition::SoundEvent::New(){
  return new rst::audition::SoundEvent();
}

int rst::audition::SoundEvent::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionSoundEvent>(*this);

}

bool rst::audition::SoundEvent::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionSoundEvent>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundEvent>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::audition::SoundEvent::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundEvent>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::audition::SoundEvent::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundEvent>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::audition::SoundEvent::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundEvent>(temp,*this,0,size);
  return true;
  

}


