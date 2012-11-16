/* This file is generated - do not edit. */

package rst.geometry;

import rst.geometry.TranslationType;
import rst.geometry.RotationType;

public final class PoseType {
    private PoseType(){}
    
    public static final class Pose {
        // TODO(label)  translation = TODO(number);
        public static final int TRANSLATIONFIELD_NUMBER=1;
        
        private rst.geometry.TranslationType.Translation translation;
        public boolean hastranslation(){return true;}
        public rst.geometry.TranslationType.Translation gettranslation(){return this.translation;}
        
        // TODO(label)  rotation = TODO(number);
        public static final int ROTATIONFIELD_NUMBER=1;
        
        private rst.geometry.RotationType.Rotation rotation;
        public boolean hasrotation(){return true;}
        public rst.geometry.RotationType.Rotation getrotation(){return this.rotation;}
        
        
        
    };
};