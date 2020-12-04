/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeIs.h"
VisualShaderNodeIs::Function VisualShaderNodeIs::get_function(){
	return VisualShaderNodeIs::Function(_wasgo_VisualShaderNodeIs_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeIs::set_function(VisualShaderNodeIs::Function p_func){
	_wasgo_VisualShaderNodeIs_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeIs::VisualShaderNodeIs(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeIs::VisualShaderNodeIs(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeIs_constructor();
}
VisualShaderNodeIs::new_instance(){
    return VisualShaderNodeIs(_wasgo_VisualShaderNodeIs_constructor());
}