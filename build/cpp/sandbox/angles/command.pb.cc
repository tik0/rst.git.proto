/* This file is generated - do not edit. */

#include "command.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(anglescommand,angles.command);
DEFINE_WIRE_SCHEMA(anglescommandINNER9455,angles.command.INNER9455);
DEFINE_WIRE_SCHEMA(anglescommandINNER9456,angles.command.INNER9456);





// Type-independent protocol buffer API for angles::command

 const angles::command& angles::command::default_instance(){
  static angles::command*instance=NULL;
  if(!instance)instance=new command();
  return *instance;
}

 const std::string angles::command::GetTypeName(){
  return "angles.command";
}

angles::command* angles::command::New(){
  return new angles::command();
}


