/* THIS FILE IS GENERATED */
#include "VisualShaderNodeBooleanConstant.h"
bool VisualShaderNodeBooleanConstant::get_constant(){
	return (bool) _wasgo_VisualShaderNodeBooleanConstant_wrapper_get_constant(wasgo_id));
}
void VisualShaderNodeBooleanConstant::set_constant(bool p_value){
	_wasgo_VisualShaderNodeBooleanConstant_wrapper_set_constant(wasgo_id, value);
}

VisualShaderNodeBooleanConstant::VisualShaderNodeBooleanConstant(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeBooleanConstant::~VisualShaderNodeBooleanConstant(){
}