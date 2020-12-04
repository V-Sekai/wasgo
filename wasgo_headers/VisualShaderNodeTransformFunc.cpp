/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformFunc.h"
VisualShaderNodeTransformFunc::Function VisualShaderNodeTransformFunc::get_function(){
	return VisualShaderNodeTransformFunc::Function(_wasgo_VisualShaderNodeTransformFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeTransformFunc::set_function(VisualShaderNodeTransformFunc::Function p_func){
	_wasgo_VisualShaderNodeTransformFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeTransformFunc::VisualShaderNodeTransformFunc(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformFunc::VisualShaderNodeTransformFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTransformFunc_constructor();
}
VisualShaderNodeTransformFunc::new_instance(){
    return VisualShaderNodeTransformFunc(_wasgo_VisualShaderNodeTransformFunc_constructor());
}