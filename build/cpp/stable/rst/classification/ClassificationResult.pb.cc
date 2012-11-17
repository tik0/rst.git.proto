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


