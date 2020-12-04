/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Sprite.h"
int Sprite::get_frame(){
	return (int) _wasgo_Sprite_wrapper_get_frame(wasgo_id);
}
Vector2 Sprite::get_frame_coords(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Sprite_wrapper_get_frame_coords(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Sprite::get_hframes(){
	return (int) _wasgo_Sprite_wrapper_get_hframes(wasgo_id);
}
Texture Sprite::get_normal_map(){
	return Texture(_wasgo_Sprite_wrapper_get_normal_map(wasgo_id));
}
Vector2 Sprite::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Sprite_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Rect2 Sprite::get_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Sprite_wrapper_get_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Rect2 Sprite::get_region_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Sprite_wrapper_get_region_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Texture Sprite::get_texture(){
	return Texture(_wasgo_Sprite_wrapper_get_texture(wasgo_id));
}
int Sprite::get_vframes(){
	return (int) _wasgo_Sprite_wrapper_get_vframes(wasgo_id);
}
bool Sprite::is_centered(){
	return (bool) _wasgo_Sprite_wrapper_is_centered(wasgo_id);
}
bool Sprite::is_flipped_h(){
	return (bool) _wasgo_Sprite_wrapper_is_flipped_h(wasgo_id);
}
bool Sprite::is_flipped_v(){
	return (bool) _wasgo_Sprite_wrapper_is_flipped_v(wasgo_id);
}
bool Sprite::is_pixel_opaque(Vector2 p_pos){

    Variant wasgo_var_pos = p_pos;
    uint8_t wasgo_buffer_pos[12];
    int wasgo_size_pos = 12;
    encode_variant(wasgo_var_pos, wasgo_buffer_pos, wasgo_size_pos);
    
	return (bool) _wasgo_Sprite_wrapper_is_pixel_opaque(wasgo_id, wasgo_buffer_pos, wasgo_size_pos);
}
bool Sprite::is_region(){
	return (bool) _wasgo_Sprite_wrapper_is_region(wasgo_id);
}
bool Sprite::is_region_filter_clip_enabled(){
	return (bool) _wasgo_Sprite_wrapper_is_region_filter_clip_enabled(wasgo_id);
}
void Sprite::set_centered(bool p_centered){
	_wasgo_Sprite_wrapper_set_centered(wasgo_id, p_centered);
}
void Sprite::set_flip_h(bool p_flip_h){
	_wasgo_Sprite_wrapper_set_flip_h(wasgo_id, p_flip_h);
}
void Sprite::set_flip_v(bool p_flip_v){
	_wasgo_Sprite_wrapper_set_flip_v(wasgo_id, p_flip_v);
}
void Sprite::set_frame(int p_frame){
	_wasgo_Sprite_wrapper_set_frame(wasgo_id, p_frame);
}
void Sprite::set_frame_coords(Vector2 p_coords){

    Variant wasgo_var_coords = p_coords;
    uint8_t wasgo_buffer_coords[12];
    int wasgo_size_coords = 12;
    encode_variant(wasgo_var_coords, wasgo_buffer_coords, wasgo_size_coords);
    
	_wasgo_Sprite_wrapper_set_frame_coords(wasgo_id, wasgo_buffer_coords, wasgo_size_coords);
}
void Sprite::set_hframes(int p_hframes){
	_wasgo_Sprite_wrapper_set_hframes(wasgo_id, p_hframes);
}
void Sprite::set_normal_map(Texture p_normal_map){
	_wasgo_Sprite_wrapper_set_normal_map(wasgo_id, p_normal_map._get_wasgo_id());
}
void Sprite::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Sprite_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void Sprite::set_region(bool p_enabled){
	_wasgo_Sprite_wrapper_set_region(wasgo_id, p_enabled);
}
void Sprite::set_region_filter_clip(bool p_enabled){
	_wasgo_Sprite_wrapper_set_region_filter_clip(wasgo_id, p_enabled);
}
void Sprite::set_region_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_Sprite_wrapper_set_region_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}
void Sprite::set_texture(Texture p_texture){
	_wasgo_Sprite_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void Sprite::set_vframes(int p_vframes){
	_wasgo_Sprite_wrapper_set_vframes(wasgo_id, p_vframes);
}

Sprite::Sprite(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Sprite::Sprite(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Sprite_constructor();
}
Sprite::new_instance(){
    return Sprite(_wasgo_Sprite_constructor());
}