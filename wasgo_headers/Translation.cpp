/* THIS FILE IS GENERATED */
#include "Translation.h"
void Translation::add_message(String p_src_message, String p_xlated_message){
	_wasgo_Translation_wrapper_add_message(wasgo_id, ((Variant) p_src_message).get_wasgo_id(), ((Variant) p_xlated_message).get_wasgo_id());
}
void Translation::erase_message(String p_src_message){
	_wasgo_Translation_wrapper_erase_message(wasgo_id, ((Variant) p_src_message).get_wasgo_id());
}
String Translation::get_locale(){
	return String::from_wasgo_id(_wasgo_Translation_wrapper_get_locale(wasgo_id));
}
String Translation::get_message(String p_src_message){
	return String::from_wasgo_id(_wasgo_Translation_wrapper_get_message(wasgo_id, ((Variant) p_src_message).get_wasgo_id()));
}
int Translation::get_message_count(){
	return (int) _wasgo_Translation_wrapper_get_message_count(wasgo_id);
}
PoolStringArray Translation::get_message_list(){
	return PoolStringArray::from_wasgo_id(_wasgo_Translation_wrapper_get_message_list(wasgo_id));
}
void Translation::set_locale(String p_locale){
	_wasgo_Translation_wrapper_set_locale(wasgo_id, ((Variant) p_locale).get_wasgo_id());
}