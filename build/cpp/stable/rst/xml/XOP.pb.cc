/* This file is generated - do not edit. */

#include "XOP.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstxmlXOP,rst.xml.XOP);

// Type-independent protocol buffer API for rst::xml::XOP

 const rst::xml::XOP& rst::xml::XOP::default_instance(){
  static rst::xml::XOP*instance=NULL;
  if(!instance)instance=new XOP();
  return *instance;
}

 const std::string rst::xml::XOP::GetTypeName(){
  return "rst.xml.XOP";
}

rst::xml::XOP* rst::xml::XOP::New(){
  return new rst::xml::XOP();
}


