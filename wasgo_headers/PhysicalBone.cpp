/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicalBone.h"
void PhysicalBone::apply_central_impulse(Vector3 p_impulse){

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_PhysicalBone_wrapper_apply_central_impulse(wasgo_id, wasgo_buffer_impulse, wasgo_size_impulse);
}
void PhysicalBone::apply_impulse(Vector3 p_position, Vector3 p_impulse){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_PhysicalBone_wrapper_apply_impulse(wasgo_id, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_impulse, wasgo_size_impulse);
}
Transform PhysicalBone::get_body_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicalBone_wrapper_get_body_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
int PhysicalBone::get_bone_id(){
	return (int) _wasgo_PhysicalBone_wrapper_get_bone_id(wasgo_id);
}
float PhysicalBone::get_bounce(){
	return (float) _wasgo_PhysicalBone_wrapper_get_bounce(wasgo_id);
}
float PhysicalBone::get_friction(){
	return (float) _wasgo_PhysicalBone_wrapper_get_friction(wasgo_id);
}
float PhysicalBone::get_gravity_scale(){
	return (float) _wasgo_PhysicalBone_wrapper_get_gravity_scale(wasgo_id);
}
Transform PhysicalBone::get_joint_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicalBone_wrapper_get_joint_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
PhysicalBone::JointType PhysicalBone::get_joint_type(){
	return PhysicalBone::JointType(_wasgo_PhysicalBone_wrapper_get_joint_type(wasgo_id));
}
float PhysicalBone::get_mass(){
	return (float) _wasgo_PhysicalBone_wrapper_get_mass(wasgo_id);
}
bool PhysicalBone::get_simulate_physics(){
	return (bool) _wasgo_PhysicalBone_wrapper_get_simulate_physics(wasgo_id);
}
float PhysicalBone::get_weight(){
	return (float) _wasgo_PhysicalBone_wrapper_get_weight(wasgo_id);
}
bool PhysicalBone::is_simulating_physics(){
	return (bool) _wasgo_PhysicalBone_wrapper_is_simulating_physics(wasgo_id);
}
bool PhysicalBone::is_static_body(){
	return (bool) _wasgo_PhysicalBone_wrapper_is_static_body(wasgo_id);
}
void PhysicalBone::set_body_offset(Transform p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[52];
    int wasgo_size_offset = 52;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_PhysicalBone_wrapper_set_body_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void PhysicalBone::set_bounce(float p_bounce){
	_wasgo_PhysicalBone_wrapper_set_bounce(wasgo_id, p_bounce);
}
void PhysicalBone::set_friction(float p_friction){
	_wasgo_PhysicalBone_wrapper_set_friction(wasgo_id, p_friction);
}
void PhysicalBone::set_gravity_scale(float p_gravity_scale){
	_wasgo_PhysicalBone_wrapper_set_gravity_scale(wasgo_id, p_gravity_scale);
}
void PhysicalBone::set_joint_offset(Transform p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[52];
    int wasgo_size_offset = 52;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_PhysicalBone_wrapper_set_joint_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void PhysicalBone::set_joint_type(PhysicalBone::JointType p_joint_type){
	_wasgo_PhysicalBone_wrapper_set_joint_type(wasgo_id, p_joint_type._get_wasgo_id());
}
void PhysicalBone::set_mass(float p_mass){
	_wasgo_PhysicalBone_wrapper_set_mass(wasgo_id, p_mass);
}
void PhysicalBone::set_weight(float p_weight){
	_wasgo_PhysicalBone_wrapper_set_weight(wasgo_id, p_weight);
}

PhysicalBone::PhysicalBone(WasGoId p_wasgo_id) : PhysicsBody(p_wasgo_id){
}
PhysicalBone::PhysicalBone(){
    wasgo_id = _wasgo_PhysicalBone_constructor();
}
PhysicalBone::~PhysicalBone(){
    _wasgo_PhysicalBone_destructor(wasgo_id);
}