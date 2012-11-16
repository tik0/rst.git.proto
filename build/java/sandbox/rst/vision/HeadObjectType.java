/* This file is generated - do not edit. */

package rst.vision;

import rst.vision.FaceType;
import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;
import rst.tracking.TrackingInfoType;
import rst.math.Vec3DFloatType;
import rst.classification.ClassificationResultType;

public final class HeadObjectType {
    private HeadObjectType(){}
    
    public static final class HeadObject {
        public static final class LabeledFace {
            // TODO(label) OCTET-VECTOR label = TODO(number);
            public static final int LABELFIELD_NUMBER=1;
            
            private byte[] label;
            public boolean haslabel(){return true;}
            public byte[] getlabel(){return this.label;}
            
            // TODO(label)  face = TODO(number);
            public static final int FACEFIELD_NUMBER=1;
            
            private rst.vision.FaceType.Face face;
            public boolean hasface(){return true;}
            public rst.vision.FaceType.Face getface(){return this.face;}
            
            
            
        };
        // TODO(label)  tracking_info = TODO(number);
        public static final int TRACKING_INFOFIELD_NUMBER=1;
        
        private rst.tracking.TrackingInfoType.TrackingInfo tracking_info;
        public boolean hastracking_info(){return true;}
        public rst.tracking.TrackingInfoType.TrackingInfo gettracking_info(){return this.tracking_info;}
        
        // TODO(label)  region = TODO(number);
        public static final int REGIONFIELD_NUMBER=1;
        
        private rst.geometry.BoundingBoxType.BoundingBox region;
        public boolean hasregion(){return true;}
        public rst.geometry.BoundingBoxType.BoundingBox getregion(){return this.region;}
        
        // TODO(label)  position = TODO(number);
        public static final int POSITIONFIELD_NUMBER=1;
        
        private rst.math.Vec3DFloatType.Vec3DFloat position;
        public boolean hasposition(){return true;}
        public rst.math.Vec3DFloatType.Vec3DFloat getposition(){return this.position;}
        
        // TODO(label)  pose = TODO(number);
        public static final int POSEFIELD_NUMBER=1;
        
        private rst.math.Vec3DFloatType.Vec3DFloat pose;
        public boolean haspose(){return true;}
        public rst.math.Vec3DFloatType.Vec3DFloat getpose(){return this.pose;}
        
        // TODO(label)  faces = TODO(number);
        public static final int FACESFIELD_NUMBER=1;
        
        private rst.vision.HeadObjectType.HeadObject.LabeledFace faces;
        public boolean hasfaces(){return true;}
        public rst.vision.HeadObjectType.HeadObject.LabeledFace getfaces(){return this.faces;}
        
        // TODO(label) FLOAT32 speaking_probability = TODO(number);
        public static final int SPEAKING_PROBABILITYFIELD_NUMBER=1;
        
        private float speaking_probability;
        public boolean hasspeaking_probability(){return true;}
        public float getspeaking_probability(){return this.speaking_probability;}
        
        // TODO(label) OCTET-VECTOR vfoa_target = TODO(number);
        public static final int VFOA_TARGETFIELD_NUMBER=1;
        
        private byte[] vfoa_target;
        public boolean hasvfoa_target(){return true;}
        public byte[] getvfoa_target(){return this.vfoa_target;}
        
        // TODO(label)  identity = TODO(number);
        public static final int IDENTITYFIELD_NUMBER=1;
        
        private rst.classification.ClassificationResultType.ClassificationResult identity;
        public boolean hasidentity(){return true;}
        public rst.classification.ClassificationResultType.ClassificationResult getidentity(){return this.identity;}
        
        // TODO(label)  gender = TODO(number);
        public static final int GENDERFIELD_NUMBER=1;
        
        private rst.classification.ClassificationResultType.ClassificationResult gender;
        public boolean hasgender(){return true;}
        public rst.classification.ClassificationResultType.ClassificationResult getgender(){return this.gender;}
        
        // TODO(label)  age = TODO(number);
        public static final int AGEFIELD_NUMBER=1;
        
        private rst.classification.ClassificationResultType.ClassificationResult age;
        public boolean hasage(){return true;}
        public rst.classification.ClassificationResultType.ClassificationResult getage(){return this.age;}
        
        
        
    };
};