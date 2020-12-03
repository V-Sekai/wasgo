/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeCompare.h"
VisualShaderNodeCompare::ComparisonType VisualShaderNodeCompare::get_comparison_type(){
	return VisualShaderNodeCompare::ComparisonType(_wasgo_VisualShaderNodeCompare_wrapper_get_comparison_type(wasgo_id));
}
VisualShaderNodeCompare::Condition VisualShaderNodeCompare::get_condition(){
	return VisualShaderNodeCompare::Condition(_wasgo_VisualShaderNodeCompare_wrapper_get_condition(wasgo_id));
}
VisualShaderNodeCompare::Function VisualShaderNodeCompare::get_function(){
	return VisualShaderNodeCompare::Function(_wasgo_VisualShaderNodeCompare_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeCompare::set_comparison_type(VisualShaderNodeCompare::ComparisonType p_type){
	_wasgo_VisualShaderNodeCompare_wrapper_set_comparison_type(wasgo_id, p_type._get_wasgo_id());
}
void VisualShaderNodeCompare::set_condition(VisualShaderNodeCompare::Condition p_condition){
	_wasgo_VisualShaderNodeCompare_wrapper_set_condition(wasgo_id, p_condition._get_wasgo_id());
}
void VisualShaderNodeCompare::set_function(VisualShaderNodeCompare::Function p_func){
	_wasgo_VisualShaderNodeCompare_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeCompare::VisualShaderNodeCompare(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeCompare::VisualShaderNodeCompare(){
    wasgo_id = _wasgo_VisualShaderNodeCompare_constructor();
}
VisualShaderNodeCompare::~VisualShaderNodeCompare(){
    _wasgo_VisualShaderNodeCompare_destructor(wasgo_id);
}