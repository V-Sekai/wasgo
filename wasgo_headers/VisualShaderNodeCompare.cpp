/* THIS FILE IS GENERATED */
#include "VisualShaderNodeCompare.h"
VisualShaderNodeCompare::ComparisonType VisualShaderNodeCompare::get_comparison_type(){
	return VisualShaderNodeCompare::ComparisonType::from_wasgo_id(_wasgo_VisualShaderNodeCompare_wrapper_get_comparison_type(wasgo_id));
}
VisualShaderNodeCompare::Condition VisualShaderNodeCompare::get_condition(){
	return VisualShaderNodeCompare::Condition::from_wasgo_id(_wasgo_VisualShaderNodeCompare_wrapper_get_condition(wasgo_id));
}
VisualShaderNodeCompare::Function VisualShaderNodeCompare::get_function(){
	return VisualShaderNodeCompare::Function::from_wasgo_id(_wasgo_VisualShaderNodeCompare_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeCompare::set_comparison_type(VisualShaderNodeCompare::ComparisonType p_type){
	_wasgo_VisualShaderNodeCompare_wrapper_set_comparison_type(wasgo_id, ((Variant) p_type).get_wasgo_id());
}
void VisualShaderNodeCompare::set_condition(VisualShaderNodeCompare::Condition p_condition){
	_wasgo_VisualShaderNodeCompare_wrapper_set_condition(wasgo_id, ((Variant) p_condition).get_wasgo_id());
}
void VisualShaderNodeCompare::set_function(VisualShaderNodeCompare::Function p_func){
	_wasgo_VisualShaderNodeCompare_wrapper_set_function(wasgo_id, ((Variant) p_func).get_wasgo_id());
}