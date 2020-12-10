/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CanvasLayer.h"
RID CanvasLayer::get_canvas(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_CanvasLayer_wrapper_get_canvas(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Node CanvasLayer::get_custom_viewport(){
	return Node(_wasgo_CanvasLayer_wrapper_get_custom_viewport(wasgo_id));
}
float CanvasLayer::get_follow_viewport_scale(){
	return (float) _wasgo_CanvasLayer_wrapper_get_follow_viewport_scale(wasgo_id);
}
int CanvasLayer::get_layer(){
	return (int) _wasgo_CanvasLayer_wrapper_get_layer(wasgo_id);
}
Vector2 CanvasLayer::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CanvasLayer_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float CanvasLayer::get_rotation(){
	return (float) _wasgo_CanvasLayer_wrapper_get_rotation(wasgo_id);
}
float CanvasLayer::get_rotation_degrees(){
	return (float) _wasgo_CanvasLayer_wrapper_get_rotation_degrees(wasgo_id);
}
Vector2 CanvasLayer::get_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CanvasLayer_wrapper_get_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Transform2D CanvasLayer::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CanvasLayer_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool CanvasLayer::is_following_viewport(){
	return (bool) _wasgo_CanvasLayer_wrapper_is_following_viewport(wasgo_id);
}
void CanvasLayer::set_custom_viewport(Node p_viewport){
	_wasgo_CanvasLayer_wrapper_set_custom_viewport(wasgo_id, p_viewport._get_wasgo_id());
}
void CanvasLayer::set_follow_viewport(bool p_enable){
	_wasgo_CanvasLayer_wrapper_set_follow_viewport(wasgo_id, p_enable);
}
void CanvasLayer::set_follow_viewport_scale(float p_scale){
	_wasgo_CanvasLayer_wrapper_set_follow_viewport_scale(wasgo_id, p_scale);
}
void CanvasLayer::set_layer(int p_layer){
	_wasgo_CanvasLayer_wrapper_set_layer(wasgo_id, p_layer);
}
void CanvasLayer::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_CanvasLayer_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void CanvasLayer::set_rotation(float p_radians){
	_wasgo_CanvasLayer_wrapper_set_rotation(wasgo_id, p_radians);
}
void CanvasLayer::set_rotation_degrees(float p_degrees){
	_wasgo_CanvasLayer_wrapper_set_rotation_degrees(wasgo_id, p_degrees);
}
void CanvasLayer::set_scale(Vector2 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_CanvasLayer_wrapper_set_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void CanvasLayer::set_transform(Transform2D p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_CanvasLayer_wrapper_set_transform(wasgo_id, wasgo_buffer_transform, wasgo_size_transform);
}

CanvasLayer::CanvasLayer(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
CanvasLayer::CanvasLayer(Node other) : Node(other._get_wasgo_id()){
}
CanvasLayer::CanvasLayer():Node(){
}
CanvasLayer CanvasLayer::new_instance(){
    return CanvasLayer(_wasgo_CanvasLayer_constructor());
}
WasGoID CanvasLayer::_get_wasgo_id(){
    return wasgo_id;
}
CanvasLayer::operator bool(){
    return (bool) wasgo_id;
}
