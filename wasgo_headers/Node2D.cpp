/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Node2D.h"
void Node2D::apply_scale(Vector2 p_ratio){

    Variant wasgo_var_ratio = p_ratio;
    uint8_t wasgo_buffer_ratio[12];
    int wasgo_size_ratio = 12;
    encode_variant(wasgo_var_ratio, wasgo_buffer_ratio, wasgo_size_ratio);
    
	_wasgo_Node2D_wrapper_apply_scale(wasgo_id, wasgo_buffer_ratio, wasgo_size_ratio);
}
float Node2D::get_angle_to(Vector2 p_point){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    
	return (float) _wasgo_Node2D_wrapper_get_angle_to(wasgo_id, wasgo_buffer_point, wasgo_size_point);
}
Vector2 Node2D::get_global_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Node2D_wrapper_get_global_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Node2D::get_global_rotation(){
	return (float) _wasgo_Node2D_wrapper_get_global_rotation(wasgo_id);
}
float Node2D::get_global_rotation_degrees(){
	return (float) _wasgo_Node2D_wrapper_get_global_rotation_degrees(wasgo_id);
}
Vector2 Node2D::get_global_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Node2D_wrapper_get_global_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Node2D::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Node2D_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Transform2D Node2D::get_relative_transform_to_parent(Node p_parent){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Node2D_wrapper_get_relative_transform_to_parent(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_parent._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
float Node2D::get_rotation(){
	return (float) _wasgo_Node2D_wrapper_get_rotation(wasgo_id);
}
float Node2D::get_rotation_degrees(){
	return (float) _wasgo_Node2D_wrapper_get_rotation_degrees(wasgo_id);
}
Vector2 Node2D::get_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Node2D_wrapper_get_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Node2D::get_z_index(){
	return (int) _wasgo_Node2D_wrapper_get_z_index(wasgo_id);
}
void Node2D::global_translate(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Node2D_wrapper_global_translate(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
bool Node2D::is_z_relative(){
	return (bool) _wasgo_Node2D_wrapper_is_z_relative(wasgo_id);
}
void Node2D::look_at(Vector2 p_point){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    
	_wasgo_Node2D_wrapper_look_at(wasgo_id, wasgo_buffer_point, wasgo_size_point);
}
void Node2D::move_local_x(float p_delta, bool p_scaled = (bool) false){
	_wasgo_Node2D_wrapper_move_local_x(wasgo_id, p_delta, p_scaled);
}
void Node2D::move_local_y(float p_delta, bool p_scaled = (bool) false){
	_wasgo_Node2D_wrapper_move_local_y(wasgo_id, p_delta, p_scaled);
}
void Node2D::rotate(float p_radians){
	_wasgo_Node2D_wrapper_rotate(wasgo_id, p_radians);
}
void Node2D::set_global_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Node2D_wrapper_set_global_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void Node2D::set_global_rotation(float p_radians){
	_wasgo_Node2D_wrapper_set_global_rotation(wasgo_id, p_radians);
}
void Node2D::set_global_rotation_degrees(float p_degrees){
	_wasgo_Node2D_wrapper_set_global_rotation_degrees(wasgo_id, p_degrees);
}
void Node2D::set_global_scale(Vector2 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_Node2D_wrapper_set_global_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void Node2D::set_global_transform(Transform2D p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_Node2D_wrapper_set_global_transform(wasgo_id, wasgo_buffer_xform, wasgo_size_xform);
}
void Node2D::set_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Node2D_wrapper_set_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void Node2D::set_rotation(float p_radians){
	_wasgo_Node2D_wrapper_set_rotation(wasgo_id, p_radians);
}
void Node2D::set_rotation_degrees(float p_degrees){
	_wasgo_Node2D_wrapper_set_rotation_degrees(wasgo_id, p_degrees);
}
void Node2D::set_scale(Vector2 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_Node2D_wrapper_set_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void Node2D::set_transform(Transform2D p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_Node2D_wrapper_set_transform(wasgo_id, wasgo_buffer_xform, wasgo_size_xform);
}
void Node2D::set_z_as_relative(bool p_enable){
	_wasgo_Node2D_wrapper_set_z_as_relative(wasgo_id, p_enable);
}
void Node2D::set_z_index(int p_z_index){
	_wasgo_Node2D_wrapper_set_z_index(wasgo_id, p_z_index);
}
Vector2 Node2D::to_global(Vector2 p_local_point){

    Variant wasgo_var_local_point = p_local_point;
    uint8_t wasgo_buffer_local_point[12];
    int wasgo_size_local_point = 12;
    encode_variant(wasgo_var_local_point, wasgo_buffer_local_point, wasgo_size_local_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Node2D_wrapper_to_global(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_local_point, wasgo_size_local_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Node2D::to_local(Vector2 p_global_point){

    Variant wasgo_var_global_point = p_global_point;
    uint8_t wasgo_buffer_global_point[12];
    int wasgo_size_global_point = 12;
    encode_variant(wasgo_var_global_point, wasgo_buffer_global_point, wasgo_size_global_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Node2D_wrapper_to_local(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_global_point, wasgo_size_global_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void Node2D::translate(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Node2D_wrapper_translate(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}

Node2D::Node2D(WasGoID p_wasgo_id) : CanvasItem(p_wasgo_id){
}
Node2D::Node2D(CanvasItem other) : CanvasItem(other._get_wasgo_id()){
    wasgo_id = _wasgo_Node2D_constructor();
}
Node2D::new_instance(){
    return Node2D(_wasgo_Node2D_constructor());
}