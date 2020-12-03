/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNode.h"
Array VisualShaderNode::get_default_input_values(){
	return Array(_wasgo_VisualShaderNode_wrapper_get_default_input_values(wasgo_id));
}
Variant VisualShaderNode::get_input_port_default_value(int p_port){
	return Variant(_wasgo_VisualShaderNode_wrapper_get_input_port_default_value(wasgo_id, p_port));
}
int VisualShaderNode::get_output_port_for_preview(){
	return (int) _wasgo_VisualShaderNode_wrapper_get_output_port_for_preview(wasgo_id);
}
void VisualShaderNode::set_default_input_values(Array p_values){
	_wasgo_VisualShaderNode_wrapper_set_default_input_values(wasgo_id, p_values._get_wasgo_id());
}
void VisualShaderNode::set_input_port_default_value(int p_port, Variant p_value){
	_wasgo_VisualShaderNode_wrapper_set_input_port_default_value(wasgo_id, p_port, p_value._get_wasgo_id());
}
void VisualShaderNode::set_output_port_for_preview(int p_port){
	_wasgo_VisualShaderNode_wrapper_set_output_port_for_preview(wasgo_id, p_port);
}