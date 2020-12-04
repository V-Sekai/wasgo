/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StaticBody.h"
float StaticBody::get_bounce(){
	return (float) _wasgo_StaticBody_wrapper_get_bounce(wasgo_id);
}
Vector3 StaticBody::get_constant_angular_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_StaticBody_wrapper_get_constant_angular_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 StaticBody::get_constant_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_StaticBody_wrapper_get_constant_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float StaticBody::get_friction(){
	return (float) _wasgo_StaticBody_wrapper_get_friction(wasgo_id);
}
PhysicsMaterial StaticBody::get_physics_material_override(){
	return PhysicsMaterial(_wasgo_StaticBody_wrapper_get_physics_material_override(wasgo_id));
}
void StaticBody::set_bounce(float p_bounce){
	_wasgo_StaticBody_wrapper_set_bounce(wasgo_id, p_bounce);
}
void StaticBody::set_constant_angular_velocity(Vector3 p_vel){

    Variant wasgo_var_vel = p_vel;
    uint8_t wasgo_buffer_vel[16];
    int wasgo_size_vel = 16;
    encode_variant(wasgo_var_vel, wasgo_buffer_vel, wasgo_size_vel);
    
	_wasgo_StaticBody_wrapper_set_constant_angular_velocity(wasgo_id, wasgo_buffer_vel, wasgo_size_vel);
}
void StaticBody::set_constant_linear_velocity(Vector3 p_vel){

    Variant wasgo_var_vel = p_vel;
    uint8_t wasgo_buffer_vel[16];
    int wasgo_size_vel = 16;
    encode_variant(wasgo_var_vel, wasgo_buffer_vel, wasgo_size_vel);
    
	_wasgo_StaticBody_wrapper_set_constant_linear_velocity(wasgo_id, wasgo_buffer_vel, wasgo_size_vel);
}
void StaticBody::set_friction(float p_friction){
	_wasgo_StaticBody_wrapper_set_friction(wasgo_id, p_friction);
}
void StaticBody::set_physics_material_override(PhysicsMaterial p_physics_material_override){
	_wasgo_StaticBody_wrapper_set_physics_material_override(wasgo_id, p_physics_material_override._get_wasgo_id());
}

StaticBody::StaticBody(WasGoID p_wasgo_id) : PhysicsBody(p_wasgo_id){
}
StaticBody::StaticBody(PhysicsBody other) : PhysicsBody(other._get_wasgo_id()){
    wasgo_id = _wasgo_StaticBody_constructor();
}
StaticBody::new_instance(){
    return StaticBody(_wasgo_StaticBody_constructor());
}