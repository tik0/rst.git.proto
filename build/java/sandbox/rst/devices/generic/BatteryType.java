/* This file is generated - do not edit. */

package rst.devices.generic;


public final class BatteryType {
    private BatteryType(){}
    
    public static final class Battery {
        // TODO(label) FLOAT32 battery_status = TODO(number);
        public static final int BATTERY_STATUSFIELD_NUMBER=1;
        
        private float battery_status;
        public boolean hasbattery_status(){return true;}
        public float getbattery_status(){return this.battery_status;}
        
        // TODO(label) FLOAT32 battery_charge = TODO(number);
        public static final int BATTERY_CHARGEFIELD_NUMBER=1;
        
        private float battery_charge;
        public boolean hasbattery_charge(){return true;}
        public float getbattery_charge(){return this.battery_charge;}
        
        // TODO(label) FLOAT32 battery_temperature = TODO(number);
        public static final int BATTERY_TEMPERATUREFIELD_NUMBER=1;
        
        private float battery_temperature;
        public boolean hasbattery_temperature(){return true;}
        public float getbattery_temperature(){return this.battery_temperature;}
        
        
        
    };
};