/* THIS FILE IS GENERATED */
#include "VisualShaderNodeColorFunc.h"
VisualShaderNodeColorFunc::Function VisualShaderNodeColorFunc::get_function(){
	return VisualShaderNodeColorFunc::Function::from_wasgo_id(_wasgo_VisualShaderNodeColorFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeColorFunc::set_function(VisualShaderNodeColorFunc::Function p_func){
	_wasgo_VisualShaderNodeColorFunc_wrapper_set_function(wasgo_id, ((Variant) func).get_wasgo_id());
}

VisualShaderNodeColorFunc::VisualShaderNodeColorFunc(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeColorFunc::~VisualShaderNodeColorFunc(){
}