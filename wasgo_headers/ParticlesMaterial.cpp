/* THIS FILE IS GENERATED */
#include "ParticlesMaterial.h"
Color ParticlesMaterial::get_color(){
	return Color::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_color(wasgo_id));
}
Texture ParticlesMaterial::get_color_ramp(){
	return Texture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_color_ramp(wasgo_id));
}
Vector3 ParticlesMaterial::get_direction(){
	return Vector3::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_direction(wasgo_id));
}
Vector3 ParticlesMaterial::get_emission_box_extents(){
	return Vector3::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_emission_box_extents(wasgo_id));
}
Texture ParticlesMaterial::get_emission_color_texture(){
	return Texture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_emission_color_texture(wasgo_id));
}
Texture ParticlesMaterial::get_emission_normal_texture(){
	return Texture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_emission_normal_texture(wasgo_id));
}
int ParticlesMaterial::get_emission_point_count(){
	return (int) _wasgo_ParticlesMaterial_wrapper_get_emission_point_count(wasgo_id);
}
Texture ParticlesMaterial::get_emission_point_texture(){
	return Texture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_emission_point_texture(wasgo_id));
}
ParticlesMaterial::EmissionShape ParticlesMaterial::get_emission_shape(){
	return ParticlesMaterial::EmissionShape::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_emission_shape(wasgo_id));
}
float ParticlesMaterial::get_emission_sphere_radius(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_emission_sphere_radius(wasgo_id);
}
bool ParticlesMaterial::get_flag(ParticlesMaterial::Flags p_flag){
	return (bool) _wasgo_ParticlesMaterial_wrapper_get_flag(wasgo_id, ((Variant) p_flag).get_wasgo_id());
}
float ParticlesMaterial::get_flatness(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_flatness(wasgo_id);
}
Vector3 ParticlesMaterial::get_gravity(){
	return Vector3::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_gravity(wasgo_id));
}
float ParticlesMaterial::get_lifetime_randomness(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_lifetime_randomness(wasgo_id);
}
float ParticlesMaterial::get_param(ParticlesMaterial::Parameter p_param){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_param(wasgo_id, ((Variant) p_param).get_wasgo_id());
}
float ParticlesMaterial::get_param_randomness(ParticlesMaterial::Parameter p_param){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_param_randomness(wasgo_id, ((Variant) p_param).get_wasgo_id());
}
Texture ParticlesMaterial::get_param_texture(ParticlesMaterial::Parameter p_param){
	return Texture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_param_texture(wasgo_id, ((Variant) p_param).get_wasgo_id()));
}
float ParticlesMaterial::get_spread(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_spread(wasgo_id);
}
GradientTexture ParticlesMaterial::get_trail_color_modifier(){
	return GradientTexture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_trail_color_modifier(wasgo_id));
}
int ParticlesMaterial::get_trail_divisor(){
	return (int) _wasgo_ParticlesMaterial_wrapper_get_trail_divisor(wasgo_id);
}
CurveTexture ParticlesMaterial::get_trail_size_modifier(){
	return CurveTexture::from_wasgo_id(_wasgo_ParticlesMaterial_wrapper_get_trail_size_modifier(wasgo_id));
}
void ParticlesMaterial::set_color(Color p_color){
	_wasgo_ParticlesMaterial_wrapper_set_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
}
void ParticlesMaterial::set_color_ramp(Texture p_ramp){
	_wasgo_ParticlesMaterial_wrapper_set_color_ramp(wasgo_id, ((Variant) p_ramp).get_wasgo_id());
}
void ParticlesMaterial::set_direction(Vector3 p_degrees){
	_wasgo_ParticlesMaterial_wrapper_set_direction(wasgo_id, ((Variant) p_degrees).get_wasgo_id());
}
void ParticlesMaterial::set_emission_box_extents(Vector3 p_extents){
	_wasgo_ParticlesMaterial_wrapper_set_emission_box_extents(wasgo_id, ((Variant) p_extents).get_wasgo_id());
}
void ParticlesMaterial::set_emission_color_texture(Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_emission_color_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void ParticlesMaterial::set_emission_normal_texture(Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_emission_normal_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void ParticlesMaterial::set_emission_point_count(int p_point_count){
	_wasgo_ParticlesMaterial_wrapper_set_emission_point_count(wasgo_id, p_point_count);
}
void ParticlesMaterial::set_emission_point_texture(Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_emission_point_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void ParticlesMaterial::set_emission_shape(ParticlesMaterial::EmissionShape p_shape){
	_wasgo_ParticlesMaterial_wrapper_set_emission_shape(wasgo_id, ((Variant) p_shape).get_wasgo_id());
}
void ParticlesMaterial::set_emission_sphere_radius(float p_radius){
	_wasgo_ParticlesMaterial_wrapper_set_emission_sphere_radius(wasgo_id, p_radius);
}
void ParticlesMaterial::set_flag(ParticlesMaterial::Flags p_flag, bool p_enable){
	_wasgo_ParticlesMaterial_wrapper_set_flag(wasgo_id, ((Variant) p_flag).get_wasgo_id(), p_enable);
}
void ParticlesMaterial::set_flatness(float p_amount){
	_wasgo_ParticlesMaterial_wrapper_set_flatness(wasgo_id, p_amount);
}
void ParticlesMaterial::set_gravity(Vector3 p_accel_vec){
	_wasgo_ParticlesMaterial_wrapper_set_gravity(wasgo_id, ((Variant) p_accel_vec).get_wasgo_id());
}
void ParticlesMaterial::set_lifetime_randomness(float p_randomness){
	_wasgo_ParticlesMaterial_wrapper_set_lifetime_randomness(wasgo_id, p_randomness);
}
void ParticlesMaterial::set_param(ParticlesMaterial::Parameter p_param, float p_value){
	_wasgo_ParticlesMaterial_wrapper_set_param(wasgo_id, ((Variant) p_param).get_wasgo_id(), p_value);
}
void ParticlesMaterial::set_param_randomness(ParticlesMaterial::Parameter p_param, float p_randomness){
	_wasgo_ParticlesMaterial_wrapper_set_param_randomness(wasgo_id, ((Variant) p_param).get_wasgo_id(), p_randomness);
}
void ParticlesMaterial::set_param_texture(ParticlesMaterial::Parameter p_param, Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_param_texture(wasgo_id, ((Variant) p_param).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}
void ParticlesMaterial::set_spread(float p_degrees){
	_wasgo_ParticlesMaterial_wrapper_set_spread(wasgo_id, p_degrees);
}
void ParticlesMaterial::set_trail_color_modifier(GradientTexture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_trail_color_modifier(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void ParticlesMaterial::set_trail_divisor(int p_divisor){
	_wasgo_ParticlesMaterial_wrapper_set_trail_divisor(wasgo_id, p_divisor);
}
void ParticlesMaterial::set_trail_size_modifier(CurveTexture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_trail_size_modifier(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}