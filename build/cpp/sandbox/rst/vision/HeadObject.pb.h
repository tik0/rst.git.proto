/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/vision/Face.pb.h>
#include <rst/geometry/BoundingBox.pb.h>
#include <rst/math/Vec2DInt.pb.h>
#include <rst/tracking/TrackingInfo.pb.h>
#include <rst/math/Vec3DFloat.pb.h>
#include <rst/classification/ClassificationResult.pb.h>

namespace rst {
namespace vision {

class HeadObject{
public:
  // Nested Types
  class LabeledFace{
  public:
    // Accessors
    /**
     * Field number of the "label" field.
     */
    static const int klabelFieldNumber = 0;
    
    /**
     * Return true if the "label" field is present.
     */
    inline bool has_label() const;
    
    /**
     * Return value of "label" field.
     */
    inline const std::vector<unsigned char>&label() const;
    
    /**
     * Return value of "label" field.
     */
    inline std::vector<unsigned char>*mutable_label();
    
    inline void set_label(const std::vector<unsigned char>&newValue);
    inline void set_label(const std::string&newValue);
    inline void set_label(const boost::uint8_t* data,unsigned int size);
    
    /**
     * Field number of the "face" field.
     */
    static const int kfaceFieldNumber = 0;
    
    /**
     * Return true if the "face" field is present.
     */
    inline bool has_face() const;
    
    /**
     * Return value of "face" field.
     */
    inline const rst::vision::Face&face() const;
    
    /**
     * Return value of "face" field.
     */
    inline rst::vision::Face*mutable_face();
    
    inline void set_face(const rst::vision::Face&newValue);
    
    
    // Type-independent protocol buffer API
    
    /**
     * Return the default instance of this class.
     * 
     * @return A reference to the default instance.
    
     */
    static const LabeledFace& default_instance();
    
    /**
     * Return the fully qualified name of this class.
     */
    static const std::string GetTypeName();
    
    /**
     * Return a new instance of this class.
     */
    LabeledFace* New();
    
    /**
     * Return the number of octets required to store the serialized
     * representation of this object.
    
     */
    int ByteSize() const;
    
    bool SerializeToString(std::string* destination) const;
    
    bool ParseFromString(const std::string& source);
    
    bool SerializeToArray(void* destination,int size) const;
    
    bool ParseFromArray(const void* source,int size);
    
    std::vector<unsigned char> _label;
    rst::vision::Face _face;
    
  };
  
  // Accessors
  /**
   * Field number of the "tracking_info" field.
   */
  static const int ktracking_infoFieldNumber = 0;
  
  /**
   * Return true if the "tracking_info" field is present.
   */
  inline bool has_tracking_info() const;
  
  /**
   * Return value of "tracking_info" field.
   */
  inline const rst::tracking::TrackingInfo&tracking_info() const;
  
  /**
   * Return value of "tracking_info" field.
   */
  inline rst::tracking::TrackingInfo*mutable_tracking_info();
  
  inline void set_tracking_info(const rst::tracking::TrackingInfo&newValue);
  
  
  /**
   * Field number of the "region" field.
   */
  static const int kregionFieldNumber = 0;
  
  /**
   * Return true if the "region" field is present.
   */
  inline bool has_region() const;
  
  /**
   * Return value of "region" field.
   */
  inline const rst::geometry::BoundingBox&region() const;
  
  /**
   * Return value of "region" field.
   */
  inline rst::geometry::BoundingBox*mutable_region();
  
  inline void set_region(const rst::geometry::BoundingBox&newValue);
  
  
  /**
   * Field number of the "position" field.
   */
  static const int kpositionFieldNumber = 0;
  
  /**
   * Return true if the "position" field is present.
   */
  inline bool has_position() const;
  
  /**
   * Return value of "position" field.
   */
  inline const rst::math::Vec3DFloat&position() const;
  
  /**
   * Return value of "position" field.
   */
  inline rst::math::Vec3DFloat*mutable_position();
  
  inline void set_position(const rst::math::Vec3DFloat&newValue);
  
  
  /**
   * Field number of the "pose" field.
   */
  static const int kposeFieldNumber = 0;
  
  /**
   * Return true if the "pose" field is present.
   */
  inline bool has_pose() const;
  
  /**
   * Return value of "pose" field.
   */
  inline const rst::math::Vec3DFloat&pose() const;
  
  /**
   * Return value of "pose" field.
   */
  inline rst::math::Vec3DFloat*mutable_pose();
  
  inline void set_pose(const rst::math::Vec3DFloat&newValue);
  
  
  /**
   * Field number of the "faces" field.
   */
  static const int kfacesFieldNumber = 0;
  
  /**
   * Return true if the "faces" field is present.
   */
  inline bool has_faces() const;
  
