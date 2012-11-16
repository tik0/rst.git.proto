/* This file is generated - do not edit. */

package rst.robot;


public final class RobotStateType {
    private RobotStateType(){}
    
    public static final class RobotState {
        public enum ConnectionStatus{
          CONNECTED (1),
          NOT_CONNECTED (2);
          
          private final int value;
          
          ConnectionStatus(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum MotionStatus{
          CONVERGED (1),
          MOVING (2);
          
          private final int value;
          
          MotionStatus(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum ForceStatus{
          CONSTANT (1),
          CHANGING (2);
          
          private final int value;
          
          ForceStatus(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label)  connection = TODO(number);
        public static final int CONNECTIONFIELD_NUMBER=1;
        
        private rst.robot.RobotStateType.RobotState.ConnectionStatus connection;
        public boolean hasconnection(){return true;}
        public rst.robot.RobotStateType.RobotState.ConnectionStatus getconnection(){return this.connection;}
        
        // TODO(label)  motion = TODO(number);
        public static final int MOTIONFIELD_NUMBER=1;
        
        private rst.robot.RobotStateType.RobotState.MotionStatus motion;
        public boolean hasmotion(){return true;}
        public rst.robot.RobotStateType.RobotState.MotionStatus getmotion(){return this.motion;}
        
        // TODO(label)  forces = TODO(number);
        public static final int FORCESFIELD_NUMBER=1;
        
        private rst.robot.RobotStateType.RobotState.ForceStatus forces;
        public boolean hasforces(){return true;}
        public rst.robot.RobotStateType.RobotState.ForceStatus getforces(){return this.forces;}
        
        
        
    };
};