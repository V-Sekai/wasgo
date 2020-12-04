/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNode.h"
void AnimationNode::add_input(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNode_wrapper_add_input(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationNode::blend_animation(String p_animation, float p_time, float p_delta, bool p_seeked, float p_blend){

    Variant wasgo_var_animation = p_animation;
    int wasgo_size_animation = String(p_animation).size();
    uint8_t wasgo_buffer_animation[wasgo_size_animation];
    encode_variant(wasgo_var_animation, wasgo_buffer_animation, wasgo_size_animation);
    
	_wasgo_AnimationNode_wrapper_blend_animation(wasgo_id, wasgo_buffer_animation, wasgo_size_animation, p_time, p_delta, p_seeked, p_blend);
}
float AnimationNode::blend_input(int p_input_index, float p_time, bool p_seek, float p_blend, AnimationNode::FilterAction p_filter = (AnimationNode::FilterAction) 0, bool p_optimize = (bool) true){
	return (float) _wasgo_AnimationNode_wrapper_blend_input(wasgo_id, p_input_index, p_time, p_seek, p_blend, p_filter._get_wasgo_id(), p_optimize);
}
float AnimationNode::blend_node(String p_name, AnimationNode p_node, float p_time, bool p_seek, float p_blend, AnimationNode::FilterAction p_filter = (AnimationNode::FilterAction) 0, bool p_optimize = (bool) true){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (float) _wasgo_AnimationNode_wrapper_blend_node(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_node._get_wasgo_id(), p_time, p_seek, p_blend, p_filter._get_wasgo_id(), p_optimize);
}
String AnimationNode::get_caption(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNode_wrapper_get_caption(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Object AnimationNode::get_child_by_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Object(_wasgo_AnimationNode_wrapper_get_child_by_name(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
Dictionary AnimationNode::get_child_nodes(){
	return Dictionary(_wasgo_AnimationNode_wrapper_get_child_nodes(wasgo_id));
}
int AnimationNode::get_input_count(){
	return (int) _wasgo_AnimationNode_wrapper_get_input_count(wasgo_id);
}
String AnimationNode::get_input_name(int p_input){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNode_wrapper_get_input_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_input);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Variant AnimationNode::get_parameter(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Variant(_wasgo_AnimationNode_wrapper_get_parameter(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
Variant AnimationNode::get_parameter_default_value(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Variant(_wasgo_AnimationNode_wrapper_get_parameter_default_value(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
Array AnimationNode::get_parameter_list(){
	return Array(_wasgo_AnimationNode_wrapper_get_parameter_list(wasgo_id));
}
String AnimationNode::has_filter(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNode_wrapper_has_filter(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool AnimationNode::is_filter_enabled(){
	return (bool) _wasgo_AnimationNode_wrapper_is_filter_enabled(wasgo_id);
}
bool AnimationNode::is_path_filtered(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (bool) _wasgo_AnimationNode_wrapper_is_path_filtered(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void AnimationNode::process(float p_time, bool p_seek){
	_wasgo_AnimationNode_wrapper_process(wasgo_id, p_time, p_seek);
}
void AnimationNode::remove_input(int p_index){
	_wasgo_AnimationNode_wrapper_remove_input(wasgo_id, p_index);
}
void AnimationNode::set_filter_enabled(bool p_enable){
	_wasgo_AnimationNode_wrapper_set_filter_enabled(wasgo_id, p_enable);
}
void AnimationNode::set_filter_path(NodePath p_path, bool p_enable){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationNode_wrapper_set_filter_path(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_enable);
}
void AnimationNode::set_parameter(String p_name, Variant p_value){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNode_wrapper_set_parameter(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_value._get_wasgo_id());
}

AnimationNode::AnimationNode(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
AnimationNode::AnimationNode(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationNode_constructor();
}
AnimationNode::new_instance(){
    return AnimationNode(_wasgo_AnimationNode_constructor());
}