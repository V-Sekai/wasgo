/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNode.h"
Array VisualShaderNode::get_default_input_values(){
	return Array(_wasgo_VisualShaderNode_wrapper_get_default_input_values(wasgo_id));
}
Variant VisualShaderNode::get_input_port_default_value(int p_port){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNode_wrapper_get_input_port_default_value(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_port);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int VisualShaderNode::get_output_port_for_preview(){
	return (int) _wasgo_VisualShaderNode_wrapper_get_output_port_for_preview(wasgo_id);
}
void VisualShaderNode::set_default_input_values(Array p_values){
	_wasgo_VisualShaderNode_wrapper_set_default_input_values(wasgo_id, p_values._get_wasgo_id());
}
void VisualShaderNode::set_input_port_default_value(int p_port, Variant p_value){

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[256];
    int wasgo_size_value = 256;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_VisualShaderNode_wrapper_set_input_port_default_value(wasgo_id, p_port, wasgo_buffer_value, wasgo_size_value, wasgo_size_value);
}
void VisualShaderNode::set_output_port_for_preview(int p_port){
	_wasgo_VisualShaderNode_wrapper_set_output_port_for_preview(wasgo_id, p_port);
}

VisualShaderNode::VisualShaderNode(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
VisualShaderNode::VisualShaderNode(Resource other) : Resource(other._get_wasgo_id()){
}
VisualShaderNode::VisualShaderNode():Resource(){
}
VisualShaderNode VisualShaderNode::new_instance(){
    return VisualShaderNode(_wasgo_VisualShaderNode_constructor());
}
WasGoID VisualShaderNode::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNode::operator bool(){
    return (bool) wasgo_id;
}
