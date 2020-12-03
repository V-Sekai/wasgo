/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Joint.h"
bool Joint::get_exclude_nodes_from_collision(){
	return (bool) _wasgo_Joint_wrapper_get_exclude_nodes_from_collision(wasgo_id);
}
NodePath Joint::get_node_a(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Joint_wrapper_get_node_a(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
NodePath Joint::get_node_b(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Joint_wrapper_get_node_b(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
int Joint::get_solver_priority(){
	return (int) _wasgo_Joint_wrapper_get_solver_priority(wasgo_id);
}
void Joint::set_exclude_nodes_from_collision(bool p_enable){
	_wasgo_Joint_wrapper_set_exclude_nodes_from_collision(wasgo_id, p_enable);
}
void Joint::set_node_a(NodePath p_node){

    Variant wasgo_var_node = p_node;
    uint8_t wasgo_buffer_node[256];
    int wasgo_size_node = 256;
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	_wasgo_Joint_wrapper_set_node_a(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}
void Joint::set_node_b(NodePath p_node){

    Variant wasgo_var_node = p_node;
    uint8_t wasgo_buffer_node[256];
    int wasgo_size_node = 256;
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	_wasgo_Joint_wrapper_set_node_b(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}
void Joint::set_solver_priority(int p_priority){
	_wasgo_Joint_wrapper_set_solver_priority(wasgo_id, p_priority);
}