/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RigidBody.h"
void RigidBody::add_central_force(Vector3 p_force){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[16];
    int wasgo_size_force = 16;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_RigidBody_wrapper_add_central_force(wasgo_id, wasgo_buffer_force, wasgo_size_force);
}
void RigidBody::add_force(Vector3 p_force, Vector3 p_position){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[16];
    int wasgo_size_force = 16;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_RigidBody_wrapper_add_force(wasgo_id, wasgo_buffer_force, wasgo_size_force, wasgo_buffer_position, wasgo_size_position);
}
void RigidBody::add_torque(Vector3 p_torque){

    Variant wasgo_var_torque = p_torque;
    uint8_t wasgo_buffer_torque[16];
    int wasgo_size_torque = 16;
    encode_variant(wasgo_var_torque, wasgo_buffer_torque, wasgo_size_torque);
    
	_wasgo_RigidBody_wrapper_add_torque(wasgo_id, wasgo_buffer_torque, wasgo_size_torque);
}
void RigidBody::apply_central_impulse(Vector3 p_impulse){

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_RigidBody_wrapper_apply_central_impulse(wasgo_id, wasgo_buffer_impulse, wasgo_size_impulse);
}
void RigidBody::apply_impulse(Vector3 p_position, Vector3 p_impulse){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_RigidBody_wrapper_apply_impulse(wasgo_id, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_impulse, wasgo_size_impulse);
}
void RigidBody::apply_torque_impulse(Vector3 p_impulse){

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_RigidBody_wrapper_apply_torque_impulse(wasgo_id, wasgo_buffer_impulse, wasgo_size_impulse);
}
float RigidBody::get_angular_damp(){
	return (float) _wasgo_RigidBody_wrapper_get_angular_damp(wasgo_id);
}
Vector3 RigidBody::get_angular_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_RigidBody_wrapper_get_angular_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
bool RigidBody::get_axis_lock(PhysicsServer::BodyAxis p_axis){
	return (bool) _wasgo_RigidBody_wrapper_get_axis_lock(wasgo_id, p_axis._get_wasgo_id());
}
float RigidBody::get_bounce(){
	return (float) _wasgo_RigidBody_wrapper_get_bounce(wasgo_id);
}
Array RigidBody::get_colliding_bodies(){
	return Array(_wasgo_RigidBody_wrapper_get_colliding_bodies(wasgo_id));
}
float RigidBody::get_friction(){
	return (float) _wasgo_RigidBody_wrapper_get_friction(wasgo_id);
}
float RigidBody::get_gravity_scale(){
	return (float) _wasgo_RigidBody_wrapper_get_gravity_scale(wasgo_id);
}
Basis RigidBody::get_inverse_inertia_tensor(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 40;
    uint8_t wasgo_ret_buffer[40];
    _wasgo_RigidBody_wrapper_get_inverse_inertia_tensor(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Basis) wasgo_ret;
    
}
float RigidBody::get_linear_damp(){
	return (float) _wasgo_RigidBody_wrapper_get_linear_damp(wasgo_id);
}
Vector3 RigidBody::get_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_RigidBody_wrapper_get_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float RigidBody::get_mass(){
	return (float) _wasgo_RigidBody_wrapper_get_mass(wasgo_id);
}
int RigidBody::get_max_contacts_reported(){
	return (int) _wasgo_RigidBody_wrapper_get_max_contacts_reported(wasgo_id);
}
RigidBody::Mode RigidBody::get_mode(){
	return RigidBody::Mode(_wasgo_RigidBody_wrapper_get_mode(wasgo_id));
}
PhysicsMaterial RigidBody::get_physics_material_override(){
	return PhysicsMaterial(_wasgo_RigidBody_wrapper_get_physics_material_override(wasgo_id));
}
float RigidBody::get_weight(){
	return (float) _wasgo_RigidBody_wrapper_get_weight(wasgo_id);
}
bool RigidBody::is_able_to_sleep(){
	return (bool) _wasgo_RigidBody_wrapper_is_able_to_sleep(wasgo_id);
}
bool RigidBody::is_contact_monitor_enabled(){
	return (bool) _wasgo_RigidBody_wrapper_is_contact_monitor_enabled(wasgo_id);
}
bool RigidBody::is_sleeping(){
	return (bool) _wasgo_RigidBody_wrapper_is_sleeping(wasgo_id);
}
bool RigidBody::is_using_continuous_collision_detection(){
	return (bool) _wasgo_RigidBody_wrapper_is_using_continuous_collision_detection(wasgo_id);
}
bool RigidBody::is_using_custom_integrator(){
	return (bool) _wasgo_RigidBody_wrapper_is_using_custom_integrator(wasgo_id);
}
void RigidBody::set_angular_damp(float p_angular_damp){
	_wasgo_RigidBody_wrapper_set_angular_damp(wasgo_id, p_angular_damp);
}
void RigidBody::set_angular_velocity(Vector3 p_angular_velocity){

    Variant wasgo_var_angular_velocity = p_angular_velocity;
    uint8_t wasgo_buffer_angular_velocity[16];
    int wasgo_size_angular_velocity = 16;
    encode_variant(wasgo_var_angular_velocity, wasgo_buffer_angular_velocity, wasgo_size_angular_velocity);
    
	_wasgo_RigidBody_wrapper_set_angular_velocity(wasgo_id, wasgo_buffer_angular_velocity, wasgo_size_angular_velocity);
}
void RigidBody::set_axis_lock(PhysicsServer::BodyAxis p_axis, bool p_lock){
	_wasgo_RigidBody_wrapper_set_axis_lock(wasgo_id, p_axis._get_wasgo_id(), p_lock);
}
void RigidBody::set_axis_velocity(Vector3 p_axis_velocity){

    Variant wasgo_var_axis_velocity = p_axis_velocity;
    uint8_t wasgo_buffer_axis_velocity[16];
    int wasgo_size_axis_velocity = 16;
    encode_variant(wasgo_var_axis_velocity, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
    
	_wasgo_RigidBody_wrapper_set_axis_velocity(wasgo_id, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
}
void RigidBody::set_bounce(float p_bounce){
	_wasgo_RigidBody_wrapper_set_bounce(wasgo_id, p_bounce);
}
void RigidBody::set_can_sleep(bool p_able_to_sleep){
	_wasgo_RigidBody_wrapper_set_can_sleep(wasgo_id, p_able_to_sleep);
}
void RigidBody::set_contact_monitor(bool p_enabled){
	_wasgo_RigidBody_wrapper_set_contact_monitor(wasgo_id, p_enabled);
}
void RigidBody::set_friction(float p_friction){
	_wasgo_RigidBody_wrapper_set_friction(wasgo_id, p_friction);
}
void RigidBody::set_gravity_scale(float p_gravity_scale){
	_wasgo_RigidBody_wrapper_set_gravity_scale(wasgo_id, p_gravity_scale);
}
void RigidBody::set_linear_damp(float p_linear_damp){
	_wasgo_RigidBody_wrapper_set_linear_damp(wasgo_id, p_linear_damp);
}
void RigidBody::set_linear_velocity(Vector3 p_linear_velocity){

    Variant wasgo_var_linear_velocity = p_linear_velocity;
    uint8_t wasgo_buffer_linear_velocity[16];
    int wasgo_size_linear_velocity = 16;
    encode_variant(wasgo_var_linear_velocity, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
    
	_wasgo_RigidBody_wrapper_set_linear_velocity(wasgo_id, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
}
void RigidBody::set_mass(float p_mass){
	_wasgo_RigidBody_wrapper_set_mass(wasgo_id, p_mass);
}
void RigidBody::set_max_contacts_reported(int p_amount){
	_wasgo_RigidBody_wrapper_set_max_contacts_reported(wasgo_id, p_amount);
}
void RigidBody::set_mode(RigidBody::Mode p_mode){
	_wasgo_RigidBody_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void RigidBody::set_physics_material_override(PhysicsMaterial p_physics_material_override){
	_wasgo_RigidBody_wrapper_set_physics_material_override(wasgo_id, p_physics_material_override._get_wasgo_id());
}
void RigidBody::set_sleeping(bool p_sleeping){
	_wasgo_RigidBody_wrapper_set_sleeping(wasgo_id, p_sleeping);
}
void RigidBody::set_use_continuous_collision_detection(bool p_enable){
	_wasgo_RigidBody_wrapper_set_use_continuous_collision_detection(wasgo_id, p_enable);
}
void RigidBody::set_use_custom_integrator(bool p_enable){
	_wasgo_RigidBody_wrapper_set_use_custom_integrator(wasgo_id, p_enable);
}
void RigidBody::set_weight(float p_weight){
	_wasgo_RigidBody_wrapper_set_weight(wasgo_id, p_weight);
}

RigidBody::RigidBody(WasGoId p_wasgo_id) : PhysicsBody(p_wasgo_id){
}
RigidBody::RigidBody(PhysicsBody other) : PhysicsBody(other._get_wasgo_id()){
    wasgo_id = _wasgo_RigidBody_constructor();
}
RigidBody::new_instance(){
    return RigidBody(_wasgo_RigidBody_constructor());
}