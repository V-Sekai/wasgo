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
VisualShaderNodeColorFunc::VisualShaderNodeColorFunc(){
    wasgo_id = _wasgo_VisualShaderNodeColorFunc_constructor();
}
VisualShaderNodeColorFunc::~VisualShaderNodeColorFunc(){
    _wasgo_VisualShaderNodeColorFunc_destructor(wasgo_id);
}