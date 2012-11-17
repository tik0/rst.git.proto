/* This file is generated - do not edit. */

#include "TaskState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcommunicationpatternsTaskState,rst.communicationpatterns.TaskState);
DEFINE_WIRE_SCHEMA(rstcommunicationpatternsTaskStateState,rst.communicationpatterns.TaskState.State);
DEFINE_WIRE_SCHEMA(rstcommunicationpatternsTaskStateOrigin,rst.communicationpatterns.TaskState.Origin);





// Type-independent protocol buffer API for rst::communicationpatterns::TaskState

 const rst::communicationpatterns::TaskState& rst::communicationpatterns::TaskState::default_instance(){
  static rst::communicationpatterns::TaskState*instance=NULL;
  if(!instance)instance=new TaskState();
  return *instance;
}

 const std::string rst::communicationpatterns::TaskState::GetTypeName(){
  return "rst.communicationpatterns.TaskState";
}

rst::communicationpatterns::TaskState* rst::communicationpatterns::TaskState::New(){
  return new rst::communicationpatterns::TaskState();
}


