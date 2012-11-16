/* This file is generated - do not edit. */

package rst.vision;

import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;
import rst.math.Vec3DFloatType;

public final class StereoType {
    private StereoType(){}
    
    public static final class Stereo {
        // TODO(label)  face = TODO(number);
        public static final int FACEFIELD_NUMBER=1;
        
        private rst.geometry.BoundingBoxType.BoundingBox face;
        public boolean hasface(){return true;}
        public rst.geometry.BoundingBoxType.BoundingBox getface(){return this.face;}
        
        // TODO(label)  position = TODO(number);
        public static final int POSITIONFIELD_NUMBER=1;
        
        private rst.math.Vec3DFloatType.Vec3DFloat position;
        public boolean hasposition(){return true;}
        public rst.math.Vec3DFloatType.Vec3DFloat getposition(){return this.position;}
        
        // TODO(label) FLOAT32 speaking_probability = TODO(number);
        public static final int SPEAKING_PROBABILITYFIELD_NUMBER=1;
        
        private float speaking_probability;
        public boolean hasspeaking_probability(){return true;}
        public float getspeaking_probability(){return this.speaking_probability;}
        
        // TODO(label) FLOAT32 mapped_itd = TODO(number);
        public static final int MAPPED_ITDFIELD_NUMBER=1;
        
        private float mapped_itd;
        public boolean hasmapped_itd(){return true;}
        public float getmapped_itd(){return this.mapped_itd;}
        
        // TODO(label) INT32 track_id = TODO(number);
        public static final int TRACK_IDFIELD_NUMBER=1;
        
        private int track_id;
        public boolean hastrack_id(){return true;}
        public int gettrack_id(){return this.track_id;}
        
        
        
    };
};