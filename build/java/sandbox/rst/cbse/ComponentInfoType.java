/* This file is generated - do not edit. */

package rst.cbse;

import rst.cbse.ComponentStateType;
import rst.cbse.InputPortType;
import rst.cbse.OutputPortType;
import rst.timing.DurationType;
import rst.timing.FrequencyType;

public final class ComponentInfoType {
    private ComponentInfoType(){}
    
    public static final class ComponentInfo {
        // TODO(label) ASCII-STRING id = TODO(number);
        public static final int IDFIELD_NUMBER=1;
        
        private String id;
        public boolean hasid(){return true;}
        public String getid(){return this.id;}
        
        // TODO(label)  lifecycle = TODO(number);
        public static final int LIFECYCLEFIELD_NUMBER=1;
        
        private rst.cbse.ComponentStateType.ComponentState lifecycle;
        public boolean haslifecycle(){return true;}
        public rst.cbse.ComponentStateType.ComponentState getlifecycle(){return this.lifecycle;}
        
        // TODO(label)  inputs = TODO(number);
        public static final int INPUTSFIELD_NUMBER=1;
        
        private rst.cbse.InputPortType.InputPort inputs;
        public boolean hasinputs(){return true;}
        public rst.cbse.InputPortType.InputPort getinputs(){return this.inputs;}
        
        // TODO(label)  outputs = TODO(number);
        public static final int OUTPUTSFIELD_NUMBER=1;
        
        private rst.cbse.OutputPortType.OutputPort outputs;
        public boolean hasoutputs(){return true;}
        public rst.cbse.OutputPortType.OutputPort getoutputs(){return this.outputs;}
        
        // TODO(label)  uptime = TODO(number);
        public static final int UPTIMEFIELD_NUMBER=1;
        
        private rst.timing.DurationType.Duration uptime;
        public boolean hasuptime(){return true;}
        public rst.timing.DurationType.Duration getuptime(){return this.uptime;}
        
        // TODO(label)  freqency = TODO(number);
        public static final int FREQENCYFIELD_NUMBER=1;
        
        private rst.timing.FrequencyType.Frequency freqency;
        public boolean hasfreqency(){return true;}
        public rst.timing.FrequencyType.Frequency getfreqency(){return this.freqency;}
        
        
        
    };
};