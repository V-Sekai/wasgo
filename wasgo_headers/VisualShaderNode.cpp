/* THIS FILE IS GENERATED */
#include "VisualShaderNode.h"
Array VisualShaderNode::get_default_input_values(){
	return Array::from_wasgo_id(_wasgo_VisualShaderNode_wrapper_get_default_input_values(wasgo_id));
}
Variant VisualShaderNode::get_input_port_default_value(int p_port){
	return Variant::from_wasgo_id(_wasgo_VisualShaderNode_wrapper_get_input_port_default_value(wasgo_id, port));
}
int VisualShaderNode::get_output_port_for_preview(){
	return (int) _wasgo_VisualShaderNode_wrapper_get_output_port_for_preview(wasgo_id));
}
void VisualShaderNode::set_default_input_values(Array p_values){
	_wasgo_VisualShaderNode_wrapper_set_default_input_values(wasgo_id, ((Variant) values).get_wasgo_id());
}
void VisualShaderNode::set_input_port_default_value(int p_port, Variant p_value){
	_wasgo_VisualShaderNode_wrapper_set_input_port_default_value(wasgo_id, port, ((Variant) value).get_wasgo_id());
}
void VisualShaderNode::set_output_port_for_preview(int p_port){
	_wasgo_VisualShaderNode_wrapper_set_output_port_for_preview(wasgo_id, port);
}