/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TreeItem.h"
void TreeItem::add_button(int p_column, Texture p_button, int p_button_idx, bool p_disabled, String p_tooltip){

    Variant wasgo_var_tooltip = p_tooltip;
    int wasgo_size_tooltip = String(p_tooltip).size();
    uint8_t wasgo_buffer_tooltip[wasgo_size_tooltip];
    encode_variant(wasgo_var_tooltip, wasgo_buffer_tooltip, wasgo_size_tooltip);
    
	_wasgo_TreeItem_wrapper_add_button(wasgo_id, p_column, p_button._get_wasgo_id(), p_button_idx, p_disabled, wasgo_buffer_tooltip, wasgo_size_tooltip);
}
Variant TreeItem::call_recursive(String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_TreeItem_wrapper_call_recursive(wasgo_id, wasgo_buffer_method, wasgo_size_method));
}
void TreeItem::clear_custom_bg_color(int p_column){
	_wasgo_TreeItem_wrapper_clear_custom_bg_color(wasgo_id, p_column);
}
void TreeItem::clear_custom_color(int p_column){
	_wasgo_TreeItem_wrapper_clear_custom_color(wasgo_id, p_column);
}
void TreeItem::deselect(int p_column){
	_wasgo_TreeItem_wrapper_deselect(wasgo_id, p_column);
}
void TreeItem::erase_button(int p_column, int p_button_idx){
	_wasgo_TreeItem_wrapper_erase_button(wasgo_id, p_column, p_button_idx);
}
Texture TreeItem::get_button(int p_column, int p_button_idx){
	return Texture(_wasgo_TreeItem_wrapper_get_button(wasgo_id, p_column, p_button_idx));
}
int TreeItem::get_button_count(int p_column){
	return (int) _wasgo_TreeItem_wrapper_get_button_count(wasgo_id, p_column);
}
String TreeItem::get_button_tooltip(int p_column, int p_button_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TreeItem_wrapper_get_button_tooltip(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column, p_button_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
TreeItem::TreeCellMode TreeItem::get_cell_mode(int p_column){
	return TreeItem::TreeCellMode(_wasgo_TreeItem_wrapper_get_cell_mode(wasgo_id, p_column));
}
TreeItem TreeItem::get_children(){
	return TreeItem(_wasgo_TreeItem_wrapper_get_children(wasgo_id));
}
Color TreeItem::get_custom_bg_color(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TreeItem_wrapper_get_custom_bg_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color TreeItem::get_custom_color(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TreeItem_wrapper_get_custom_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int TreeItem::get_custom_minimum_height(){
	return (int) _wasgo_TreeItem_wrapper_get_custom_minimum_height(wasgo_id);
}
bool TreeItem::get_expand_right(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_get_expand_right(wasgo_id, p_column);
}
Texture TreeItem::get_icon(int p_column){
	return Texture(_wasgo_TreeItem_wrapper_get_icon(wasgo_id, p_column));
}
int TreeItem::get_icon_max_width(int p_column){
	return (int) _wasgo_TreeItem_wrapper_get_icon_max_width(wasgo_id, p_column);
}
Color TreeItem::get_icon_modulate(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TreeItem_wrapper_get_icon_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Rect2 TreeItem::get_icon_region(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TreeItem_wrapper_get_icon_region(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Variant TreeItem::get_metadata(int p_column){
	return Variant(_wasgo_TreeItem_wrapper_get_metadata(wasgo_id, p_column));
}
TreeItem TreeItem::get_next(){
	return TreeItem(_wasgo_TreeItem_wrapper_get_next(wasgo_id));
}
TreeItem TreeItem::get_next_visible(bool p_wrap){
	return TreeItem(_wasgo_TreeItem_wrapper_get_next_visible(wasgo_id, p_wrap));
}
TreeItem TreeItem::get_parent(){
	return TreeItem(_wasgo_TreeItem_wrapper_get_parent(wasgo_id));
}
TreeItem TreeItem::get_prev(){
	return TreeItem(_wasgo_TreeItem_wrapper_get_prev(wasgo_id));
}
TreeItem TreeItem::get_prev_visible(bool p_wrap){
	return TreeItem(_wasgo_TreeItem_wrapper_get_prev_visible(wasgo_id, p_wrap));
}
float TreeItem::get_range(int p_column){
	return (float) _wasgo_TreeItem_wrapper_get_range(wasgo_id, p_column);
}
Dictionary TreeItem::get_range_config(int p_column){
	return Dictionary(_wasgo_TreeItem_wrapper_get_range_config(wasgo_id, p_column));
}
String TreeItem::get_suffix(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TreeItem_wrapper_get_suffix(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String TreeItem::get_text(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TreeItem_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
TreeItem::TextAlign TreeItem::get_text_align(int p_column){
	return TreeItem::TextAlign(_wasgo_TreeItem_wrapper_get_text_align(wasgo_id, p_column));
}
String TreeItem::get_tooltip(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TreeItem_wrapper_get_tooltip(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool TreeItem::is_button_disabled(int p_column, int p_button_idx){
	return (bool) _wasgo_TreeItem_wrapper_is_button_disabled(wasgo_id, p_column, p_button_idx);
}
bool TreeItem::is_checked(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_checked(wasgo_id, p_column);
}
bool TreeItem::is_collapsed(){
	return (bool) _wasgo_TreeItem_wrapper_is_collapsed(wasgo_id);
}
bool TreeItem::is_custom_set_as_button(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_custom_set_as_button(wasgo_id, p_column);
}
bool TreeItem::is_editable(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_editable(wasgo_id, p_column);
}
bool TreeItem::is_folding_disabled(){
	return (bool) _wasgo_TreeItem_wrapper_is_folding_disabled(wasgo_id);
}
bool TreeItem::is_selectable(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_selectable(wasgo_id, p_column);
}
bool TreeItem::is_selected(int p_column){
	return (bool) _wasgo_TreeItem_wrapper_is_selected(wasgo_id, p_column);
}
void TreeItem::move_to_bottom(){
	_wasgo_TreeItem_wrapper_move_to_bottom(wasgo_id);
}
void TreeItem::move_to_top(){
	_wasgo_TreeItem_wrapper_move_to_top(wasgo_id);
}
void TreeItem::remove_child(Object p_child){
	_wasgo_TreeItem_wrapper_remove_child(wasgo_id, p_child._get_wasgo_id());
}
void TreeItem::select(int p_column){
	_wasgo_TreeItem_wrapper_select(wasgo_id, p_column);
}
void TreeItem::set_button(int p_column, int p_button_idx, Texture p_button){
	_wasgo_TreeItem_wrapper_set_button(wasgo_id, p_column, p_button_idx, p_button._get_wasgo_id());
}
void TreeItem::set_button_disabled(int p_column, int p_button_idx, bool p_disabled){
	_wasgo_TreeItem_wrapper_set_button_disabled(wasgo_id, p_column, p_button_idx, p_disabled);
}
void TreeItem::set_cell_mode(int p_column, TreeItem::TreeCellMode p_mode){
	_wasgo_TreeItem_wrapper_set_cell_mode(wasgo_id, p_column, p_mode._get_wasgo_id());
}
void TreeItem::set_checked(int p_column, bool p_checked){
	_wasgo_TreeItem_wrapper_set_checked(wasgo_id, p_column, p_checked);
}
void TreeItem::set_collapsed(bool p_enable){
	_wasgo_TreeItem_wrapper_set_collapsed(wasgo_id, p_enable);
}
void TreeItem::set_custom_as_button(int p_column, bool p_enable){
	_wasgo_TreeItem_wrapper_set_custom_as_button(wasgo_id, p_column, p_enable);
}
void TreeItem::set_custom_bg_color(int p_column, Color p_color, bool p_just_outline){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_TreeItem_wrapper_set_custom_bg_color(wasgo_id, p_column, wasgo_buffer_color, wasgo_size_color, p_just_outline);
}
void TreeItem::set_custom_color(int p_column, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_TreeItem_wrapper_set_custom_color(wasgo_id, p_column, wasgo_buffer_color, wasgo_size_color);
}
void TreeItem::set_custom_draw(int p_column, Object p_object, String p_callback){

    Variant wasgo_var_callback = p_callback;
    int wasgo_size_callback = String(p_callback).size();
    uint8_t wasgo_buffer_callback[wasgo_size_callback];
    encode_variant(wasgo_var_callback, wasgo_buffer_callback, wasgo_size_callback);
    
	_wasgo_TreeItem_wrapper_set_custom_draw(wasgo_id, p_column, p_object._get_wasgo_id(), wasgo_buffer_callback, wasgo_size_callback);
}
void TreeItem::set_custom_minimum_height(int p_height){
	_wasgo_TreeItem_wrapper_set_custom_minimum_height(wasgo_id, p_height);
}
void TreeItem::set_disable_folding(bool p_disable){
	_wasgo_TreeItem_wrapper_set_disable_folding(wasgo_id, p_disable);
}
void TreeItem::set_editable(int p_column, bool p_enabled){
	_wasgo_TreeItem_wrapper_set_editable(wasgo_id, p_column, p_enabled);
}
void TreeItem::set_expand_right(int p_column, bool p_enable){
	_wasgo_TreeItem_wrapper_set_expand_right(wasgo_id, p_column, p_enable);
}
void TreeItem::set_icon(int p_column, Texture p_texture){
	_wasgo_TreeItem_wrapper_set_icon(wasgo_id, p_column, p_texture._get_wasgo_id());
}
void TreeItem::set_icon_max_width(int p_column, int p_width){
	_wasgo_TreeItem_wrapper_set_icon_max_width(wasgo_id, p_column, p_width);
}
void TreeItem::set_icon_modulate(int p_column, Color p_modulate){

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_TreeItem_wrapper_set_icon_modulate(wasgo_id, p_column, wasgo_buffer_modulate, wasgo_size_modulate);
}
void TreeItem::set_icon_region(int p_column, Rect2 p_region){

    Variant wasgo_var_region = p_region;
    uint8_t wasgo_buffer_region[20];
    int wasgo_size_region = 20;
    encode_variant(wasgo_var_region, wasgo_buffer_region, wasgo_size_region);
    
	_wasgo_TreeItem_wrapper_set_icon_region(wasgo_id, p_column, wasgo_buffer_region, wasgo_size_region);
}
void TreeItem::set_metadata(int p_column, Variant p_meta){
	_wasgo_TreeItem_wrapper_set_metadata(wasgo_id, p_column, p_meta._get_wasgo_id());
}
void TreeItem::set_range(int p_column, float p_value){
	_wasgo_TreeItem_wrapper_set_range(wasgo_id, p_column, p_value);
}
void TreeItem::set_range_config(int p_column, float p_min, float p_max, float p_step, bool p_expr){
	_wasgo_TreeItem_wrapper_set_range_config(wasgo_id, p_column, p_min, p_max, p_step, p_expr);
}
void TreeItem::set_selectable(int p_column, bool p_selectable){
	_wasgo_TreeItem_wrapper_set_selectable(wasgo_id, p_column, p_selectable);
}
void TreeItem::set_suffix(int p_column, String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_TreeItem_wrapper_set_suffix(wasgo_id, p_column, wasgo_buffer_text, wasgo_size_text);
}
void TreeItem::set_text(int p_column, String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_TreeItem_wrapper_set_text(wasgo_id, p_column, wasgo_buffer_text, wasgo_size_text);
}
void TreeItem::set_text_align(int p_column, TreeItem::TextAlign p_text_align){
	_wasgo_TreeItem_wrapper_set_text_align(wasgo_id, p_column, p_text_align._get_wasgo_id());
}
void TreeItem::set_tooltip(int p_column, String p_tooltip){

    Variant wasgo_var_tooltip = p_tooltip;
    int wasgo_size_tooltip = String(p_tooltip).size();
    uint8_t wasgo_buffer_tooltip[wasgo_size_tooltip];
    encode_variant(wasgo_var_tooltip, wasgo_buffer_tooltip, wasgo_size_tooltip);
    
	_wasgo_TreeItem_wrapper_set_tooltip(wasgo_id, p_column, wasgo_buffer_tooltip, wasgo_size_tooltip);
}

TreeItem::TreeItem(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
TreeItem::TreeItem(Object other) : Object(other._get_wasgo_id()){
}
TreeItem::TreeItem():Object(){
}
TreeItem TreeItem::new_instance(){
    return TreeItem(_wasgo_TreeItem_constructor());
}
WasGoID TreeItem::_get_wasgo_id(){
    return wasgo_id;
}
TreeItem::operator bool(){
    return (bool) wasgo_id;
}
