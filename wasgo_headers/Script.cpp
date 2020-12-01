/* THIS FILE IS GENERATED */
#include "Script.h"
bool Script::can_instance(){
	return (bool) _wasgo_Script_wrapper_can_instance(wasgo_id);
}
Script Script::get_base_script(){
	return Script::from_wasgo_id(_wasgo_Script_wrapper_get_base_script(wasgo_id));
}
String Script::get_instance_base_type(){
	return String::from_wasgo_id(_wasgo_Script_wrapper_get_instance_base_type(wasgo_id));
}
Variant Script::get_property_default_value(String p_property){
	return Variant::from_wasgo_id(_wasgo_Script_wrapper_get_property_default_value(wasgo_id, ((Variant) p_property).get_wasgo_id()));
}
Dictionary Script::get_script_constant_map(){
	return Dictionary::from_wasgo_id(_wasgo_Script_wrapper_get_script_constant_map(wasgo_id));
}
Array Script::get_script_method_list(){
	return Array::from_wasgo_id(_wasgo_Script_wrapper_get_script_method_list(wasgo_id));
}
Array Script::get_script_property_list(){
	return Array::from_wasgo_id(_wasgo_Script_wrapper_get_script_property_list(wasgo_id));
}
Array Script::get_script_signal_list(){
	return Array::from_wasgo_id(_wasgo_Script_wrapper_get_script_signal_list(wasgo_id));
}
String Script::get_source_code(){
	return String::from_wasgo_id(_wasgo_Script_wrapper_get_source_code(wasgo_id));
}
bool Script::has_script_signal(String p_signal_name){
	return (bool) _wasgo_Script_wrapper_has_script_signal(wasgo_id, ((Variant) p_signal_name).get_wasgo_id());
}
bool Script::has_source_code(){
	return (bool) _wasgo_Script_wrapper_has_source_code(wasgo_id);
}
bool Script::instance_has(Object p_base_object){
	return (bool) _wasgo_Script_wrapper_instance_has(wasgo_id, ((Variant) p_base_object).get_wasgo_id());
}
bool Script::is_tool(){
	return (bool) _wasgo_Script_wrapper_is_tool(wasgo_id);
}
Error Script::reload(bool p_keep_state = (bool) false){
	return Error::from_wasgo_id(_wasgo_Script_wrapper_reload(wasgo_id, p_keep_state));
}
void Script::set_source_code(String p_source){
	_wasgo_Script_wrapper_set_source_code(wasgo_id, ((Variant) p_source).get_wasgo_id());
}