/* THIS FILE IS GENERATED */
#include "Expression.h"
Variant Expression::execute(Array p_inputs = (Array) [], Object p_base_instance = (Object) "", bool p_show_error = (bool) True){
	return Variant::from_wasgo_id(_wasgo_Expression_wrapper_execute(wasgo_id, ((Variant) inputs).get_wasgo_id(), ((Variant) base_instance).get_wasgo_id(), show_error));
}
String Expression::get_error_text(){
	return String::from_wasgo_id(_wasgo_Expression_wrapper_get_error_text(wasgo_id));
}
bool Expression::has_execute_failed(){
	return (bool) _wasgo_Expression_wrapper_has_execute_failed(wasgo_id));
}
Error Expression::parse(String p_expression, PoolStringArray p_input_names = (PoolStringArray) []){
	return Error::from_wasgo_id(_wasgo_Expression_wrapper_parse(wasgo_id, ((Variant) expression).get_wasgo_id(), ((Variant) input_names).get_wasgo_id()));
}

Expression::Expression(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Expression::~Expression(){
}