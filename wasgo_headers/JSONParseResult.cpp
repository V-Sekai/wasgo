/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JSONParseResult.h"
Error JSONParseResult::get_error(){
	return Error(_wasgo_JSONParseResult_wrapper_get_error(wasgo_id));
}
int JSONParseResult::get_error_line(){
	return (int) _wasgo_JSONParseResult_wrapper_get_error_line(wasgo_id);
}
String JSONParseResult::get_error_string(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_JSONParseResult_wrapper_get_error_string(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Variant JSONParseResult::get_result(){
	return Variant(_wasgo_JSONParseResult_wrapper_get_result(wasgo_id));
}
void JSONParseResult::set_error(Error p_error){
	_wasgo_JSONParseResult_wrapper_set_error(wasgo_id, p_error._get_wasgo_id());
}
void JSONParseResult::set_error_line(int p_error_line){
	_wasgo_JSONParseResult_wrapper_set_error_line(wasgo_id, p_error_line);
}
void JSONParseResult::set_error_string(String p_error_string){

    Variant wasgo_var_error_string = p_error_string;
    int wasgo_size_error_string = String(p_error_string).size();
    uint8_t wasgo_buffer_error_string[wasgo_size_error_string];
    encode_variant(wasgo_var_error_string, wasgo_buffer_error_string, wasgo_size_error_string);
    
	_wasgo_JSONParseResult_wrapper_set_error_string(wasgo_id, wasgo_buffer_error_string, wasgo_size_error_string);
}
void JSONParseResult::set_result(Variant p_result){
	_wasgo_JSONParseResult_wrapper_set_result(wasgo_id, p_result._get_wasgo_id());
}

JSONParseResult::JSONParseResult(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
JSONParseResult::JSONParseResult(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_JSONParseResult_constructor();
}
JSONParseResult::new_instance(){
    return JSONParseResult(_wasgo_JSONParseResult_constructor());
}