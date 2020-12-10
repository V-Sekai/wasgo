/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "NinePatchRect.h"
NinePatchRect::AxisStretchMode NinePatchRect::get_h_axis_stretch_mode(){
	return NinePatchRect::AxisStretchMode(_wasgo_NinePatchRect_wrapper_get_h_axis_stretch_mode(wasgo_id));
}
int NinePatchRect::get_patch_margin(Margin p_margin){
	return (int) _wasgo_NinePatchRect_wrapper_get_patch_margin(wasgo_id, p_margin._get_wasgo_id());
}
Rect2 NinePatchRect::get_region_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_NinePatchRect_wrapper_get_region_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Texture NinePatchRect::get_texture(){
	return Texture(_wasgo_NinePatchRect_wrapper_get_texture(wasgo_id));
}
NinePatchRect::AxisStretchMode NinePatchRect::get_v_axis_stretch_mode(){
	return NinePatchRect::AxisStretchMode(_wasgo_NinePatchRect_wrapper_get_v_axis_stretch_mode(wasgo_id));
}
bool NinePatchRect::is_draw_center_enabled(){
	return (bool) _wasgo_NinePatchRect_wrapper_is_draw_center_enabled(wasgo_id);
}
void NinePatchRect::set_draw_center(bool p_draw_center){
	_wasgo_NinePatchRect_wrapper_set_draw_center(wasgo_id, p_draw_center);
}
void NinePatchRect::set_h_axis_stretch_mode(NinePatchRect::AxisStretchMode p_mode){
	_wasgo_NinePatchRect_wrapper_set_h_axis_stretch_mode(wasgo_id, p_mode._get_wasgo_id());
}
void NinePatchRect::set_patch_margin(Margin p_margin, int p_value){
	_wasgo_NinePatchRect_wrapper_set_patch_margin(wasgo_id, p_margin._get_wasgo_id(), p_value);
}
void NinePatchRect::set_region_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_NinePatchRect_wrapper_set_region_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}
void NinePatchRect::set_texture(Texture p_texture){
	_wasgo_NinePatchRect_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void NinePatchRect::set_v_axis_stretch_mode(NinePatchRect::AxisStretchMode p_mode){
	_wasgo_NinePatchRect_wrapper_set_v_axis_stretch_mode(wasgo_id, p_mode._get_wasgo_id());
}

NinePatchRect::NinePatchRect(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
NinePatchRect::NinePatchRect(Control other) : Control(other._get_wasgo_id()){
}
NinePatchRect::NinePatchRect():Control(){
}
NinePatchRect NinePatchRect::new_instance(){
    return NinePatchRect(_wasgo_NinePatchRect_constructor());
}
WasGoID NinePatchRect::_get_wasgo_id(){
    return wasgo_id;
}
NinePatchRect::operator bool(){
    return (bool) wasgo_id;
}
