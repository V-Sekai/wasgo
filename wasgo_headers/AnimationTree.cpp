/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationTree.h"
void AnimationTree::advance(float p_delta){
	_wasgo_AnimationTree_wrapper_advance(wasgo_id, p_delta);
}
NodePath AnimationTree::get_animation_player(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationTree_wrapper_get_animation_player(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
AnimationTree::AnimationProcessMode AnimationTree::get_process_mode(){
	return AnimationTree::AnimationProcessMode(_wasgo_AnimationTree_wrapper_get_process_mode(wasgo_id));
}
NodePath AnimationTree::get_root_motion_track(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationTree_wrapper_get_root_motion_track(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Transform AnimationTree::get_root_motion_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_AnimationTree_wrapper_get_root_motion_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
AnimationNode AnimationTree::get_tree_root(){
	return AnimationNode(_wasgo_AnimationTree_wrapper_get_tree_root(wasgo_id));
}
bool AnimationTree::is_active(){
	return (bool) _wasgo_AnimationTree_wrapper_is_active(wasgo_id);
}
void AnimationTree::rename_parameter(String p_old_name, String p_new_name){

    Variant wasgo_var_old_name = p_old_name;
    int wasgo_size_old_name = 10 + String(p_old_name).size();
    uint8_t wasgo_buffer_old_name[wasgo_size_old_name];
    encode_variant(wasgo_var_old_name, wasgo_buffer_old_name, wasgo_size_old_name);
    

    Variant wasgo_var_new_name = p_new_name;
    int wasgo_size_new_name = 10 + String(p_new_name).size();
    uint8_t wasgo_buffer_new_name[wasgo_size_new_name];
    encode_variant(wasgo_var_new_name, wasgo_buffer_new_name, wasgo_size_new_name);
    
	_wasgo_AnimationTree_wrapper_rename_parameter(wasgo_id, wasgo_buffer_old_name, wasgo_size_old_name, -69, wasgo_buffer_new_name, wasgo_size_new_name);
}
void AnimationTree::set_active(bool p_active){
	_wasgo_AnimationTree_wrapper_set_active(wasgo_id, p_active);
}
void AnimationTree::set_animation_player(NodePath p_root){

    Variant wasgo_var_root = p_root;
    int wasgo_size_root = 10 + String(p_root).size();
    uint8_t wasgo_buffer_root[wasgo_size_root];
    encode_variant(wasgo_var_root, wasgo_buffer_root, wasgo_size_root);
    
	_wasgo_AnimationTree_wrapper_set_animation_player(wasgo_id, wasgo_buffer_root, wasgo_size_root);
}
void AnimationTree::set_process_mode(AnimationTree::AnimationProcessMode p_mode){
	_wasgo_AnimationTree_wrapper_set_process_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationTree::set_root_motion_track(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationTree_wrapper_set_root_motion_track(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void AnimationTree::set_tree_root(AnimationNode p_root){
	_wasgo_AnimationTree_wrapper_set_tree_root(wasgo_id, p_root._get_wasgo_id());
}

AnimationTree::AnimationTree(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
AnimationTree::AnimationTree(Node other) : Node(other._get_wasgo_id()){
}
AnimationTree::AnimationTree():Node(){
}
AnimationTree AnimationTree::new_instance(){
    return AnimationTree(_wasgo_AnimationTree_constructor());
}
WasGoID AnimationTree::_get_wasgo_id(){
    return wasgo_id;
}
AnimationTree::operator bool(){
    return (bool) wasgo_id;
}
