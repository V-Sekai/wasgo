/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeGroupBase.h"
void VisualShaderNodeGroupBase::add_input_port(int p_id, int p_type, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_add_input_port(wasgo_id, p_id, p_type, wasgo_buffer_name, wasgo_size_name);
}
void VisualShaderNodeGroupBase::add_output_port(int p_id, int p_type, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_add_output_port(wasgo_id, p_id, p_type, wasgo_buffer_name, wasgo_size_name);
}
void VisualShaderNodeGroupBase::clear_input_ports(){
	_wasgo_VisualShaderNodeGroupBase_wrapper_clear_input_ports(wasgo_id);
}
void VisualShaderNodeGroupBase::clear_output_ports(){
	_wasgo_VisualShaderNodeGroupBase_wrapper_clear_output_ports(wasgo_id);
}
int VisualShaderNodeGroupBase::get_free_input_port_id(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_free_input_port_id(wasgo_id);
}
int VisualShaderNodeGroupBase::get_free_output_port_id(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_free_output_port_id(wasgo_id);
}
int VisualShaderNodeGroupBase::get_input_port_count(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_input_port_count(wasgo_id);
}
String VisualShaderNodeGroupBase::get_inputs(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeGroupBase_wrapper_get_inputs(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int VisualShaderNodeGroupBase::get_output_port_count(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_output_port_count(wasgo_id);
}
String VisualShaderNodeGroupBase::get_outputs(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeGroupBase_wrapper_get_outputs(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Vector2 VisualShaderNodeGroupBase::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_VisualShaderNodeGroupBase_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
bool VisualShaderNodeGroupBase::has_input_port(int p_id){
	return (bool) _wasgo_VisualShaderNodeGroupBase_wrapper_has_input_port(wasgo_id, p_id);
}
bool VisualShaderNodeGroupBase::has_output_port(int p_id){
	return (bool) _wasgo_VisualShaderNodeGroupBase_wrapper_has_output_port(wasgo_id, p_id);
}
bool VisualShaderNodeGroupBase::is_valid_port_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_VisualShaderNodeGroupBase_wrapper_is_valid_port_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void VisualShaderNodeGroupBase::remove_input_port(int p_id){
	_wasgo_VisualShaderNodeGroupBase_wrapper_remove_input_port(wasgo_id, p_id);
}
void VisualShaderNodeGroupBase::remove_output_port(int p_id){
	_wasgo_VisualShaderNodeGroupBase_wrapper_remove_output_port(wasgo_id, p_id);
}
void VisualShaderNodeGroupBase::set_input_port_name(int p_id, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_input_port_name(wasgo_id, p_id, wasgo_buffer_name, wasgo_size_name);
}
void VisualShaderNodeGroupBase::set_input_port_type(int p_id, int p_type){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_input_port_type(wasgo_id, p_id, p_type);
}
void VisualShaderNodeGroupBase::set_inputs(String p_inputs){

    Variant wasgo_var_inputs = p_inputs;
    int wasgo_size_inputs = String(p_inputs).size();
    uint8_t wasgo_buffer_inputs[wasgo_size_inputs];
    encode_variant(wasgo_var_inputs, wasgo_buffer_inputs, wasgo_size_inputs);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_inputs(wasgo_id, wasgo_buffer_inputs, wasgo_size_inputs);
}
void VisualShaderNodeGroupBase::set_output_port_name(int p_id, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_output_port_name(wasgo_id, p_id, wasgo_buffer_name, wasgo_size_name);
}
void VisualShaderNodeGroupBase::set_output_port_type(int p_id, int p_type){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_output_port_type(wasgo_id, p_id, p_type);
}
void VisualShaderNodeGroupBase::set_outputs(String p_outputs){

    Variant wasgo_var_outputs = p_outputs;
    int wasgo_size_outputs = String(p_outputs).size();
    uint8_t wasgo_buffer_outputs[wasgo_size_outputs];
    encode_variant(wasgo_var_outputs, wasgo_buffer_outputs, wasgo_size_outputs);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_outputs(wasgo_id, wasgo_buffer_outputs, wasgo_size_outputs);
}
void VisualShaderNodeGroupBase::set_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}

VisualShaderNodeGroupBase::VisualShaderNodeGroupBase(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeGroupBase::VisualShaderNodeGroupBase(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeGroupBase_constructor();
}
VisualShaderNodeGroupBase::new_instance(){
    return VisualShaderNodeGroupBase(_wasgo_VisualShaderNodeGroupBase_constructor());
}