/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeColorFunc.h"
VisualShaderNodeColorFunc::Function VisualShaderNodeColorFunc::get_function(){
	return VisualShaderNodeColorFunc::Function(_wasgo_VisualShaderNodeColorFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeColorFunc::set_function(VisualShaderNodeColorFunc::Function p_func){
	_wasgo_VisualShaderNodeColorFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeColorFunc::VisualShaderNodeColorFunc(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeColorFunc::VisualShaderNodeColorFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeColorFunc_constructor();
}
VisualShaderNodeColorFunc::new_instance(){
    return VisualShaderNodeColorFunc(_wasgo_VisualShaderNodeColorFunc_constructor());
}