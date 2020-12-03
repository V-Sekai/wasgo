/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Bone2D.h"
void Bone2D::apply_rest(){
	_wasgo_Bone2D_wrapper_apply_rest(wasgo_id);
}
float Bone2D::get_default_length(){
	return (float) _wasgo_Bone2D_wrapper_get_default_length(wasgo_id);
}
int Bone2D::get_index_in_skeleton(){
	return (int) _wasgo_Bone2D_wrapper_get_index_in_skeleton(wasgo_id);
}
Transform2D Bone2D::get_rest(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Bone2D_wrapper_get_rest(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
Transform2D Bone2D::get_skeleton_rest(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Bone2D_wrapper_get_skeleton_rest(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
void Bone2D::set_default_length(float p_default_length){
	_wasgo_Bone2D_wrapper_set_default_length(wasgo_id, p_default_length);
}
void Bone2D::set_rest(Transform2D p_rest){

    Variant wasgo_var_rest = p_rest;
    uint8_t wasgo_buffer_rest[28];
    int wasgo_size_rest = 28;
    encode_variant(wasgo_var_rest, wasgo_buffer_rest, wasgo_size_rest);
    
	_wasgo_Bone2D_wrapper_set_rest(wasgo_id, wasgo_buffer_rest, wasgo_size_rest);
}

Bone2D::Bone2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
Bone2D::Bone2D(){
    wasgo_id = _wasgo_Bone2D_constructor();
}
Bone2D::~Bone2D(){
    _wasgo_Bone2D_destructor(wasgo_id);
}