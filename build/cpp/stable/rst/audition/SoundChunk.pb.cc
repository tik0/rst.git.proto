/* This file is generated - do not edit. */

#include "SoundChunk.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionSoundChunk,rst.audition.SoundChunk);
DEFINE_WIRE_SCHEMA(rstauditionSoundChunkSampleType,rst.audition.SoundChunk.SampleType);
DEFINE_WIRE_SCHEMA(rstauditionSoundChunkEndianNess,rst.audition.SoundChunk.EndianNess);





// Type-independent protocol buffer API for rst::audition::SoundChunk

 const rst::audition::SoundChunk& rst::audition::SoundChunk::default_instance(){
  static rst::audition::SoundChunk*instance=NULL;
  if(!instance)instance=new SoundChunk();
  return *instance;
}

 const std::string rst::audition::SoundChunk::GetTypeName(){
  return "rst.audition.SoundChunk";
}

rst::audition::SoundChunk* rst::audition::SoundChunk::New(){
  return new rst::audition::SoundChunk();
}

int rst::audition::SoundChunk::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionSoundChunk>(*this);

}

bool rst::audition::SoundChunk::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionSoundChunk>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundChunk>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::audition::SoundChunk::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundChunk>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::audition::SoundChunk::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundChunk>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::audition::SoundChunk::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionSoundChunk>(temp,*this,0,size);
  return true;
  

}


