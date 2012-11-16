/* This file is generated - do not edit. */

package rst.timing;

import rst.timing.TimestampType;

public final class IntervalType {
    private IntervalType(){}
    
    public static final class Interval {
        // TODO(label)  begin = TODO(number);
        public static final int BEGINFIELD_NUMBER=1;
        
        private rst.timing.TimestampType.Timestamp begin;
        public boolean hasbegin(){return true;}
        public rst.timing.TimestampType.Timestamp getbegin(){return this.begin;}
        
        // TODO(label)  end = TODO(number);
        public static final int ENDFIELD_NUMBER=1;
        
        private rst.timing.TimestampType.Timestamp end;
        public boolean hasend(){return true;}
        public rst.timing.TimestampType.Timestamp getend(){return this.end;}
        
        
        
    };
};