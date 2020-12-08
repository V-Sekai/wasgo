/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureButton.h"
BitMap TextureButton::get_click_mask(){
	return BitMap(_wasgo_TextureButton_wrapper_get_click_mask(wasgo_id));
}
Texture TextureButton::get_disabled_texture(){
	return Texture(_wasgo_TextureButton_wrapper_get_disabled_texture(wasgo_id));
}
bool TextureButton::get_expand(){
	return (bool) _wasgo_TextureButton_wrapper_get_expand(wasgo_id);
}
Texture TextureButton::get_focused_texture(){
	return Texture(_wasgo_TextureButton_wrapper_get_focused_texture(wasgo_id));
}
Texture TextureButton::get_hover_texture(){
	return Texture(_wasgo_TextureButton_wrapper_get_hover_texture(wasgo_id));
}
Texture TextureButton::get_normal_texture(){
	return Texture(_wasgo_TextureButton_wrapper_get_normal_texture(wasgo_id));
}
Texture TextureButton::get_pressed_texture(){
	return Texture(_wasgo_TextureButton_wrapper_get_pressed_texture(wasgo_id));
}
TextureButton::StretchMode TextureButton::get_stretch_mode(){
	return TextureButton::StretchMode(_wasgo_TextureButton_wrapper_get_stretch_mode(wasgo_id));
}
void TextureButton::set_click_mask(BitMap p_mask){
	_wasgo_TextureButton_wrapper_set_click_mask(wasgo_id, p_mask._get_wasgo_id());
}
void TextureButton::set_disabled_texture(Texture p_texture){
	_wasgo_TextureButton_wrapper_set_disabled_texture(wasgo_id, p_texture._get_wasgo_id());
}
void TextureButton::set_expand(bool p_p_expand){
	_wasgo_TextureButton_wrapper_set_expand(wasgo_id, p_p_expand);
}
void TextureButton::set_focused_texture(Texture p_texture){
	_wasgo_TextureButton_wrapper_set_focused_texture(wasgo_id, p_texture._get_wasgo_id());
}
void TextureButton::set_hover_texture(Texture p_texture){
	_wasgo_TextureButton_wrapper_set_hover_texture(wasgo_id, p_texture._get_wasgo_id());
}
void TextureButton::set_normal_texture(Texture p_texture){
	_wasgo_TextureButton_wrapper_set_normal_texture(wasgo_id, p_texture._get_wasgo_id());
}
void TextureButton::set_pressed_texture(Texture p_texture){
	_wasgo_TextureButton_wrapper_set_pressed_texture(wasgo_id, p_texture._get_wasgo_id());
}
void TextureButton::set_stretch_mode(TextureButton::StretchMode p_p_mode){
	_wasgo_TextureButton_wrapper_set_stretch_mode(wasgo_id, p_p_mode._get_wasgo_id());
}

TextureButton::TextureButton(WasGoID p_wasgo_id) : BaseButton(p_wasgo_id){
}
TextureButton::TextureButton(BaseButton other) : BaseButton(other._get_wasgo_id()){
}
TextureButton::TextureButton():BaseButton(){
}
TextureButton TextureButton::new_instance(){
    return TextureButton(_wasgo_TextureButton_constructor());
}
WasGoID TextureButton::_get_wasgo_id(){
    return wasgo_id;
}
TextureButton::operator bool(){
    return (bool) wasgo_id;
}
