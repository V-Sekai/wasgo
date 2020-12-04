/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorFunc.h"
VisualShaderNodeVectorFunc::Function VisualShaderNodeVectorFunc::get_function(){
	return VisualShaderNodeVectorFunc::Function(_wasgo_VisualShaderNodeVectorFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeVectorFunc::set_function(VisualShaderNodeVectorFunc::Function p_func){
	_wasgo_VisualShaderNodeVectorFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeVectorFunc::VisualShaderNodeVectorFunc(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorFunc::VisualShaderNodeVectorFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorFunc_constructor();
}
VisualShaderNodeVectorFunc::new_instance(){
    return VisualShaderNodeVectorFunc(_wasgo_VisualShaderNodeVectorFunc_constructor());
}