/* This file is generated - do not edit. */

#include "Vicon.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesmocapVicon,rst.devices.mocap.Vicon);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconUnlabeledMarker,rst.devices.mocap.Vicon.UnlabeledMarker);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconTimecode,rst.devices.mocap.Vicon.Timecode);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconSegment,rst.devices.mocap.Vicon.Segment);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconSegmentMarker,rst.devices.mocap.Vicon.Segment.Marker);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconSubject,rst.devices.mocap.Vicon.Subject);

// Type-independent protocol buffer API for rst::devices::mocap::vicon::UnlabeledMarker

 const rst::devices::mocap::Vicon::UnlabeledMarker& rst::devices::mocap::Vicon::UnlabeledMarker::default_instance(){
  static rst::devices::mocap::Vicon::UnlabeledMarker*instance=NULL;
  if(!instance)instance=new UnlabeledMarker();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::UnlabeledMarker::GetTypeName(){
  return "rst.devices.mocap.vicon.UnlabeledMarker";
}

rst::devices::mocap::Vicon::UnlabeledMarker* rst::devices::mocap::Vicon::UnlabeledMarker::New(){
  return new rst::devices::mocap::Vicon::UnlabeledMarker();
}

int rst::devices::mocap::Vicon::UnlabeledMarker::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconUnlabeledMarker>(*this);

}

bool rst::devices::mocap::Vicon::UnlabeledMarker::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconUnlabeledMarker>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconUnlabeledMarker>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::mocap::Vicon::UnlabeledMarker::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconUnlabeledMarker>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::mocap::Vicon::UnlabeledMarker::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconUnlabeledMarker>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::mocap::Vicon::UnlabeledMarker::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconUnlabeledMarker>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::Timecode

 const rst::devices::mocap::Vicon::Timecode& rst::devices::mocap::Vicon::Timecode::default_instance(){
  static rst::devices::mocap::Vicon::Timecode*instance=NULL;
  if(!instance)instance=new Timecode();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Timecode::GetTypeName(){
  return "rst.devices.mocap.vicon.Timecode";
}

rst::devices::mocap::Vicon::Timecode* rst::devices::mocap::Vicon::Timecode::New(){
  return new rst::devices::mocap::Vicon::Timecode();
}

int rst::devices::mocap::Vicon::Timecode::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconTimecode>(*this);

}

bool rst::devices::mocap::Vicon::Timecode::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconTimecode>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconTimecode>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::mocap::Vicon::Timecode::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconTimecode>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::mocap::Vicon::Timecode::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconTimecode>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::mocap::Vicon::Timecode::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconTimecode>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::segment::Marker

 const rst::devices::mocap::Vicon::Segment::Marker& rst::devices::mocap::Vicon::Segment::Marker::default_instance(){
  static rst::devices::mocap::Vicon::Segment::Marker*instance=NULL;
  if(!instance)instance=new Marker();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Segment::Marker::GetTypeName(){
  return "rst.devices.mocap.vicon.segment.Marker";
}

rst::devices::mocap::Vicon::Segment::Marker* rst::devices::mocap::Vicon::Segment::Marker::New(){
  return new rst::devices::mocap::Vicon::Segment::Marker();
}

int rst::devices::mocap::Vicon::Segment::Marker::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegmentMarker>(*this);

}

bool rst::devices::mocap::Vicon::Segment::Marker::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegmentMarker>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegmentMarker>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::mocap::Vicon::Segment::Marker::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegmentMarker>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::mocap::Vicon::Segment::Marker::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegmentMarker>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::mocap::Vicon::Segment::Marker::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegmentMarker>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::Segment

 const rst::devices::mocap::Vicon::Segment& rst::devices::mocap::Vicon::Segment::default_instance(){
  static rst::devices::mocap::Vicon::Segment*instance=NULL;
  if(!instance)instance=new Segment();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Segment::GetTypeName(){
  return "rst.devices.mocap.vicon.Segment";
}

rst::devices::mocap::Vicon::Segment* rst::devices::mocap::Vicon::Segment::New(){
  return new rst::devices::mocap::Vicon::Segment();
}

int rst::devices::mocap::Vicon::Segment::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegment>(*this);

}

bool rst::devices::mocap::Vicon::Segment::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegment>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegment>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::mocap::Vicon::Segment::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegment>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::mocap::Vicon::Segment::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegment>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::mocap::Vicon::Segment::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSegment>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::Subject

 const rst::devices::mocap::Vicon::Subject& rst::devices::mocap::Vicon::Subject::default_instance(){
  static rst::devices::mocap::Vicon::Subject*instance=NULL;
  if(!instance)instance=new Subject();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Subject::GetTypeName(){
  return "rst.devices.mocap.vicon.Subject";
}

rst::devices::mocap::Vicon::Subject* rst::devices::mocap::Vicon::Subject::New(){
  return new rst::devices::mocap::Vicon::Subject();
}

int rst::devices::mocap::Vicon::Subject::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSubject>(*this);

}

bool rst::devices::mocap::Vicon::Subject::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSubject>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSubject>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::mocap::Vicon::Subject::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSubject>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::mocap::Vicon::Subject::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSubject>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::mocap::Vicon::Subject::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapViconSubject>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::devices::mocap::Vicon

 const rst::devices::mocap::Vicon& rst::devices::mocap::Vicon::default_instance(){
  static rst::devices::mocap::Vicon*instance=NULL;
  if(!instance)instance=new Vicon();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::GetTypeName(){
  return "rst.devices.mocap.Vicon";
}

rst::devices::mocap::Vicon* rst::devices::mocap::Vicon::New(){
  return new rst::devices::mocap::Vicon();
}

int rst::devices::mocap::Vicon::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapVicon>(*this);

}

bool rst::devices::mocap::Vicon::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapVicon>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapVicon>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::mocap::Vicon::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapVicon>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::mocap::Vicon::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapVicon>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::mocap::Vicon::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesmocapVicon>(temp,*this,0,size);
  return true;
  

}


