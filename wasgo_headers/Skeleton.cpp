/* THIS FILE IS GENERATED */
#include "Skeleton.h"
void Skeleton::add_bone(String p_name){
	_wasgo_Skeleton_wrapper_add_bone(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void Skeleton::bind_child_node_to_bone(int p_bone_idx, Node p_node){
	_wasgo_Skeleton_wrapper_bind_child_node_to_bone(wasgo_id, p_bone_idx, ((Variant) p_node).get_wasgo_id());
}
void Skeleton::clear_bones(){
	_wasgo_Skeleton_wrapper_clear_bones(wasgo_id);
}
void Skeleton::clear_bones_global_pose_override(){
	_wasgo_Skeleton_wrapper_clear_bones_global_pose_override(wasgo_id);
}
int Skeleton::find_bone(String p_name){
	return (int) _wasgo_Skeleton_wrapper_find_bone(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
int Skeleton::get_bone_count(){
	return (int) _wasgo_Skeleton_wrapper_get_bone_count(wasgo_id);
}
Transform Skeleton::get_bone_custom_pose(int p_bone_idx){
	return Transform::from_wasgo_id(_wasgo_Skeleton_wrapper_get_bone_custom_pose(wasgo_id, p_bone_idx));
}
Transform Skeleton::get_bone_global_pose(int p_bone_idx){
	return Transform::from_wasgo_id(_wasgo_Skeleton_wrapper_get_bone_global_pose(wasgo_id, p_bone_idx));
}
String Skeleton::get_bone_name(int p_bone_idx){
	return String::from_wasgo_id(_wasgo_Skeleton_wrapper_get_bone_name(wasgo_id, p_bone_idx));
}
int Skeleton::get_bone_parent(int p_bone_idx){
	return (int) _wasgo_Skeleton_wrapper_get_bone_parent(wasgo_id, p_bone_idx);
}
Transform Skeleton::get_bone_pose(int p_bone_idx){
	return Transform::from_wasgo_id(_wasgo_Skeleton_wrapper_get_bone_pose(wasgo_id, p_bone_idx));
}
Transform Skeleton::get_bone_rest(int p_bone_idx){
	return Transform::from_wasgo_id(_wasgo_Skeleton_wrapper_get_bone_rest(wasgo_id, p_bone_idx));
}
Array Skeleton::get_bound_child_nodes_to_bone(int p_bone_idx){
	return Array::from_wasgo_id(_wasgo_Skeleton_wrapper_get_bound_child_nodes_to_bone(wasgo_id, p_bone_idx));
}
bool Skeleton::is_bone_rest_disabled(int p_bone_idx){
	return (bool) _wasgo_Skeleton_wrapper_is_bone_rest_disabled(wasgo_id, p_bone_idx);
}
void Skeleton::localize_rests(){
	_wasgo_Skeleton_wrapper_localize_rests(wasgo_id);
}
void Skeleton::physical_bones_add_collision_exception(RID p_exception){
	_wasgo_Skeleton_wrapper_physical_bones_add_collision_exception(wasgo_id, ((Variant) p_exception).get_wasgo_id());
}
void Skeleton::physical_bones_remove_collision_exception(RID p_exception){
	_wasgo_Skeleton_wrapper_physical_bones_remove_collision_exception(wasgo_id, ((Variant) p_exception).get_wasgo_id());
}
void Skeleton::physical_bones_start_simulation(Array p_bones = (Array) []){
	_wasgo_Skeleton_wrapper_physical_bones_start_simulation(wasgo_id, ((Variant) p_bones).get_wasgo_id());
}
void Skeleton::physical_bones_stop_simulation(){
	_wasgo_Skeleton_wrapper_physical_bones_stop_simulation(wasgo_id);
}
SkinReference Skeleton::register_skin(Skin p_skin){
	return SkinReference::from_wasgo_id(_wasgo_Skeleton_wrapper_register_skin(wasgo_id, ((Variant) p_skin).get_wasgo_id()));
}
void Skeleton::set_bone_custom_pose(int p_bone_idx, Transform p_custom_pose){
	_wasgo_Skeleton_wrapper_set_bone_custom_pose(wasgo_id, p_bone_idx, ((Variant) p_custom_pose).get_wasgo_id());
}
void Skeleton::set_bone_disable_rest(int p_bone_idx, bool p_disable){
	_wasgo_Skeleton_wrapper_set_bone_disable_rest(wasgo_id, p_bone_idx, p_disable);
}
void Skeleton::set_bone_global_pose_override(int p_bone_idx, Transform p_pose, float p_amount, bool p_persistent = (bool) false){
	_wasgo_Skeleton_wrapper_set_bone_global_pose_override(wasgo_id, p_bone_idx, ((Variant) p_pose).get_wasgo_id(), p_amount, p_persistent);
}
void Skeleton::set_bone_parent(int p_bone_idx, int p_parent_idx){
	_wasgo_Skeleton_wrapper_set_bone_parent(wasgo_id, p_bone_idx, p_parent_idx);
}
void Skeleton::set_bone_pose(int p_bone_idx, Transform p_pose){
	_wasgo_Skeleton_wrapper_set_bone_pose(wasgo_id, p_bone_idx, ((Variant) p_pose).get_wasgo_id());
}
void Skeleton::set_bone_rest(int p_bone_idx, Transform p_rest){
	_wasgo_Skeleton_wrapper_set_bone_rest(wasgo_id, p_bone_idx, ((Variant) p_rest).get_wasgo_id());
}
void Skeleton::unbind_child_node_from_bone(int p_bone_idx, Node p_node){
	_wasgo_Skeleton_wrapper_unbind_child_node_from_bone(wasgo_id, p_bone_idx, ((Variant) p_node).get_wasgo_id());
}
void Skeleton::unparent_bone_and_rest(int p_bone_idx){
	_wasgo_Skeleton_wrapper_unparent_bone_and_rest(wasgo_id, p_bone_idx);
}