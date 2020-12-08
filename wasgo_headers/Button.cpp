/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Button.h"
Texture Button::get_button_icon(){
	return Texture(_wasgo_Button_wrapper_get_button_icon(wasgo_id));
}
bool Button::get_clip_text(){
	return (bool) _wasgo_Button_wrapper_get_clip_text(wasgo_id);
}
String Button::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Button_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Button::TextAlign Button::get_text_align(){
	return Button::TextAlign(_wasgo_Button_wrapper_get_text_align(wasgo_id));
}
bool Button::is_expand_icon(){
	return (bool) _wasgo_Button_wrapper_is_expand_icon(wasgo_id);
}
bool Button::is_flat(){
	return (bool) _wasgo_Button_wrapper_is_flat(wasgo_id);
}
void Button::set_button_icon(Texture p_texture){
	_wasgo_Button_wrapper_set_button_icon(wasgo_id, p_texture._get_wasgo_id());
}
void Button::set_clip_text(bool p_enabled){
	_wasgo_Button_wrapper_set_clip_text(wasgo_id, p_enabled);
}
void Button::set_expand_icon(bool p_arg0){
	_wasgo_Button_wrapper_set_expand_icon(wasgo_id, p_arg0);
}
void Button::set_flat(bool p_enabled){
	_wasgo_Button_wrapper_set_flat(wasgo_id, p_enabled);
}
void Button::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_Button_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void Button::set_text_align(Button::TextAlign p_align){
	_wasgo_Button_wrapper_set_text_align(wasgo_id, p_align._get_wasgo_id());
}

Button::Button(WasGoID p_wasgo_id) : BaseButton(p_wasgo_id){
}
Button::Button(BaseButton other) : BaseButton(other._get_wasgo_id()){
}
Button::Button():BaseButton(){
}
Button Button::new_instance(){
    return Button(_wasgo_Button_constructor());
}
WasGoID Button::_get_wasgo_id(){
    return wasgo_id;
}
Button::operator bool(){
    return (bool) wasgo_id;
}
