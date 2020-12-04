/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeInput.h"
String VisualShaderNodeInput::get_input_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeInput_wrapper_get_input_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String VisualShaderNodeInput::get_input_real_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeInput_wrapper_get_input_real_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void VisualShaderNodeInput::set_input_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeInput_wrapper_set_input_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}

VisualShaderNodeInput::VisualShaderNodeInput(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeInput::VisualShaderNodeInput(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeInput_constructor();
}
VisualShaderNodeInput::new_instance(){
    return VisualShaderNodeInput(_wasgo_VisualShaderNodeInput_constructor());
}