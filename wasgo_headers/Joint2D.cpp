/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Joint2D.h"
float Joint2D::get_bias(){
	return (float) _wasgo_Joint2D_wrapper_get_bias(wasgo_id);
}
bool Joint2D::get_exclude_nodes_from_collision(){
	return (bool) _wasgo_Joint2D_wrapper_get_exclude_nodes_from_collision(wasgo_id);
}
NodePath Joint2D::get_node_a(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Joint2D_wrapper_get_node_a(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
NodePath Joint2D::get_node_b(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Joint2D_wrapper_get_node_b(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void Joint2D::set_bias(float p_bias){
	_wasgo_Joint2D_wrapper_set_bias(wasgo_id, p_bias);
}
void Joint2D::set_exclude_nodes_from_collision(bool p_enable){
	_wasgo_Joint2D_wrapper_set_exclude_nodes_from_collision(wasgo_id, p_enable);
}
void Joint2D::set_node_a(NodePath p_node){

    Variant wasgo_var_node = p_node;
    int wasgo_size_node = 10 + String(p_node).size();
    uint8_t wasgo_buffer_node[wasgo_size_node];
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	_wasgo_Joint2D_wrapper_set_node_a(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}
void Joint2D::set_node_b(NodePath p_node){

    Variant wasgo_var_node = p_node;
    int wasgo_size_node = 10 + String(p_node).size();
    uint8_t wasgo_buffer_node[wasgo_size_node];
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	_wasgo_Joint2D_wrapper_set_node_b(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}

Joint2D::Joint2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Joint2D::Joint2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
Joint2D::Joint2D():Node2D(){
}
Joint2D Joint2D::new_instance(){
    return Joint2D(_wasgo_Joint2D_constructor());
}
WasGoID Joint2D::_get_wasgo_id(){
    return wasgo_id;
}
Joint2D::operator bool(){
    return (bool) wasgo_id;
}
