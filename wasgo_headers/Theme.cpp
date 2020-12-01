/* THIS FILE IS GENERATED */
#include "Theme.h"
void Theme::clear(){
	_wasgo_Theme_wrapper_clear(wasgo_id);
}
void Theme::clear_color(String p_name, String p_node_type){
	_wasgo_Theme_wrapper_clear_color(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
void Theme::clear_constant(String p_name, String p_node_type){
	_wasgo_Theme_wrapper_clear_constant(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
void Theme::clear_font(String p_name, String p_node_type){
	_wasgo_Theme_wrapper_clear_font(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
void Theme::clear_icon(String p_name, String p_node_type){
	_wasgo_Theme_wrapper_clear_icon(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
void Theme::clear_stylebox(String p_name, String p_node_type){
	_wasgo_Theme_wrapper_clear_stylebox(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
Color Theme::get_color(String p_name, String p_node_type){
	return Color::from_wasgo_id(_wasgo_Theme_wrapper_get_color(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id()));
}
PoolStringArray Theme::get_color_list(String p_node_type){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_color_list(wasgo_id, ((Variant) p_node_type).get_wasgo_id()));
}
int Theme::get_constant(String p_name, String p_node_type){
	return (int) _wasgo_Theme_wrapper_get_constant(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
PoolStringArray Theme::get_constant_list(String p_node_type){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_constant_list(wasgo_id, ((Variant) p_node_type).get_wasgo_id()));
}
Font Theme::get_default_font(){
	return Font::from_wasgo_id(_wasgo_Theme_wrapper_get_default_font(wasgo_id));
}
Font Theme::get_font(String p_name, String p_node_type){
	return Font::from_wasgo_id(_wasgo_Theme_wrapper_get_font(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id()));
}
PoolStringArray Theme::get_font_list(String p_node_type){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_font_list(wasgo_id, ((Variant) p_node_type).get_wasgo_id()));
}
Texture Theme::get_icon(String p_name, String p_node_type){
	return Texture::from_wasgo_id(_wasgo_Theme_wrapper_get_icon(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id()));
}
PoolStringArray Theme::get_icon_list(String p_node_type){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_icon_list(wasgo_id, ((Variant) p_node_type).get_wasgo_id()));
}
StyleBox Theme::get_stylebox(String p_name, String p_node_type){
	return StyleBox::from_wasgo_id(_wasgo_Theme_wrapper_get_stylebox(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id()));
}
PoolStringArray Theme::get_stylebox_list(String p_node_type){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_stylebox_list(wasgo_id, ((Variant) p_node_type).get_wasgo_id()));
}
PoolStringArray Theme::get_stylebox_types(){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_stylebox_types(wasgo_id));
}
PoolStringArray Theme::get_type_list(String p_node_type){
	return PoolStringArray::from_wasgo_id(_wasgo_Theme_wrapper_get_type_list(wasgo_id, ((Variant) p_node_type).get_wasgo_id()));
}
bool Theme::has_color(String p_name, String p_node_type){
	return (bool) _wasgo_Theme_wrapper_has_color(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
bool Theme::has_constant(String p_name, String p_node_type){
	return (bool) _wasgo_Theme_wrapper_has_constant(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
bool Theme::has_font(String p_name, String p_node_type){
	return (bool) _wasgo_Theme_wrapper_has_font(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
bool Theme::has_icon(String p_name, String p_node_type){
	return (bool) _wasgo_Theme_wrapper_has_icon(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
bool Theme::has_stylebox(String p_name, String p_node_type){
	return (bool) _wasgo_Theme_wrapper_has_stylebox(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id());
}
void Theme::set_color(String p_name, String p_node_type, Color p_color){
	_wasgo_Theme_wrapper_set_color(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void Theme::set_constant(String p_name, String p_node_type, int p_constant){
	_wasgo_Theme_wrapper_set_constant(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id(), p_constant);
}
void Theme::set_default_font(Font p_font){
	_wasgo_Theme_wrapper_set_default_font(wasgo_id, ((Variant) p_font).get_wasgo_id());
}
void Theme::set_font(String p_name, String p_node_type, Font p_font){
	_wasgo_Theme_wrapper_set_font(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id(), ((Variant) p_font).get_wasgo_id());
}
void Theme::set_icon(String p_name, String p_node_type, Texture p_texture){
	_wasgo_Theme_wrapper_set_icon(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}
void Theme::set_stylebox(String p_name, String p_node_type, StyleBox p_texture){
	_wasgo_Theme_wrapper_set_stylebox(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node_type).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}