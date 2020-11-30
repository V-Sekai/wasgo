/* THIS FILE IS GENERATED */
#include "VisualShaderNodeExpression.h"
String VisualShaderNodeExpression::get_expression(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeExpression_wrapper_get_expression(wasgo_id));
}
void VisualShaderNodeExpression::set_expression(String p_expression){
	_wasgo_VisualShaderNodeExpression_wrapper_set_expression(wasgo_id, ((Variant) expression).get_wasgo_id());
}

VisualShaderNodeExpression::VisualShaderNodeExpression(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeExpression::~VisualShaderNodeExpression(){
}