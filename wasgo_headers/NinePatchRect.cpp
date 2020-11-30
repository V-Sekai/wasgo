/* THIS FILE IS GENERATED */
#include "NinePatchRect.h"
NinePatchRect::AxisStretchMode NinePatchRect::get_h_axis_stretch_mode(){
	return NinePatchRect::AxisStretchMode::from_wasgo_id(_wasgo_NinePatchRect_wrapper_get_h_axis_stretch_mode(wasgo_id));
}
int NinePatchRect::get_patch_margin(Margin p_margin){
	return (int) _wasgo_NinePatchRect_wrapper_get_patch_margin(wasgo_id, ((Variant) margin).get_wasgo_id()));
}
Rect2 NinePatchRect::get_region_rect(){
	return Rect2::from_wasgo_id(_wasgo_NinePatchRect_wrapper_get_region_rect(wasgo_id));
}
Texture NinePatchRect::get_texture(){
	return Texture::from_wasgo_id(_wasgo_NinePatchRect_wrapper_get_texture(wasgo_id));
}
NinePatchRect::AxisStretchMode NinePatchRect::get_v_axis_stretch_mode(){
	return NinePatchRect::AxisStretchMode::from_wasgo_id(_wasgo_NinePatchRect_wrapper_get_v_axis_stretch_mode(wasgo_id));
}
bool NinePatchRect::is_draw_center_enabled(){
	return (bool) _wasgo_NinePatchRect_wrapper_is_draw_center_enabled(wasgo_id));
}
void NinePatchRect::set_draw_center(bool p_draw_center){
	_wasgo_NinePatchRect_wrapper_set_draw_center(wasgo_id, draw_center);
}
void NinePatchRect::set_h_axis_stretch_mode(NinePatchRect::AxisStretchMode p_mode){
	_wasgo_NinePatchRect_wrapper_set_h_axis_stretch_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void NinePatchRect::set_patch_margin(Margin p_margin, int p_value){
	_wasgo_NinePatchRect_wrapper_set_patch_margin(wasgo_id, ((Variant) margin).get_wasgo_id(), value);
}
void NinePatchRect::set_region_rect(Rect2 p_rect){
	_wasgo_NinePatchRect_wrapper_set_region_rect(wasgo_id, ((Variant) rect).get_wasgo_id());
}
void NinePatchRect::set_texture(Texture p_texture){
	_wasgo_NinePatchRect_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void NinePatchRect::set_v_axis_stretch_mode(NinePatchRect::AxisStretchMode p_mode){
	_wasgo_NinePatchRect_wrapper_set_v_axis_stretch_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}

NinePatchRect::NinePatchRect(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
NinePatchRect::~NinePatchRect(){
}