/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeBlendSpace1D.h"
void AnimationNodeBlendSpace1D::add_blend_point(AnimationRootNode p_node, float p_pos, int p_at_index = (int) -1){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_add_blend_point(wasgo_id, p_node._get_wasgo_id(), p_pos, p_at_index);
}
int AnimationNodeBlendSpace1D::get_blend_point_count(){
	return (int) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_count(wasgo_id);
}
AnimationRootNode AnimationNodeBlendSpace1D::get_blend_point_node(int p_point){
	return AnimationRootNode(_wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_node(wasgo_id, p_point));
}
float AnimationNodeBlendSpace1D::get_blend_point_position(int p_point){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_position(wasgo_id, p_point);
}
float AnimationNodeBlendSpace1D::get_max_space(){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_max_space(wasgo_id);
}
float AnimationNodeBlendSpace1D::get_min_space(){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_min_space(wasgo_id);
}
float AnimationNodeBlendSpace1D::get_snap(){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_snap(wasgo_id);
}
String AnimationNodeBlendSpace1D::get_value_label(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeBlendSpace1D_wrapper_get_value_label(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void AnimationNodeBlendSpace1D::remove_blend_point(int p_point){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_remove_blend_point(wasgo_id, p_point);
}
void AnimationNodeBlendSpace1D::set_blend_point_node(int p_point, AnimationRootNode p_node){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_node(wasgo_id, p_point, p_node._get_wasgo_id());
}
void AnimationNodeBlendSpace1D::set_blend_point_position(int p_point, float p_pos){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_position(wasgo_id, p_point, p_pos);
}
void AnimationNodeBlendSpace1D::set_max_space(float p_max_space){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_max_space(wasgo_id, p_max_space);
}
void AnimationNodeBlendSpace1D::set_min_space(float p_min_space){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_min_space(wasgo_id, p_min_space);
}
void AnimationNodeBlendSpace1D::set_snap(float p_snap){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_snap(wasgo_id, p_snap);
}
void AnimationNodeBlendSpace1D::set_value_label(String p_text){

    Variant wasgo_var_text = p_text;
    uint8_t wasgo_buffer_text[256];
    int wasgo_size_text = 256;
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_value_label(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}

AnimationNodeBlendSpace1D::AnimationNodeBlendSpace1D(WasGoId p_wasgo_id) : AnimationRootNode(p_wasgo_id){
}
AnimationNodeBlendSpace1D::AnimationNodeBlendSpace1D(){
    wasgo_id = _wasgo_AnimationNodeBlendSpace1D_constructor();
}
AnimationNodeBlendSpace1D::~AnimationNodeBlendSpace1D(){
    _wasgo_AnimationNodeBlendSpace1D_destructor(wasgo_id);
}