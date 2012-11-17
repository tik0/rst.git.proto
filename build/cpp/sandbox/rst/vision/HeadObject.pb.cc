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


