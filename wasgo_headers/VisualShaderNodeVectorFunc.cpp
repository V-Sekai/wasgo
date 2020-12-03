/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorFunc.h"
VisualShaderNodeVectorFunc::Function VisualShaderNodeVectorFunc::get_function(){
	return VisualShaderNodeVectorFunc::Function(_wasgo_VisualShaderNodeVectorFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeVectorFunc::set_function(VisualShaderNodeVectorFunc::Function p_func){
	_wasgo_VisualShaderNodeVectorFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeVectorFunc::VisualShaderNodeVectorFunc(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorFunc::VisualShaderNodeVectorFunc(){
    wasgo_id = _wasgo_VisualShaderNodeVectorFunc_constructor();
}
VisualShaderNodeVectorFunc::~VisualShaderNodeVectorFunc(){
    _wasgo_VisualShaderNodeVectorFunc_destructor(wasgo_id);
}