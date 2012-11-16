/* This file is generated - do not edit. */

package rst.communicationpatterns;


public final class TaskStateType {
    private TaskStateType(){}
    
    public static final class TaskState {
        public enum State{
          INITIATED (0),
          ACCEPTED (1),
          REJECTED (2),
          UPDATE (3),
          UPDATE_REJECTED (4),
          ABORT (5),
          ABORTED (6),
          ABORT_FAILED (7),
          RESULT_AVAILABLE (8),
          COMPLETED (9),
          FAILED (10);
          
          private final int value;
          
          State(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum Origin{
          SUBMITTER (0),
          HANDLER (1);
          
          private final int value;
          
          Origin(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label)  origin = TODO(number);
        public static final int ORIGINFIELD_NUMBER=1;
        
        private rst.communicationpatterns.TaskStateType.TaskState.Origin origin;
        public boolean hasorigin(){return true;}
        public rst.communicationpatterns.TaskStateType.TaskState.Origin getorigin(){return this.origin;}
        
        // TODO(label)  state = TODO(number);
        public static final int STATEFIELD_NUMBER=1;
        
        private rst.communicationpatterns.TaskStateType.TaskState.State state;
        public boolean hasstate(){return true;}
        public rst.communicationpatterns.TaskStateType.TaskState.State getstate(){return this.state;}
        
        // TODO(label) UINT32 serial = TODO(number);
        public static final int SERIALFIELD_NUMBER=1;
        
        private int serial;
        public boolean hasserial(){return true;}
        public int getserial(){return this.serial;}
        
        // TODO(label) OCTET-VECTOR wire_schema = TODO(number);
        public static final int WIRE_SCHEMAFIELD_NUMBER=1;
        
        private byte[] wire_schema;
        public boolean haswire_schema(){return true;}
        public byte[] getwire_schema(){return this.wire_schema;}
        
        // TODO(label) OCTET-VECTOR payload = TODO(number);
        public static final int PAYLOADFIELD_NUMBER=1;
        
        private byte[] payload;
        public boolean haspayload(){return true;}
        public byte[] getpayload(){return this.payload;}
        
        
        
    };
};