  /**
   * Return the number of elements in "faces".
   */
  inline int faces_size() const;
  /**
   * Return the element at @a index of "faces".
   */
  inline const rst::vision::HeadObject::LabeledFace& faces(unsigned int index) const;
  /**
   * Return value of "faces" field.
   */
  inline const std::vector<rst::vision::HeadObject::LabeledFace>&faces() const;
  
  
  /**
   * Set element at index @a index of "faces" to @a newValue.
   */
  inline void set_faces(unsigned int index,const rst::vision::HeadObject::LabeledFace& newValue);
  /**
   * Append an item to "faces" and return a pointer to it.
   */
  inline rst::vision::HeadObject::LabeledFace* add_faces();
  
  /**
   * Field number of the "speaking_probability" field.
   */
  static const int kspeaking_probabilityFieldNumber = 0;
  
  /**
   * Return true if the "speaking_probability" field is present.
   */
  inline bool has_speaking_probability() const;
  
  /**
   * Return value of "speaking_probability" field.
   */
  inline const float&speaking_probability() const;
  
  inline void set_speaking_probability(const float&newValue);
  
  
  /**
   * Field number of the "vfoa_target" field.
   */
  static const int kvfoa_targetFieldNumber = 0;
  
  /**
   * Return true if the "vfoa_target" field is present.
   */
  inline bool has_vfoa_target() const;
  
  /**
   * Return value of "vfoa_target" field.
   */
  inline const std::vector<unsigned char>&vfoa_target() const;
  
  /**
   * Return value of "vfoa_target" field.
   */
  inline std::vector<unsigned char>*mutable_vfoa_target();
  
  inline void set_vfoa_target(const std::vector<unsigned char>&newValue);
  inline void set_vfoa_target(const std::string&newValue);
  inline void set_vfoa_target(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "identity" field.
   */
  static const int kidentityFieldNumber = 0;
  
  /**
   * Return true if the "identity" field is present.
   */
  inline bool has_identity() const;
  
  /**
   * Return value of "identity" field.
   */
  inline const rst::classification::ClassificationResult&identity() const;
  
  /**
   * Return value of "identity" field.
   */
  inline rst::classification::ClassificationResult*mutable_identity();
  
  inline void set_identity(const rst::classification::ClassificationResult&newValue);
  
  
  /**
   * Field number of the "gender" field.
   */
  static const int kgenderFieldNumber = 0;
  
  /**
   * Return true if the "gender" field is present.
   */
  inline bool has_gender() const;
  
  /**
   * Return value of "gender" field.
   */
  inline const rst::classification::ClassificationResult&gender() const;
  
  /**
   * Return value of "gender" field.
   */
  inline rst::classification::ClassificationResult*mutable_gender();
  
  inline void set_gender(const rst::classification::ClassificationResult&newValue);
  
  
  /**
   * Field number of the "age" field.
   */
  static const int kageFieldNumber = 0;
  
  /**
   * Return true if the "age" field is present.
   */
  inline bool has_age() const;
  
  /**
   * Return value of "age" field.
   */
  inline const rst::classification::ClassificationResult&age() const;
  
  /**
   * Return value of "age" field.
   */
  inline rst::classification::ClassificationResult*mutable_age();
  
  inline void set_age(const rst::classification::ClassificationResult&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const HeadObject& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  HeadObject* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::tracking::TrackingInfo _tracking_info;
  rst::geometry::BoundingBox _region;
  rst::math::Vec3DFloat _position;
  rst::math::Vec3DFloat _pose;
  std::vector<rst::vision::HeadObject::LabeledFace> _faces;
  float _speaking_probability;
  std::vector<unsigned char> _vfoa_target;
  rst::classification::ClassificationResult _identity;
  rst::classification::ClassificationResult _gender;
  rst::classification::ClassificationResult _age;
  
};
}
}

// Inlined Stuff

// Accessors for rst::vision::headObject::LabeledFace

 bool rst::vision::HeadObject::LabeledFace::has_label() const{
  return true;
}

 const std::vector<unsigned char>&rst::vision::HeadObject::LabeledFace::label() const{
  return this->_label;
}

 std::vector<unsigned char>*rst::vision::HeadObject::LabeledFace::mutable_label(){
  return &this->_label;
}

