/* THIS FILE IS GENERATED */
#include "TextureRect.h"
TextureRect::StretchMode TextureRect::get_stretch_mode(){
	return TextureRect::StretchMode::from_wasgo_id(_wasgo_TextureRect_wrapper_get_stretch_mode(wasgo_id));
}
Texture TextureRect::get_texture(){
	return Texture::from_wasgo_id(_wasgo_TextureRect_wrapper_get_texture(wasgo_id));
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
	_wasgo_TextureRect_wrapper_set_stretch_mode(wasgo_id, ((Variant) p_stretch_mode).get_wasgo_id());
}
void TextureRect::set_texture(Texture p_texture){
	_wasgo_TextureRect_wrapper_set_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}