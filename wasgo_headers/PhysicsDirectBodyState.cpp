/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsDirectBodyState.h"
void PhysicsDirectBodyState::add_central_force(Vector3 p_force){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[16];
    int wasgo_size_force = 16;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_PhysicsDirectBodyState_wrapper_add_central_force(wasgo_id, wasgo_buffer_force, wasgo_size_force);
}
void PhysicsDirectBodyState::add_force(Vector3 p_force, Vector3 p_position){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[16];
    int wasgo_size_force = 16;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_PhysicsDirectBodyState_wrapper_add_force(wasgo_id, wasgo_buffer_force, wasgo_size_force, -69, wasgo_buffer_position, wasgo_size_position);
}
void PhysicsDirectBodyState::add_torque(Vector3 p_torque){

    Variant wasgo_var_torque = p_torque;
    uint8_t wasgo_buffer_torque[16];
    int wasgo_size_torque = 16;
    encode_variant(wasgo_var_torque, wasgo_buffer_torque, wasgo_size_torque);
    
	_wasgo_PhysicsDirectBodyState_wrapper_add_torque(wasgo_id, wasgo_buffer_torque, wasgo_size_torque);
}
void PhysicsDirectBodyState::apply_central_impulse(Vector3 p_j){

    Variant wasgo_var_j = p_j;
    uint8_t wasgo_buffer_j[16];
    int wasgo_size_j = 16;
    encode_variant(wasgo_var_j, wasgo_buffer_j, wasgo_size_j);
    
	_wasgo_PhysicsDirectBodyState_wrapper_apply_central_impulse(wasgo_id, wasgo_buffer_j, wasgo_size_j);
}
void PhysicsDirectBodyState::apply_impulse(Vector3 p_position, Vector3 p_j){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_j = p_j;
    uint8_t wasgo_buffer_j[16];
    int wasgo_size_j = 16;
    encode_variant(wasgo_var_j, wasgo_buffer_j, wasgo_size_j);
    
	_wasgo_PhysicsDirectBodyState_wrapper_apply_impulse(wasgo_id, wasgo_buffer_position, wasgo_size_position, -69, wasgo_buffer_j, wasgo_size_j);
}
void PhysicsDirectBodyState::apply_torque_impulse(Vector3 p_j){

    Variant wasgo_var_j = p_j;
    uint8_t wasgo_buffer_j[16];
    int wasgo_size_j = 16;
    encode_variant(wasgo_var_j, wasgo_buffer_j, wasgo_size_j);
    
	_wasgo_PhysicsDirectBodyState_wrapper_apply_torque_impulse(wasgo_id, wasgo_buffer_j, wasgo_size_j);
}
Vector3 PhysicsDirectBodyState::get_angular_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_angular_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector3 PhysicsDirectBodyState::get_center_of_mass(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_center_of_mass(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
RID PhysicsDirectBodyState::get_contact_collider(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int PhysicsDirectBodyState::get_contact_collider_id(int p_contact_idx){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_id(wasgo_id, p_contact_idx);
}
Object PhysicsDirectBodyState::get_contact_collider_object(int p_contact_idx){
	return Object(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_object(wasgo_id, p_contact_idx));
}
Vector3 PhysicsDirectBodyState::get_contact_collider_position(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int PhysicsDirectBodyState::get_contact_collider_shape(int p_contact_idx){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_shape(wasgo_id, p_contact_idx);
}
Vector3 PhysicsDirectBodyState::get_contact_collider_velocity_at_position(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_velocity_at_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int PhysicsDirectBodyState::get_contact_count(){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_count(wasgo_id);
}
float PhysicsDirectBodyState::get_contact_impulse(int p_contact_idx){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_impulse(wasgo_id, p_contact_idx);
}
Vector3 PhysicsDirectBodyState::get_contact_local_normal(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector3 PhysicsDirectBodyState::get_contact_local_position(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int PhysicsDirectBodyState::get_contact_local_shape(int p_contact_idx){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_shape(wasgo_id, p_contact_idx);
}
Vector3 PhysicsDirectBodyState::get_inverse_inertia(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_inertia(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float PhysicsDirectBodyState::get_inverse_mass(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_mass(wasgo_id);
}
Vector3 PhysicsDirectBodyState::get_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Basis PhysicsDirectBodyState::get_principal_inertia_axes(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 40;
    uint8_t wasgo_ret_buffer[40];
    _wasgo_PhysicsDirectBodyState_wrapper_get_principal_inertia_axes(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
PhysicsDirectSpaceState PhysicsDirectBodyState::get_space_state(){
	return PhysicsDirectSpaceState(_wasgo_PhysicsDirectBodyState_wrapper_get_space_state(wasgo_id));
}
float PhysicsDirectBodyState::get_step(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_step(wasgo_id);
}
float PhysicsDirectBodyState::get_total_angular_damp(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_total_angular_damp(wasgo_id);
}
Vector3 PhysicsDirectBodyState::get_total_gravity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsDirectBodyState_wrapper_get_total_gravity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float PhysicsDirectBodyState::get_total_linear_damp(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_total_linear_damp(wasgo_id);
}
Transform PhysicsDirectBodyState::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicsDirectBodyState_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void PhysicsDirectBodyState::integrate_forces(){
	_wasgo_PhysicsDirectBodyState_wrapper_integrate_forces(wasgo_id);
}
bool PhysicsDirectBodyState::is_sleeping(){
	return (bool) _wasgo_PhysicsDirectBodyState_wrapper_is_sleeping(wasgo_id);
}
void PhysicsDirectBodyState::set_angular_velocity(Vector3 p_velocity){

    Variant wasgo_var_velocity = p_velocity;
    uint8_t wasgo_buffer_velocity[16];
    int wasgo_size_velocity = 16;
    encode_variant(wasgo_var_velocity, wasgo_buffer_velocity, wasgo_size_velocity);
    
	_wasgo_PhysicsDirectBodyState_wrapper_set_angular_velocity(wasgo_id, wasgo_buffer_velocity, wasgo_size_velocity);
}
void PhysicsDirectBodyState::set_linear_velocity(Vector3 p_velocity){

    Variant wasgo_var_velocity = p_velocity;
    uint8_t wasgo_buffer_velocity[16];
    int wasgo_size_velocity = 16;
    encode_variant(wasgo_var_velocity, wasgo_buffer_velocity, wasgo_size_velocity);
    
	_wasgo_PhysicsDirectBodyState_wrapper_set_linear_velocity(wasgo_id, wasgo_buffer_velocity, wasgo_size_velocity);
}
void PhysicsDirectBodyState::set_sleep_state(bool p_enabled){
	_wasgo_PhysicsDirectBodyState_wrapper_set_sleep_state(wasgo_id, p_enabled);
}
void PhysicsDirectBodyState::set_transform(Transform p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsDirectBodyState_wrapper_set_transform(wasgo_id, wasgo_buffer_transform, wasgo_size_transform);
}

PhysicsDirectBodyState::PhysicsDirectBodyState(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
PhysicsDirectBodyState::PhysicsDirectBodyState(Object other) : Object(other._get_wasgo_id()){
}
PhysicsDirectBodyState::PhysicsDirectBodyState():Object(){
}
PhysicsDirectBodyState PhysicsDirectBodyState::new_instance(){
    return PhysicsDirectBodyState(_wasgo_PhysicsDirectBodyState_constructor());
}
WasGoID PhysicsDirectBodyState::_get_wasgo_id(){
    return wasgo_id;
}
PhysicsDirectBodyState::operator bool(){
    return (bool) wasgo_id;
}
