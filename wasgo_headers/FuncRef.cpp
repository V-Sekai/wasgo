/* THIS FILE IS GENERATED */
#include "FuncRef.h"
Variant FuncRef::call_func(){
	return Variant::from_wasgo_id(_wasgo_FuncRef_wrapper_call_func(wasgo_id));
}
Variant FuncRef::call_funcv(Array p_arg_array){
	return Variant::from_wasgo_id(_wasgo_FuncRef_wrapper_call_funcv(wasgo_id, ((Variant) p_arg_array).get_wasgo_id()));
}
String FuncRef::get_function(){
	return String::from_wasgo_id(_wasgo_FuncRef_wrapper_get_function(wasgo_id));
}
bool FuncRef::is_valid(){
	return (bool) _wasgo_FuncRef_wrapper_is_valid(wasgo_id);
}
void FuncRef::set_function(String p_name){
	_wasgo_FuncRef_wrapper_set_function(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void FuncRef::set_instance(Object p_instance){
	_wasgo_FuncRef_wrapper_set_instance(wasgo_id, ((Variant) p_instance).get_wasgo_id());
}