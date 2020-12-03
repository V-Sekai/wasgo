/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "LinkButton.h"
String LinkButton::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_LinkButton_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
LinkButton::UnderlineMode LinkButton::get_underline_mode(){
	return LinkButton::UnderlineMode(_wasgo_LinkButton_wrapper_get_underline_mode(wasgo_id));
}
void LinkButton::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    uint8_t wasgo_buffer_text[256];
    int wasgo_size_text = 256;
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_LinkButton_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void LinkButton::set_underline_mode(LinkButton::UnderlineMode p_underline_mode){
	_wasgo_LinkButton_wrapper_set_underline_mode(wasgo_id, p_underline_mode._get_wasgo_id());
}

LinkButton::LinkButton(WasGoId p_wasgo_id) : BaseButton(p_wasgo_id){
}
LinkButton::LinkButton(){
    wasgo_id = _wasgo_LinkButton_constructor();
}
LinkButton::~LinkButton(){
    _wasgo_LinkButton_destructor(wasgo_id);
}