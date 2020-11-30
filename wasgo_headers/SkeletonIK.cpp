/* THIS FILE IS GENERATED */
#include "SkeletonIK.h"
float SkeletonIK::get_interpolation(){
	return (float) _wasgo_SkeletonIK_wrapper_get_interpolation(wasgo_id));
}
Vector3 SkeletonIK::get_magnet_position(){
	return Vector3::from_wasgo_id(_wasgo_SkeletonIK_wrapper_get_magnet_position(wasgo_id));
}
int SkeletonIK::get_max_iterations(){
	return (int) _wasgo_SkeletonIK_wrapper_get_max_iterations(wasgo_id));
}
float SkeletonIK::get_min_distance(){
	return (float) _wasgo_SkeletonIK_wrapper_get_min_distance(wasgo_id));
}
Skeleton SkeletonIK::get_parent_skeleton(){
	return Skeleton::from_wasgo_id(_wasgo_SkeletonIK_wrapper_get_parent_skeleton(wasgo_id));
}
String SkeletonIK::get_root_bone(){
	return String::from_wasgo_id(_wasgo_SkeletonIK_wrapper_get_root_bone(wasgo_id));
}
NodePath SkeletonIK::get_target_node(){
	return NodePath::from_wasgo_id(_wasgo_SkeletonIK_wrapper_get_target_node(wasgo_id));
}
Transform SkeletonIK::get_target_transform(){
	return Transform::from_wasgo_id(_wasgo_SkeletonIK_wrapper_get_target_transform(wasgo_id));
}
String SkeletonIK::get_tip_bone(){
	return String::from_wasgo_id(_wasgo_SkeletonIK_wrapper_get_tip_bone(wasgo_id));
}
bool SkeletonIK::is_override_tip_basis(){
	return (bool) _wasgo_SkeletonIK_wrapper_is_override_tip_basis(wasgo_id));
}
bool SkeletonIK::is_running(){
	return (bool) _wasgo_SkeletonIK_wrapper_is_running(wasgo_id));
}
bool SkeletonIK::is_using_magnet(){
	return (bool) _wasgo_SkeletonIK_wrapper_is_using_magnet(wasgo_id));
}
void SkeletonIK::set_interpolation(float p_interpolation){
	_wasgo_SkeletonIK_wrapper_set_interpolation(wasgo_id, interpolation);
}
void SkeletonIK::set_magnet_position(Vector3 p_local_position){
	_wasgo_SkeletonIK_wrapper_set_magnet_position(wasgo_id, ((Variant) local_position).get_wasgo_id());
}
void SkeletonIK::set_max_iterations(int p_iterations){
	_wasgo_SkeletonIK_wrapper_set_max_iterations(wasgo_id, iterations);
}
void SkeletonIK::set_min_distance(float p_min_distance){
	_wasgo_SkeletonIK_wrapper_set_min_distance(wasgo_id, min_distance);
}
void SkeletonIK::set_override_tip_basis(bool p_override){
	_wasgo_SkeletonIK_wrapper_set_override_tip_basis(wasgo_id, override);
}
void SkeletonIK::set_root_bone(String p_root_bone){
	_wasgo_SkeletonIK_wrapper_set_root_bone(wasgo_id, ((Variant) root_bone).get_wasgo_id());
}
void SkeletonIK::set_target_node(NodePath p_node){
	_wasgo_SkeletonIK_wrapper_set_target_node(wasgo_id, ((Variant) node).get_wasgo_id());
}
void SkeletonIK::set_target_transform(Transform p_target){
	_wasgo_SkeletonIK_wrapper_set_target_transform(wasgo_id, ((Variant) target).get_wasgo_id());
}
void SkeletonIK::set_tip_bone(String p_tip_bone){
	_wasgo_SkeletonIK_wrapper_set_tip_bone(wasgo_id, ((Variant) tip_bone).get_wasgo_id());
}
void SkeletonIK::set_use_magnet(bool p_use){
	_wasgo_SkeletonIK_wrapper_set_use_magnet(wasgo_id, use);
}
void SkeletonIK::start(bool p_one_time = (bool) False){
	_wasgo_SkeletonIK_wrapper_start(wasgo_id, one_time);
}
void SkeletonIK::stop(){
	_wasgo_SkeletonIK_wrapper_stop(wasgo_id);
}

SkeletonIK::SkeletonIK(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
SkeletonIK::~SkeletonIK(){
}