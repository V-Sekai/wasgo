/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeIs.h"
VisualShaderNodeIs::Function VisualShaderNodeIs::get_function(){
	return VisualShaderNodeIs::Function(_wasgo_VisualShaderNodeIs_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeIs::set_function(VisualShaderNodeIs::Function p_func){
	_wasgo_VisualShaderNodeIs_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeIs::VisualShaderNodeIs(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeIs::VisualShaderNodeIs(){
    wasgo_id = _wasgo_VisualShaderNodeIs_constructor();
}
VisualShaderNodeIs::~VisualShaderNodeIs(){
    _wasgo_VisualShaderNodeIs_destructor(wasgo_id);
}