/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShader.h"
void VisualShader::add_node(VisualShader::Type p_type, VisualShaderNode p_node, Vector2 p_position, int p_id){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_VisualShader_wrapper_add_node(wasgo_id, p_type._get_wasgo_id(), p_node._get_wasgo_id(), -69, wasgo_buffer_position, wasgo_size_position, p_id);
}
bool VisualShader::can_connect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	return (bool) _wasgo_VisualShader_wrapper_can_connect_nodes(wasgo_id, p_type._get_wasgo_id(), p_from_node, -69, p_from_port, p_to_node, p_to_port);
}
Error VisualShader::connect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	return Error(_wasgo_VisualShader_wrapper_connect_nodes(wasgo_id, p_type._get_wasgo_id(), p_from_node, -69, p_from_port, p_to_node, p_to_port));
}
void VisualShader::connect_nodes_forced(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	_wasgo_VisualShader_wrapper_connect_nodes_forced(wasgo_id, p_type._get_wasgo_id(), p_from_node, -69, p_from_port, p_to_node, p_to_port);
}
void VisualShader::disconnect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	_wasgo_VisualShader_wrapper_disconnect_nodes(wasgo_id, p_type._get_wasgo_id(), p_from_node, -69, p_from_port, p_to_node, p_to_port);
}
Vector2 VisualShader::get_graph_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_VisualShader_wrapper_get_graph_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
VisualShaderNode VisualShader::get_node(VisualShader::Type p_type, int p_id){
	return VisualShaderNode(_wasgo_VisualShader_wrapper_get_node(wasgo_id, p_type._get_wasgo_id(), p_id));
}
Array VisualShader::get_node_connections(VisualShader::Type p_type){
	return Array(_wasgo_VisualShader_wrapper_get_node_connections(wasgo_id, p_type._get_wasgo_id()));
}
PoolIntArray VisualShader::get_node_list(VisualShader::Type p_type){
	return PoolIntArray(_wasgo_VisualShader_wrapper_get_node_list(wasgo_id, p_type._get_wasgo_id()));
}
Vector2 VisualShader::get_node_position(VisualShader::Type p_type, int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_VisualShader_wrapper_get_node_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_type._get_wasgo_id(), p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int VisualShader::get_valid_node_id(VisualShader::Type p_type){
	return (int) _wasgo_VisualShader_wrapper_get_valid_node_id(wasgo_id, p_type._get_wasgo_id());
}
bool VisualShader::is_node_connection(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	return (bool) _wasgo_VisualShader_wrapper_is_node_connection(wasgo_id, p_type._get_wasgo_id(), p_from_node, -69, p_from_port, p_to_node, p_to_port);
}
void VisualShader::remove_node(VisualShader::Type p_type, int p_id){
	_wasgo_VisualShader_wrapper_remove_node(wasgo_id, p_type._get_wasgo_id(), p_id);
}
void VisualShader::set_graph_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_VisualShader_wrapper_set_graph_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void VisualShader::set_mode(Shader::Mode p_mode){
	_wasgo_VisualShader_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void VisualShader::set_node_position(VisualShader::Type p_type, int p_id, Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_VisualShader_wrapper_set_node_position(wasgo_id, p_type._get_wasgo_id(), p_id, -69, wasgo_buffer_position, wasgo_size_position);
}

VisualShader::VisualShader(WasGoID p_wasgo_id) : Shader(p_wasgo_id){
}
VisualShader::VisualShader(Shader other) : Shader(other._get_wasgo_id()){
}
VisualShader::VisualShader():Shader(){
}
VisualShader VisualShader::new_instance(){
    return VisualShader(_wasgo_VisualShader_constructor());
}
WasGoID VisualShader::_get_wasgo_id(){
    return wasgo_id;
}
VisualShader::operator bool(){
    return (bool) wasgo_id;
}
