/* This file is generated - do not edit. */

package rst.vision;

import rst.vision.ImageType;
import rst.vision.FaceType;
import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;

public final class IFacesType {
    private IFacesType(){}
    
    public static final class IFaces {
        // TODO(label)  image = TODO(number);
        public static final int IMAGEFIELD_NUMBER=1;
        
        private rst.vision.ImageType.Image image;
        public boolean hasimage(){return true;}
        public rst.vision.ImageType.Image getimage(){return this.image;}
        
        // TODO(label)  faces = TODO(number);
        public static final int FACESFIELD_NUMBER=1;
        
        private rst.vision.FaceType.Face faces;
        public boolean hasfaces(){return true;}
        public rst.vision.FaceType.Face getfaces(){return this.faces;}
        
        
        
    };
};