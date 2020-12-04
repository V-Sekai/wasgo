/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Skeleton.h"
void Skeleton::add_bone(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Skeleton_wrapper_add_bone(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Skeleton::bind_child_node_to_bone(int p_bone_idx, Node p_node){
	_wasgo_Skeleton_wrapper_bind_child_node_to_bone(wasgo_id, p_bone_idx, p_node._get_wasgo_id());
}
void Skeleton::clear_bones(){
	_wasgo_Skeleton_wrapper_clear_bones(wasgo_id);
}
void Skeleton::clear_bones_global_pose_override(){
	_wasgo_Skeleton_wrapper_clear_bones_global_pose_override(wasgo_id);
}
int Skeleton::find_bone(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (int) _wasgo_Skeleton_wrapper_find_bone(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
int Skeleton::get_bone_count(){
	return (int) _wasgo_Skeleton_wrapper_get_bone_count(wasgo_id);
}
Transform Skeleton::get_bone_custom_pose(int p_bone_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Skeleton_wrapper_get_bone_custom_pose(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bone_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Transform Skeleton::get_bone_global_pose(int p_bone_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Skeleton_wrapper_get_bone_global_pose(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bone_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
String Skeleton::get_bone_name(int p_bone_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Skeleton_wrapper_get_bone_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bone_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Skeleton::get_bone_parent(int p_bone_idx){
	return (int) _wasgo_Skeleton_wrapper_get_bone_parent(wasgo_id, p_bone_idx);
}
Transform Skeleton::get_bone_pose(int p_bone_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Skeleton_wrapper_get_bone_pose(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bone_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Transform Skeleton::get_bone_rest(int p_bone_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Skeleton_wrapper_get_bone_rest(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bone_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Array Skeleton::get_bound_child_nodes_to_bone(int p_bone_idx){
	return Array(_wasgo_Skeleton_wrapper_get_bound_child_nodes_to_bone(wasgo_id, p_bone_idx));
}
bool Skeleton::is_bone_rest_disabled(int p_bone_idx){
	return (bool) _wasgo_Skeleton_wrapper_is_bone_rest_disabled(wasgo_id, p_bone_idx);
}
void Skeleton::localize_rests(){
	_wasgo_Skeleton_wrapper_localize_rests(wasgo_id);
}
void Skeleton::physical_bones_add_collision_exception(RID p_exception){

    Variant wasgo_var_exception = p_exception;
    uint8_t wasgo_buffer_exception[0];
    int wasgo_size_exception = 0;
    encode_variant(wasgo_var_exception, wasgo_buffer_exception, wasgo_size_exception);
    
	_wasgo_Skeleton_wrapper_physical_bones_add_collision_exception(wasgo_id, wasgo_buffer_exception, wasgo_size_exception);
}
void Skeleton::physical_bones_remove_collision_exception(RID p_exception){

    Variant wasgo_var_exception = p_exception;
    uint8_t wasgo_buffer_exception[0];
    int wasgo_size_exception = 0;
    encode_variant(wasgo_var_exception, wasgo_buffer_exception, wasgo_size_exception);
    
	_wasgo_Skeleton_wrapper_physical_bones_remove_collision_exception(wasgo_id, wasgo_buffer_exception, wasgo_size_exception);
}
void Skeleton::physical_bones_start_simulation(Array p_bones = (Array) []){
	_wasgo_Skeleton_wrapper_physical_bones_start_simulation(wasgo_id, p_bones._get_wasgo_id());
}
void Skeleton::physical_bones_stop_simulation(){
	_wasgo_Skeleton_wrapper_physical_bones_stop_simulation(wasgo_id);
}
SkinReference Skeleton::register_skin(Skin p_skin){
	return SkinReference(_wasgo_Skeleton_wrapper_register_skin(wasgo_id, p_skin._get_wasgo_id()));
}
void Skeleton::set_bone_custom_pose(int p_bone_idx, Transform p_custom_pose){

    Variant wasgo_var_custom_pose = p_custom_pose;
    uint8_t wasgo_buffer_custom_pose[52];
    int wasgo_size_custom_pose = 52;
    encode_variant(wasgo_var_custom_pose, wasgo_buffer_custom_pose, wasgo_size_custom_pose);
    
	_wasgo_Skeleton_wrapper_set_bone_custom_pose(wasgo_id, p_bone_idx, wasgo_buffer_custom_pose, wasgo_size_custom_pose);
}
void Skeleton::set_bone_disable_rest(int p_bone_idx, bool p_disable){
	_wasgo_Skeleton_wrapper_set_bone_disable_rest(wasgo_id, p_bone_idx, p_disable);
}
void Skeleton::set_bone_global_pose_override(int p_bone_idx, Transform p_pose, float p_amount, bool p_persistent = (bool) false){

    Variant wasgo_var_pose = p_pose;
    uint8_t wasgo_buffer_pose[52];
    int wasgo_size_pose = 52;
    encode_variant(wasgo_var_pose, wasgo_buffer_pose, wasgo_size_pose);
    
	_wasgo_Skeleton_wrapper_set_bone_global_pose_override(wasgo_id, p_bone_idx, wasgo_buffer_pose, wasgo_size_pose, p_amount, p_persistent);
}
void Skeleton::set_bone_parent(int p_bone_idx, int p_parent_idx){
	_wasgo_Skeleton_wrapper_set_bone_parent(wasgo_id, p_bone_idx, p_parent_idx);
}
void Skeleton::set_bone_pose(int p_bone_idx, Transform p_pose){

    Variant wasgo_var_pose = p_pose;
    uint8_t wasgo_buffer_pose[52];
    int wasgo_size_pose = 52;
    encode_variant(wasgo_var_pose, wasgo_buffer_pose, wasgo_size_pose);
    
	_wasgo_Skeleton_wrapper_set_bone_pose(wasgo_id, p_bone_idx, wasgo_buffer_pose, wasgo_size_pose);
}
void Skeleton::set_bone_rest(int p_bone_idx, Transform p_rest){

    Variant wasgo_var_rest = p_rest;
    uint8_t wasgo_buffer_rest[52];
    int wasgo_size_rest = 52;
    encode_variant(wasgo_var_rest, wasgo_buffer_rest, wasgo_size_rest);
    
	_wasgo_Skeleton_wrapper_set_bone_rest(wasgo_id, p_bone_idx, wasgo_buffer_rest, wasgo_size_rest);
}
void Skeleton::unbind_child_node_from_bone(int p_bone_idx, Node p_node){
	_wasgo_Skeleton_wrapper_unbind_child_node_from_bone(wasgo_id, p_bone_idx, p_node._get_wasgo_id());
}
void Skeleton::unparent_bone_and_rest(int p_bone_idx){
	_wasgo_Skeleton_wrapper_unparent_bone_and_rest(wasgo_id, p_bone_idx);
}

Skeleton::Skeleton(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
Skeleton::Skeleton(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_Skeleton_constructor();
}
Skeleton::new_instance(){
    return Skeleton(_wasgo_Skeleton_constructor());
}