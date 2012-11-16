/* This file is generated - do not edit. */

package rst.cbse;


public final class ComponentStateType {
    private ComponentStateType(){}
    
    public static final class ComponentState {
        public enum State{
          OFF (1),
          ON (2),
          PAUSED (3),
          EXECUTION (4),
          ONLINELEARNING (5),
          OFFLINELEARNING (6),
          RESET (7);
          
          private final int value;
          
          State(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label)  state = TODO(number);
        public static final int STATEFIELD_NUMBER=1;
        
        private rst.cbse.ComponentStateType.ComponentState.State state;
        public boolean hasstate(){return true;}
        public rst.cbse.ComponentStateType.ComponentState.State getstate(){return this.state;}
        
        
        
    };
};