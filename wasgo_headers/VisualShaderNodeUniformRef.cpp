/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeUniformRef.h"
String VisualShaderNodeUniformRef::get_uniform_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeUniformRef_wrapper_get_uniform_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void VisualShaderNodeUniformRef::set_uniform_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeUniformRef_wrapper_set_uniform_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}

VisualShaderNodeUniformRef::VisualShaderNodeUniformRef(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeUniformRef::VisualShaderNodeUniformRef(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeUniformRef::VisualShaderNodeUniformRef():VisualShaderNode(){
}
VisualShaderNodeUniformRef VisualShaderNodeUniformRef::new_instance(){
    return VisualShaderNodeUniformRef(_wasgo_VisualShaderNodeUniformRef_constructor());
}
WasGoID VisualShaderNodeUniformRef::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeUniformRef::operator bool(){
    return (bool) wasgo_id;
}
