/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Physics2DDirectBodyState.h"
void Physics2DDirectBodyState::add_central_force(Vector2 p_force){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_Physics2DDirectBodyState_wrapper_add_central_force(wasgo_id, wasgo_buffer_force, wasgo_size_force);
}
void Physics2DDirectBodyState::add_force(Vector2 p_offset, Vector2 p_force){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_Physics2DDirectBodyState_wrapper_add_force(wasgo_id, wasgo_buffer_offset, wasgo_size_offset, wasgo_buffer_force, wasgo_size_force);
}
void Physics2DDirectBodyState::add_torque(float p_torque){
	_wasgo_Physics2DDirectBodyState_wrapper_add_torque(wasgo_id, p_torque);
}
void Physics2DDirectBodyState::apply_central_impulse(Vector2 p_impulse){

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[12];
    int wasgo_size_impulse = 12;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_Physics2DDirectBodyState_wrapper_apply_central_impulse(wasgo_id, wasgo_buffer_impulse, wasgo_size_impulse);
}
void Physics2DDirectBodyState::apply_impulse(Vector2 p_offset, Vector2 p_impulse){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[12];
    int wasgo_size_impulse = 12;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_Physics2DDirectBodyState_wrapper_apply_impulse(wasgo_id, wasgo_buffer_offset, wasgo_size_offset, wasgo_buffer_impulse, wasgo_size_impulse);
}
void Physics2DDirectBodyState::apply_torque_impulse(float p_impulse){
	_wasgo_Physics2DDirectBodyState_wrapper_apply_torque_impulse(wasgo_id, p_impulse);
}
float Physics2DDirectBodyState::get_angular_velocity(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_angular_velocity(wasgo_id);
}
RID Physics2DDirectBodyState::get_contact_collider(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int Physics2DDirectBodyState::get_contact_collider_id(int p_contact_idx){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_id(wasgo_id, p_contact_idx);
}
Object Physics2DDirectBodyState::get_contact_collider_object(int p_contact_idx){
	return Object(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_object(wasgo_id, p_contact_idx));
}
Vector2 Physics2DDirectBodyState::get_contact_collider_position(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Physics2DDirectBodyState::get_contact_collider_shape(int p_contact_idx){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape(wasgo_id, p_contact_idx);
}
Variant Physics2DDirectBodyState::get_contact_collider_shape_metadata(int p_contact_idx){
	return Variant(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape_metadata(wasgo_id, p_contact_idx));
}
Vector2 Physics2DDirectBodyState::get_contact_collider_velocity_at_position(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_velocity_at_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Physics2DDirectBodyState::get_contact_count(){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_count(wasgo_id);
}
Vector2 Physics2DDirectBodyState::get_contact_local_normal(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Physics2DDirectBodyState::get_contact_local_position(int p_contact_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_contact_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Physics2DDirectBodyState::get_contact_local_shape(int p_contact_idx){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_shape(wasgo_id, p_contact_idx);
}
float Physics2DDirectBodyState::get_inverse_inertia(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_inertia(wasgo_id);
}
float Physics2DDirectBodyState::get_inverse_mass(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_mass(wasgo_id);
}
Vector2 Physics2DDirectBodyState::get_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DDirectBodyState_wrapper_get_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Physics2DDirectSpaceState Physics2DDirectBodyState::get_space_state(){
	return Physics2DDirectSpaceState(_wasgo_Physics2DDirectBodyState_wrapper_get_space_state(wasgo_id));
}
float Physics2DDirectBodyState::get_step(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_step(wasgo_id);
}
float Physics2DDirectBodyState::get_total_angular_damp(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_total_angular_damp(wasgo_id);
}
Vector2 Physics2DDirectBodyState::get_total_gravity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DDirectBodyState_wrapper_get_total_gravity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Physics2DDirectBodyState::get_total_linear_damp(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_total_linear_damp(wasgo_id);
}
Transform2D Physics2DDirectBodyState::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Physics2DDirectBodyState_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
void Physics2DDirectBodyState::integrate_forces(){
	_wasgo_Physics2DDirectBodyState_wrapper_integrate_forces(wasgo_id);
}
bool Physics2DDirectBodyState::is_sleeping(){
	return (bool) _wasgo_Physics2DDirectBodyState_wrapper_is_sleeping(wasgo_id);
}
void Physics2DDirectBodyState::set_angular_velocity(float p_velocity){
	_wasgo_Physics2DDirectBodyState_wrapper_set_angular_velocity(wasgo_id, p_velocity);
}
void Physics2DDirectBodyState::set_linear_velocity(Vector2 p_velocity){

    Variant wasgo_var_velocity = p_velocity;
    uint8_t wasgo_buffer_velocity[12];
    int wasgo_size_velocity = 12;
    encode_variant(wasgo_var_velocity, wasgo_buffer_velocity, wasgo_size_velocity);
    
	_wasgo_Physics2DDirectBodyState_wrapper_set_linear_velocity(wasgo_id, wasgo_buffer_velocity, wasgo_size_velocity);
}
void Physics2DDirectBodyState::set_sleep_state(bool p_enabled){
	_wasgo_Physics2DDirectBodyState_wrapper_set_sleep_state(wasgo_id, p_enabled);
}
void Physics2DDirectBodyState::set_transform(Transform2D p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DDirectBodyState_wrapper_set_transform(wasgo_id, wasgo_buffer_transform, wasgo_size_transform);
}

Physics2DDirectBodyState::Physics2DDirectBodyState(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
Physics2DDirectBodyState::Physics2DDirectBodyState(Object other) : Object(other._get_wasgo_id()){
}
Physics2DDirectBodyState::Physics2DDirectBodyState():Object(){
}
Physics2DDirectBodyState Physics2DDirectBodyState::new_instance(){
    return Physics2DDirectBodyState(_wasgo_Physics2DDirectBodyState_constructor());
}
WasGoID Physics2DDirectBodyState::_get_wasgo_id(){
    return wasgo_id;
}
Physics2DDirectBodyState::operator bool(){
    return (bool) wasgo_id;
}
