/* This file is generated - do not edit. */

package angles;


public final class commandType {
    private commandType(){}
    
    public static final class command {
        public enum INNER9455{
          set (7628147);
          
          private final int value;
          
          INNER9455(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum INNER9456{
          poss (1936945008);
          
          private final int value;
          
          INNER9456(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label)  action = TODO(number);
        public static final int ACTIONFIELD_NUMBER=1;
        
        private angles.commandType.command.INNER9455 action;
        public boolean hasaction(){return true;}
        public angles.commandType.command.INNER9455 getaction(){return this.action;}
        
        // TODO(label)  mode = TODO(number);
        public static final int MODEFIELD_NUMBER=1;
        
        private angles.commandType.command.INNER9456 mode;
        public boolean hasmode(){return true;}
        public angles.commandType.command.INNER9456 getmode(){return this.mode;}
        
        // TODO(label)  angles = TODO(number);
        public static final int ANGLESFIELD_NUMBER=1;
        
        private float angles;
        public boolean hasangles(){return true;}
        public float getangles(){return this.angles;}
        
        
        
    };
};