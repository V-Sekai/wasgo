/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SkeletonIK.h"
float SkeletonIK::get_interpolation(){
	return (float) _wasgo_SkeletonIK_wrapper_get_interpolation(wasgo_id);
}
Vector3 SkeletonIK::get_magnet_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_SkeletonIK_wrapper_get_magnet_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
int SkeletonIK::get_max_iterations(){
	return (int) _wasgo_SkeletonIK_wrapper_get_max_iterations(wasgo_id);
}
float SkeletonIK::get_min_distance(){
	return (float) _wasgo_SkeletonIK_wrapper_get_min_distance(wasgo_id);
}
Skeleton SkeletonIK::get_parent_skeleton(){
	return Skeleton(_wasgo_SkeletonIK_wrapper_get_parent_skeleton(wasgo_id));
}
String SkeletonIK::get_root_bone(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SkeletonIK_wrapper_get_root_bone(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
NodePath SkeletonIK::get_target_node(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SkeletonIK_wrapper_get_target_node(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
Transform SkeletonIK::get_target_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_SkeletonIK_wrapper_get_target_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
String SkeletonIK::get_tip_bone(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SkeletonIK_wrapper_get_tip_bone(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool SkeletonIK::is_override_tip_basis(){
	return (bool) _wasgo_SkeletonIK_wrapper_is_override_tip_basis(wasgo_id);
}
bool SkeletonIK::is_running(){
	return (bool) _wasgo_SkeletonIK_wrapper_is_running(wasgo_id);
}
bool SkeletonIK::is_using_magnet(){
	return (bool) _wasgo_SkeletonIK_wrapper_is_using_magnet(wasgo_id);
}
void SkeletonIK::set_interpolation(float p_interpolation){
	_wasgo_SkeletonIK_wrapper_set_interpolation(wasgo_id, p_interpolation);
}
void SkeletonIK::set_magnet_position(Vector3 p_local_position){

    Variant wasgo_var_local_position = p_local_position;
    uint8_t wasgo_buffer_local_position[16];
    int wasgo_size_local_position = 16;
    encode_variant(wasgo_var_local_position, wasgo_buffer_local_position, wasgo_size_local_position);
    
	_wasgo_SkeletonIK_wrapper_set_magnet_position(wasgo_id, wasgo_buffer_local_position, wasgo_size_local_position);
}
void SkeletonIK::set_max_iterations(int p_iterations){
	_wasgo_SkeletonIK_wrapper_set_max_iterations(wasgo_id, p_iterations);
}
void SkeletonIK::set_min_distance(float p_min_distance){
	_wasgo_SkeletonIK_wrapper_set_min_distance(wasgo_id, p_min_distance);
}
void SkeletonIK::set_override_tip_basis(bool p_override){
	_wasgo_SkeletonIK_wrapper_set_override_tip_basis(wasgo_id, p_override);
}
void SkeletonIK::set_root_bone(String p_root_bone){

    Variant wasgo_var_root_bone = p_root_bone;
    int wasgo_size_root_bone = String(p_root_bone).size();
    uint8_t wasgo_buffer_root_bone[wasgo_size_root_bone];
    encode_variant(wasgo_var_root_bone, wasgo_buffer_root_bone, wasgo_size_root_bone);
    
	_wasgo_SkeletonIK_wrapper_set_root_bone(wasgo_id, wasgo_buffer_root_bone, wasgo_size_root_bone);
}
void SkeletonIK::set_target_node(NodePath p_node){

    Variant wasgo_var_node = p_node;
    int wasgo_size_node = String(p_node).size();
    uint8_t wasgo_buffer_node[wasgo_size_node];
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	_wasgo_SkeletonIK_wrapper_set_target_node(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}
void SkeletonIK::set_target_transform(Transform p_target){

    Variant wasgo_var_target = p_target;
    uint8_t wasgo_buffer_target[52];
    int wasgo_size_target = 52;
    encode_variant(wasgo_var_target, wasgo_buffer_target, wasgo_size_target);
    
	_wasgo_SkeletonIK_wrapper_set_target_transform(wasgo_id, wasgo_buffer_target, wasgo_size_target);
}
void SkeletonIK::set_tip_bone(String p_tip_bone){

    Variant wasgo_var_tip_bone = p_tip_bone;
    int wasgo_size_tip_bone = String(p_tip_bone).size();
    uint8_t wasgo_buffer_tip_bone[wasgo_size_tip_bone];
    encode_variant(wasgo_var_tip_bone, wasgo_buffer_tip_bone, wasgo_size_tip_bone);
    
	_wasgo_SkeletonIK_wrapper_set_tip_bone(wasgo_id, wasgo_buffer_tip_bone, wasgo_size_tip_bone);
}
void SkeletonIK::set_use_magnet(bool p_use){
	_wasgo_SkeletonIK_wrapper_set_use_magnet(wasgo_id, p_use);
}
void SkeletonIK::start(bool p_one_time){
	_wasgo_SkeletonIK_wrapper_start(wasgo_id, p_one_time);
}
void SkeletonIK::stop(){
	_wasgo_SkeletonIK_wrapper_stop(wasgo_id);
}

SkeletonIK::SkeletonIK(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
SkeletonIK::SkeletonIK(Node other) : Node(other._get_wasgo_id()){
}
SkeletonIK::SkeletonIK():Node(){
}
SkeletonIK SkeletonIK::new_instance(){
    return SkeletonIK(_wasgo_SkeletonIK_constructor());
}
WasGoID SkeletonIK::_get_wasgo_id(){
    return wasgo_id;
}
SkeletonIK::operator bool(){
    return (bool) wasgo_id;
}
