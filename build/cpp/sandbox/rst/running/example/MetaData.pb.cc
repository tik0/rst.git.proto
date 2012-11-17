/* This file is generated - do not edit. */

#include "MetaData.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstrunningexampleMetaData,rst.running.example.MetaData);

// Type-independent protocol buffer API for rst::running::example::MetaData

 const rst::running::example::MetaData& rst::running::example::MetaData::default_instance(){
  static rst::running::example::MetaData*instance=NULL;
  if(!instance)instance=new MetaData();
  return *instance;
}

 const std::string rst::running::example::MetaData::GetTypeName(){
  return "rst.running.example.MetaData";
}

rst::running::example::MetaData* rst::running::example::MetaData::New(){
  return new rst::running::example::MetaData();
}


