/* THIS FILE IS GENERATED */
#include "Texture.h"
void Texture::draw(RID p_canvas_item, Vector2 p_position, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, Texture p_normal_map = (Texture) ""){
	_wasgo_Texture_wrapper_draw(wasgo_id, ((Variant) canvas_item).get_wasgo_id(), ((Variant) position).get_wasgo_id(), ((Variant) modulate).get_wasgo_id(), transpose, ((Variant) normal_map).get_wasgo_id());
}
void Texture::draw_rect(RID p_canvas_item, Rect2 p_rect, bool p_tile, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, Texture p_normal_map = (Texture) ""){
	_wasgo_Texture_wrapper_draw_rect(wasgo_id, ((Variant) canvas_item).get_wasgo_id(), ((Variant) rect).get_wasgo_id(), tile, ((Variant) modulate).get_wasgo_id(), transpose, ((Variant) normal_map).get_wasgo_id());
}
void Texture::draw_rect_region(RID p_canvas_item, Rect2 p_rect, Rect2 p_src_rect, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, Texture p_normal_map = (Texture) "", bool p_clip_uv = (bool) True){
	_wasgo_Texture_wrapper_draw_rect_region(wasgo_id, ((Variant) canvas_item).get_wasgo_id(), ((Variant) rect).get_wasgo_id(), ((Variant) src_rect).get_wasgo_id(), ((Variant) modulate).get_wasgo_id(), transpose, ((Variant) normal_map).get_wasgo_id(), clip_uv);
}
Image Texture::get_data(){
	return Image::from_wasgo_id(_wasgo_Texture_wrapper_get_data(wasgo_id));
}
int Texture::get_flags(){
	return (int) _wasgo_Texture_wrapper_get_flags(wasgo_id));
}
int Texture::get_height(){
	return (int) _wasgo_Texture_wrapper_get_height(wasgo_id));
}
Vector2 Texture::get_size(){
	return Vector2::from_wasgo_id(_wasgo_Texture_wrapper_get_size(wasgo_id));
}
int Texture::get_width(){
	return (int) _wasgo_Texture_wrapper_get_width(wasgo_id));
}
bool Texture::has_alpha(){
	return (bool) _wasgo_Texture_wrapper_has_alpha(wasgo_id));
}
void Texture::set_flags(int p_flags){
	_wasgo_Texture_wrapper_set_flags(wasgo_id, flags);
}