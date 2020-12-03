/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Curve2D.h"
void Curve2D::add_point(Vector2 p_position, Vector2 p_in = Vector2((0, 0)), Vector2 p_out = Vector2((0, 0)), int p_at_position = (int) -1){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_in = p_in;
    uint8_t wasgo_buffer_in[12];
    int wasgo_size_in = 12;
    encode_variant(wasgo_var_in, wasgo_buffer_in, wasgo_size_in);
    

    Variant wasgo_var_out = p_out;
    uint8_t wasgo_buffer_out[12];
    int wasgo_size_out = 12;
    encode_variant(wasgo_var_out, wasgo_buffer_out, wasgo_size_out);
    
	_wasgo_Curve2D_wrapper_add_point(wasgo_id, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_in, wasgo_size_in, wasgo_buffer_out, wasgo_size_out, p_at_position);
}
void Curve2D::clear_points(){
	_wasgo_Curve2D_wrapper_clear_points(wasgo_id);
}
float Curve2D::get_bake_interval(){
	return (float) _wasgo_Curve2D_wrapper_get_bake_interval(wasgo_id);
}
float Curve2D::get_baked_length(){
	return (float) _wasgo_Curve2D_wrapper_get_baked_length(wasgo_id);
}
PoolVector2Array Curve2D::get_baked_points(){
	return PoolVector2Array(_wasgo_Curve2D_wrapper_get_baked_points(wasgo_id));
}
float Curve2D::get_closest_offset(Vector2 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[12];
    int wasgo_size_to_point = 12;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    
	return (float) _wasgo_Curve2D_wrapper_get_closest_offset(wasgo_id, wasgo_buffer_to_point, wasgo_size_to_point);
}
Vector2 Curve2D::get_closest_point(Vector2 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[12];
    int wasgo_size_to_point = 12;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_get_closest_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_to_point, wasgo_size_to_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Curve2D::get_point_count(){
	return (int) _wasgo_Curve2D_wrapper_get_point_count(wasgo_id);
}
Vector2 Curve2D::get_point_in(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_get_point_in(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Curve2D::get_point_out(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_get_point_out(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Curve2D::get_point_position(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_get_point_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Curve2D::interpolate(int p_idx, float p_t){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_interpolate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx, p_t);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Curve2D::interpolate_baked(float p_offset, bool p_cubic = (bool) false){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_interpolate_baked(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_offset, p_cubic);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Curve2D::interpolatef(float p_fofs){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Curve2D_wrapper_interpolatef(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_fofs);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void Curve2D::remove_point(int p_idx){
	_wasgo_Curve2D_wrapper_remove_point(wasgo_id, p_idx);
}
void Curve2D::set_bake_interval(float p_distance){
	_wasgo_Curve2D_wrapper_set_bake_interval(wasgo_id, p_distance);
}
void Curve2D::set_point_in(int p_idx, Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Curve2D_wrapper_set_point_in(wasgo_id, p_idx, wasgo_buffer_position, wasgo_size_position);
}
void Curve2D::set_point_out(int p_idx, Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Curve2D_wrapper_set_point_out(wasgo_id, p_idx, wasgo_buffer_position, wasgo_size_position);
}
void Curve2D::set_point_position(int p_idx, Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Curve2D_wrapper_set_point_position(wasgo_id, p_idx, wasgo_buffer_position, wasgo_size_position);
}
PoolVector2Array Curve2D::tessellate(int p_max_stages = (int) 5, float p_tolerance_degrees = (float) 4){
	return PoolVector2Array(_wasgo_Curve2D_wrapper_tessellate(wasgo_id, p_max_stages, p_tolerance_degrees));
}

Curve2D::Curve2D(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
Curve2D::Curve2D(){
    wasgo_id = _wasgo_Curve2D_constructor();
}
Curve2D::~Curve2D(){
    _wasgo_Curve2D_destructor(wasgo_id);
}