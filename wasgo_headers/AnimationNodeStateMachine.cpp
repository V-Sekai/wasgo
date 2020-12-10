/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeStateMachine.h"
void AnimationNodeStateMachine::add_node(String p_name, AnimationNode p_node, Vector2 p_position){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_AnimationNodeStateMachine_wrapper_add_node(wasgo_id, wasgo_buffer_name, wasgo_size_name, -69, p_node._get_wasgo_id(), wasgo_buffer_position, wasgo_size_position);
}
void AnimationNodeStateMachine::add_transition(String p_from, String p_to, AnimationNodeStateMachineTransition p_transition){

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	_wasgo_AnimationNodeStateMachine_wrapper_add_transition(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, wasgo_buffer_to, wasgo_size_to, p_transition._get_wasgo_id());
}
String AnimationNodeStateMachine::get_end_node(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachine_wrapper_get_end_node(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 AnimationNodeStateMachine::get_graph_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeStateMachine_wrapper_get_graph_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
AnimationNode AnimationNodeStateMachine::get_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return AnimationNode(_wasgo_AnimationNodeStateMachine_wrapper_get_node(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
String AnimationNodeStateMachine::get_node_name(AnimationNode p_node){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachine_wrapper_get_node_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_node._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 AnimationNodeStateMachine::get_node_position(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeStateMachine_wrapper_get_node_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_name, wasgo_size_name);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String AnimationNodeStateMachine::get_start_node(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachine_wrapper_get_start_node(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
AnimationNodeStateMachineTransition AnimationNodeStateMachine::get_transition(int p_idx){
	return AnimationNodeStateMachineTransition(_wasgo_AnimationNodeStateMachine_wrapper_get_transition(wasgo_id, p_idx));
}
int AnimationNodeStateMachine::get_transition_count(){
	return (int) _wasgo_AnimationNodeStateMachine_wrapper_get_transition_count(wasgo_id);
}
String AnimationNodeStateMachine::get_transition_from(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachine_wrapper_get_transition_from(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String AnimationNodeStateMachine::get_transition_to(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachine_wrapper_get_transition_to(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool AnimationNodeStateMachine::has_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_AnimationNodeStateMachine_wrapper_has_node(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool AnimationNodeStateMachine::has_transition(String p_from, String p_to){

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return (bool) _wasgo_AnimationNodeStateMachine_wrapper_has_transition(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, wasgo_buffer_to, wasgo_size_to);
}
void AnimationNodeStateMachine::remove_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeStateMachine_wrapper_remove_node(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationNodeStateMachine::remove_transition(String p_from, String p_to){

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	_wasgo_AnimationNodeStateMachine_wrapper_remove_transition(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, wasgo_buffer_to, wasgo_size_to);
}
void AnimationNodeStateMachine::remove_transition_by_index(int p_idx){
	_wasgo_AnimationNodeStateMachine_wrapper_remove_transition_by_index(wasgo_id, p_idx);
}
void AnimationNodeStateMachine::rename_node(String p_name, String p_new_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_new_name = p_new_name;
    int wasgo_size_new_name = 10 + String(p_new_name).size();
    uint8_t wasgo_buffer_new_name[wasgo_size_new_name];
    encode_variant(wasgo_var_new_name, wasgo_buffer_new_name, wasgo_size_new_name);
    
	_wasgo_AnimationNodeStateMachine_wrapper_rename_node(wasgo_id, wasgo_buffer_name, wasgo_size_name, -69, wasgo_buffer_new_name, wasgo_size_new_name);
}
void AnimationNodeStateMachine::replace_node(String p_name, AnimationNode p_node){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeStateMachine_wrapper_replace_node(wasgo_id, wasgo_buffer_name, wasgo_size_name, -69, p_node._get_wasgo_id());
}
void AnimationNodeStateMachine::set_end_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeStateMachine_wrapper_set_end_node(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationNodeStateMachine::set_graph_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_AnimationNodeStateMachine_wrapper_set_graph_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void AnimationNodeStateMachine::set_node_position(String p_name, Vector2 p_position){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_AnimationNodeStateMachine_wrapper_set_node_position(wasgo_id, wasgo_buffer_name, wasgo_size_name, -69, wasgo_buffer_position, wasgo_size_position);
}
void AnimationNodeStateMachine::set_start_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeStateMachine_wrapper_set_start_node(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}

AnimationNodeStateMachine::AnimationNodeStateMachine(WasGoID p_wasgo_id) : AnimationRootNode(p_wasgo_id){
}
AnimationNodeStateMachine::AnimationNodeStateMachine(AnimationRootNode other) : AnimationRootNode(other._get_wasgo_id()){
}
AnimationNodeStateMachine::AnimationNodeStateMachine():AnimationRootNode(){
}
AnimationNodeStateMachine AnimationNodeStateMachine::new_instance(){
    return AnimationNodeStateMachine(_wasgo_AnimationNodeStateMachine_constructor());
}
WasGoID AnimationNodeStateMachine::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeStateMachine::operator bool(){
    return (bool) wasgo_id;
}
