/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Translation.h"
void Translation::add_message(String p_src_message, String p_xlated_message){

    Variant wasgo_var_src_message = p_src_message;
    int wasgo_size_src_message = String(p_src_message).size();
    uint8_t wasgo_buffer_src_message[wasgo_size_src_message];
    encode_variant(wasgo_var_src_message, wasgo_buffer_src_message, wasgo_size_src_message);
    

    Variant wasgo_var_xlated_message = p_xlated_message;
    int wasgo_size_xlated_message = String(p_xlated_message).size();
    uint8_t wasgo_buffer_xlated_message[wasgo_size_xlated_message];
    encode_variant(wasgo_var_xlated_message, wasgo_buffer_xlated_message, wasgo_size_xlated_message);
    
	_wasgo_Translation_wrapper_add_message(wasgo_id, wasgo_buffer_src_message, wasgo_size_src_message, wasgo_buffer_xlated_message, wasgo_size_xlated_message);
}
void Translation::erase_message(String p_src_message){

    Variant wasgo_var_src_message = p_src_message;
    int wasgo_size_src_message = String(p_src_message).size();
    uint8_t wasgo_buffer_src_message[wasgo_size_src_message];
    encode_variant(wasgo_var_src_message, wasgo_buffer_src_message, wasgo_size_src_message);
    
	_wasgo_Translation_wrapper_erase_message(wasgo_id, wasgo_buffer_src_message, wasgo_size_src_message);
}
String Translation::get_locale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Translation_wrapper_get_locale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String Translation::get_message(String p_src_message){

    Variant wasgo_var_src_message = p_src_message;
    int wasgo_size_src_message = String(p_src_message).size();
    uint8_t wasgo_buffer_src_message[wasgo_size_src_message];
    encode_variant(wasgo_var_src_message, wasgo_buffer_src_message, wasgo_size_src_message);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Translation_wrapper_get_message(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_src_message, wasgo_size_src_message);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Translation::get_message_count(){
	return (int) _wasgo_Translation_wrapper_get_message_count(wasgo_id);
}
PoolStringArray Translation::get_message_list(){
	return PoolStringArray(_wasgo_Translation_wrapper_get_message_list(wasgo_id));
}
void Translation::set_locale(String p_locale){

    Variant wasgo_var_locale = p_locale;
    int wasgo_size_locale = String(p_locale).size();
    uint8_t wasgo_buffer_locale[wasgo_size_locale];
    encode_variant(wasgo_var_locale, wasgo_buffer_locale, wasgo_size_locale);
    
	_wasgo_Translation_wrapper_set_locale(wasgo_id, wasgo_buffer_locale, wasgo_size_locale);
}

Translation::Translation(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
Translation::Translation(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_Translation_constructor();
}
Translation::new_instance(){
    return Translation(_wasgo_Translation_constructor());
}