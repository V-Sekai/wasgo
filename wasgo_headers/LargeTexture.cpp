/* THIS FILE IS GENERATED */
#include "LargeTexture.h"
int LargeTexture::add_piece(Vector2 p_ofs, Texture p_texture){
	return (int) _wasgo_LargeTexture_wrapper_add_piece(wasgo_id, ((Variant) ofs).get_wasgo_id(), ((Variant) texture).get_wasgo_id()));
}
void LargeTexture::clear(){
	_wasgo_LargeTexture_wrapper_clear(wasgo_id);
}
int LargeTexture::get_piece_count(){
	return (int) _wasgo_LargeTexture_wrapper_get_piece_count(wasgo_id));
}
Vector2 LargeTexture::get_piece_offset(int p_idx){
	return Vector2::from_wasgo_id(_wasgo_LargeTexture_wrapper_get_piece_offset(wasgo_id, idx));
}
Texture LargeTexture::get_piece_texture(int p_idx){
	return Texture::from_wasgo_id(_wasgo_LargeTexture_wrapper_get_piece_texture(wasgo_id, idx));
}
void LargeTexture::set_piece_offset(int p_idx, Vector2 p_ofs){
	_wasgo_LargeTexture_wrapper_set_piece_offset(wasgo_id, idx, ((Variant) ofs).get_wasgo_id());
}
void LargeTexture::set_piece_texture(int p_idx, Texture p_texture){
	_wasgo_LargeTexture_wrapper_set_piece_texture(wasgo_id, idx, ((Variant) texture).get_wasgo_id());
}
void LargeTexture::set_size(Vector2 p_size){
	_wasgo_LargeTexture_wrapper_set_size(wasgo_id, ((Variant) size).get_wasgo_id());
}

LargeTexture::LargeTexture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
LargeTexture::~LargeTexture(){
}