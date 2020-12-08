/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeBooleanConstant.h"
bool VisualShaderNodeBooleanConstant::get_constant(){
	return (bool) _wasgo_VisualShaderNodeBooleanConstant_wrapper_get_constant(wasgo_id);
}
void VisualShaderNodeBooleanConstant::set_constant(bool p_value){
	_wasgo_VisualShaderNodeBooleanConstant_wrapper_set_constant(wasgo_id, p_value);
}

VisualShaderNodeBooleanConstant::VisualShaderNodeBooleanConstant(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeBooleanConstant::VisualShaderNodeBooleanConstant(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeBooleanConstant::VisualShaderNodeBooleanConstant():VisualShaderNode(){
}
VisualShaderNodeBooleanConstant VisualShaderNodeBooleanConstant::new_instance(){
    return VisualShaderNodeBooleanConstant(_wasgo_VisualShaderNodeBooleanConstant_constructor());
}
WasGoID VisualShaderNodeBooleanConstant::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeBooleanConstant::operator bool(){
    return (bool) wasgo_id;
}
