/* This file is generated - do not edit. */

#include "ClassificationResult.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstclassificationClassificationResult,rst.classification.ClassificationResult);
DEFINE_WIRE_SCHEMA(rstclassificationClassificationResultClassWithProbability,rst.classification.ClassificationResult.ClassWithProbability);

// Type-independent protocol buffer API for rst::classification::classificationResult::ClassWithProbability

 const rst::classification::ClassificationResult::ClassWithProbability& rst::classification::ClassificationResult::ClassWithProbability::default_instance(){
  static rst::classification::ClassificationResult::ClassWithProbability*instance=NULL;
  if(!instance)instance=new ClassWithProbability();
  return *instance;
}

 const std::string rst::classification::ClassificationResult::ClassWithProbability::GetTypeName(){
  return "rst.classification.classificationResult.ClassWithProbability";
}

rst::classification::ClassificationResult::ClassWithProbability* rst::classification::ClassificationResult::ClassWithProbability::New(){
  return new rst::classification::ClassificationResult::ClassWithProbability();
}

int rst::classification::ClassificationResult::ClassWithProbability::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResultClassWithProbability>(*this);

}

bool rst::classification::ClassificationResult::ClassWithProbability::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResultClassWithProbability>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResultClassWithProbability>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::classification::ClassificationResult::ClassWithProbability::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResultClassWithProbability>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::classification::ClassificationResult::ClassWithProbability::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResultClassWithProbability>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::classification::ClassificationResult::ClassWithProbability::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResultClassWithProbability>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::classification::ClassificationResult

 const rst::classification::ClassificationResult& rst::classification::ClassificationResult::default_instance(){
  static rst::classification::ClassificationResult*instance=NULL;
  if(!instance)instance=new ClassificationResult();
  return *instance;
}

 const std::string rst::classification::ClassificationResult::GetTypeName(){
  return "rst.classification.ClassificationResult";
}

rst::classification::ClassificationResult* rst::classification::ClassificationResult::New(){
  return new rst::classification::ClassificationResult();
}

int rst::classification::ClassificationResult::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResult>(*this);

}

bool rst::classification::ClassificationResult::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResult>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResult>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::classification::ClassificationResult::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResult>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::classification::ClassificationResult::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResult>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::classification::ClassificationResult::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstclassificationClassificationResult>(temp,*this,0,size);
  return true;
  

}


