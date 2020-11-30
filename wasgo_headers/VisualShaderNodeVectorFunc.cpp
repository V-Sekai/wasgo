/* THIS FILE IS GENERATED */
#include "VisualShaderNodeVectorFunc.h"
VisualShaderNodeVectorFunc::Function VisualShaderNodeVectorFunc::get_function(){
	return VisualShaderNodeVectorFunc::Function::from_wasgo_id(_wasgo_VisualShaderNodeVectorFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeVectorFunc::set_function(VisualShaderNodeVectorFunc::Function p_func){
	_wasgo_VisualShaderNodeVectorFunc_wrapper_set_function(wasgo_id, ((Variant) func).get_wasgo_id());
}

VisualShaderNodeVectorFunc::VisualShaderNodeVectorFunc(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeVectorFunc::~VisualShaderNodeVectorFunc(){
}