/* This file is generated - do not edit. */

package rst.vision;

import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;

public final class FaceType {
    private FaceType(){}
    
    public static final class Face {
        // TODO(label)  region = TODO(number);
        public static final int REGIONFIELD_NUMBER=1;
        
        private rst.geometry.BoundingBoxType.BoundingBox region;
        public boolean hasregion(){return true;}
        public rst.geometry.BoundingBoxType.BoundingBox getregion(){return this.region;}
        
        // TODO(label) FLOAT64 confidence = TODO(number);
        public static final int CONFIDENCEFIELD_NUMBER=1;
        
        private float confidence;
        public boolean hasconfidence(){return true;}
        public float getconfidence(){return this.confidence;}
        
        
        
    };
};