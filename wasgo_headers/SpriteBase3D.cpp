/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpriteBase3D.h"
TriangleMesh SpriteBase3D::generate_triangle_mesh(){
	return TriangleMesh(_wasgo_SpriteBase3D_wrapper_generate_triangle_mesh(wasgo_id));
}
SpriteBase3D::AlphaCutMode SpriteBase3D::get_alpha_cut_mode(){
	return SpriteBase3D::AlphaCutMode(_wasgo_SpriteBase3D_wrapper_get_alpha_cut_mode(wasgo_id));
}
Vector3::Axis SpriteBase3D::get_axis(){
	return Vector3::Axis(_wasgo_SpriteBase3D_wrapper_get_axis(wasgo_id));
}
SpatialMaterial::BillboardMode SpriteBase3D::get_billboard_mode(){
	return SpatialMaterial::BillboardMode(_wasgo_SpriteBase3D_wrapper_get_billboard_mode(wasgo_id));
}
bool SpriteBase3D::get_draw_flag(SpriteBase3D::DrawFlags p_flag){
	return (bool) _wasgo_SpriteBase3D_wrapper_get_draw_flag(wasgo_id, p_flag._get_wasgo_id());
}
Rect2 SpriteBase3D::get_item_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_SpriteBase3D_wrapper_get_item_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Color SpriteBase3D::get_modulate(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_SpriteBase3D_wrapper_get_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Vector2 SpriteBase3D::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_SpriteBase3D_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float SpriteBase3D::get_opacity(){
	return (float) _wasgo_SpriteBase3D_wrapper_get_opacity(wasgo_id);
}
float SpriteBase3D::get_pixel_size(){
	return (float) _wasgo_SpriteBase3D_wrapper_get_pixel_size(wasgo_id);
}
bool SpriteBase3D::is_centered(){
	return (bool) _wasgo_SpriteBase3D_wrapper_is_centered(wasgo_id);
}
bool SpriteBase3D::is_flipped_h(){
	return (bool) _wasgo_SpriteBase3D_wrapper_is_flipped_h(wasgo_id);
}
bool SpriteBase3D::is_flipped_v(){
	return (bool) _wasgo_SpriteBase3D_wrapper_is_flipped_v(wasgo_id);
}
void SpriteBase3D::set_alpha_cut_mode(SpriteBase3D::AlphaCutMode p_mode){
	_wasgo_SpriteBase3D_wrapper_set_alpha_cut_mode(wasgo_id, p_mode._get_wasgo_id());
}
void SpriteBase3D::set_axis(Vector3::Axis p_axis){
	_wasgo_SpriteBase3D_wrapper_set_axis(wasgo_id, p_axis._get_wasgo_id());
}
void SpriteBase3D::set_billboard_mode(SpatialMaterial::BillboardMode p_mode){
	_wasgo_SpriteBase3D_wrapper_set_billboard_mode(wasgo_id, p_mode._get_wasgo_id());
}
void SpriteBase3D::set_centered(bool p_centered){
	_wasgo_SpriteBase3D_wrapper_set_centered(wasgo_id, p_centered);
}
void SpriteBase3D::set_draw_flag(SpriteBase3D::DrawFlags p_flag, bool p_enabled){
	_wasgo_SpriteBase3D_wrapper_set_draw_flag(wasgo_id, p_flag._get_wasgo_id(), p_enabled);
}
void SpriteBase3D::set_flip_h(bool p_flip_h){
	_wasgo_SpriteBase3D_wrapper_set_flip_h(wasgo_id, p_flip_h);
}
void SpriteBase3D::set_flip_v(bool p_flip_v){
	_wasgo_SpriteBase3D_wrapper_set_flip_v(wasgo_id, p_flip_v);
}
void SpriteBase3D::set_modulate(Color p_modulate){

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_SpriteBase3D_wrapper_set_modulate(wasgo_id, wasgo_buffer_modulate, wasgo_size_modulate);
}
void SpriteBase3D::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_SpriteBase3D_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void SpriteBase3D::set_opacity(float p_opacity){
	_wasgo_SpriteBase3D_wrapper_set_opacity(wasgo_id, p_opacity);
}
void SpriteBase3D::set_pixel_size(float p_pixel_size){
	_wasgo_SpriteBase3D_wrapper_set_pixel_size(wasgo_id, p_pixel_size);
}