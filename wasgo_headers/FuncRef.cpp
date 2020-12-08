/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "FuncRef.h"
Variant FuncRef::call_func(){
	return Variant(_wasgo_FuncRef_wrapper_call_func(wasgo_id));
}
Variant FuncRef::call_funcv(Array p_arg_array){
	return Variant(_wasgo_FuncRef_wrapper_call_funcv(wasgo_id, p_arg_array._get_wasgo_id()));
}
String FuncRef::get_function(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_FuncRef_wrapper_get_function(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool FuncRef::is_valid(){
	return (bool) _wasgo_FuncRef_wrapper_is_valid(wasgo_id);
}
void FuncRef::set_function(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_FuncRef_wrapper_set_function(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void FuncRef::set_instance(Object p_instance){
	_wasgo_FuncRef_wrapper_set_instance(wasgo_id, p_instance._get_wasgo_id());
}

FuncRef::FuncRef(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
FuncRef::FuncRef(Reference other) : Reference(other._get_wasgo_id()){
}
FuncRef::FuncRef():Reference(){
}
FuncRef FuncRef::new_instance(){
    return FuncRef(_wasgo_FuncRef_constructor());
}
WasGoID FuncRef::_get_wasgo_id(){
    return wasgo_id;
}
FuncRef::operator bool(){
    return (bool) wasgo_id;
}
