/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVec3Constant.h"
Vector3 VisualShaderNodeVec3Constant::get_constant(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_VisualShaderNodeVec3Constant_wrapper_get_constant(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
void VisualShaderNodeVec3Constant::set_constant(Vector3 p_value){

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[16];
    int wasgo_size_value = 16;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_VisualShaderNodeVec3Constant_wrapper_set_constant(wasgo_id, wasgo_buffer_value, wasgo_size_value);
}

VisualShaderNodeVec3Constant::VisualShaderNodeVec3Constant(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVec3Constant::VisualShaderNodeVec3Constant(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVec3Constant_constructor();
}
VisualShaderNodeVec3Constant::new_instance(){
    return VisualShaderNodeVec3Constant(_wasgo_VisualShaderNodeVec3Constant_constructor());
}