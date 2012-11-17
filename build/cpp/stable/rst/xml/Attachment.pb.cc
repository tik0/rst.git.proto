/* This file is generated - do not edit. */

#include "Attachment.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstxmlAttachment,rst.xml.Attachment);

// Type-independent protocol buffer API for rst::xml::Attachment

 const rst::xml::Attachment& rst::xml::Attachment::default_instance(){
  static rst::xml::Attachment*instance=NULL;
  if(!instance)instance=new Attachment();
  return *instance;
}

 const std::string rst::xml::Attachment::GetTypeName(){
  return "rst.xml.Attachment";
}

rst::xml::Attachment* rst::xml::Attachment::New(){
  return new rst::xml::Attachment();
}


