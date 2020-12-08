/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Expression.h"
Variant Expression::execute(Array p_inputs, Object p_base_instance, bool p_show_error){
	return Variant(_wasgo_Expression_wrapper_execute(wasgo_id, p_inputs._get_wasgo_id(), p_base_instance._get_wasgo_id(), p_show_error));
}
String Expression::get_error_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Expression_wrapper_get_error_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool Expression::has_execute_failed(){
	return (bool) _wasgo_Expression_wrapper_has_execute_failed(wasgo_id);
}
Error Expression::parse(String p_expression, PoolStringArray p_input_names){

    Variant wasgo_var_expression = p_expression;
    int wasgo_size_expression = String(p_expression).size();
    uint8_t wasgo_buffer_expression[wasgo_size_expression];
    encode_variant(wasgo_var_expression, wasgo_buffer_expression, wasgo_size_expression);
    
	return Error(_wasgo_Expression_wrapper_parse(wasgo_id, wasgo_buffer_expression, wasgo_size_expression, p_input_names._get_wasgo_id()));
}

Expression::Expression(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
Expression::Expression(Reference other) : Reference(other._get_wasgo_id()){
}
Expression::Expression():Reference(){
}
Expression Expression::new_instance(){
    return Expression(_wasgo_Expression_constructor());
}
WasGoID Expression::_get_wasgo_id(){
    return wasgo_id;
}
Expression::operator bool(){
    return (bool) wasgo_id;
}
