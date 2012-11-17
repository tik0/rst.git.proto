/* This file is generated - do not edit. */

#include "Vicon.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesmocapVicon,rst.devices.mocap.Vicon);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconUnlabeledMarker,rst.devices.mocap.Vicon.UnlabeledMarker);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconTimecode,rst.devices.mocap.Vicon.Timecode);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconSegment,rst.devices.mocap.Vicon.Segment);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconSegmentMarker,rst.devices.mocap.Vicon.Segment.Marker);
DEFINE_WIRE_SCHEMA(rstdevicesmocapViconSubject,rst.devices.mocap.Vicon.Subject);

// Type-independent protocol buffer API for rst::devices::mocap::vicon::UnlabeledMarker

 const rst::devices::mocap::Vicon::UnlabeledMarker& rst::devices::mocap::Vicon::UnlabeledMarker::default_instance(){
  static rst::devices::mocap::Vicon::UnlabeledMarker*instance=NULL;
  if(!instance)instance=new UnlabeledMarker();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::UnlabeledMarker::GetTypeName(){
  return "rst.devices.mocap.vicon.UnlabeledMarker";
}

rst::devices::mocap::Vicon::UnlabeledMarker* rst::devices::mocap::Vicon::UnlabeledMarker::New(){
  return new rst::devices::mocap::Vicon::UnlabeledMarker();
}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::Timecode

 const rst::devices::mocap::Vicon::Timecode& rst::devices::mocap::Vicon::Timecode::default_instance(){
  static rst::devices::mocap::Vicon::Timecode*instance=NULL;
  if(!instance)instance=new Timecode();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Timecode::GetTypeName(){
  return "rst.devices.mocap.vicon.Timecode";
}

rst::devices::mocap::Vicon::Timecode* rst::devices::mocap::Vicon::Timecode::New(){
  return new rst::devices::mocap::Vicon::Timecode();
}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::segment::Marker

 const rst::devices::mocap::Vicon::Segment::Marker& rst::devices::mocap::Vicon::Segment::Marker::default_instance(){
  static rst::devices::mocap::Vicon::Segment::Marker*instance=NULL;
  if(!instance)instance=new Marker();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Segment::Marker::GetTypeName(){
  return "rst.devices.mocap.vicon.segment.Marker";
}

rst::devices::mocap::Vicon::Segment::Marker* rst::devices::mocap::Vicon::Segment::Marker::New(){
  return new rst::devices::mocap::Vicon::Segment::Marker();
}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::Segment

 const rst::devices::mocap::Vicon::Segment& rst::devices::mocap::Vicon::Segment::default_instance(){
  static rst::devices::mocap::Vicon::Segment*instance=NULL;
  if(!instance)instance=new Segment();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Segment::GetTypeName(){
  return "rst.devices.mocap.vicon.Segment";
}

rst::devices::mocap::Vicon::Segment* rst::devices::mocap::Vicon::Segment::New(){
  return new rst::devices::mocap::Vicon::Segment();
}



// Type-independent protocol buffer API for rst::devices::mocap::vicon::Subject

 const rst::devices::mocap::Vicon::Subject& rst::devices::mocap::Vicon::Subject::default_instance(){
  static rst::devices::mocap::Vicon::Subject*instance=NULL;
  if(!instance)instance=new Subject();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::Subject::GetTypeName(){
  return "rst.devices.mocap.vicon.Subject";
}

rst::devices::mocap::Vicon::Subject* rst::devices::mocap::Vicon::Subject::New(){
  return new rst::devices::mocap::Vicon::Subject();
}



// Type-independent protocol buffer API for rst::devices::mocap::Vicon

 const rst::devices::mocap::Vicon& rst::devices::mocap::Vicon::default_instance(){
  static rst::devices::mocap::Vicon*instance=NULL;
  if(!instance)instance=new Vicon();
  return *instance;
}

 const std::string rst::devices::mocap::Vicon::GetTypeName(){
  return "rst.devices.mocap.Vicon";
}

rst::devices::mocap::Vicon* rst::devices::mocap::Vicon::New(){
  return new rst::devices::mocap::Vicon();
}


