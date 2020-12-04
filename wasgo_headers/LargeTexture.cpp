/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "LargeTexture.h"
int LargeTexture::add_piece(Vector2 p_ofs, Texture p_texture){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	return (int) _wasgo_LargeTexture_wrapper_add_piece(wasgo_id, wasgo_buffer_ofs, wasgo_size_ofs, p_texture._get_wasgo_id());
}
void LargeTexture::clear(){
	_wasgo_LargeTexture_wrapper_clear(wasgo_id);
}
int LargeTexture::get_piece_count(){
	return (int) _wasgo_LargeTexture_wrapper_get_piece_count(wasgo_id);
}
Vector2 LargeTexture::get_piece_offset(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_LargeTexture_wrapper_get_piece_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Texture LargeTexture::get_piece_texture(int p_idx){
	return Texture(_wasgo_LargeTexture_wrapper_get_piece_texture(wasgo_id, p_idx));
}
void LargeTexture::set_piece_offset(int p_idx, Vector2 p_ofs){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	_wasgo_LargeTexture_wrapper_set_piece_offset(wasgo_id, p_idx, wasgo_buffer_ofs, wasgo_size_ofs);
}
void LargeTexture::set_piece_texture(int p_idx, Texture p_texture){
	_wasgo_LargeTexture_wrapper_set_piece_texture(wasgo_id, p_idx, p_texture._get_wasgo_id());
}
void LargeTexture::set_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_LargeTexture_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}

LargeTexture::LargeTexture(WasGoID p_wasgo_id) : Texture(p_wasgo_id){
}
LargeTexture::LargeTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_LargeTexture_constructor();
}
LargeTexture::new_instance(){
    return LargeTexture(_wasgo_LargeTexture_constructor());
}