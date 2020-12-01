/* THIS FILE IS GENERATED */
#include "VisualShader.h"
void VisualShader::add_node(VisualShader::Type p_type, VisualShaderNode p_node, Vector2 p_position, int p_id){
	_wasgo_VisualShader_wrapper_add_node(wasgo_id, ((Variant) p_type).get_wasgo_id(), ((Variant) p_node).get_wasgo_id(), ((Variant) p_position).get_wasgo_id(), p_id);
}
bool VisualShader::can_connect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	return (bool) _wasgo_VisualShader_wrapper_can_connect_nodes(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_from_node, p_from_port, p_to_node, p_to_port);
}
Error VisualShader::connect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	return Error::from_wasgo_id(_wasgo_VisualShader_wrapper_connect_nodes(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_from_node, p_from_port, p_to_node, p_to_port));
}
void VisualShader::connect_nodes_forced(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	_wasgo_VisualShader_wrapper_connect_nodes_forced(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_from_node, p_from_port, p_to_node, p_to_port);
}
void VisualShader::disconnect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	_wasgo_VisualShader_wrapper_disconnect_nodes(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_from_node, p_from_port, p_to_node, p_to_port);
}
Vector2 VisualShader::get_graph_offset(){
	return Vector2::from_wasgo_id(_wasgo_VisualShader_wrapper_get_graph_offset(wasgo_id));
}
VisualShaderNode VisualShader::get_node(VisualShader::Type p_type, int p_id){
	return VisualShaderNode::from_wasgo_id(_wasgo_VisualShader_wrapper_get_node(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_id));
}
Array VisualShader::get_node_connections(VisualShader::Type p_type){
	return Array::from_wasgo_id(_wasgo_VisualShader_wrapper_get_node_connections(wasgo_id, ((Variant) p_type).get_wasgo_id()));
}
PoolIntArray VisualShader::get_node_list(VisualShader::Type p_type){
	return PoolIntArray::from_wasgo_id(_wasgo_VisualShader_wrapper_get_node_list(wasgo_id, ((Variant) p_type).get_wasgo_id()));
}
Vector2 VisualShader::get_node_position(VisualShader::Type p_type, int p_id){
	return Vector2::from_wasgo_id(_wasgo_VisualShader_wrapper_get_node_position(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_id));
}
int VisualShader::get_valid_node_id(VisualShader::Type p_type){
	return (int) _wasgo_VisualShader_wrapper_get_valid_node_id(wasgo_id, ((Variant) p_type).get_wasgo_id());
}
bool VisualShader::is_node_connection(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port){
	return (bool) _wasgo_VisualShader_wrapper_is_node_connection(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_from_node, p_from_port, p_to_node, p_to_port);
}
void VisualShader::remove_node(VisualShader::Type p_type, int p_id){
	_wasgo_VisualShader_wrapper_remove_node(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_id);
}
void VisualShader::set_graph_offset(Vector2 p_offset){
	_wasgo_VisualShader_wrapper_set_graph_offset(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}
void VisualShader::set_mode(Shader::Mode p_mode){
	_wasgo_VisualShader_wrapper_set_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void VisualShader::set_node_position(VisualShader::Type p_type, int p_id, Vector2 p_position){
	_wasgo_VisualShader_wrapper_set_node_position(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_id, ((Variant) p_position).get_wasgo_id());
}