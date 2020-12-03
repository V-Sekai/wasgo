/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ParallaxLayer.h"
Vector2 ParallaxLayer::get_mirroring(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxLayer_wrapper_get_mirroring(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 ParallaxLayer::get_motion_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxLayer_wrapper_get_motion_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 ParallaxLayer::get_motion_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ParallaxLayer_wrapper_get_motion_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void ParallaxLayer::set_mirroring(Vector2 p_mirror){

    Variant wasgo_var_mirror = p_mirror;
    uint8_t wasgo_buffer_mirror[12];
    int wasgo_size_mirror = 12;
    encode_variant(wasgo_var_mirror, wasgo_buffer_mirror, wasgo_size_mirror);
    
	_wasgo_ParallaxLayer_wrapper_set_mirroring(wasgo_id, wasgo_buffer_mirror, wasgo_size_mirror);
}
void ParallaxLayer::set_motion_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_ParallaxLayer_wrapper_set_motion_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void ParallaxLayer::set_motion_scale(Vector2 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_ParallaxLayer_wrapper_set_motion_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}

ParallaxLayer::ParallaxLayer(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
ParallaxLayer::ParallaxLayer(){
    wasgo_id = _wasgo_ParallaxLayer_constructor();
}
ParallaxLayer::~ParallaxLayer(){
    _wasgo_ParallaxLayer_destructor(wasgo_id);
}