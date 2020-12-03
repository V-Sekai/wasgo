/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureRect.h"
TextureRect::StretchMode TextureRect::get_stretch_mode(){
	return TextureRect::StretchMode(_wasgo_TextureRect_wrapper_get_stretch_mode(wasgo_id));
}
Texture TextureRect::get_texture(){
	return Texture(_wasgo_TextureRect_wrapper_get_texture(wasgo_id));
}
bool TextureRect::has_expand(){
	return (bool) _wasgo_TextureRect_wrapper_has_expand(wasgo_id);
}
bool TextureRect::is_flipped_h(){
	return (bool) _wasgo_TextureRect_wrapper_is_flipped_h(wasgo_id);
}
bool TextureRect::is_flipped_v(){
	return (bool) _wasgo_TextureRect_wrapper_is_flipped_v(wasgo_id);
}
void TextureRect::set_expand(bool p_enable){
	_wasgo_TextureRect_wrapper_set_expand(wasgo_id, p_enable);
}
void TextureRect::set_flip_h(bool p_enable){
	_wasgo_TextureRect_wrapper_set_flip_h(wasgo_id, p_enable);
}
void TextureRect::set_flip_v(bool p_enable){
	_wasgo_TextureRect_wrapper_set_flip_v(wasgo_id, p_enable);
}
void TextureRect::set_stretch_mode(TextureRect::StretchMode p_stretch_mode){
	_wasgo_TextureRect_wrapper_set_stretch_mode(wasgo_id, p_stretch_mode._get_wasgo_id());
}
void TextureRect::set_texture(Texture p_texture){
	_wasgo_TextureRect_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}

TextureRect::TextureRect(WasGoId p_wasgo_id) : Control(p_wasgo_id){
}
TextureRect::TextureRect(){
    wasgo_id = _wasgo_TextureRect_constructor();
}
TextureRect::~TextureRect(){
    _wasgo_TextureRect_destructor(wasgo_id);
}