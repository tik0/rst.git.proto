/* This file is generated - do not edit. */

package rst.dynamics;

import rst.dynamics.ForcesType;
import rst.dynamics.TorquesType;

public final class WrenchType {
    private WrenchType(){}
    
    public static final class Wrench {
        // TODO(label)  forces = TODO(number);
        public static final int FORCESFIELD_NUMBER=1;
        
        private rst.dynamics.ForcesType.Forces forces;
        public boolean hasforces(){return true;}
        public rst.dynamics.ForcesType.Forces getforces(){return this.forces;}
        
        // TODO(label)  torques = TODO(number);
        public static final int TORQUESFIELD_NUMBER=1;
        
        private rst.dynamics.TorquesType.Torques torques;
        public boolean hastorques(){return true;}
        public rst.dynamics.TorquesType.Torques gettorques(){return this.torques;}
        
        
        
    };
};