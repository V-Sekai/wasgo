/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeBlendSpace2D.h"
void AnimationNodeBlendSpace2D::add_blend_point(AnimationRootNode p_node, Vector2 p_pos, int p_at_index){

    Variant wasgo_var_pos = p_pos;
    uint8_t wasgo_buffer_pos[12];
    int wasgo_size_pos = 12;
    encode_variant(wasgo_var_pos, wasgo_buffer_pos, wasgo_size_pos);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_add_blend_point(wasgo_id, p_node._get_wasgo_id(), wasgo_buffer_pos, wasgo_size_pos, p_at_index);
}
void AnimationNodeBlendSpace2D::add_triangle(int p_x, int p_y, int p_z, int p_at_index){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_add_triangle(wasgo_id, p_x, p_y, p_z, p_at_index);
}
bool AnimationNodeBlendSpace2D::get_auto_triangles(){
	return (bool) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_auto_triangles(wasgo_id);
}
AnimationNodeBlendSpace2D::BlendMode AnimationNodeBlendSpace2D::get_blend_mode(){
	return AnimationNodeBlendSpace2D::BlendMode(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_mode(wasgo_id));
}
int AnimationNodeBlendSpace2D::get_blend_point_count(){
	return (int) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_count(wasgo_id);
}
AnimationRootNode AnimationNodeBlendSpace2D::get_blend_point_node(int p_point){
	return AnimationRootNode(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_node(wasgo_id, p_point));
}
Vector2 AnimationNodeBlendSpace2D::get_blend_point_position(int p_point){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 AnimationNodeBlendSpace2D::get_max_space(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeBlendSpace2D_wrapper_get_max_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 AnimationNodeBlendSpace2D::get_min_space(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeBlendSpace2D_wrapper_get_min_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 AnimationNodeBlendSpace2D::get_snap(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeBlendSpace2D_wrapper_get_snap(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int AnimationNodeBlendSpace2D::get_triangle_count(){
	return (int) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_count(wasgo_id);
}
int AnimationNodeBlendSpace2D::get_triangle_point(int p_triangle, int p_point){
	return (int) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_point(wasgo_id, p_triangle, p_point);
}
String AnimationNodeBlendSpace2D::get_x_label(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeBlendSpace2D_wrapper_get_x_label(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String AnimationNodeBlendSpace2D::get_y_label(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeBlendSpace2D_wrapper_get_y_label(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void AnimationNodeBlendSpace2D::remove_blend_point(int p_point){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_remove_blend_point(wasgo_id, p_point);
}
void AnimationNodeBlendSpace2D::remove_triangle(int p_triangle){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_remove_triangle(wasgo_id, p_triangle);
}
void AnimationNodeBlendSpace2D::set_auto_triangles(bool p_enable){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_auto_triangles(wasgo_id, p_enable);
}
void AnimationNodeBlendSpace2D::set_blend_mode(AnimationNodeBlendSpace2D::BlendMode p_mode){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_blend_point_node(int p_point, AnimationRootNode p_node){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_node(wasgo_id, p_point, p_node._get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_blend_point_position(int p_point, Vector2 p_pos){

    Variant wasgo_var_pos = p_pos;
    uint8_t wasgo_buffer_pos[12];
    int wasgo_size_pos = 12;
    encode_variant(wasgo_var_pos, wasgo_buffer_pos, wasgo_size_pos);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_position(wasgo_id, p_point, wasgo_buffer_pos, wasgo_size_pos);
}
void AnimationNodeBlendSpace2D::set_max_space(Vector2 p_max_space){

    Variant wasgo_var_max_space = p_max_space;
    uint8_t wasgo_buffer_max_space[12];
    int wasgo_size_max_space = 12;
    encode_variant(wasgo_var_max_space, wasgo_buffer_max_space, wasgo_size_max_space);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_max_space(wasgo_id, wasgo_buffer_max_space, wasgo_size_max_space);
}
void AnimationNodeBlendSpace2D::set_min_space(Vector2 p_min_space){

    Variant wasgo_var_min_space = p_min_space;
    uint8_t wasgo_buffer_min_space[12];
    int wasgo_size_min_space = 12;
    encode_variant(wasgo_var_min_space, wasgo_buffer_min_space, wasgo_size_min_space);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_min_space(wasgo_id, wasgo_buffer_min_space, wasgo_size_min_space);
}
void AnimationNodeBlendSpace2D::set_snap(Vector2 p_snap){

    Variant wasgo_var_snap = p_snap;
    uint8_t wasgo_buffer_snap[12];
    int wasgo_size_snap = 12;
    encode_variant(wasgo_var_snap, wasgo_buffer_snap, wasgo_size_snap);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_snap(wasgo_id, wasgo_buffer_snap, wasgo_size_snap);
}
void AnimationNodeBlendSpace2D::set_x_label(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_x_label(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void AnimationNodeBlendSpace2D::set_y_label(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_y_label(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}

AnimationNodeBlendSpace2D::AnimationNodeBlendSpace2D(WasGoID p_wasgo_id) : AnimationRootNode(p_wasgo_id){
}
AnimationNodeBlendSpace2D::AnimationNodeBlendSpace2D(AnimationRootNode other) : AnimationRootNode(other._get_wasgo_id()){
}
AnimationNodeBlendSpace2D::AnimationNodeBlendSpace2D():AnimationRootNode(){
}
AnimationNodeBlendSpace2D AnimationNodeBlendSpace2D::new_instance(){
    return AnimationNodeBlendSpace2D(_wasgo_AnimationNodeBlendSpace2D_constructor());
}
WasGoID AnimationNodeBlendSpace2D::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeBlendSpace2D::operator bool(){
    return (bool) wasgo_id;
}
