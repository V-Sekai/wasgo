/* THIS FILE IS GENERATED */
#include "Button.h"
Texture Button::get_button_icon(){
	return Texture::from_wasgo_id(_wasgo_Button_wrapper_get_button_icon(wasgo_id));
}
bool Button::get_clip_text(){
	return (bool) _wasgo_Button_wrapper_get_clip_text(wasgo_id));
}
String Button::get_text(){
	return String::from_wasgo_id(_wasgo_Button_wrapper_get_text(wasgo_id));
}
Button::TextAlign Button::get_text_align(){
	return Button::TextAlign::from_wasgo_id(_wasgo_Button_wrapper_get_text_align(wasgo_id));
}
bool Button::is_expand_icon(){
	return (bool) _wasgo_Button_wrapper_is_expand_icon(wasgo_id));
}
bool Button::is_flat(){
	return (bool) _wasgo_Button_wrapper_is_flat(wasgo_id));
}
void Button::set_button_icon(Texture p_texture){
	_wasgo_Button_wrapper_set_button_icon(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void Button::set_clip_text(bool p_enabled){
	_wasgo_Button_wrapper_set_clip_text(wasgo_id, enabled);
}
void Button::set_expand_icon(bool p_arg0){
	_wasgo_Button_wrapper_set_expand_icon(wasgo_id, arg0);
}
void Button::set_flat(bool p_enabled){
	_wasgo_Button_wrapper_set_flat(wasgo_id, enabled);
}
void Button::set_text(String p_text){
	_wasgo_Button_wrapper_set_text(wasgo_id, ((Variant) text).get_wasgo_id());
}
void Button::set_text_align(Button::TextAlign p_align){
	_wasgo_Button_wrapper_set_text_align(wasgo_id, ((Variant) align).get_wasgo_id());
}

Button::Button(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Button::~Button(){
}