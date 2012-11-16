/* This file is generated - do not edit. */

#include "Point2DTimestampPair.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingPoint2DTimestampPair,rst.timing.Point2DTimestampPair);

// Type-independent protocol buffer API for rst::timing::Point2DTimestampPair

 const rst::timing::Point2DTimestampPair& rst::timing::Point2DTimestampPair::default_instance(){
  static rst::timing::Point2DTimestampPair*instance=NULL;
  if(!instance)instance=new Point2DTimestampPair();
  return *instance;
}

 const std::string rst::timing::Point2DTimestampPair::GetTypeName(){
  return "rst.timing.Point2DTimestampPair";
}

rst::timing::Point2DTimestampPair* rst::timing::Point2DTimestampPair::New(){
  return new rst::timing::Point2DTimestampPair();
}

int rst::timing::Point2DTimestampPair::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimestampPair>(*this);

}

bool rst::timing::Point2DTimestampPair::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimestampPair>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimestampPair>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::timing::Point2DTimestampPair::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimestampPair>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::timing::Point2DTimestampPair::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimestampPair>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::timing::Point2DTimestampPair::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimestampPair>(temp,*this,0,size);
  return true;
  

}


