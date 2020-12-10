/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StaticBody2D.h"
float StaticBody2D::get_bounce(){
	return (float) _wasgo_StaticBody2D_wrapper_get_bounce(wasgo_id);
}
float StaticBody2D::get_constant_angular_velocity(){
	return (float) _wasgo_StaticBody2D_wrapper_get_constant_angular_velocity(wasgo_id);
}
Vector2 StaticBody2D::get_constant_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_StaticBody2D_wrapper_get_constant_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float StaticBody2D::get_friction(){
	return (float) _wasgo_StaticBody2D_wrapper_get_friction(wasgo_id);
}
PhysicsMaterial StaticBody2D::get_physics_material_override(){
	return PhysicsMaterial(_wasgo_StaticBody2D_wrapper_get_physics_material_override(wasgo_id));
}
void StaticBody2D::set_bounce(float p_bounce){
	_wasgo_StaticBody2D_wrapper_set_bounce(wasgo_id, p_bounce);
}
void StaticBody2D::set_constant_angular_velocity(float p_vel){
	_wasgo_StaticBody2D_wrapper_set_constant_angular_velocity(wasgo_id, p_vel);
}
void StaticBody2D::set_constant_linear_velocity(Vector2 p_vel){

    Variant wasgo_var_vel = p_vel;
    uint8_t wasgo_buffer_vel[12];
    int wasgo_size_vel = 12;
    encode_variant(wasgo_var_vel, wasgo_buffer_vel, wasgo_size_vel);
    
	_wasgo_StaticBody2D_wrapper_set_constant_linear_velocity(wasgo_id, wasgo_buffer_vel, wasgo_size_vel);
}
void StaticBody2D::set_friction(float p_friction){
	_wasgo_StaticBody2D_wrapper_set_friction(wasgo_id, p_friction);
}
void StaticBody2D::set_physics_material_override(PhysicsMaterial p_physics_material_override){
	_wasgo_StaticBody2D_wrapper_set_physics_material_override(wasgo_id, p_physics_material_override._get_wasgo_id());
}

StaticBody2D::StaticBody2D(WasGoID p_wasgo_id) : PhysicsBody2D(p_wasgo_id){
}
StaticBody2D::StaticBody2D(PhysicsBody2D other) : PhysicsBody2D(other._get_wasgo_id()){
}
StaticBody2D::StaticBody2D():PhysicsBody2D(){
}
StaticBody2D StaticBody2D::new_instance(){
    return StaticBody2D(_wasgo_StaticBody2D_constructor());
}
WasGoID StaticBody2D::_get_wasgo_id(){
    return wasgo_id;
}
StaticBody2D::operator bool(){
    return (bool) wasgo_id;
}
