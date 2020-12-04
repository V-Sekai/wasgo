/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Sprite3D.h"
int Sprite3D::get_frame(){
	return (int) _wasgo_Sprite3D_wrapper_get_frame(wasgo_id);
}
Vector2 Sprite3D::get_frame_coords(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Sprite3D_wrapper_get_frame_coords(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Sprite3D::get_hframes(){
	return (int) _wasgo_Sprite3D_wrapper_get_hframes(wasgo_id);
}
Rect2 Sprite3D::get_region_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Sprite3D_wrapper_get_region_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Texture Sprite3D::get_texture(){
	return Texture(_wasgo_Sprite3D_wrapper_get_texture(wasgo_id));
}
int Sprite3D::get_vframes(){
	return (int) _wasgo_Sprite3D_wrapper_get_vframes(wasgo_id);
}
bool Sprite3D::is_region(){
	return (bool) _wasgo_Sprite3D_wrapper_is_region(wasgo_id);
}
void Sprite3D::set_frame(int p_frame){
	_wasgo_Sprite3D_wrapper_set_frame(wasgo_id, p_frame);
}
void Sprite3D::set_frame_coords(Vector2 p_coords){

    Variant wasgo_var_coords = p_coords;
    uint8_t wasgo_buffer_coords[12];
    int wasgo_size_coords = 12;
    encode_variant(wasgo_var_coords, wasgo_buffer_coords, wasgo_size_coords);
    
	_wasgo_Sprite3D_wrapper_set_frame_coords(wasgo_id, wasgo_buffer_coords, wasgo_size_coords);
}
void Sprite3D::set_hframes(int p_hframes){
	_wasgo_Sprite3D_wrapper_set_hframes(wasgo_id, p_hframes);
}
void Sprite3D::set_region(bool p_enabled){
	_wasgo_Sprite3D_wrapper_set_region(wasgo_id, p_enabled);
}
void Sprite3D::set_region_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_Sprite3D_wrapper_set_region_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}
void Sprite3D::set_texture(Texture p_texture){
	_wasgo_Sprite3D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void Sprite3D::set_vframes(int p_vframes){
	_wasgo_Sprite3D_wrapper_set_vframes(wasgo_id, p_vframes);
}

Sprite3D::Sprite3D(WasGoId p_wasgo_id) : SpriteBase3D(p_wasgo_id){
}
Sprite3D::Sprite3D(SpriteBase3D other) : SpriteBase3D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Sprite3D_constructor();
}
Sprite3D::new_instance(){
    return Sprite3D(_wasgo_Sprite3D_constructor());
}