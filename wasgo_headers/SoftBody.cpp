/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SoftBody.h"
void SoftBody::add_collision_exception_with(Node p_body){
	_wasgo_SoftBody_wrapper_add_collision_exception_with(wasgo_id, p_body._get_wasgo_id());
}
float SoftBody::get_areaAngular_stiffness(){
	return (float) _wasgo_SoftBody_wrapper_get_areaAngular_stiffness(wasgo_id);
}
Array SoftBody::get_collision_exceptions(){
	return Array(_wasgo_SoftBody_wrapper_get_collision_exceptions(wasgo_id));
}
int SoftBody::get_collision_layer(){
	return (int) _wasgo_SoftBody_wrapper_get_collision_layer(wasgo_id);
}
bool SoftBody::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_SoftBody_wrapper_get_collision_layer_bit(wasgo_id, p_bit);
}
int SoftBody::get_collision_mask(){
	return (int) _wasgo_SoftBody_wrapper_get_collision_mask(wasgo_id);
}
bool SoftBody::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_SoftBody_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
float SoftBody::get_damping_coefficient(){
	return (float) _wasgo_SoftBody_wrapper_get_damping_coefficient(wasgo_id);
}
float SoftBody::get_drag_coefficient(){
	return (float) _wasgo_SoftBody_wrapper_get_drag_coefficient(wasgo_id);
}
float SoftBody::get_linear_stiffness(){
	return (float) _wasgo_SoftBody_wrapper_get_linear_stiffness(wasgo_id);
}
NodePath SoftBody::get_parent_collision_ignore(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SoftBody_wrapper_get_parent_collision_ignore(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
float SoftBody::get_pose_matching_coefficient(){
	return (float) _wasgo_SoftBody_wrapper_get_pose_matching_coefficient(wasgo_id);
}
float SoftBody::get_pressure_coefficient(){
	return (float) _wasgo_SoftBody_wrapper_get_pressure_coefficient(wasgo_id);
}
int SoftBody::get_simulation_precision(){
	return (int) _wasgo_SoftBody_wrapper_get_simulation_precision(wasgo_id);
}
float SoftBody::get_total_mass(){
	return (float) _wasgo_SoftBody_wrapper_get_total_mass(wasgo_id);
}
float SoftBody::get_volume_stiffness(){
	return (float) _wasgo_SoftBody_wrapper_get_volume_stiffness(wasgo_id);
}
bool SoftBody::is_ray_pickable(){
	return (bool) _wasgo_SoftBody_wrapper_is_ray_pickable(wasgo_id);
}
void SoftBody::remove_collision_exception_with(Node p_body){
	_wasgo_SoftBody_wrapper_remove_collision_exception_with(wasgo_id, p_body._get_wasgo_id());
}
void SoftBody::set_areaAngular_stiffness(float p_areaAngular_stiffness){
	_wasgo_SoftBody_wrapper_set_areaAngular_stiffness(wasgo_id, p_areaAngular_stiffness);
}
void SoftBody::set_collision_layer(int p_collision_layer){
	_wasgo_SoftBody_wrapper_set_collision_layer(wasgo_id, p_collision_layer);
}
void SoftBody::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_SoftBody_wrapper_set_collision_layer_bit(wasgo_id, p_bit, p_value);
}
void SoftBody::set_collision_mask(int p_collision_mask){
	_wasgo_SoftBody_wrapper_set_collision_mask(wasgo_id, p_collision_mask);
}
void SoftBody::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_SoftBody_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void SoftBody::set_damping_coefficient(float p_damping_coefficient){
	_wasgo_SoftBody_wrapper_set_damping_coefficient(wasgo_id, p_damping_coefficient);
}
void SoftBody::set_drag_coefficient(float p_drag_coefficient){
	_wasgo_SoftBody_wrapper_set_drag_coefficient(wasgo_id, p_drag_coefficient);
}
void SoftBody::set_linear_stiffness(float p_linear_stiffness){
	_wasgo_SoftBody_wrapper_set_linear_stiffness(wasgo_id, p_linear_stiffness);
}
void SoftBody::set_parent_collision_ignore(NodePath p_parent_collision_ignore){

    Variant wasgo_var_parent_collision_ignore = p_parent_collision_ignore;
    uint8_t wasgo_buffer_parent_collision_ignore[256];
    int wasgo_size_parent_collision_ignore = 256;
    encode_variant(wasgo_var_parent_collision_ignore, wasgo_buffer_parent_collision_ignore, wasgo_size_parent_collision_ignore);
    
	_wasgo_SoftBody_wrapper_set_parent_collision_ignore(wasgo_id, wasgo_buffer_parent_collision_ignore, wasgo_size_parent_collision_ignore);
}
void SoftBody::set_pose_matching_coefficient(float p_pose_matching_coefficient){
	_wasgo_SoftBody_wrapper_set_pose_matching_coefficient(wasgo_id, p_pose_matching_coefficient);
}
void SoftBody::set_pressure_coefficient(float p_pressure_coefficient){
	_wasgo_SoftBody_wrapper_set_pressure_coefficient(wasgo_id, p_pressure_coefficient);
}
void SoftBody::set_ray_pickable(bool p_ray_pickable){
	_wasgo_SoftBody_wrapper_set_ray_pickable(wasgo_id, p_ray_pickable);
}
void SoftBody::set_simulation_precision(int p_simulation_precision){
	_wasgo_SoftBody_wrapper_set_simulation_precision(wasgo_id, p_simulation_precision);
}
void SoftBody::set_total_mass(float p_mass){
	_wasgo_SoftBody_wrapper_set_total_mass(wasgo_id, p_mass);
}
void SoftBody::set_volume_stiffness(float p_volume_stiffness){
	_wasgo_SoftBody_wrapper_set_volume_stiffness(wasgo_id, p_volume_stiffness);
}

SoftBody::SoftBody(WasGoId p_wasgo_id) : MeshInstance(p_wasgo_id){
}
SoftBody::SoftBody(){
    wasgo_id = _wasgo_SoftBody_constructor();
}
SoftBody::~SoftBody(){
    _wasgo_SoftBody_destructor(wasgo_id);
}