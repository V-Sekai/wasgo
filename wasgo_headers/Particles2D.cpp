/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Particles2D.h"
Rect2 Particles2D::capture_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Particles2D_wrapper_capture_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
int Particles2D::get_amount(){
	return (int) _wasgo_Particles2D_wrapper_get_amount(wasgo_id);
}
Particles2D::DrawOrder Particles2D::get_draw_order(){
	return Particles2D::DrawOrder(_wasgo_Particles2D_wrapper_get_draw_order(wasgo_id));
}
float Particles2D::get_explosiveness_ratio(){
	return (float) _wasgo_Particles2D_wrapper_get_explosiveness_ratio(wasgo_id);
}
int Particles2D::get_fixed_fps(){
	return (int) _wasgo_Particles2D_wrapper_get_fixed_fps(wasgo_id);
}
bool Particles2D::get_fractional_delta(){
	return (bool) _wasgo_Particles2D_wrapper_get_fractional_delta(wasgo_id);
}
float Particles2D::get_lifetime(){
	return (float) _wasgo_Particles2D_wrapper_get_lifetime(wasgo_id);
}
Texture Particles2D::get_normal_map(){
	return Texture(_wasgo_Particles2D_wrapper_get_normal_map(wasgo_id));
}
bool Particles2D::get_one_shot(){
	return (bool) _wasgo_Particles2D_wrapper_get_one_shot(wasgo_id);
}
float Particles2D::get_pre_process_time(){
	return (float) _wasgo_Particles2D_wrapper_get_pre_process_time(wasgo_id);
}
Material Particles2D::get_process_material(){
	return Material(_wasgo_Particles2D_wrapper_get_process_material(wasgo_id));
}
float Particles2D::get_randomness_ratio(){
	return (float) _wasgo_Particles2D_wrapper_get_randomness_ratio(wasgo_id);
}
float Particles2D::get_speed_scale(){
	return (float) _wasgo_Particles2D_wrapper_get_speed_scale(wasgo_id);
}
Texture Particles2D::get_texture(){
	return Texture(_wasgo_Particles2D_wrapper_get_texture(wasgo_id));
}
bool Particles2D::get_use_local_coordinates(){
	return (bool) _wasgo_Particles2D_wrapper_get_use_local_coordinates(wasgo_id);
}
Rect2 Particles2D::get_visibility_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Particles2D_wrapper_get_visibility_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
bool Particles2D::is_emitting(){
	return (bool) _wasgo_Particles2D_wrapper_is_emitting(wasgo_id);
}
void Particles2D::restart(){
	_wasgo_Particles2D_wrapper_restart(wasgo_id);
}
void Particles2D::set_amount(int p_amount){
	_wasgo_Particles2D_wrapper_set_amount(wasgo_id, p_amount);
}
void Particles2D::set_draw_order(Particles2D::DrawOrder p_order){
	_wasgo_Particles2D_wrapper_set_draw_order(wasgo_id, p_order._get_wasgo_id());
}
void Particles2D::set_emitting(bool p_emitting){
	_wasgo_Particles2D_wrapper_set_emitting(wasgo_id, p_emitting);
}
void Particles2D::set_explosiveness_ratio(float p_ratio){
	_wasgo_Particles2D_wrapper_set_explosiveness_ratio(wasgo_id, p_ratio);
}
void Particles2D::set_fixed_fps(int p_fps){
	_wasgo_Particles2D_wrapper_set_fixed_fps(wasgo_id, p_fps);
}
void Particles2D::set_fractional_delta(bool p_enable){
	_wasgo_Particles2D_wrapper_set_fractional_delta(wasgo_id, p_enable);
}
void Particles2D::set_lifetime(float p_secs){
	_wasgo_Particles2D_wrapper_set_lifetime(wasgo_id, p_secs);
}
void Particles2D::set_normal_map(Texture p_texture){
	_wasgo_Particles2D_wrapper_set_normal_map(wasgo_id, p_texture._get_wasgo_id());
}
void Particles2D::set_one_shot(bool p_secs){
	_wasgo_Particles2D_wrapper_set_one_shot(wasgo_id, p_secs);
}
void Particles2D::set_pre_process_time(float p_secs){
	_wasgo_Particles2D_wrapper_set_pre_process_time(wasgo_id, p_secs);
}
void Particles2D::set_process_material(Material p_material){
	_wasgo_Particles2D_wrapper_set_process_material(wasgo_id, p_material._get_wasgo_id());
}
void Particles2D::set_randomness_ratio(float p_ratio){
	_wasgo_Particles2D_wrapper_set_randomness_ratio(wasgo_id, p_ratio);
}
void Particles2D::set_speed_scale(float p_scale){
	_wasgo_Particles2D_wrapper_set_speed_scale(wasgo_id, p_scale);
}
void Particles2D::set_texture(Texture p_texture){
	_wasgo_Particles2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void Particles2D::set_use_local_coordinates(bool p_enable){
	_wasgo_Particles2D_wrapper_set_use_local_coordinates(wasgo_id, p_enable);
}
void Particles2D::set_visibility_rect(Rect2 p_visibility_rect){

    Variant wasgo_var_visibility_rect = p_visibility_rect;
    uint8_t wasgo_buffer_visibility_rect[20];
    int wasgo_size_visibility_rect = 20;
    encode_variant(wasgo_var_visibility_rect, wasgo_buffer_visibility_rect, wasgo_size_visibility_rect);
    
	_wasgo_Particles2D_wrapper_set_visibility_rect(wasgo_id, wasgo_buffer_visibility_rect, wasgo_size_visibility_rect);
}

Particles2D::Particles2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Particles2D::Particles2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
Particles2D::Particles2D():Node2D(){
}
Particles2D Particles2D::new_instance(){
    return Particles2D(_wasgo_Particles2D_constructor());
}
WasGoID Particles2D::_get_wasgo_id(){
    return wasgo_id;
}
Particles2D::operator bool(){
    return (bool) wasgo_id;
}
