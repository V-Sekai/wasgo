/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeBlendTree.h"
void AnimationNodeBlendTree::add_node(String p_name, AnimationNode p_node, Vector2 p_position){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_AnimationNodeBlendTree_wrapper_add_node(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_node._get_wasgo_id(), wasgo_buffer_position, wasgo_size_position);
}
void AnimationNodeBlendTree::connect_node(String p_input_node, int p_input_index, String p_output_node){

    Variant wasgo_var_input_node = p_input_node;
    int wasgo_size_input_node = String(p_input_node).size();
    uint8_t wasgo_buffer_input_node[wasgo_size_input_node];
    encode_variant(wasgo_var_input_node, wasgo_buffer_input_node, wasgo_size_input_node);
    

    Variant wasgo_var_output_node = p_output_node;
    int wasgo_size_output_node = String(p_output_node).size();
    uint8_t wasgo_buffer_output_node[wasgo_size_output_node];
    encode_variant(wasgo_var_output_node, wasgo_buffer_output_node, wasgo_size_output_node);
    
	_wasgo_AnimationNodeBlendTree_wrapper_connect_node(wasgo_id, wasgo_buffer_input_node, wasgo_size_input_node, p_input_index, wasgo_buffer_output_node, wasgo_size_output_node);
}
void AnimationNodeBlendTree::disconnect_node(String p_input_node, int p_input_index){

    Variant wasgo_var_input_node = p_input_node;
    int wasgo_size_input_node = String(p_input_node).size();
    uint8_t wasgo_buffer_input_node[wasgo_size_input_node];
    encode_variant(wasgo_var_input_node, wasgo_buffer_input_node, wasgo_size_input_node);
    
	_wasgo_AnimationNodeBlendTree_wrapper_disconnect_node(wasgo_id, wasgo_buffer_input_node, wasgo_size_input_node, p_input_index);
}
Vector2 AnimationNodeBlendTree::get_graph_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeBlendTree_wrapper_get_graph_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
AnimationNode AnimationNodeBlendTree::get_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return AnimationNode(_wasgo_AnimationNodeBlendTree_wrapper_get_node(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
Vector2 AnimationNodeBlendTree::get_node_position(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationNodeBlendTree_wrapper_get_node_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_name, wasgo_size_name);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
bool AnimationNodeBlendTree::has_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_AnimationNodeBlendTree_wrapper_has_node(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationNodeBlendTree::remove_node(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeBlendTree_wrapper_remove_node(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationNodeBlendTree::rename_node(String p_name, String p_new_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_new_name = p_new_name;
    int wasgo_size_new_name = String(p_new_name).size();
    uint8_t wasgo_buffer_new_name[wasgo_size_new_name];
    encode_variant(wasgo_var_new_name, wasgo_buffer_new_name, wasgo_size_new_name);
    
	_wasgo_AnimationNodeBlendTree_wrapper_rename_node(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_new_name, wasgo_size_new_name);
}
void AnimationNodeBlendTree::set_graph_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_AnimationNodeBlendTree_wrapper_set_graph_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void AnimationNodeBlendTree::set_node_position(String p_name, Vector2 p_position){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_AnimationNodeBlendTree_wrapper_set_node_position(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_position, wasgo_size_position);
}

AnimationNodeBlendTree::AnimationNodeBlendTree(WasGoID p_wasgo_id) : AnimationRootNode(p_wasgo_id){
}
AnimationNodeBlendTree::AnimationNodeBlendTree(AnimationRootNode other) : AnimationRootNode(other._get_wasgo_id()){
}
AnimationNodeBlendTree::AnimationNodeBlendTree():AnimationRootNode(){
}
AnimationNodeBlendTree AnimationNodeBlendTree::new_instance(){
    return AnimationNodeBlendTree(_wasgo_AnimationNodeBlendTree_constructor());
}
WasGoID AnimationNodeBlendTree::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeBlendTree::operator bool(){
    return (bool) wasgo_id;
}
