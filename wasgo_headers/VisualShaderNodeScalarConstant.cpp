/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarConstant.h"
float VisualShaderNodeScalarConstant::get_constant(){
	return (float) _wasgo_VisualShaderNodeScalarConstant_wrapper_get_constant(wasgo_id);
}
void VisualShaderNodeScalarConstant::set_constant(float p_value){
	_wasgo_VisualShaderNodeScalarConstant_wrapper_set_constant(wasgo_id, p_value);
}

VisualShaderNodeScalarConstant::VisualShaderNodeScalarConstant(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarConstant::VisualShaderNodeScalarConstant(){
    wasgo_id = _wasgo_VisualShaderNodeScalarConstant_constructor();
}
VisualShaderNodeScalarConstant::~VisualShaderNodeScalarConstant(){
    _wasgo_VisualShaderNodeScalarConstant_destructor(wasgo_id);
}