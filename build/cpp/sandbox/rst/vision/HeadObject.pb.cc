/* This file is generated - do not edit. */

#include "HeadObject.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionHeadObject,rst.vision.HeadObject);
DEFINE_WIRE_SCHEMA(rstvisionHeadObjectLabeledFace,rst.vision.HeadObject.LabeledFace);

// Type-independent protocol buffer API for rst::vision::headObject::LabeledFace

 const rst::vision::HeadObject::LabeledFace& rst::vision::HeadObject::LabeledFace::default_instance(){
  static rst::vision::HeadObject::LabeledFace*instance=NULL;
  if(!instance)instance=new LabeledFace();
  return *instance;
}

 const std::string rst::vision::HeadObject::LabeledFace::GetTypeName(){
  return "rst.vision.headObject.LabeledFace";
}

rst::vision::HeadObject::LabeledFace* rst::vision::HeadObject::LabeledFace::New(){
  return new rst::vision::HeadObject::LabeledFace();
}

int rst::vision::HeadObject::LabeledFace::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjectLabeledFace>(*this);

}

bool rst::vision::HeadObject::LabeledFace::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjectLabeledFace>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjectLabeledFace>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::HeadObject::LabeledFace::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjectLabeledFace>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::HeadObject::LabeledFace::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjectLabeledFace>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::HeadObject::LabeledFace::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObjectLabeledFace>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::vision::HeadObject

 const rst::vision::HeadObject& rst::vision::HeadObject::default_instance(){
  static rst::vision::HeadObject*instance=NULL;
  if(!instance)instance=new HeadObject();
  return *instance;
}

 const std::string rst::vision::HeadObject::GetTypeName(){
  return "rst.vision.HeadObject";
}

rst::vision::HeadObject* rst::vision::HeadObject::New(){
  return new rst::vision::HeadObject();
}

int rst::vision::HeadObject::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObject>(*this);

}

bool rst::vision::HeadObject::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObject>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObject>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::vision::HeadObject::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObject>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::vision::HeadObject::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObject>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::vision::HeadObject::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstvisionHeadObject>(temp,*this,0,size);
  return true;
  

}