 void rst::vision::HeadObject::LabeledFace::set_label(const std::vector<unsigned char>&newValue){
  this->_label=newValue;
}
 void rst::vision::HeadObject::LabeledFace::set_label(const std::string&newValue){
  this->_label.resize(newValue.size());
  memcpy(&this->_label[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::vision::HeadObject::LabeledFace::set_label(const boost::uint8_t* data,unsigned int size){
  this->_label.resize(size);
  memcpy(&this->_label[0],data,size);
}


 bool rst::vision::HeadObject::LabeledFace::has_face() const{
  return true;
}

 const rst::vision::Face&rst::vision::HeadObject::LabeledFace::face() const{
  return this->_face;
}

 rst::vision::Face*rst::vision::HeadObject::LabeledFace::mutable_face(){
  return &this->_face;
}

 void rst::vision::HeadObject::LabeledFace::set_face(const rst::vision::Face&newValue){
  this->_face=newValue;
}





// Accessors for rst::vision::HeadObject

 bool rst::vision::HeadObject::has_tracking_info() const{
  return true;
}

 const rst::tracking::TrackingInfo&rst::vision::HeadObject::tracking_info() const{
  return this->_tracking_info;
}

 rst::tracking::TrackingInfo*rst::vision::HeadObject::mutable_tracking_info(){
  return &this->_tracking_info;
}

 void rst::vision::HeadObject::set_tracking_info(const rst::tracking::TrackingInfo&newValue){
  this->_tracking_info=newValue;
}



 bool rst::vision::HeadObject::has_region() const{
  return true;
}

 const rst::geometry::BoundingBox&rst::vision::HeadObject::region() const{
  return this->_region;
}

 rst::geometry::BoundingBox*rst::vision::HeadObject::mutable_region(){
  return &this->_region;
}

 void rst::vision::HeadObject::set_region(const rst::geometry::BoundingBox&newValue){
  this->_region=newValue;
}



 bool rst::vision::HeadObject::has_position() const{
  return true;
}

 const rst::math::Vec3DFloat&rst::vision::HeadObject::position() const{
  return this->_position;
}

 rst::math::Vec3DFloat*rst::vision::HeadObject::mutable_position(){
  return &this->_position;
}

 void rst::vision::HeadObject::set_position(const rst::math::Vec3DFloat&newValue){
  this->_position=newValue;
}



 bool rst::vision::HeadObject::has_pose() const{
  return true;
}

 const rst::math::Vec3DFloat&rst::vision::HeadObject::pose() const{
  return this->_pose;
}

 rst::math::Vec3DFloat*rst::vision::HeadObject::mutable_pose(){
  return &this->_pose;
}

 void rst::vision::HeadObject::set_pose(const rst::math::Vec3DFloat&newValue){
  this->_pose=newValue;
}



 bool rst::vision::HeadObject::has_faces() const{
  return true;
}

 int rst::vision::HeadObject::faces_size() const{
  return this->_faces.size();
}
 const rst::vision::HeadObject::LabeledFace& rst::vision::HeadObject::faces(unsigned int index) const{
  return this->_faces[index];
}
 const std::vector<rst::vision::HeadObject::LabeledFace>&rst::vision::HeadObject::faces() const{
  return this->_faces;
}



 void rst::vision::HeadObject::set_faces(unsigned int index,const rst::vision::HeadObject::LabeledFace& newValue){
  if(this->_faces.size()<=index){
    this->_faces.resize(index+1);
  }
  this->_faces[index]=newValue;

}
 rst::vision::HeadObject::LabeledFace* rst::vision::HeadObject::add_faces(){
  this->_faces.resize(this->_faces.size()+1);
  return &this->_faces.back();

}

 bool rst::vision::HeadObject::has_speaking_probability() const{
  return true;
}

 const float&rst::vision::HeadObject::speaking_probability() const{
  return this->_speaking_probability;
}

 void rst::vision::HeadObject::set_speaking_probability(const float&newValue){
  this->_speaking_probability=newValue;
}



 bool rst::vision::HeadObject::has_vfoa_target() const{
  return true;
}

 const std::vector<unsigned char>&rst::vision::HeadObject::vfoa_target() const{
  return this->_vfoa_target;
}

 std::vector<unsigned char>*rst::vision::HeadObject::mutable_vfoa_target(){
  return &this->_vfoa_target;
}

 void rst::vision::HeadObject::set_vfoa_target(const std::vector<unsigned char>&newValue){
  this->_vfoa_target=newValue;
}
 void rst::vision::HeadObject::set_vfoa_target(const std::string&newValue){
  this->_vfoa_target.resize(newValue.size());
  memcpy(&this->_vfoa_target[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::vision::HeadObject::set_vfoa_target(const boost::uint8_t* data,unsigned int size){
  this->_vfoa_target.resize(size);
  memcpy(&this->_vfoa_target[0],data,size);
}


 bool rst::vision::HeadObject::has_identity() const{
  return true;
}

 const rst::classification::ClassificationResult&rst::vision::HeadObject::identity() const{
  return this->_identity;
}

 rst::classification::ClassificationResult*rst::vision::HeadObject::mutable_identity(){
  return &this->_identity;
}

 void rst::vision::HeadObject::set_identity(const rst::classification::ClassificationResult&newValue){
  this->_identity=newValue;
}



 bool rst::vision::HeadObject::has_gender() const{
  return true;
}

 const rst::classification::ClassificationResult&rst::vision::HeadObject::gender() const{
  return this->_gender;
}

 rst::classification::ClassificationResult*rst::vision::HeadObject::mutable_gender(){
  return &this->_gender;
}

 void rst::vision::HeadObject::set_gender(const rst::classification::ClassificationResult&newValue){
  this->_gender=newValue;
}



 bool rst::vision::HeadObject::has_age() const{
  return true;
}

 const rst::classification::ClassificationResult&rst::vision::HeadObject::age() const{
  return this->_age;
}

 rst::classification::ClassificationResult*rst::vision::HeadObject::mutable_age(){
  return &this->_age;
}

 void rst::vision::HeadObject::set_age(const rst::classification::ClassificationResult&newValue){
  this->_age=newValue;
}




