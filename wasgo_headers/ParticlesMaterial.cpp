/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ParticlesMaterial.h"
Color ParticlesMaterial::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ParticlesMaterial_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Texture ParticlesMaterial::get_color_ramp(){
	return Texture(_wasgo_ParticlesMaterial_wrapper_get_color_ramp(wasgo_id));
}
Vector3 ParticlesMaterial::get_direction(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_ParticlesMaterial_wrapper_get_direction(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 ParticlesMaterial::get_emission_box_extents(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_ParticlesMaterial_wrapper_get_emission_box_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Texture ParticlesMaterial::get_emission_color_texture(){
	return Texture(_wasgo_ParticlesMaterial_wrapper_get_emission_color_texture(wasgo_id));
}
Texture ParticlesMaterial::get_emission_normal_texture(){
	return Texture(_wasgo_ParticlesMaterial_wrapper_get_emission_normal_texture(wasgo_id));
}
int ParticlesMaterial::get_emission_point_count(){
	return (int) _wasgo_ParticlesMaterial_wrapper_get_emission_point_count(wasgo_id);
}
Texture ParticlesMaterial::get_emission_point_texture(){
	return Texture(_wasgo_ParticlesMaterial_wrapper_get_emission_point_texture(wasgo_id));
}
ParticlesMaterial::EmissionShape ParticlesMaterial::get_emission_shape(){
	return ParticlesMaterial::EmissionShape(_wasgo_ParticlesMaterial_wrapper_get_emission_shape(wasgo_id));
}
float ParticlesMaterial::get_emission_sphere_radius(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_emission_sphere_radius(wasgo_id);
}
bool ParticlesMaterial::get_flag(ParticlesMaterial::Flags p_flag){
	return (bool) _wasgo_ParticlesMaterial_wrapper_get_flag(wasgo_id, p_flag._get_wasgo_id());
}
float ParticlesMaterial::get_flatness(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_flatness(wasgo_id);
}
Vector3 ParticlesMaterial::get_gravity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_ParticlesMaterial_wrapper_get_gravity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float ParticlesMaterial::get_lifetime_randomness(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_lifetime_randomness(wasgo_id);
}
float ParticlesMaterial::get_param(ParticlesMaterial::Parameter p_param){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
float ParticlesMaterial::get_param_randomness(ParticlesMaterial::Parameter p_param){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_param_randomness(wasgo_id, p_param._get_wasgo_id());
}
Texture ParticlesMaterial::get_param_texture(ParticlesMaterial::Parameter p_param){
	return Texture(_wasgo_ParticlesMaterial_wrapper_get_param_texture(wasgo_id, p_param._get_wasgo_id()));
}
float ParticlesMaterial::get_spread(){
	return (float) _wasgo_ParticlesMaterial_wrapper_get_spread(wasgo_id);
}
GradientTexture ParticlesMaterial::get_trail_color_modifier(){
	return GradientTexture(_wasgo_ParticlesMaterial_wrapper_get_trail_color_modifier(wasgo_id));
}
int ParticlesMaterial::get_trail_divisor(){
	return (int) _wasgo_ParticlesMaterial_wrapper_get_trail_divisor(wasgo_id);
}
CurveTexture ParticlesMaterial::get_trail_size_modifier(){
	return CurveTexture(_wasgo_ParticlesMaterial_wrapper_get_trail_size_modifier(wasgo_id));
}
void ParticlesMaterial::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ParticlesMaterial_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ParticlesMaterial::set_color_ramp(Texture p_ramp){
	_wasgo_ParticlesMaterial_wrapper_set_color_ramp(wasgo_id, p_ramp._get_wasgo_id());
}
void ParticlesMaterial::set_direction(Vector3 p_degrees){

    Variant wasgo_var_degrees = p_degrees;
    uint8_t wasgo_buffer_degrees[16];
    int wasgo_size_degrees = 16;
    encode_variant(wasgo_var_degrees, wasgo_buffer_degrees, wasgo_size_degrees);
    
	_wasgo_ParticlesMaterial_wrapper_set_direction(wasgo_id, wasgo_buffer_degrees, wasgo_size_degrees);
}
void ParticlesMaterial::set_emission_box_extents(Vector3 p_extents){

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[16];
    int wasgo_size_extents = 16;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_ParticlesMaterial_wrapper_set_emission_box_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}
void ParticlesMaterial::set_emission_color_texture(Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_emission_color_texture(wasgo_id, p_texture._get_wasgo_id());
}
void ParticlesMaterial::set_emission_normal_texture(Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_emission_normal_texture(wasgo_id, p_texture._get_wasgo_id());
}
void ParticlesMaterial::set_emission_point_count(int p_point_count){
	_wasgo_ParticlesMaterial_wrapper_set_emission_point_count(wasgo_id, p_point_count);
}
void ParticlesMaterial::set_emission_point_texture(Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_emission_point_texture(wasgo_id, p_texture._get_wasgo_id());
}
void ParticlesMaterial::set_emission_shape(ParticlesMaterial::EmissionShape p_shape){
	_wasgo_ParticlesMaterial_wrapper_set_emission_shape(wasgo_id, p_shape._get_wasgo_id());
}
void ParticlesMaterial::set_emission_sphere_radius(float p_radius){
	_wasgo_ParticlesMaterial_wrapper_set_emission_sphere_radius(wasgo_id, p_radius);
}
void ParticlesMaterial::set_flag(ParticlesMaterial::Flags p_flag, bool p_enable){
	_wasgo_ParticlesMaterial_wrapper_set_flag(wasgo_id, p_flag._get_wasgo_id(), p_enable);
}
void ParticlesMaterial::set_flatness(float p_amount){
	_wasgo_ParticlesMaterial_wrapper_set_flatness(wasgo_id, p_amount);
}
void ParticlesMaterial::set_gravity(Vector3 p_accel_vec){

    Variant wasgo_var_accel_vec = p_accel_vec;
    uint8_t wasgo_buffer_accel_vec[16];
    int wasgo_size_accel_vec = 16;
    encode_variant(wasgo_var_accel_vec, wasgo_buffer_accel_vec, wasgo_size_accel_vec);
    
	_wasgo_ParticlesMaterial_wrapper_set_gravity(wasgo_id, wasgo_buffer_accel_vec, wasgo_size_accel_vec);
}
void ParticlesMaterial::set_lifetime_randomness(float p_randomness){
	_wasgo_ParticlesMaterial_wrapper_set_lifetime_randomness(wasgo_id, p_randomness);
}
void ParticlesMaterial::set_param(ParticlesMaterial::Parameter p_param, float p_value){
	_wasgo_ParticlesMaterial_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void ParticlesMaterial::set_param_randomness(ParticlesMaterial::Parameter p_param, float p_randomness){
	_wasgo_ParticlesMaterial_wrapper_set_param_randomness(wasgo_id, p_param._get_wasgo_id(), p_randomness);
}
void ParticlesMaterial::set_param_texture(ParticlesMaterial::Parameter p_param, Texture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_param_texture(wasgo_id, p_param._get_wasgo_id(), p_texture._get_wasgo_id());
}
void ParticlesMaterial::set_spread(float p_degrees){
	_wasgo_ParticlesMaterial_wrapper_set_spread(wasgo_id, p_degrees);
}
void ParticlesMaterial::set_trail_color_modifier(GradientTexture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_trail_color_modifier(wasgo_id, p_texture._get_wasgo_id());
}
void ParticlesMaterial::set_trail_divisor(int p_divisor){
	_wasgo_ParticlesMaterial_wrapper_set_trail_divisor(wasgo_id, p_divisor);
}
void ParticlesMaterial::set_trail_size_modifier(CurveTexture p_texture){
	_wasgo_ParticlesMaterial_wrapper_set_trail_size_modifier(wasgo_id, p_texture._get_wasgo_id());
}

ParticlesMaterial::ParticlesMaterial(WasGoID p_wasgo_id) : Material(p_wasgo_id){
}
ParticlesMaterial::ParticlesMaterial(Material other) : Material(other._get_wasgo_id()){
    wasgo_id = _wasgo_ParticlesMaterial_constructor();
}
ParticlesMaterial::new_instance(){
    return ParticlesMaterial(_wasgo_ParticlesMaterial_constructor());
}