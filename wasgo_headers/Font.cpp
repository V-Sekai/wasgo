/* THIS FILE IS GENERATED */
#include "Font.h"
void Font::draw(RID p_canvas_item, Vector2 p_position, String p_string, Color p_modulate = (Color) 1,1,1,1, int p_clip_w = (int) -1, Color p_outline_modulate = (Color) 1,1,1,1){
	_wasgo_Font_wrapper_draw(wasgo_id, ((Variant) canvas_item).get_wasgo_id(), ((Variant) position).get_wasgo_id(), ((Variant) string).get_wasgo_id(), ((Variant) modulate).get_wasgo_id(), clip_w, ((Variant) outline_modulate).get_wasgo_id());
}
float Font::draw_char(RID p_canvas_item, Vector2 p_position, int p_char, int p_next = (int) -1, Color p_modulate = (Color) 1,1,1,1, bool p_outline = (bool) False){
	return (float) _wasgo_Font_wrapper_draw_char(wasgo_id, ((Variant) canvas_item).get_wasgo_id(), ((Variant) position).get_wasgo_id(), char, next, ((Variant) modulate).get_wasgo_id(), outline));
}
float Font::get_ascent(){
	return (float) _wasgo_Font_wrapper_get_ascent(wasgo_id));
}
Vector2 Font::get_char_size(int p_char, int p_next = (int) 0){
	return Vector2::from_wasgo_id(_wasgo_Font_wrapper_get_char_size(wasgo_id, char, next));
}
float Font::get_descent(){
	return (float) _wasgo_Font_wrapper_get_descent(wasgo_id));
}
float Font::get_height(){
	return (float) _wasgo_Font_wrapper_get_height(wasgo_id));
}
Vector2 Font::get_string_size(String p_string){
	return Vector2::from_wasgo_id(_wasgo_Font_wrapper_get_string_size(wasgo_id, ((Variant) string).get_wasgo_id()));
}
Vector2 Font::get_wordwrap_string_size(String p_string, float p_width){
	return Vector2::from_wasgo_id(_wasgo_Font_wrapper_get_wordwrap_string_size(wasgo_id, ((Variant) string).get_wasgo_id(), width));
}
bool Font::has_outline(){
	return (bool) _wasgo_Font_wrapper_has_outline(wasgo_id));
}
bool Font::is_distance_field_hint(){
	return (bool) _wasgo_Font_wrapper_is_distance_field_hint(wasgo_id));
}
void Font::update_changes(){
	_wasgo_Font_wrapper_update_changes(wasgo_id);
}