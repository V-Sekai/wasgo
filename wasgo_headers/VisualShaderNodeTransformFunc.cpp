/* THIS FILE IS GENERATED */
#include "VisualShaderNodeTransformFunc.h"
VisualShaderNodeTransformFunc::Function VisualShaderNodeTransformFunc::get_function(){
	return VisualShaderNodeTransformFunc::Function::from_wasgo_id(_wasgo_VisualShaderNodeTransformFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeTransformFunc::set_function(VisualShaderNodeTransformFunc::Function p_func){
	_wasgo_VisualShaderNodeTransformFunc_wrapper_set_function(wasgo_id, ((Variant) func).get_wasgo_id());
}

VisualShaderNodeTransformFunc::VisualShaderNodeTransformFunc(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeTransformFunc::~VisualShaderNodeTransformFunc(){
}