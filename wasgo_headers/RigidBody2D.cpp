/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RigidBody2D.h"
void RigidBody2D::add_central_force(Vector2 p_force){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_RigidBody2D_wrapper_add_central_force(wasgo_id, wasgo_buffer_force, wasgo_size_force);
}
void RigidBody2D::add_force(Vector2 p_offset, Vector2 p_force){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_RigidBody2D_wrapper_add_force(wasgo_id, wasgo_buffer_offset, wasgo_size_offset, wasgo_buffer_force, wasgo_size_force);
}
void RigidBody2D::add_torque(float p_torque){
	_wasgo_RigidBody2D_wrapper_add_torque(wasgo_id, p_torque);
}
void RigidBody2D::apply_central_impulse(Vector2 p_impulse){

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[12];
    int wasgo_size_impulse = 12;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_RigidBody2D_wrapper_apply_central_impulse(wasgo_id, wasgo_buffer_impulse, wasgo_size_impulse);
}
void RigidBody2D::apply_impulse(Vector2 p_offset, Vector2 p_impulse){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[12];
    int wasgo_size_impulse = 12;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_RigidBody2D_wrapper_apply_impulse(wasgo_id, wasgo_buffer_offset, wasgo_size_offset, wasgo_buffer_impulse, wasgo_size_impulse);
}
void RigidBody2D::apply_torque_impulse(float p_torque){
	_wasgo_RigidBody2D_wrapper_apply_torque_impulse(wasgo_id, p_torque);
}
float RigidBody2D::get_angular_damp(){
	return (float) _wasgo_RigidBody2D_wrapper_get_angular_damp(wasgo_id);
}
float RigidBody2D::get_angular_velocity(){
	return (float) _wasgo_RigidBody2D_wrapper_get_angular_velocity(wasgo_id);
}
Vector2 RigidBody2D::get_applied_force(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_RigidBody2D_wrapper_get_applied_force(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float RigidBody2D::get_applied_torque(){
	return (float) _wasgo_RigidBody2D_wrapper_get_applied_torque(wasgo_id);
}
float RigidBody2D::get_bounce(){
	return (float) _wasgo_RigidBody2D_wrapper_get_bounce(wasgo_id);
}
Array RigidBody2D::get_colliding_bodies(){
	return Array(_wasgo_RigidBody2D_wrapper_get_colliding_bodies(wasgo_id));
}
RigidBody2D::CCDMode RigidBody2D::get_continuous_collision_detection_mode(){
	return RigidBody2D::CCDMode(_wasgo_RigidBody2D_wrapper_get_continuous_collision_detection_mode(wasgo_id));
}
float RigidBody2D::get_friction(){
	return (float) _wasgo_RigidBody2D_wrapper_get_friction(wasgo_id);
}
float RigidBody2D::get_gravity_scale(){
	return (float) _wasgo_RigidBody2D_wrapper_get_gravity_scale(wasgo_id);
}
float RigidBody2D::get_inertia(){
	return (float) _wasgo_RigidBody2D_wrapper_get_inertia(wasgo_id);
}
float RigidBody2D::get_linear_damp(){
	return (float) _wasgo_RigidBody2D_wrapper_get_linear_damp(wasgo_id);
}
Vector2 RigidBody2D::get_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_RigidBody2D_wrapper_get_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float RigidBody2D::get_mass(){
	return (float) _wasgo_RigidBody2D_wrapper_get_mass(wasgo_id);
}
int RigidBody2D::get_max_contacts_reported(){
	return (int) _wasgo_RigidBody2D_wrapper_get_max_contacts_reported(wasgo_id);
}
RigidBody2D::Mode RigidBody2D::get_mode(){
	return RigidBody2D::Mode(_wasgo_RigidBody2D_wrapper_get_mode(wasgo_id));
}
PhysicsMaterial RigidBody2D::get_physics_material_override(){
	return PhysicsMaterial(_wasgo_RigidBody2D_wrapper_get_physics_material_override(wasgo_id));
}
float RigidBody2D::get_weight(){
	return (float) _wasgo_RigidBody2D_wrapper_get_weight(wasgo_id);
}
bool RigidBody2D::is_able_to_sleep(){
	return (bool) _wasgo_RigidBody2D_wrapper_is_able_to_sleep(wasgo_id);
}
bool RigidBody2D::is_contact_monitor_enabled(){
	return (bool) _wasgo_RigidBody2D_wrapper_is_contact_monitor_enabled(wasgo_id);
}
bool RigidBody2D::is_sleeping(){
	return (bool) _wasgo_RigidBody2D_wrapper_is_sleeping(wasgo_id);
}
bool RigidBody2D::is_using_custom_integrator(){
	return (bool) _wasgo_RigidBody2D_wrapper_is_using_custom_integrator(wasgo_id);
}
void RigidBody2D::set_angular_damp(float p_angular_damp){
	_wasgo_RigidBody2D_wrapper_set_angular_damp(wasgo_id, p_angular_damp);
}
void RigidBody2D::set_angular_velocity(float p_angular_velocity){
	_wasgo_RigidBody2D_wrapper_set_angular_velocity(wasgo_id, p_angular_velocity);
}
void RigidBody2D::set_applied_force(Vector2 p_force){

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_RigidBody2D_wrapper_set_applied_force(wasgo_id, wasgo_buffer_force, wasgo_size_force);
}
void RigidBody2D::set_applied_torque(float p_torque){
	_wasgo_RigidBody2D_wrapper_set_applied_torque(wasgo_id, p_torque);
}
void RigidBody2D::set_axis_velocity(Vector2 p_axis_velocity){

    Variant wasgo_var_axis_velocity = p_axis_velocity;
    uint8_t wasgo_buffer_axis_velocity[12];
    int wasgo_size_axis_velocity = 12;
    encode_variant(wasgo_var_axis_velocity, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
    
	_wasgo_RigidBody2D_wrapper_set_axis_velocity(wasgo_id, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
}
void RigidBody2D::set_bounce(float p_bounce){
	_wasgo_RigidBody2D_wrapper_set_bounce(wasgo_id, p_bounce);
}
void RigidBody2D::set_can_sleep(bool p_able_to_sleep){
	_wasgo_RigidBody2D_wrapper_set_can_sleep(wasgo_id, p_able_to_sleep);
}
void RigidBody2D::set_contact_monitor(bool p_enabled){
	_wasgo_RigidBody2D_wrapper_set_contact_monitor(wasgo_id, p_enabled);
}
void RigidBody2D::set_continuous_collision_detection_mode(RigidBody2D::CCDMode p_mode){
	_wasgo_RigidBody2D_wrapper_set_continuous_collision_detection_mode(wasgo_id, p_mode._get_wasgo_id());
}
void RigidBody2D::set_friction(float p_friction){
	_wasgo_RigidBody2D_wrapper_set_friction(wasgo_id, p_friction);
}
void RigidBody2D::set_gravity_scale(float p_gravity_scale){
	_wasgo_RigidBody2D_wrapper_set_gravity_scale(wasgo_id, p_gravity_scale);
}
void RigidBody2D::set_inertia(float p_inertia){
	_wasgo_RigidBody2D_wrapper_set_inertia(wasgo_id, p_inertia);
}
void RigidBody2D::set_linear_damp(float p_linear_damp){
	_wasgo_RigidBody2D_wrapper_set_linear_damp(wasgo_id, p_linear_damp);
}
void RigidBody2D::set_linear_velocity(Vector2 p_linear_velocity){

    Variant wasgo_var_linear_velocity = p_linear_velocity;
    uint8_t wasgo_buffer_linear_velocity[12];
    int wasgo_size_linear_velocity = 12;
    encode_variant(wasgo_var_linear_velocity, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
    
	_wasgo_RigidBody2D_wrapper_set_linear_velocity(wasgo_id, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
}
void RigidBody2D::set_mass(float p_mass){
	_wasgo_RigidBody2D_wrapper_set_mass(wasgo_id, p_mass);
}
void RigidBody2D::set_max_contacts_reported(int p_amount){
	_wasgo_RigidBody2D_wrapper_set_max_contacts_reported(wasgo_id, p_amount);
}
void RigidBody2D::set_mode(RigidBody2D::Mode p_mode){
	_wasgo_RigidBody2D_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void RigidBody2D::set_physics_material_override(PhysicsMaterial p_physics_material_override){
	_wasgo_RigidBody2D_wrapper_set_physics_material_override(wasgo_id, p_physics_material_override._get_wasgo_id());
}
void RigidBody2D::set_sleeping(bool p_sleeping){
	_wasgo_RigidBody2D_wrapper_set_sleeping(wasgo_id, p_sleeping);
}
void RigidBody2D::set_use_custom_integrator(bool p_enable){
	_wasgo_RigidBody2D_wrapper_set_use_custom_integrator(wasgo_id, p_enable);
}
void RigidBody2D::set_weight(float p_weight){
	_wasgo_RigidBody2D_wrapper_set_weight(wasgo_id, p_weight);
}
bool RigidBody2D::test_motion(Vector2 p_motion, bool p_infinite_inertia, float p_margin, Physics2DTestMotionResult p_result){

    Variant wasgo_var_motion = p_motion;
    uint8_t wasgo_buffer_motion[12];
    int wasgo_size_motion = 12;
    encode_variant(wasgo_var_motion, wasgo_buffer_motion, wasgo_size_motion);
    
	return (bool) _wasgo_RigidBody2D_wrapper_test_motion(wasgo_id, wasgo_buffer_motion, wasgo_size_motion, p_infinite_inertia, p_margin, p_result._get_wasgo_id());
}

RigidBody2D::RigidBody2D(WasGoID p_wasgo_id) : PhysicsBody2D(p_wasgo_id){
}
RigidBody2D::RigidBody2D(PhysicsBody2D other) : PhysicsBody2D(other._get_wasgo_id()){
}
RigidBody2D::RigidBody2D():PhysicsBody2D(){
}
RigidBody2D RigidBody2D::new_instance(){
    return RigidBody2D(_wasgo_RigidBody2D_constructor());
}
WasGoID RigidBody2D::_get_wasgo_id(){
    return wasgo_id;
}
RigidBody2D::operator bool(){
    return (bool) wasgo_id;
}
