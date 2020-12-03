/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeBooleanConstant.h"
bool VisualShaderNodeBooleanConstant::get_constant(){
	return (bool) _wasgo_VisualShaderNodeBooleanConstant_wrapper_get_constant(wasgo_id);
}
void VisualShaderNodeBooleanConstant::set_constant(bool p_value){
	_wasgo_VisualShaderNodeBooleanConstant_wrapper_set_constant(wasgo_id, p_value);
}

VisualShaderNodeBooleanConstant::VisualShaderNodeBooleanConstant(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeBooleanConstant::VisualShaderNodeBooleanConstant(){
    wasgo_id = _wasgo_VisualShaderNodeBooleanConstant_constructor();
}
VisualShaderNodeBooleanConstant::~VisualShaderNodeBooleanConstant(){
    _wasgo_VisualShaderNodeBooleanConstant_destructor(wasgo_id);
}