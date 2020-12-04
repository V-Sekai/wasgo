/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ParallaxBackground.h"
Vector2 ParallaxBackground::get_limit_begin(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxBackground_wrapper_get_limit_begin(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 ParallaxBackground::get_limit_end(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxBackground_wrapper_get_limit_end(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 ParallaxBackground::get_scroll_base_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxBackground_wrapper_get_scroll_base_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 ParallaxBackground::get_scroll_base_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxBackground_wrapper_get_scroll_base_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 ParallaxBackground::get_scroll_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxBackground_wrapper_get_scroll_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
bool ParallaxBackground::is_ignore_camera_zoom(){
	return (bool) _wasgo_ParallaxBackground_wrapper_is_ignore_camera_zoom(wasgo_id);
}
void ParallaxBackground::set_ignore_camera_zoom(bool p_ignore){
	_wasgo_ParallaxBackground_wrapper_set_ignore_camera_zoom(wasgo_id, p_ignore);
}
void ParallaxBackground::set_limit_begin(Vector2 p_ofs){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	_wasgo_ParallaxBackground_wrapper_set_limit_begin(wasgo_id, wasgo_buffer_ofs, wasgo_size_ofs);
}
void ParallaxBackground::set_limit_end(Vector2 p_ofs){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	_wasgo_ParallaxBackground_wrapper_set_limit_end(wasgo_id, wasgo_buffer_ofs, wasgo_size_ofs);
}
void ParallaxBackground::set_scroll_base_offset(Vector2 p_ofs){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	_wasgo_ParallaxBackground_wrapper_set_scroll_base_offset(wasgo_id, wasgo_buffer_ofs, wasgo_size_ofs);
}
void ParallaxBackground::set_scroll_base_scale(Vector2 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_ParallaxBackground_wrapper_set_scroll_base_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void ParallaxBackground::set_scroll_offset(Vector2 p_ofs){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	_wasgo_ParallaxBackground_wrapper_set_scroll_offset(wasgo_id, wasgo_buffer_ofs, wasgo_size_ofs);
}

ParallaxBackground::ParallaxBackground(WasGoId p_wasgo_id) : CanvasLayer(p_wasgo_id){
}
ParallaxBackground::ParallaxBackground(CanvasLayer other) : CanvasLayer(other._get_wasgo_id()){
    wasgo_id = _wasgo_ParallaxBackground_constructor();
}
ParallaxBackground::new_instance(){
    return ParallaxBackground(_wasgo_ParallaxBackground_constructor());
}