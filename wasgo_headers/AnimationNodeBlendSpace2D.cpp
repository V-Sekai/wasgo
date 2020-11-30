/* THIS FILE IS GENERATED */
#include "AnimationNodeBlendSpace2D.h"
void AnimationNodeBlendSpace2D::add_blend_point(AnimationRootNode p_node, Vector2 p_pos, int p_at_index = (int) -1){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_add_blend_point(wasgo_id, ((Variant) node).get_wasgo_id(), ((Variant) pos).get_wasgo_id(), at_index);
}
void AnimationNodeBlendSpace2D::add_triangle(int p_x, int p_y, int p_z, int p_at_index = (int) -1){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_add_triangle(wasgo_id, x, y, z, at_index);
}
int AnimationNodeBlendSpace2D::get_blend_point_count(){
	return (int) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_count(wasgo_id));
}
AnimationRootNode AnimationNodeBlendSpace2D::get_blend_point_node(int p_point){
	return AnimationRootNode::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_node(wasgo_id, point));
}
Vector2 AnimationNodeBlendSpace2D::get_blend_point_position(int p_point){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_position(wasgo_id, point));
}
Vector2 AnimationNodeBlendSpace2D::get_max_space(){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_max_space(wasgo_id));
}
Vector2 AnimationNodeBlendSpace2D::get_min_space(){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_min_space(wasgo_id));
}
Vector2 AnimationNodeBlendSpace2D::get_snap(){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_snap(wasgo_id));
}
int AnimationNodeBlendSpace2D::get_triangle_count(){
	return (int) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_count(wasgo_id));
}
int AnimationNodeBlendSpace2D::get_triangle_point(int p_triangle, int p_point){
	return (int) _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_point(wasgo_id, triangle, point));
}
String AnimationNodeBlendSpace2D::get_x_label(){
	return String::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_x_label(wasgo_id));
}
String AnimationNodeBlendSpace2D::get_y_label(){
	return String::from_wasgo_id(_wasgo_AnimationNodeBlendSpace2D_wrapper_get_y_label(wasgo_id));
}
void AnimationNodeBlendSpace2D::remove_blend_point(int p_point){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_remove_blend_point(wasgo_id, point);
}
void AnimationNodeBlendSpace2D::remove_triangle(int p_triangle){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_remove_triangle(wasgo_id, triangle);
}
void AnimationNodeBlendSpace2D::set_blend_point_node(int p_point, AnimationRootNode p_node){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_node(wasgo_id, point, ((Variant) node).get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_blend_point_position(int p_point, Vector2 p_pos){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_position(wasgo_id, point, ((Variant) pos).get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_max_space(Vector2 p_max_space){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_max_space(wasgo_id, ((Variant) max_space).get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_min_space(Vector2 p_min_space){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_min_space(wasgo_id, ((Variant) min_space).get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_snap(Vector2 p_snap){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_snap(wasgo_id, ((Variant) snap).get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_x_label(String p_text){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_x_label(wasgo_id, ((Variant) text).get_wasgo_id());
}
void AnimationNodeBlendSpace2D::set_y_label(String p_text){
	_wasgo_AnimationNodeBlendSpace2D_wrapper_set_y_label(wasgo_id, ((Variant) text).get_wasgo_id());
}

AnimationNodeBlendSpace2D::AnimationNodeBlendSpace2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimationNodeBlendSpace2D::~AnimationNodeBlendSpace2D(){
}