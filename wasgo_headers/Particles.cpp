/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Particles.h"
::AABB Particles::capture_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Particles_wrapper_capture_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
int Particles::get_amount(){
	return (int) _wasgo_Particles_wrapper_get_amount(wasgo_id);
}
Particles::DrawOrder Particles::get_draw_order(){
	return Particles::DrawOrder(_wasgo_Particles_wrapper_get_draw_order(wasgo_id));
}
Mesh Particles::get_draw_pass_mesh(int p_pass){
	return Mesh(_wasgo_Particles_wrapper_get_draw_pass_mesh(wasgo_id, p_pass));
}
int Particles::get_draw_passes(){
	return (int) _wasgo_Particles_wrapper_get_draw_passes(wasgo_id);
}
float Particles::get_explosiveness_ratio(){
	return (float) _wasgo_Particles_wrapper_get_explosiveness_ratio(wasgo_id);
}
int Particles::get_fixed_fps(){
	return (int) _wasgo_Particles_wrapper_get_fixed_fps(wasgo_id);
}
bool Particles::get_fractional_delta(){
	return (bool) _wasgo_Particles_wrapper_get_fractional_delta(wasgo_id);
}
float Particles::get_lifetime(){
	return (float) _wasgo_Particles_wrapper_get_lifetime(wasgo_id);
}
bool Particles::get_one_shot(){
	return (bool) _wasgo_Particles_wrapper_get_one_shot(wasgo_id);
}
float Particles::get_pre_process_time(){
	return (float) _wasgo_Particles_wrapper_get_pre_process_time(wasgo_id);
}
Material Particles::get_process_material(){
	return Material(_wasgo_Particles_wrapper_get_process_material(wasgo_id));
}
float Particles::get_randomness_ratio(){
	return (float) _wasgo_Particles_wrapper_get_randomness_ratio(wasgo_id);
}
float Particles::get_speed_scale(){
	return (float) _wasgo_Particles_wrapper_get_speed_scale(wasgo_id);
}
bool Particles::get_use_local_coordinates(){
	return (bool) _wasgo_Particles_wrapper_get_use_local_coordinates(wasgo_id);
}
::AABB Particles::get_visibility_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Particles_wrapper_get_visibility_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
bool Particles::is_emitting(){
	return (bool) _wasgo_Particles_wrapper_is_emitting(wasgo_id);
}
void Particles::restart(){
	_wasgo_Particles_wrapper_restart(wasgo_id);
}
void Particles::set_amount(int p_amount){
	_wasgo_Particles_wrapper_set_amount(wasgo_id, p_amount);
}
void Particles::set_draw_order(Particles::DrawOrder p_order){
	_wasgo_Particles_wrapper_set_draw_order(wasgo_id, p_order._get_wasgo_id());
}
void Particles::set_draw_pass_mesh(int p_pass, Mesh p_mesh){
	_wasgo_Particles_wrapper_set_draw_pass_mesh(wasgo_id, p_pass, p_mesh._get_wasgo_id());
}
void Particles::set_draw_passes(int p_passes){
	_wasgo_Particles_wrapper_set_draw_passes(wasgo_id, p_passes);
}
void Particles::set_emitting(bool p_emitting){
	_wasgo_Particles_wrapper_set_emitting(wasgo_id, p_emitting);
}
void Particles::set_explosiveness_ratio(float p_ratio){
	_wasgo_Particles_wrapper_set_explosiveness_ratio(wasgo_id, p_ratio);
}
void Particles::set_fixed_fps(int p_fps){
	_wasgo_Particles_wrapper_set_fixed_fps(wasgo_id, p_fps);
}
void Particles::set_fractional_delta(bool p_enable){
	_wasgo_Particles_wrapper_set_fractional_delta(wasgo_id, p_enable);
}
void Particles::set_lifetime(float p_secs){
	_wasgo_Particles_wrapper_set_lifetime(wasgo_id, p_secs);
}
void Particles::set_one_shot(bool p_enable){
	_wasgo_Particles_wrapper_set_one_shot(wasgo_id, p_enable);
}
void Particles::set_pre_process_time(float p_secs){
	_wasgo_Particles_wrapper_set_pre_process_time(wasgo_id, p_secs);
}
void Particles::set_process_material(Material p_material){
	_wasgo_Particles_wrapper_set_process_material(wasgo_id, p_material._get_wasgo_id());
}
void Particles::set_randomness_ratio(float p_ratio){
	_wasgo_Particles_wrapper_set_randomness_ratio(wasgo_id, p_ratio);
}
void Particles::set_speed_scale(float p_scale){
	_wasgo_Particles_wrapper_set_speed_scale(wasgo_id, p_scale);
}
void Particles::set_use_local_coordinates(bool p_enable){
	_wasgo_Particles_wrapper_set_use_local_coordinates(wasgo_id, p_enable);
}
void Particles::set_visibility_aabb(::AABB p_aabb){

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_Particles_wrapper_set_visibility_aabb(wasgo_id, wasgo_buffer_aabb, wasgo_size_aabb);
}

Particles::Particles(WasGoID p_wasgo_id) : GeometryInstance(p_wasgo_id){
}
Particles::Particles(GeometryInstance other) : GeometryInstance(other._get_wasgo_id()){
}
Particles::Particles():GeometryInstance(){
}
Particles Particles::new_instance(){
    return Particles(_wasgo_Particles_constructor());
}
WasGoID Particles::_get_wasgo_id(){
    return wasgo_id;
}
Particles::operator bool(){
    return (bool) wasgo_id;
}
