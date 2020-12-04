/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformConstant.h"
Transform VisualShaderNodeTransformConstant::get_constant(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_VisualShaderNodeTransformConstant_wrapper_get_constant(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
void VisualShaderNodeTransformConstant::set_constant(Transform p_value){

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[52];
    int wasgo_size_value = 52;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_VisualShaderNodeTransformConstant_wrapper_set_constant(wasgo_id, wasgo_buffer_value, wasgo_size_value);
}

VisualShaderNodeTransformConstant::VisualShaderNodeTransformConstant(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformConstant::VisualShaderNodeTransformConstant(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTransformConstant_constructor();
}
VisualShaderNodeTransformConstant::new_instance(){
    return VisualShaderNodeTransformConstant(_wasgo_VisualShaderNodeTransformConstant_constructor());
}