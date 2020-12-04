/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CPUParticles.h"
void CPUParticles::convert_from_particles(Node p_particles){
	_wasgo_CPUParticles_wrapper_convert_from_particles(wasgo_id, p_particles._get_wasgo_id());
}
int CPUParticles::get_amount(){
	return (int) _wasgo_CPUParticles_wrapper_get_amount(wasgo_id);
}
Color CPUParticles::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CPUParticles_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Gradient CPUParticles::get_color_ramp(){
	return Gradient(_wasgo_CPUParticles_wrapper_get_color_ramp(wasgo_id));
}
Vector3 CPUParticles::get_direction(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_CPUParticles_wrapper_get_direction(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
CPUParticles::DrawOrder CPUParticles::get_draw_order(){
	return CPUParticles::DrawOrder(_wasgo_CPUParticles_wrapper_get_draw_order(wasgo_id));
}
Vector3 CPUParticles::get_emission_box_extents(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_CPUParticles_wrapper_get_emission_box_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
PoolColorArray CPUParticles::get_emission_colors(){
	return PoolColorArray(_wasgo_CPUParticles_wrapper_get_emission_colors(wasgo_id));
}
PoolVector3Array CPUParticles::get_emission_normals(){
	return PoolVector3Array(_wasgo_CPUParticles_wrapper_get_emission_normals(wasgo_id));
}
PoolVector3Array CPUParticles::get_emission_points(){
	return PoolVector3Array(_wasgo_CPUParticles_wrapper_get_emission_points(wasgo_id));
}
CPUParticles::EmissionShape CPUParticles::get_emission_shape(){
	return CPUParticles::EmissionShape(_wasgo_CPUParticles_wrapper_get_emission_shape(wasgo_id));
}
float CPUParticles::get_emission_sphere_radius(){
	return (float) _wasgo_CPUParticles_wrapper_get_emission_sphere_radius(wasgo_id);
}
float CPUParticles::get_explosiveness_ratio(){
	return (float) _wasgo_CPUParticles_wrapper_get_explosiveness_ratio(wasgo_id);
}
int CPUParticles::get_fixed_fps(){
	return (int) _wasgo_CPUParticles_wrapper_get_fixed_fps(wasgo_id);
}
float CPUParticles::get_flatness(){
	return (float) _wasgo_CPUParticles_wrapper_get_flatness(wasgo_id);
}
bool CPUParticles::get_fractional_delta(){
	return (bool) _wasgo_CPUParticles_wrapper_get_fractional_delta(wasgo_id);
}
Vector3 CPUParticles::get_gravity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_CPUParticles_wrapper_get_gravity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float CPUParticles::get_lifetime(){
	return (float) _wasgo_CPUParticles_wrapper_get_lifetime(wasgo_id);
}
float CPUParticles::get_lifetime_randomness(){
	return (float) _wasgo_CPUParticles_wrapper_get_lifetime_randomness(wasgo_id);
}
Mesh CPUParticles::get_mesh(){
	return Mesh(_wasgo_CPUParticles_wrapper_get_mesh(wasgo_id));
}
bool CPUParticles::get_one_shot(){
	return (bool) _wasgo_CPUParticles_wrapper_get_one_shot(wasgo_id);
}
float CPUParticles::get_param(CPUParticles::Parameter p_param){
	return (float) _wasgo_CPUParticles_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
Curve CPUParticles::get_param_curve(CPUParticles::Parameter p_param){
	return Curve(_wasgo_CPUParticles_wrapper_get_param_curve(wasgo_id, p_param._get_wasgo_id()));
}
float CPUParticles::get_param_randomness(CPUParticles::Parameter p_param){
	return (float) _wasgo_CPUParticles_wrapper_get_param_randomness(wasgo_id, p_param._get_wasgo_id());
}
bool CPUParticles::get_particle_flag(CPUParticles::Flags p_flag){
	return (bool) _wasgo_CPUParticles_wrapper_get_particle_flag(wasgo_id, p_flag._get_wasgo_id());
}
float CPUParticles::get_pre_process_time(){
	return (float) _wasgo_CPUParticles_wrapper_get_pre_process_time(wasgo_id);
}
float CPUParticles::get_randomness_ratio(){
	return (float) _wasgo_CPUParticles_wrapper_get_randomness_ratio(wasgo_id);
}
float CPUParticles::get_speed_scale(){
	return (float) _wasgo_CPUParticles_wrapper_get_speed_scale(wasgo_id);
}
float CPUParticles::get_spread(){
	return (float) _wasgo_CPUParticles_wrapper_get_spread(wasgo_id);
}
bool CPUParticles::get_use_local_coordinates(){
	return (bool) _wasgo_CPUParticles_wrapper_get_use_local_coordinates(wasgo_id);
}
bool CPUParticles::is_emitting(){
	return (bool) _wasgo_CPUParticles_wrapper_is_emitting(wasgo_id);
}
void CPUParticles::restart(){
	_wasgo_CPUParticles_wrapper_restart(wasgo_id);
}
void CPUParticles::set_amount(int p_amount){
	_wasgo_CPUParticles_wrapper_set_amount(wasgo_id, p_amount);
}
void CPUParticles::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CPUParticles_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void CPUParticles::set_color_ramp(Gradient p_ramp){
	_wasgo_CPUParticles_wrapper_set_color_ramp(wasgo_id, p_ramp._get_wasgo_id());
}
void CPUParticles::set_direction(Vector3 p_direction){

    Variant wasgo_var_direction = p_direction;
    uint8_t wasgo_buffer_direction[16];
    int wasgo_size_direction = 16;
    encode_variant(wasgo_var_direction, wasgo_buffer_direction, wasgo_size_direction);
    
	_wasgo_CPUParticles_wrapper_set_direction(wasgo_id, wasgo_buffer_direction, wasgo_size_direction);
}
void CPUParticles::set_draw_order(CPUParticles::DrawOrder p_order){
	_wasgo_CPUParticles_wrapper_set_draw_order(wasgo_id, p_order._get_wasgo_id());
}
void CPUParticles::set_emission_box_extents(Vector3 p_extents){

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[16];
    int wasgo_size_extents = 16;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_CPUParticles_wrapper_set_emission_box_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}
void CPUParticles::set_emission_colors(PoolColorArray p_array){
	_wasgo_CPUParticles_wrapper_set_emission_colors(wasgo_id, p_array._get_wasgo_id());
}
void CPUParticles::set_emission_normals(PoolVector3Array p_array){
	_wasgo_CPUParticles_wrapper_set_emission_normals(wasgo_id, p_array._get_wasgo_id());
}
void CPUParticles::set_emission_points(PoolVector3Array p_array){
	_wasgo_CPUParticles_wrapper_set_emission_points(wasgo_id, p_array._get_wasgo_id());
}
void CPUParticles::set_emission_shape(CPUParticles::EmissionShape p_shape){
	_wasgo_CPUParticles_wrapper_set_emission_shape(wasgo_id, p_shape._get_wasgo_id());
}
void CPUParticles::set_emission_sphere_radius(float p_radius){
	_wasgo_CPUParticles_wrapper_set_emission_sphere_radius(wasgo_id, p_radius);
}
void CPUParticles::set_emitting(bool p_emitting){
	_wasgo_CPUParticles_wrapper_set_emitting(wasgo_id, p_emitting);
}
void CPUParticles::set_explosiveness_ratio(float p_ratio){
	_wasgo_CPUParticles_wrapper_set_explosiveness_ratio(wasgo_id, p_ratio);
}
void CPUParticles::set_fixed_fps(int p_fps){
	_wasgo_CPUParticles_wrapper_set_fixed_fps(wasgo_id, p_fps);
}
void CPUParticles::set_flatness(float p_amount){
	_wasgo_CPUParticles_wrapper_set_flatness(wasgo_id, p_amount);
}
void CPUParticles::set_fractional_delta(bool p_enable){
	_wasgo_CPUParticles_wrapper_set_fractional_delta(wasgo_id, p_enable);
}
void CPUParticles::set_gravity(Vector3 p_accel_vec){

    Variant wasgo_var_accel_vec = p_accel_vec;
    uint8_t wasgo_buffer_accel_vec[16];
    int wasgo_size_accel_vec = 16;
    encode_variant(wasgo_var_accel_vec, wasgo_buffer_accel_vec, wasgo_size_accel_vec);
    
	_wasgo_CPUParticles_wrapper_set_gravity(wasgo_id, wasgo_buffer_accel_vec, wasgo_size_accel_vec);
}
void CPUParticles::set_lifetime(float p_secs){
	_wasgo_CPUParticles_wrapper_set_lifetime(wasgo_id, p_secs);
}
void CPUParticles::set_lifetime_randomness(float p_random){
	_wasgo_CPUParticles_wrapper_set_lifetime_randomness(wasgo_id, p_random);
}
void CPUParticles::set_mesh(Mesh p_mesh){
	_wasgo_CPUParticles_wrapper_set_mesh(wasgo_id, p_mesh._get_wasgo_id());
}
void CPUParticles::set_one_shot(bool p_enable){
	_wasgo_CPUParticles_wrapper_set_one_shot(wasgo_id, p_enable);
}
void CPUParticles::set_param(CPUParticles::Parameter p_param, float p_value){
	_wasgo_CPUParticles_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void CPUParticles::set_param_curve(CPUParticles::Parameter p_param, Curve p_curve){
	_wasgo_CPUParticles_wrapper_set_param_curve(wasgo_id, p_param._get_wasgo_id(), p_curve._get_wasgo_id());
}
void CPUParticles::set_param_randomness(CPUParticles::Parameter p_param, float p_randomness){
	_wasgo_CPUParticles_wrapper_set_param_randomness(wasgo_id, p_param._get_wasgo_id(), p_randomness);
}
void CPUParticles::set_particle_flag(CPUParticles::Flags p_flag, bool p_enable){
	_wasgo_CPUParticles_wrapper_set_particle_flag(wasgo_id, p_flag._get_wasgo_id(), p_enable);
}
void CPUParticles::set_pre_process_time(float p_secs){
	_wasgo_CPUParticles_wrapper_set_pre_process_time(wasgo_id, p_secs);
}
void CPUParticles::set_randomness_ratio(float p_ratio){
	_wasgo_CPUParticles_wrapper_set_randomness_ratio(wasgo_id, p_ratio);
}
void CPUParticles::set_speed_scale(float p_scale){
	_wasgo_CPUParticles_wrapper_set_speed_scale(wasgo_id, p_scale);
}
void CPUParticles::set_spread(float p_degrees){
	_wasgo_CPUParticles_wrapper_set_spread(wasgo_id, p_degrees);
}
void CPUParticles::set_use_local_coordinates(bool p_enable){
	_wasgo_CPUParticles_wrapper_set_use_local_coordinates(wasgo_id, p_enable);
}

CPUParticles::CPUParticles(WasGoID p_wasgo_id) : GeometryInstance(p_wasgo_id){
}
CPUParticles::CPUParticles(GeometryInstance other) : GeometryInstance(other._get_wasgo_id()){
    wasgo_id = _wasgo_CPUParticles_constructor();
}
CPUParticles::new_instance(){
    return CPUParticles(_wasgo_CPUParticles_constructor());
}