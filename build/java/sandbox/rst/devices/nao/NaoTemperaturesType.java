/* This file is generated - do not edit. */

package rst.devices.nao;

import rst.devices.nao.JointTemperatureType;

public final class NaoTemperaturesType {
    private NaoTemperaturesType(){}
    
    public static final class NaoTemperatures {
        // TODO(label) FLOAT32 board = TODO(number);
        public static final int BOARDFIELD_NUMBER=1;
        
        private float board;
        public boolean hasboard(){return true;}
        public float getboard(){return this.board;}
        
        // TODO(label) FLOAT32 head = TODO(number);
        public static final int HEADFIELD_NUMBER=1;
        
        private float head;
        public boolean hashead(){return true;}
        public float gethead(){return this.head;}
        
        // TODO(label)  joints = TODO(number);
        public static final int JOINTSFIELD_NUMBER=1;
        
        private rst.devices.nao.JointTemperatureType.JointTemperature joints;
        public boolean hasjoints(){return true;}
        public rst.devices.nao.JointTemperatureType.JointTemperature getjoints(){return this.joints;}
        
        
        
    };
};