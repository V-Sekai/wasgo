/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ProceduralSky.h"
Color ProceduralSky::get_ground_bottom_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ProceduralSky_wrapper_get_ground_bottom_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float ProceduralSky::get_ground_curve(){
	return (float) _wasgo_ProceduralSky_wrapper_get_ground_curve(wasgo_id);
}
float ProceduralSky::get_ground_energy(){
	return (float) _wasgo_ProceduralSky_wrapper_get_ground_energy(wasgo_id);
}
Color ProceduralSky::get_ground_horizon_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ProceduralSky_wrapper_get_ground_horizon_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float ProceduralSky::get_sky_curve(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sky_curve(wasgo_id);
}
float ProceduralSky::get_sky_energy(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sky_energy(wasgo_id);
}
Color ProceduralSky::get_sky_horizon_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ProceduralSky_wrapper_get_sky_horizon_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color ProceduralSky::get_sky_top_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ProceduralSky_wrapper_get_sky_top_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float ProceduralSky::get_sun_angle_max(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sun_angle_max(wasgo_id);
}
float ProceduralSky::get_sun_angle_min(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sun_angle_min(wasgo_id);
}
Color ProceduralSky::get_sun_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ProceduralSky_wrapper_get_sun_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float ProceduralSky::get_sun_curve(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sun_curve(wasgo_id);
}
float ProceduralSky::get_sun_energy(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sun_energy(wasgo_id);
}
float ProceduralSky::get_sun_latitude(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sun_latitude(wasgo_id);
}
float ProceduralSky::get_sun_longitude(){
	return (float) _wasgo_ProceduralSky_wrapper_get_sun_longitude(wasgo_id);
}
ProceduralSky::TextureSize ProceduralSky::get_texture_size(){
	return ProceduralSky::TextureSize(_wasgo_ProceduralSky_wrapper_get_texture_size(wasgo_id));
}
void ProceduralSky::set_ground_bottom_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ProceduralSky_wrapper_set_ground_bottom_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ProceduralSky::set_ground_curve(float p_curve){
	_wasgo_ProceduralSky_wrapper_set_ground_curve(wasgo_id, p_curve);
}
void ProceduralSky::set_ground_energy(float p_energy){
	_wasgo_ProceduralSky_wrapper_set_ground_energy(wasgo_id, p_energy);
}
void ProceduralSky::set_ground_horizon_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ProceduralSky_wrapper_set_ground_horizon_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ProceduralSky::set_sky_curve(float p_curve){
	_wasgo_ProceduralSky_wrapper_set_sky_curve(wasgo_id, p_curve);
}
void ProceduralSky::set_sky_energy(float p_energy){
	_wasgo_ProceduralSky_wrapper_set_sky_energy(wasgo_id, p_energy);
}
void ProceduralSky::set_sky_horizon_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ProceduralSky_wrapper_set_sky_horizon_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ProceduralSky::set_sky_top_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ProceduralSky_wrapper_set_sky_top_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ProceduralSky::set_sun_angle_max(float p_degrees){
	_wasgo_ProceduralSky_wrapper_set_sun_angle_max(wasgo_id, p_degrees);
}
void ProceduralSky::set_sun_angle_min(float p_degrees){
	_wasgo_ProceduralSky_wrapper_set_sun_angle_min(wasgo_id, p_degrees);
}
void ProceduralSky::set_sun_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ProceduralSky_wrapper_set_sun_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ProceduralSky::set_sun_curve(float p_curve){
	_wasgo_ProceduralSky_wrapper_set_sun_curve(wasgo_id, p_curve);
}
void ProceduralSky::set_sun_energy(float p_energy){
	_wasgo_ProceduralSky_wrapper_set_sun_energy(wasgo_id, p_energy);
}
void ProceduralSky::set_sun_latitude(float p_degrees){
	_wasgo_ProceduralSky_wrapper_set_sun_latitude(wasgo_id, p_degrees);
}
void ProceduralSky::set_sun_longitude(float p_degrees){
	_wasgo_ProceduralSky_wrapper_set_sun_longitude(wasgo_id, p_degrees);
}
void ProceduralSky::set_texture_size(ProceduralSky::TextureSize p_size){
	_wasgo_ProceduralSky_wrapper_set_texture_size(wasgo_id, p_size._get_wasgo_id());
}

ProceduralSky::ProceduralSky(WasGoID p_wasgo_id) : Sky(p_wasgo_id){
}
ProceduralSky::ProceduralSky(Sky other) : Sky(other._get_wasgo_id()){
    wasgo_id = _wasgo_ProceduralSky_constructor();
}
ProceduralSky::new_instance(){
    return ProceduralSky(_wasgo_ProceduralSky_constructor());
}