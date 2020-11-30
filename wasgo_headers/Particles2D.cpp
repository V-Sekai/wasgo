/* THIS FILE IS GENERATED */
#include "Particles2D.h"
Rect2 Particles2D::capture_rect(){
	return Rect2::from_wasgo_id(_wasgo_Particles2D_wrapper_capture_rect(wasgo_id));
}
int Particles2D::get_amount(){
	return (int) _wasgo_Particles2D_wrapper_get_amount(wasgo_id));
}
Particles2D::DrawOrder Particles2D::get_draw_order(){
	return Particles2D::DrawOrder::from_wasgo_id(_wasgo_Particles2D_wrapper_get_draw_order(wasgo_id));
}
float Particles2D::get_explosiveness_ratio(){
	return (float) _wasgo_Particles2D_wrapper_get_explosiveness_ratio(wasgo_id));
}
int Particles2D::get_fixed_fps(){
	return (int) _wasgo_Particles2D_wrapper_get_fixed_fps(wasgo_id));
}
bool Particles2D::get_fractional_delta(){
	return (bool) _wasgo_Particles2D_wrapper_get_fractional_delta(wasgo_id));
}
float Particles2D::get_lifetime(){
	return (float) _wasgo_Particles2D_wrapper_get_lifetime(wasgo_id));
}
Texture Particles2D::get_normal_map(){
	return Texture::from_wasgo_id(_wasgo_Particles2D_wrapper_get_normal_map(wasgo_id));
}
bool Particles2D::get_one_shot(){
	return (bool) _wasgo_Particles2D_wrapper_get_one_shot(wasgo_id));
}
float Particles2D::get_pre_process_time(){
	return (float) _wasgo_Particles2D_wrapper_get_pre_process_time(wasgo_id));
}
Material Particles2D::get_process_material(){
	return Material::from_wasgo_id(_wasgo_Particles2D_wrapper_get_process_material(wasgo_id));
}
float Particles2D::get_randomness_ratio(){
	return (float) _wasgo_Particles2D_wrapper_get_randomness_ratio(wasgo_id));
}
float Particles2D::get_speed_scale(){
	return (float) _wasgo_Particles2D_wrapper_get_speed_scale(wasgo_id));
}
Texture Particles2D::get_texture(){
	return Texture::from_wasgo_id(_wasgo_Particles2D_wrapper_get_texture(wasgo_id));
}
bool Particles2D::get_use_local_coordinates(){
	return (bool) _wasgo_Particles2D_wrapper_get_use_local_coordinates(wasgo_id));
}
Rect2 Particles2D::get_visibility_rect(){
	return Rect2::from_wasgo_id(_wasgo_Particles2D_wrapper_get_visibility_rect(wasgo_id));
}
bool Particles2D::is_emitting(){
	return (bool) _wasgo_Particles2D_wrapper_is_emitting(wasgo_id));
}
void Particles2D::restart(){
	_wasgo_Particles2D_wrapper_restart(wasgo_id);
}
void Particles2D::set_amount(int p_amount){
	_wasgo_Particles2D_wrapper_set_amount(wasgo_id, amount);
}
void Particles2D::set_draw_order(Particles2D::DrawOrder p_order){
	_wasgo_Particles2D_wrapper_set_draw_order(wasgo_id, ((Variant) order).get_wasgo_id());
}
void Particles2D::set_emitting(bool p_emitting){
	_wasgo_Particles2D_wrapper_set_emitting(wasgo_id, emitting);
}
void Particles2D::set_explosiveness_ratio(float p_ratio){
	_wasgo_Particles2D_wrapper_set_explosiveness_ratio(wasgo_id, ratio);
}
void Particles2D::set_fixed_fps(int p_fps){
	_wasgo_Particles2D_wrapper_set_fixed_fps(wasgo_id, fps);
}
void Particles2D::set_fractional_delta(bool p_enable){
	_wasgo_Particles2D_wrapper_set_fractional_delta(wasgo_id, enable);
}
void Particles2D::set_lifetime(float p_secs){
	_wasgo_Particles2D_wrapper_set_lifetime(wasgo_id, secs);
}
void Particles2D::set_normal_map(Texture p_texture){
	_wasgo_Particles2D_wrapper_set_normal_map(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void Particles2D::set_one_shot(bool p_secs){
	_wasgo_Particles2D_wrapper_set_one_shot(wasgo_id, secs);
}
void Particles2D::set_pre_process_time(float p_secs){
	_wasgo_Particles2D_wrapper_set_pre_process_time(wasgo_id, secs);
}
void Particles2D::set_process_material(Material p_material){
	_wasgo_Particles2D_wrapper_set_process_material(wasgo_id, ((Variant) material).get_wasgo_id());
}
void Particles2D::set_randomness_ratio(float p_ratio){
	_wasgo_Particles2D_wrapper_set_randomness_ratio(wasgo_id, ratio);
}
void Particles2D::set_speed_scale(float p_scale){
	_wasgo_Particles2D_wrapper_set_speed_scale(wasgo_id, scale);
}
void Particles2D::set_texture(Texture p_texture){
	_wasgo_Particles2D_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void Particles2D::set_use_local_coordinates(bool p_enable){
	_wasgo_Particles2D_wrapper_set_use_local_coordinates(wasgo_id, enable);
}
void Particles2D::set_visibility_rect(Rect2 p_visibility_rect){
	_wasgo_Particles2D_wrapper_set_visibility_rect(wasgo_id, ((Variant) visibility_rect).get_wasgo_id());
}

Particles2D::Particles2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Particles2D::~Particles2D(){
}