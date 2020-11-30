/* THIS FILE IS GENERATED */
#include "TreeItem.h"
void TreeItem::add_button(int p_column, Texture p_button, int p_button_idx = (int) -1, bool p_disabled = (bool) False, String p_tooltip = (String) ){
	_wasgo_TreeItem_wrapper_add_button(wasgo_id, column, ((Variant) button).get_wasgo_id(), button_idx, disabled, ((Variant) tooltip).get_wasgo_id());
}
Variant TreeItem::call_recursive(String p_method){
	return Variant::from_wasgo_id(_wasgo_TreeItem_wrapper_call_recursive(wasgo_id, ((Variant) method).get_wasgo_id()));
}
void TreeItem::clear_custom_bg_color(int p_column){
	_wasgo_TreeItem_wrapper_clear_custom_bg_color(wasgo_id, column);
}
void TreeItem::clear_custom_color(int p_column){
	_wasgo_TreeItem_wrapper_clear_custom_color(wasgo_id, column);
}
void TreeItem::deselect(int p_column){
	_wasgo_TreeItem_wrapper_deselect(wasgo_id, column);
}
void TreeItem::erase_button(int p_column, int p_button_idx){
	_wasgo_TreeItem_wrapper_erase_button(wasgo_id, column, button_idx);
}
Texture TreeItem::get_button(int p_column, int p_button_idx){
	return Texture::from_wasgo_id(_wasgo_TreeItem_wrapper_get_button(wasgo_id, column, button_idx));
}
int TreeItem::get_button_count(int p_column){
	return (int) _wasgo_TreeItem_wrapper_get_button_count(wasgo_id, column));
}
String TreeItem::get_button_tooltip(int p_column, int p_button_idx){
	return String::from_wasgo_id(_wasgo_TreeItem_wrapper_get_button_tooltip(wasgo_id, column, button_idx));
}
TreeItem::TreeCellMode TreeItem::get_cell_mode(int p_column){
	return TreeItem::TreeCellMode::from_wasgo_id(_wasgo_TreeItem_wrapper_get_cell_mode(wasgo_id, column));
}
TreeItem TreeItem::get_children(){
	return TreeItem::from_wasgo_id(_wasgo_TreeItem_wrapper_get_children(wasgo_id));
}
Color TreeItem::get_custom_bg_color(int p_column){
	return Color::from_wasgo_id(_wasgo_TreeItem_wrapper_get_custom_bg_color(wasgo_id, column));
}
Color TreeItem::get_custom_color(int p_column){
	return Color::from_wasgo_id(_wasgo_TreeItem_wrapper_get_custom_color(wasgo_id, column));
}
int TreeItem::get_custom_minimum_height(){
	return (int) _wasgo_TreeItem_wrapper_get_custom_minimum_height(wasgo_id));
}
bool TreeItem::get_expand_right(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_get_expand_right(wasgo_id, column));
}
Texture TreeItem::get_icon(int p_column){
	return Texture::from_wasgo_id(_wasgo_TreeItem_wrapper_get_icon(wasgo_id, column));
}
int TreeItem::get_icon_max_width(int p_column){
	return (int) _wasgo_TreeItem_wrapper_get_icon_max_width(wasgo_id, column));
}
Color TreeItem::get_icon_modulate(int p_column){
	return Color::from_wasgo_id(_wasgo_TreeItem_wrapper_get_icon_modulate(wasgo_id, column));
}
Rect2 TreeItem::get_icon_region(int p_column){
	return Rect2::from_wasgo_id(_wasgo_TreeItem_wrapper_get_icon_region(wasgo_id, column));
}
Variant TreeItem::get_metadata(int p_column){
	return Variant::from_wasgo_id(_wasgo_TreeItem_wrapper_get_metadata(wasgo_id, column));
}
TreeItem TreeItem::get_next(){
	return TreeItem::from_wasgo_id(_wasgo_TreeItem_wrapper_get_next(wasgo_id));
}
TreeItem TreeItem::get_next_visible(bool p_wrap = (bool) False){
	return TreeItem::from_wasgo_id(_wasgo_TreeItem_wrapper_get_next_visible(wasgo_id, wrap));
}
TreeItem TreeItem::get_parent(){
	return TreeItem::from_wasgo_id(_wasgo_TreeItem_wrapper_get_parent(wasgo_id));
}
TreeItem TreeItem::get_prev(){
	return TreeItem::from_wasgo_id(_wasgo_TreeItem_wrapper_get_prev(wasgo_id));
}
TreeItem TreeItem::get_prev_visible(bool p_wrap = (bool) False){
	return TreeItem::from_wasgo_id(_wasgo_TreeItem_wrapper_get_prev_visible(wasgo_id, wrap));
}
float TreeItem::get_range(int p_column){
	return (float) _wasgo_TreeItem_wrapper_get_range(wasgo_id, column));
}
Dictionary TreeItem::get_range_config(int p_column){
	return Dictionary::from_wasgo_id(_wasgo_TreeItem_wrapper_get_range_config(wasgo_id, column));
}
String TreeItem::get_suffix(int p_column){
	return String::from_wasgo_id(_wasgo_TreeItem_wrapper_get_suffix(wasgo_id, column));
}
String TreeItem::get_text(int p_column){
	return String::from_wasgo_id(_wasgo_TreeItem_wrapper_get_text(wasgo_id, column));
}
TreeItem::TextAlign TreeItem::get_text_align(int p_column){
	return TreeItem::TextAlign::from_wasgo_id(_wasgo_TreeItem_wrapper_get_text_align(wasgo_id, column));
}
String TreeItem::get_tooltip(int p_column){
	return String::from_wasgo_id(_wasgo_TreeItem_wrapper_get_tooltip(wasgo_id, column));
}
bool TreeItem::is_button_disabled(int p_column, int p_button_idx){
	return (bool) _wasgo_TreeItem_wrapper_is_button_disabled(wasgo_id, column, button_idx));
}
bool TreeItem::is_checked(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_checked(wasgo_id, column));
}
bool TreeItem::is_collapsed(){
	return (bool) _wasgo_TreeItem_wrapper_is_collapsed(wasgo_id));
}
bool TreeItem::is_custom_set_as_button(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_custom_set_as_button(wasgo_id, column));
}
bool TreeItem::is_editable(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_editable(wasgo_id, column));
}
bool TreeItem::is_folding_disabled(){
	return (bool) _wasgo_TreeItem_wrapper_is_folding_disabled(wasgo_id));
}
bool TreeItem::is_selectable(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_selectable(wasgo_id, column));
}
bool TreeItem::is_selected(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_selected(wasgo_id, column));
}
void TreeItem::move_to_bottom(){
	_wasgo_TreeItem_wrapper_move_to_bottom(wasgo_id);
}
void TreeItem::move_to_top(){
	_wasgo_TreeItem_wrapper_move_to_top(wasgo_id);
}
void TreeItem::remove_child(Object p_child){
	_wasgo_TreeItem_wrapper_remove_child(wasgo_id, ((Variant) child).get_wasgo_id());
}
void TreeItem::select(int p_column){
	_wasgo_TreeItem_wrapper_select(wasgo_id, column);
}
void TreeItem::set_button(int p_column, int p_button_idx, Texture p_button){
	_wasgo_TreeItem_wrapper_set_button(wasgo_id, column, button_idx, ((Variant) button).get_wasgo_id());
}
void TreeItem::set_button_disabled(int p_column, int p_button_idx, bool p_disabled){
	_wasgo_TreeItem_wrapper_set_button_disabled(wasgo_id, column, button_idx, disabled);
}
void TreeItem::set_cell_mode(int p_column, TreeItem::TreeCellMode p_mode){
	_wasgo_TreeItem_wrapper_set_cell_mode(wasgo_id, column, ((Variant) mode).get_wasgo_id());
}
void TreeItem::set_checked(int p_column, bool p_checked){
	_wasgo_TreeItem_wrapper_set_checked(wasgo_id, column, checked);
}
void TreeItem::set_collapsed(bool p_enable){
	_wasgo_TreeItem_wrapper_set_collapsed(wasgo_id, enable);
}
void TreeItem::set_custom_as_button(int p_column, bool p_enable){
	_wasgo_TreeItem_wrapper_set_custom_as_button(wasgo_id, column, enable);
}
void TreeItem::set_custom_bg_color(int p_column, Color p_color, bool p_just_outline = (bool) False){
	_wasgo_TreeItem_wrapper_set_custom_bg_color(wasgo_id, column, ((Variant) color).get_wasgo_id(), just_outline);
}
void TreeItem::set_custom_color(int p_column, Color p_color){
	_wasgo_TreeItem_wrapper_set_custom_color(wasgo_id, column, ((Variant) color).get_wasgo_id());
}
void TreeItem::set_custom_draw(int p_column, Object p_object, String p_callback){
	_wasgo_TreeItem_wrapper_set_custom_draw(wasgo_id, column, ((Variant) object).get_wasgo_id(), ((Variant) callback).get_wasgo_id());
}
void TreeItem::set_custom_minimum_height(int p_height){
	_wasgo_TreeItem_wrapper_set_custom_minimum_height(wasgo_id, height);
}
void TreeItem::set_disable_folding(bool p_disable){
	_wasgo_TreeItem_wrapper_set_disable_folding(wasgo_id, disable);
}
void TreeItem::set_editable(int p_column, bool p_enabled){
	_wasgo_TreeItem_wrapper_set_editable(wasgo_id, column, enabled);
}
void TreeItem::set_expand_right(int p_column, bool p_enable){
	_wasgo_TreeItem_wrapper_set_expand_right(wasgo_id, column, enable);
}
void TreeItem::set_icon(int p_column, Texture p_texture){
	_wasgo_TreeItem_wrapper_set_icon(wasgo_id, column, ((Variant) texture).get_wasgo_id());
}
void TreeItem::set_icon_max_width(int p_column, int p_width){
	_wasgo_TreeItem_wrapper_set_icon_max_width(wasgo_id, column, width);
}
void TreeItem::set_icon_modulate(int p_column, Color p_modulate){
	_wasgo_TreeItem_wrapper_set_icon_modulate(wasgo_id, column, ((Variant) modulate).get_wasgo_id());
}
void TreeItem::set_icon_region(int p_column, Rect2 p_region){
	_wasgo_TreeItem_wrapper_set_icon_region(wasgo_id, column, ((Variant) region).get_wasgo_id());
}
void TreeItem::set_metadata(int p_column, Variant p_meta){
	_wasgo_TreeItem_wrapper_set_metadata(wasgo_id, column, ((Variant) meta).get_wasgo_id());
}
void TreeItem::set_range(int p_column, float p_value){
	_wasgo_TreeItem_wrapper_set_range(wasgo_id, column, value);
}
void TreeItem::set_range_config(int p_column, float p_min, float p_max, float p_step, bool p_expr = (bool) False){
	_wasgo_TreeItem_wrapper_set_range_config(wasgo_id, column, min, max, step, expr);
}
void TreeItem::set_selectable(int p_column, bool p_selectable){
	_wasgo_TreeItem_wrapper_set_selectable(wasgo_id, column, selectable);
}
void TreeItem::set_suffix(int p_column, String p_text){
	_wasgo_TreeItem_wrapper_set_suffix(wasgo_id, column, ((Variant) text).get_wasgo_id());
}
void TreeItem::set_text(int p_column, String p_text){
	_wasgo_TreeItem_wrapper_set_text(wasgo_id, column, ((Variant) text).get_wasgo_id());
}
void TreeItem::set_text_align(int p_column, TreeItem::TextAlign p_text_align){
	_wasgo_TreeItem_wrapper_set_text_align(wasgo_id, column, ((Variant) text_align).get_wasgo_id());
}
void TreeItem::set_tooltip(int p_column, String p_tooltip){
	_wasgo_TreeItem_wrapper_set_tooltip(wasgo_id, column, ((Variant) tooltip).get_wasgo_id());
}