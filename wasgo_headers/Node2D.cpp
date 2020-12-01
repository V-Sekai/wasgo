/* THIS FILE IS GENERATED */
#include "Node2D.h"
void Node2D::apply_scale(Vector2 p_ratio){
	_wasgo_Node2D_wrapper_apply_scale(wasgo_id, ((Variant) p_ratio).get_wasgo_id());
}
float Node2D::get_angle_to(Vector2 p_point){
	return (float) _wasgo_Node2D_wrapper_get_angle_to(wasgo_id, ((Variant) p_point).get_wasgo_id());
}
Vector2 Node2D::get_global_position(){
	return Vector2::from_wasgo_id(_wasgo_Node2D_wrapper_get_global_position(wasgo_id));
}
float Node2D::get_global_rotation(){
	return (float) _wasgo_Node2D_wrapper_get_global_rotation(wasgo_id);
}
float Node2D::get_global_rotation_degrees(){
	return (float) _wasgo_Node2D_wrapper_get_global_rotation_degrees(wasgo_id);
}
Vector2 Node2D::get_global_scale(){
	return Vector2::from_wasgo_id(_wasgo_Node2D_wrapper_get_global_scale(wasgo_id));
}
Vector2 Node2D::get_position(){
	return Vector2::from_wasgo_id(_wasgo_Node2D_wrapper_get_position(wasgo_id));
}
Transform2D Node2D::get_relative_transform_to_parent(Node p_parent){
	return Transform2D::from_wasgo_id(_wasgo_Node2D_wrapper_get_relative_transform_to_parent(wasgo_id, ((Variant) p_parent).get_wasgo_id()));
}
float Node2D::get_rotation(){
	return (float) _wasgo_Node2D_wrapper_get_rotation(wasgo_id);
}
float Node2D::get_rotation_degrees(){
	return (float) _wasgo_Node2D_wrapper_get_rotation_degrees(wasgo_id);
}
Vector2 Node2D::get_scale(){
	return Vector2::from_wasgo_id(_wasgo_Node2D_wrapper_get_scale(wasgo_id));
}
int Node2D::get_z_index(){
	return (int) _wasgo_Node2D_wrapper_get_z_index(wasgo_id);
}
void Node2D::global_translate(Vector2 p_offset){
	_wasgo_Node2D_wrapper_global_translate(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}
bool Node2D::is_z_relative(){
	return (bool) _wasgo_Node2D_wrapper_is_z_relative(wasgo_id);
}
void Node2D::look_at(Vector2 p_point){
	_wasgo_Node2D_wrapper_look_at(wasgo_id, ((Variant) p_point).get_wasgo_id());
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
	_wasgo_Node2D_wrapper_set_global_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}
void Node2D::set_global_rotation(float p_radians){
	_wasgo_Node2D_wrapper_set_global_rotation(wasgo_id, p_radians);
}
void Node2D::set_global_rotation_degrees(float p_degrees){
	_wasgo_Node2D_wrapper_set_global_rotation_degrees(wasgo_id, p_degrees);
}
void Node2D::set_global_scale(Vector2 p_scale){
	_wasgo_Node2D_wrapper_set_global_scale(wasgo_id, ((Variant) p_scale).get_wasgo_id());
}
void Node2D::set_global_transform(Transform2D p_xform){
	_wasgo_Node2D_wrapper_set_global_transform(wasgo_id, ((Variant) p_xform).get_wasgo_id());
}
void Node2D::set_position(Vector2 p_position){
	_wasgo_Node2D_wrapper_set_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}
void Node2D::set_rotation(float p_radians){
	_wasgo_Node2D_wrapper_set_rotation(wasgo_id, p_radians);
}
void Node2D::set_rotation_degrees(float p_degrees){
	_wasgo_Node2D_wrapper_set_rotation_degrees(wasgo_id, p_degrees);
}
void Node2D::set_scale(Vector2 p_scale){
	_wasgo_Node2D_wrapper_set_scale(wasgo_id, ((Variant) p_scale).get_wasgo_id());
}
void Node2D::set_transform(Transform2D p_xform){
	_wasgo_Node2D_wrapper_set_transform(wasgo_id, ((Variant) p_xform).get_wasgo_id());
}
void Node2D::set_z_as_relative(bool p_enable){
	_wasgo_Node2D_wrapper_set_z_as_relative(wasgo_id, p_enable);
}
void Node2D::set_z_index(int p_z_index){
	_wasgo_Node2D_wrapper_set_z_index(wasgo_id, p_z_index);
}
Vector2 Node2D::to_global(Vector2 p_local_point){
	return Vector2::from_wasgo_id(_wasgo_Node2D_wrapper_to_global(wasgo_id, ((Variant) p_local_point).get_wasgo_id()));
}
Vector2 Node2D::to_local(Vector2 p_global_point){
	return Vector2::from_wasgo_id(_wasgo_Node2D_wrapper_to_local(wasgo_id, ((Variant) p_global_point).get_wasgo_id()));
}
void Node2D::translate(Vector2 p_offset){
	_wasgo_Node2D_wrapper_translate(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}