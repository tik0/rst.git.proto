/* This file is generated - do not edit. */

package rst.timing;

import rst.math.Vec2DFloatType;
import rst.timing.TimestampType;

public final class Point2DTimestampPairType {
    private Point2DTimestampPairType(){}
    
    public static final class Point2DTimestampPair {
        // TODO(label)  point = TODO(number);
        public static final int POINTFIELD_NUMBER=1;
        
        private rst.math.Vec2DFloatType.Vec2DFloat point;
        public boolean haspoint(){return true;}
        public rst.math.Vec2DFloatType.Vec2DFloat getpoint(){return this.point;}
        
        // TODO(label)  timestamp = TODO(number);
        public static final int TIMESTAMPFIELD_NUMBER=1;
        
        private rst.timing.TimestampType.Timestamp timestamp;
        public boolean hastimestamp(){return true;}
        public rst.timing.TimestampType.Timestamp gettimestamp(){return this.timestamp;}
        
        
        
    };
};