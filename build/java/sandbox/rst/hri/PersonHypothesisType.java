/* This file is generated - do not edit. */

package rst.hri;

import rst.tracking.TrackingInfoType;
import rst.math.Vec2DFloatType;
import rst.vision.FaceType;
import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;

public final class PersonHypothesisType {
    private PersonHypothesisType(){}
    
    public static final class PersonHypothesis {
        // TODO(label)  tracking_info = TODO(number);
        public static final int TRACKING_INFOFIELD_NUMBER=1;
        
        private rst.tracking.TrackingInfoType.TrackingInfo tracking_info;
        public boolean hastracking_info(){return true;}
        public rst.tracking.TrackingInfoType.TrackingInfo gettracking_info(){return this.tracking_info;}
        
        // TODO(label)  position = TODO(number);
        public static final int POSITIONFIELD_NUMBER=1;
        
        private rst.math.Vec2DFloatType.Vec2DFloat position;
        public boolean hasposition(){return true;}
        public rst.math.Vec2DFloatType.Vec2DFloat getposition(){return this.position;}
        
        // TODO(label)  face = TODO(number);
        public static final int FACEFIELD_NUMBER=1;
        
        private rst.vision.FaceType.Face face;
        public boolean hasface(){return true;}
        public rst.vision.FaceType.Face getface(){return this.face;}
        
        
        
    };
};