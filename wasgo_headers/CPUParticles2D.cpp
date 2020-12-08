/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CPUParticles2D.h"
void CPUParticles2D::convert_from_particles(Node p_particles){
	_wasgo_CPUParticles2D_wrapper_convert_from_particles(wasgo_id, p_particles._get_wasgo_id());
}
int CPUParticles2D::get_amount(){
	return (int) _wasgo_CPUParticles2D_wrapper_get_amount(wasgo_id);
}
Color CPUParticles2D::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CPUParticles2D_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Gradient CPUParticles2D::get_color_ramp(){
	return Gradient(_wasgo_CPUParticles2D_wrapper_get_color_ramp(wasgo_id));
}
Vector2 CPUParticles2D::get_direction(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CPUParticles2D_wrapper_get_direction(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
CPUParticles2D::DrawOrder CPUParticles2D::get_draw_order(){
	return CPUParticles2D::DrawOrder(_wasgo_CPUParticles2D_wrapper_get_draw_order(wasgo_id));
}
PoolColorArray CPUParticles2D::get_emission_colors(){
	return PoolColorArray(_wasgo_CPUParticles2D_wrapper_get_emission_colors(wasgo_id));
}
PoolVector2Array CPUParticles2D::get_emission_normals(){
	return PoolVector2Array(_wasgo_CPUParticles2D_wrapper_get_emission_normals(wasgo_id));
}
PoolVector2Array CPUParticles2D::get_emission_points(){
	return PoolVector2Array(_wasgo_CPUParticles2D_wrapper_get_emission_points(wasgo_id));
}
Vector2 CPUParticles2D::get_emission_rect_extents(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CPUParticles2D_wrapper_get_emission_rect_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
CPUParticles2D::EmissionShape CPUParticles2D::get_emission_shape(){
	return CPUParticles2D::EmissionShape(_wasgo_CPUParticles2D_wrapper_get_emission_shape(wasgo_id));
}
float CPUParticles2D::get_emission_sphere_radius(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_emission_sphere_radius(wasgo_id);
}
float CPUParticles2D::get_explosiveness_ratio(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_explosiveness_ratio(wasgo_id);
}
int CPUParticles2D::get_fixed_fps(){
	return (int) _wasgo_CPUParticles2D_wrapper_get_fixed_fps(wasgo_id);
}
bool CPUParticles2D::get_fractional_delta(){
	return (bool) _wasgo_CPUParticles2D_wrapper_get_fractional_delta(wasgo_id);
}
Vector2 CPUParticles2D::get_gravity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CPUParticles2D_wrapper_get_gravity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float CPUParticles2D::get_lifetime(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_lifetime(wasgo_id);
}
float CPUParticles2D::get_lifetime_randomness(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_lifetime_randomness(wasgo_id);
}
Texture CPUParticles2D::get_normalmap(){
	return Texture(_wasgo_CPUParticles2D_wrapper_get_normalmap(wasgo_id));
}
bool CPUParticles2D::get_one_shot(){
	return (bool) _wasgo_CPUParticles2D_wrapper_get_one_shot(wasgo_id);
}
float CPUParticles2D::get_param(CPUParticles2D::Parameter p_param){
	return (float) _wasgo_CPUParticles2D_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
Curve CPUParticles2D::get_param_curve(CPUParticles2D::Parameter p_param){
	return Curve(_wasgo_CPUParticles2D_wrapper_get_param_curve(wasgo_id, p_param._get_wasgo_id()));
}
float CPUParticles2D::get_param_randomness(CPUParticles2D::Parameter p_param){
	return (float) _wasgo_CPUParticles2D_wrapper_get_param_randomness(wasgo_id, p_param._get_wasgo_id());
}
bool CPUParticles2D::get_particle_flag(CPUParticles2D::Flags p_flag){
	return (bool) _wasgo_CPUParticles2D_wrapper_get_particle_flag(wasgo_id, p_flag._get_wasgo_id());
}
float CPUParticles2D::get_pre_process_time(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_pre_process_time(wasgo_id);
}
float CPUParticles2D::get_randomness_ratio(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_randomness_ratio(wasgo_id);
}
float CPUParticles2D::get_speed_scale(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_speed_scale(wasgo_id);
}
float CPUParticles2D::get_spread(){
	return (float) _wasgo_CPUParticles2D_wrapper_get_spread(wasgo_id);
}
Texture CPUParticles2D::get_texture(){
	return Texture(_wasgo_CPUParticles2D_wrapper_get_texture(wasgo_id));
}
bool CPUParticles2D::get_use_local_coordinates(){
	return (bool) _wasgo_CPUParticles2D_wrapper_get_use_local_coordinates(wasgo_id);
}
bool CPUParticles2D::is_emitting(){
	return (bool) _wasgo_CPUParticles2D_wrapper_is_emitting(wasgo_id);
}
void CPUParticles2D::restart(){
	_wasgo_CPUParticles2D_wrapper_restart(wasgo_id);
}
void CPUParticles2D::set_amount(int p_amount){
	_wasgo_CPUParticles2D_wrapper_set_amount(wasgo_id, p_amount);
}
void CPUParticles2D::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CPUParticles2D_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void CPUParticles2D::set_color_ramp(Gradient p_ramp){
	_wasgo_CPUParticles2D_wrapper_set_color_ramp(wasgo_id, p_ramp._get_wasgo_id());
}
void CPUParticles2D::set_direction(Vector2 p_direction){

    Variant wasgo_var_direction = p_direction;
    uint8_t wasgo_buffer_direction[12];
    int wasgo_size_direction = 12;
    encode_variant(wasgo_var_direction, wasgo_buffer_direction, wasgo_size_direction);
    
	_wasgo_CPUParticles2D_wrapper_set_direction(wasgo_id, wasgo_buffer_direction, wasgo_size_direction);
}
void CPUParticles2D::set_draw_order(CPUParticles2D::DrawOrder p_order){
	_wasgo_CPUParticles2D_wrapper_set_draw_order(wasgo_id, p_order._get_wasgo_id());
}
void CPUParticles2D::set_emission_colors(PoolColorArray p_array){
	_wasgo_CPUParticles2D_wrapper_set_emission_colors(wasgo_id, p_array._get_wasgo_id());
}
void CPUParticles2D::set_emission_normals(PoolVector2Array p_array){
	_wasgo_CPUParticles2D_wrapper_set_emission_normals(wasgo_id, p_array._get_wasgo_id());
}
void CPUParticles2D::set_emission_points(PoolVector2Array p_array){
	_wasgo_CPUParticles2D_wrapper_set_emission_points(wasgo_id, p_array._get_wasgo_id());
}
void CPUParticles2D::set_emission_rect_extents(Vector2 p_extents){

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[12];
    int wasgo_size_extents = 12;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_CPUParticles2D_wrapper_set_emission_rect_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}
void CPUParticles2D::set_emission_shape(CPUParticles2D::EmissionShape p_shape){
	_wasgo_CPUParticles2D_wrapper_set_emission_shape(wasgo_id, p_shape._get_wasgo_id());
}
void CPUParticles2D::set_emission_sphere_radius(float p_radius){
	_wasgo_CPUParticles2D_wrapper_set_emission_sphere_radius(wasgo_id, p_radius);
}
void CPUParticles2D::set_emitting(bool p_emitting){
	_wasgo_CPUParticles2D_wrapper_set_emitting(wasgo_id, p_emitting);
}
void CPUParticles2D::set_explosiveness_ratio(float p_ratio){
	_wasgo_CPUParticles2D_wrapper_set_explosiveness_ratio(wasgo_id, p_ratio);
}
void CPUParticles2D::set_fixed_fps(int p_fps){
	_wasgo_CPUParticles2D_wrapper_set_fixed_fps(wasgo_id, p_fps);
}
void CPUParticles2D::set_fractional_delta(bool p_enable){
	_wasgo_CPUParticles2D_wrapper_set_fractional_delta(wasgo_id, p_enable);
}
void CPUParticles2D::set_gravity(Vector2 p_accel_vec){

    Variant wasgo_var_accel_vec = p_accel_vec;
    uint8_t wasgo_buffer_accel_vec[12];
    int wasgo_size_accel_vec = 12;
    encode_variant(wasgo_var_accel_vec, wasgo_buffer_accel_vec, wasgo_size_accel_vec);
    
	_wasgo_CPUParticles2D_wrapper_set_gravity(wasgo_id, wasgo_buffer_accel_vec, wasgo_size_accel_vec);
}
void CPUParticles2D::set_lifetime(float p_secs){
	_wasgo_CPUParticles2D_wrapper_set_lifetime(wasgo_id, p_secs);
}
void CPUParticles2D::set_lifetime_randomness(float p_random){
	_wasgo_CPUParticles2D_wrapper_set_lifetime_randomness(wasgo_id, p_random);
}
void CPUParticles2D::set_normalmap(Texture p_normalmap){
	_wasgo_CPUParticles2D_wrapper_set_normalmap(wasgo_id, p_normalmap._get_wasgo_id());
}
void CPUParticles2D::set_one_shot(bool p_enable){
	_wasgo_CPUParticles2D_wrapper_set_one_shot(wasgo_id, p_enable);
}
void CPUParticles2D::set_param(CPUParticles2D::Parameter p_param, float p_value){
	_wasgo_CPUParticles2D_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void CPUParticles2D::set_param_curve(CPUParticles2D::Parameter p_param, Curve p_curve){
	_wasgo_CPUParticles2D_wrapper_set_param_curve(wasgo_id, p_param._get_wasgo_id(), p_curve._get_wasgo_id());
}
void CPUParticles2D::set_param_randomness(CPUParticles2D::Parameter p_param, float p_randomness){
	_wasgo_CPUParticles2D_wrapper_set_param_randomness(wasgo_id, p_param._get_wasgo_id(), p_randomness);
}
void CPUParticles2D::set_particle_flag(CPUParticles2D::Flags p_flag, bool p_enable){
	_wasgo_CPUParticles2D_wrapper_set_particle_flag(wasgo_id, p_flag._get_wasgo_id(), p_enable);
}
void CPUParticles2D::set_pre_process_time(float p_secs){
	_wasgo_CPUParticles2D_wrapper_set_pre_process_time(wasgo_id, p_secs);
}
void CPUParticles2D::set_randomness_ratio(float p_ratio){
	_wasgo_CPUParticles2D_wrapper_set_randomness_ratio(wasgo_id, p_ratio);
}
void CPUParticles2D::set_speed_scale(float p_scale){
	_wasgo_CPUParticles2D_wrapper_set_speed_scale(wasgo_id, p_scale);
}
void CPUParticles2D::set_spread(float p_degrees){
	_wasgo_CPUParticles2D_wrapper_set_spread(wasgo_id, p_degrees);
}
void CPUParticles2D::set_texture(Texture p_texture){
	_wasgo_CPUParticles2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void CPUParticles2D::set_use_local_coordinates(bool p_enable){
	_wasgo_CPUParticles2D_wrapper_set_use_local_coordinates(wasgo_id, p_enable);
}

CPUParticles2D::CPUParticles2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
CPUParticles2D::CPUParticles2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
CPUParticles2D::CPUParticles2D():Node2D(){
}
CPUParticles2D CPUParticles2D::new_instance(){
    return CPUParticles2D(_wasgo_CPUParticles2D_constructor());
}
WasGoID CPUParticles2D::_get_wasgo_id(){
    return wasgo_id;
}
CPUParticles2D::operator bool(){
    return (bool) wasgo_id;
}
