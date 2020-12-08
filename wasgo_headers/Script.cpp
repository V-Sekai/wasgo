/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Script.h"
bool Script::can_instance(){
	return (bool) _wasgo_Script_wrapper_can_instance(wasgo_id);
}
Script Script::get_base_script(){
	return Script(_wasgo_Script_wrapper_get_base_script(wasgo_id));
}
String Script::get_instance_base_type(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Script_wrapper_get_instance_base_type(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Variant Script::get_property_default_value(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	return Variant(_wasgo_Script_wrapper_get_property_default_value(wasgo_id, wasgo_buffer_property, wasgo_size_property));
}
Dictionary Script::get_script_constant_map(){
	return Dictionary(_wasgo_Script_wrapper_get_script_constant_map(wasgo_id));
}
Array Script::get_script_method_list(){
	return Array(_wasgo_Script_wrapper_get_script_method_list(wasgo_id));
}
Array Script::get_script_property_list(){
	return Array(_wasgo_Script_wrapper_get_script_property_list(wasgo_id));
}
Array Script::get_script_signal_list(){
	return Array(_wasgo_Script_wrapper_get_script_signal_list(wasgo_id));
}
String Script::get_source_code(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Script_wrapper_get_source_code(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool Script::has_script_signal(String p_signal_name){

    Variant wasgo_var_signal_name = p_signal_name;
    int wasgo_size_signal_name = String(p_signal_name).size();
    uint8_t wasgo_buffer_signal_name[wasgo_size_signal_name];
    encode_variant(wasgo_var_signal_name, wasgo_buffer_signal_name, wasgo_size_signal_name);
    
	return (bool) _wasgo_Script_wrapper_has_script_signal(wasgo_id, wasgo_buffer_signal_name, wasgo_size_signal_name);
}
bool Script::has_source_code(){
	return (bool) _wasgo_Script_wrapper_has_source_code(wasgo_id);
}
bool Script::instance_has(Object p_base_object){
	return (bool) _wasgo_Script_wrapper_instance_has(wasgo_id, p_base_object._get_wasgo_id());
}
bool Script::is_tool(){
	return (bool) _wasgo_Script_wrapper_is_tool(wasgo_id);
}
Error Script::reload(bool p_keep_state){
	return Error(_wasgo_Script_wrapper_reload(wasgo_id, p_keep_state));
}
void Script::set_source_code(String p_source){

    Variant wasgo_var_source = p_source;
    int wasgo_size_source = String(p_source).size();
    uint8_t wasgo_buffer_source[wasgo_size_source];
    encode_variant(wasgo_var_source, wasgo_buffer_source, wasgo_size_source);
    
	_wasgo_Script_wrapper_set_source_code(wasgo_id, wasgo_buffer_source, wasgo_size_source);
}

Script::Script(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Script::Script(Resource other) : Resource(other._get_wasgo_id()){
}
Script::Script():Resource(){
}
Script Script::new_instance(){
    return Script(_wasgo_Script_constructor());
}
WasGoID Script::_get_wasgo_id(){
    return wasgo_id;
}
Script::operator bool(){
    return (bool) wasgo_id;
}
