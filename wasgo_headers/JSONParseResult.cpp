/* THIS FILE IS GENERATED */
#include "JSONParseResult.h"
Error JSONParseResult::get_error(){
	return Error::from_wasgo_id(_wasgo_JSONParseResult_wrapper_get_error(wasgo_id));
}
int JSONParseResult::get_error_line(){
	return (int) _wasgo_JSONParseResult_wrapper_get_error_line(wasgo_id));
}
String JSONParseResult::get_error_string(){
	return String::from_wasgo_id(_wasgo_JSONParseResult_wrapper_get_error_string(wasgo_id));
}
Variant JSONParseResult::get_result(){
	return Variant::from_wasgo_id(_wasgo_JSONParseResult_wrapper_get_result(wasgo_id));
}
void JSONParseResult::set_error(Error p_error){
	_wasgo_JSONParseResult_wrapper_set_error(wasgo_id, ((Variant) error).get_wasgo_id());
}
void JSONParseResult::set_error_line(int p_error_line){
	_wasgo_JSONParseResult_wrapper_set_error_line(wasgo_id, error_line);
}
void JSONParseResult::set_error_string(String p_error_string){
	_wasgo_JSONParseResult_wrapper_set_error_string(wasgo_id, ((Variant) error_string).get_wasgo_id());
}
void JSONParseResult::set_result(Variant p_result){
	_wasgo_JSONParseResult_wrapper_set_result(wasgo_id, ((Variant) result).get_wasgo_id());
}

JSONParseResult::JSONParseResult(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
JSONParseResult::~JSONParseResult(){
}