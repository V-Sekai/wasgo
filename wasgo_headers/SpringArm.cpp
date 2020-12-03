/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpringArm.h"
void SpringArm::add_excluded_object(RID p_RID){

    Variant wasgo_var_RID = p_RID;
    uint8_t wasgo_buffer_RID[0];
    int wasgo_size_RID = 0;
    encode_variant(wasgo_var_RID, wasgo_buffer_RID, wasgo_size_RID);
    
	_wasgo_SpringArm_wrapper_add_excluded_object(wasgo_id, wasgo_buffer_RID, wasgo_size_RID);
}
void SpringArm::clear_excluded_objects(){
	_wasgo_SpringArm_wrapper_clear_excluded_objects(wasgo_id);
}
int SpringArm::get_collision_mask(){
	return (int) _wasgo_SpringArm_wrapper_get_collision_mask(wasgo_id);
}
float SpringArm::get_hit_length(){
	return (float) _wasgo_SpringArm_wrapper_get_hit_length(wasgo_id);
}
float SpringArm::get_length(){
	return (float) _wasgo_SpringArm_wrapper_get_length(wasgo_id);
}
float SpringArm::get_margin(){
	return (float) _wasgo_SpringArm_wrapper_get_margin(wasgo_id);
}
Shape SpringArm::get_shape(){
	return Shape(_wasgo_SpringArm_wrapper_get_shape(wasgo_id));
}
bool SpringArm::remove_excluded_object(RID p_RID){

    Variant wasgo_var_RID = p_RID;
    uint8_t wasgo_buffer_RID[0];
    int wasgo_size_RID = 0;
    encode_variant(wasgo_var_RID, wasgo_buffer_RID, wasgo_size_RID);
    
	return (bool) _wasgo_SpringArm_wrapper_remove_excluded_object(wasgo_id, wasgo_buffer_RID, wasgo_size_RID);
}
void SpringArm::set_collision_mask(int p_mask){
	_wasgo_SpringArm_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void SpringArm::set_length(float p_length){
	_wasgo_SpringArm_wrapper_set_length(wasgo_id, p_length);
}
void SpringArm::set_margin(float p_margin){
	_wasgo_SpringArm_wrapper_set_margin(wasgo_id, p_margin);
}
void SpringArm::set_shape(Shape p_shape){
	_wasgo_SpringArm_wrapper_set_shape(wasgo_id, p_shape._get_wasgo_id());
}

SpringArm::SpringArm(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
SpringArm::SpringArm(){
    wasgo_id = _wasgo_SpringArm_constructor();
}
SpringArm::~SpringArm(){
    _wasgo_SpringArm_destructor(wasgo_id);
}