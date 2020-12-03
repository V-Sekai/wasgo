/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Curve3D.h"
void Curve3D::add_point(Vector3 p_position, Vector3 p_in = Vector3((0, 0, 0)), Vector3 p_out = Vector3((0, 0, 0)), int p_at_position = (int) -1){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_in = p_in;
    uint8_t wasgo_buffer_in[16];
    int wasgo_size_in = 16;
    encode_variant(wasgo_var_in, wasgo_buffer_in, wasgo_size_in);
    

    Variant wasgo_var_out = p_out;
    uint8_t wasgo_buffer_out[16];
    int wasgo_size_out = 16;
    encode_variant(wasgo_var_out, wasgo_buffer_out, wasgo_size_out);
    
	_wasgo_Curve3D_wrapper_add_point(wasgo_id, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_in, wasgo_size_in, wasgo_buffer_out, wasgo_size_out, p_at_position);
}
void Curve3D::clear_points(){
	_wasgo_Curve3D_wrapper_clear_points(wasgo_id);
}
float Curve3D::get_bake_interval(){
	return (float) _wasgo_Curve3D_wrapper_get_bake_interval(wasgo_id);
}
float Curve3D::get_baked_length(){
	return (float) _wasgo_Curve3D_wrapper_get_baked_length(wasgo_id);
}
PoolVector3Array Curve3D::get_baked_points(){
	return PoolVector3Array(_wasgo_Curve3D_wrapper_get_baked_points(wasgo_id));
}
PoolRealArray Curve3D::get_baked_tilts(){
	return PoolRealArray(_wasgo_Curve3D_wrapper_get_baked_tilts(wasgo_id));
}
PoolVector3Array Curve3D::get_baked_up_vectors(){
	return PoolVector3Array(_wasgo_Curve3D_wrapper_get_baked_up_vectors(wasgo_id));
}
float Curve3D::get_closest_offset(Vector3 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[16];
    int wasgo_size_to_point = 16;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    
	return (float) _wasgo_Curve3D_wrapper_get_closest_offset(wasgo_id, wasgo_buffer_to_point, wasgo_size_to_point);
}
Vector3 Curve3D::get_closest_point(Vector3 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[16];
    int wasgo_size_to_point = 16;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_get_closest_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_to_point, wasgo_size_to_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
int Curve3D::get_point_count(){
	return (int) _wasgo_Curve3D_wrapper_get_point_count(wasgo_id);
}
Vector3 Curve3D::get_point_in(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_get_point_in(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Curve3D::get_point_out(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_get_point_out(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Curve3D::get_point_position(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_get_point_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float Curve3D::get_point_tilt(int p_idx){
	return (float) _wasgo_Curve3D_wrapper_get_point_tilt(wasgo_id, p_idx);
}
Vector3 Curve3D::interpolate(int p_idx, float p_t){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_interpolate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx, p_t);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Curve3D::interpolate_baked(float p_offset, bool p_cubic = (bool) false){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_interpolate_baked(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_offset, p_cubic);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Curve3D::interpolate_baked_up_vector(float p_offset, bool p_apply_tilt = (bool) false){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_interpolate_baked_up_vector(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_offset, p_apply_tilt);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Curve3D::interpolatef(float p_fofs){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Curve3D_wrapper_interpolatef(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_fofs);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
bool Curve3D::is_up_vector_enabled(){
	return (bool) _wasgo_Curve3D_wrapper_is_up_vector_enabled(wasgo_id);
}
void Curve3D::remove_point(int p_idx){
	_wasgo_Curve3D_wrapper_remove_point(wasgo_id, p_idx);
}
void Curve3D::set_bake_interval(float p_distance){
	_wasgo_Curve3D_wrapper_set_bake_interval(wasgo_id, p_distance);
}
void Curve3D::set_point_in(int p_idx, Vector3 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Curve3D_wrapper_set_point_in(wasgo_id, p_idx, wasgo_buffer_position, wasgo_size_position);
}
void Curve3D::set_point_out(int p_idx, Vector3 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Curve3D_wrapper_set_point_out(wasgo_id, p_idx, wasgo_buffer_position, wasgo_size_position);
}
void Curve3D::set_point_position(int p_idx, Vector3 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Curve3D_wrapper_set_point_position(wasgo_id, p_idx, wasgo_buffer_position, wasgo_size_position);
}
void Curve3D::set_point_tilt(int p_idx, float p_tilt){
	_wasgo_Curve3D_wrapper_set_point_tilt(wasgo_id, p_idx, p_tilt);
}
void Curve3D::set_up_vector_enabled(bool p_enable){
	_wasgo_Curve3D_wrapper_set_up_vector_enabled(wasgo_id, p_enable);
}
PoolVector3Array Curve3D::tessellate(int p_max_stages = (int) 5, float p_tolerance_degrees = (float) 4){
	return PoolVector3Array(_wasgo_Curve3D_wrapper_tessellate(wasgo_id, p_max_stages, p_tolerance_degrees));
}

Curve3D::Curve3D(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
Curve3D::Curve3D(){
    wasgo_id = _wasgo_Curve3D_constructor();
}
Curve3D::~Curve3D(){
    _wasgo_Curve3D_destructor(wasgo_id);
}