/* This file is generated - do not edit. */

package rst.vision;

import rst.vision.ImageType;
import rst.vision.StereoType;
import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;
import rst.math.Vec3DFloatType;

public final class ViSpeakingType {
    private ViSpeakingType(){}
    
    public static final class ViSpeaking {
        // TODO(label)  image = TODO(number);
        public static final int IMAGEFIELD_NUMBER=1;
        
        private rst.vision.ImageType.Image image;
        public boolean hasimage(){return true;}
        public rst.vision.ImageType.Image getimage(){return this.image;}
        
        // TODO(label)  stereo = TODO(number);
        public static final int STEREOFIELD_NUMBER=1;
        
        private rst.vision.StereoType.Stereo stereo;
        public boolean hasstereo(){return true;}
        public rst.vision.StereoType.Stereo getstereo(){return this.stereo;}
        
        // TODO(label)  itds = TODO(number);
        public static final int ITDSFIELD_NUMBER=1;
        
        private float itds;
        public boolean hasitds(){return true;}
        public float getitds(){return this.itds;}
        
        
        
    };
};