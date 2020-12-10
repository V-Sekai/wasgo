/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeColorConstant.h"
Color VisualShaderNodeColorConstant::get_constant(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_VisualShaderNodeColorConstant_wrapper_get_constant(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void VisualShaderNodeColorConstant::set_constant(Color p_value){

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[20];
    int wasgo_size_value = 20;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_VisualShaderNodeColorConstant_wrapper_set_constant(wasgo_id, wasgo_buffer_value, wasgo_size_value);
}

VisualShaderNodeColorConstant::VisualShaderNodeColorConstant(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeColorConstant::VisualShaderNodeColorConstant(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeColorConstant::VisualShaderNodeColorConstant():VisualShaderNode(){
}
VisualShaderNodeColorConstant VisualShaderNodeColorConstant::new_instance(){
    return VisualShaderNodeColorConstant(_wasgo_VisualShaderNodeColorConstant_constructor());
}
WasGoID VisualShaderNodeColorConstant::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeColorConstant::operator bool(){
    return (bool) wasgo_id;
}
