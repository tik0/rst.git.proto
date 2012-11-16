/* This file is generated - do not edit. */

package rst.devices.mocap;

import rst.math.Vec3DDoubleType;

public final class ViconType {
    private ViconType(){}
    
    public static final class Vicon {
        public static final class UnlabeledMarker {
            // TODO(label) ASCII-STRING name = TODO(number);
            public static final int NAMEFIELD_NUMBER=1;
            
            private String name;
            public boolean hasname(){return true;}
            public String getname(){return this.name;}
            
            // TODO(label)  translation = TODO(number);
            public static final int TRANSLATIONFIELD_NUMBER=1;
            
            private rst.math.Vec3DDoubleType.Vec3DDouble translation;
            public boolean hastranslation(){return true;}
            public rst.math.Vec3DDoubleType.Vec3DDouble gettranslation(){return this.translation;}
            
            
            
        };
        public static final class Timecode {
            // TODO(label) UINT32 hours = TODO(number);
            public static final int HOURSFIELD_NUMBER=1;
            
            private int hours;
            public boolean hashours(){return true;}
            public int gethours(){return this.hours;}
            
            // TODO(label) UINT32 minutes = TODO(number);
            public static final int MINUTESFIELD_NUMBER=1;
            
            private int minutes;
            public boolean hasminutes(){return true;}
            public int getminutes(){return this.minutes;}
            
            // TODO(label) UINT32 seconds = TODO(number);
            public static final int SECONDSFIELD_NUMBER=1;
            
            private int seconds;
            public boolean hasseconds(){return true;}
            public int getseconds(){return this.seconds;}
            
            // TODO(label) UINT32 frames = TODO(number);
            public static final int FRAMESFIELD_NUMBER=1;
            
            private int frames;
            public boolean hasframes(){return true;}
            public int getframes(){return this.frames;}
            
            // TODO(label) UINT32 sub_frame = TODO(number);
            public static final int SUB_FRAMEFIELD_NUMBER=1;
            
            private int sub_frame;
            public boolean hassub_frame(){return true;}
            public int getsub_frame(){return this.sub_frame;}
            
            
            
        };
        public static final class Segment {
            public static final class Marker {
                // TODO(label) ASCII-STRING name = TODO(number);
                public static final int NAMEFIELD_NUMBER=1;
                
                private String name;
                public boolean hasname(){return true;}
                public String getname(){return this.name;}
                
                // TODO(label)  translation = TODO(number);
                public static final int TRANSLATIONFIELD_NUMBER=1;
                
                private rst.math.Vec3DDoubleType.Vec3DDouble translation;
                public boolean hastranslation(){return true;}
                public rst.math.Vec3DDoubleType.Vec3DDouble gettranslation(){return this.translation;}
                
                
                
            };
            // TODO(label) ASCII-STRING name = TODO(number);
            public static final int NAMEFIELD_NUMBER=1;
            
            private String name;
            public boolean hasname(){return true;}
            public String getname(){return this.name;}
            
            // TODO(label)  markers = TODO(number);
            public static final int MARKERSFIELD_NUMBER=1;
            
            private rst.devices.mocap.ViconType.Vicon.Segment.Marker markers;
            public boolean hasmarkers(){return true;}
            public rst.devices.mocap.ViconType.Vicon.Segment.Marker getmarkers(){return this.markers;}
            
            // TODO(label)  translation = TODO(number);
            public static final int TRANSLATIONFIELD_NUMBER=1;
            
            private rst.math.Vec3DDoubleType.Vec3DDouble translation;
            public boolean hastranslation(){return true;}
            public rst.math.Vec3DDoubleType.Vec3DDouble gettranslation(){return this.translation;}
            
            // TODO(label)  euler_orientation = TODO(number);
            public static final int EULER_ORIENTATIONFIELD_NUMBER=1;
            
            private rst.math.Vec3DDoubleType.Vec3DDouble euler_orientation;
            public boolean haseuler_orientation(){return true;}
            public rst.math.Vec3DDoubleType.Vec3DDouble geteuler_orientation(){return this.euler_orientation;}
            
            // TODO(label)  helical_orientation = TODO(number);
            public static final int HELICAL_ORIENTATIONFIELD_NUMBER=1;
            
            private rst.math.Vec3DDoubleType.Vec3DDouble helical_orientation;
            public boolean hashelical_orientation(){return true;}
            public rst.math.Vec3DDoubleType.Vec3DDouble gethelical_orientation(){return this.helical_orientation;}
            
            // TODO(label)  quaternionen_orientation = TODO(number);
            public static final int QUATERNIONEN_ORIENTATIONFIELD_NUMBER=1;
            
            private rst.math.Vec3DDoubleType.Vec3DDouble quaternionen_orientation;
            public boolean hasquaternionen_orientation(){return true;}
            public rst.math.Vec3DDoubleType.Vec3DDouble getquaternionen_orientation(){return this.quaternionen_orientation;}
            
            
            
        };
        public static final class Subject {
            // TODO(label) ASCII-STRING name = TODO(number);
            public static final int NAMEFIELD_NUMBER=1;
            
            private String name;
            public boolean hasname(){return true;}
            public String getname(){return this.name;}
            
            // TODO(label)  segments = TODO(number);
            public static final int SEGMENTSFIELD_NUMBER=1;
            
            private rst.devices.mocap.ViconType.Vicon.Segment segments;
            public boolean hassegments(){return true;}
            public rst.devices.mocap.ViconType.Vicon.Segment getsegments(){return this.segments;}
            
            
            
        };
        // TODO(label) UINT64 frame = TODO(number);
        public static final int FRAMEFIELD_NUMBER=1;
        
        private int frame;
        public boolean hasframe(){return true;}
        public int getframe(){return this.frame;}
        
        // TODO(label)  timecode = TODO(number);
        public static final int TIMECODEFIELD_NUMBER=1;
        
        private rst.devices.mocap.ViconType.Vicon.Timecode timecode;
        public boolean hastimecode(){return true;}
        public rst.devices.mocap.ViconType.Vicon.Timecode gettimecode(){return this.timecode;}
        
        // TODO(label)  subject = TODO(number);
        public static final int SUBJECTFIELD_NUMBER=1;
        
        private rst.devices.mocap.ViconType.Vicon.Subject subject;
        public boolean hassubject(){return true;}
        public rst.devices.mocap.ViconType.Vicon.Subject getsubject(){return this.subject;}
        
        // TODO(label)  unlabeled_marker = TODO(number);
        public static final int UNLABELED_MARKERFIELD_NUMBER=1;
        
        private rst.devices.mocap.ViconType.Vicon.UnlabeledMarker unlabeled_marker;
        public boolean hasunlabeled_marker(){return true;}
        public rst.devices.mocap.ViconType.Vicon.UnlabeledMarker getunlabeled_marker(){return this.unlabeled_marker;}
        
        
        
    };
};