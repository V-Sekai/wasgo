/* THIS FILE IS GENERATED */
#include "AnimationNodeBlendSpace1D.h"
void AnimationNodeBlendSpace1D::add_blend_point(AnimationRootNode p_node, float p_pos, int p_at_index = (int) -1){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_add_blend_point(wasgo_id, ((Variant) node).get_wasgo_id(), pos, at_index);
}
int AnimationNodeBlendSpace1D::get_blend_point_count(){
	return (int) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_count(wasgo_id));
}
AnimationRootNode AnimationNodeBlendSpace1D::get_blend_point_node(int p_point){
	return AnimationRootNode::from_wasgo_id(_wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_node(wasgo_id, point));
}
float AnimationNodeBlendSpace1D::get_blend_point_position(int p_point){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_position(wasgo_id, point));
}
float AnimationNodeBlendSpace1D::get_max_space(){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_max_space(wasgo_id));
}
float AnimationNodeBlendSpace1D::get_min_space(){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_min_space(wasgo_id));
}
float AnimationNodeBlendSpace1D::get_snap(){
	return (float) _wasgo_AnimationNodeBlendSpace1D_wrapper_get_snap(wasgo_id));
}
String AnimationNodeBlendSpace1D::get_value_label(){
	return String::from_wasgo_id(_wasgo_AnimationNodeBlendSpace1D_wrapper_get_value_label(wasgo_id));
}
void AnimationNodeBlendSpace1D::remove_blend_point(int p_point){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_remove_blend_point(wasgo_id, point);
}
void AnimationNodeBlendSpace1D::set_blend_point_node(int p_point, AnimationRootNode p_node){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_node(wasgo_id, point, ((Variant) node).get_wasgo_id());
}
void AnimationNodeBlendSpace1D::set_blend_point_position(int p_point, float p_pos){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_position(wasgo_id, point, pos);
}
void AnimationNodeBlendSpace1D::set_max_space(float p_max_space){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_max_space(wasgo_id, max_space);
}
void AnimationNodeBlendSpace1D::set_min_space(float p_min_space){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_min_space(wasgo_id, min_space);
}
void AnimationNodeBlendSpace1D::set_snap(float p_snap){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_snap(wasgo_id, snap);
}
void AnimationNodeBlendSpace1D::set_value_label(String p_text){
	_wasgo_AnimationNodeBlendSpace1D_wrapper_set_value_label(wasgo_id, ((Variant) text).get_wasgo_id());
}

AnimationNodeBlendSpace1D::AnimationNodeBlendSpace1D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimationNodeBlendSpace1D::~AnimationNodeBlendSpace1D(){
}