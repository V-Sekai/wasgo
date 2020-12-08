/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ItemList.h"
void ItemList::add_icon_item(Texture p_icon, bool p_selectable){
	_wasgo_ItemList_wrapper_add_icon_item(wasgo_id, p_icon._get_wasgo_id(), p_selectable);
}
void ItemList::add_item(String p_text, Texture p_icon, bool p_selectable){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_ItemList_wrapper_add_item(wasgo_id, wasgo_buffer_text, wasgo_size_text, p_icon._get_wasgo_id(), p_selectable);
}
void ItemList::clear(){
	_wasgo_ItemList_wrapper_clear(wasgo_id);
}
void ItemList::ensure_current_is_visible(){
	_wasgo_ItemList_wrapper_ensure_current_is_visible(wasgo_id);
}
bool ItemList::get_allow_reselect(){
	return (bool) _wasgo_ItemList_wrapper_get_allow_reselect(wasgo_id);
}
bool ItemList::get_allow_rmb_select(){
	return (bool) _wasgo_ItemList_wrapper_get_allow_rmb_select(wasgo_id);
}
int ItemList::get_fixed_column_width(){
	return (int) _wasgo_ItemList_wrapper_get_fixed_column_width(wasgo_id);
}
Vector2 ItemList::get_fixed_icon_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_ItemList_wrapper_get_fixed_icon_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
ItemList::IconMode ItemList::get_icon_mode(){
	return ItemList::IconMode(_wasgo_ItemList_wrapper_get_icon_mode(wasgo_id));
}
float ItemList::get_icon_scale(){
	return (float) _wasgo_ItemList_wrapper_get_icon_scale(wasgo_id);
}
int ItemList::get_item_at_position(Vector2 p_position, bool p_exact){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return (int) _wasgo_ItemList_wrapper_get_item_at_position(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_exact);
}
int ItemList::get_item_count(){
	return (int) _wasgo_ItemList_wrapper_get_item_count(wasgo_id);
}
Color ItemList::get_item_custom_bg_color(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ItemList_wrapper_get_item_custom_bg_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color ItemList::get_item_custom_fg_color(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ItemList_wrapper_get_item_custom_fg_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Texture ItemList::get_item_icon(int p_idx){
	return Texture(_wasgo_ItemList_wrapper_get_item_icon(wasgo_id, p_idx));
}
Color ItemList::get_item_icon_modulate(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ItemList_wrapper_get_item_icon_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Rect2 ItemList::get_item_icon_region(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ItemList_wrapper_get_item_icon_region(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Variant ItemList::get_item_metadata(int p_idx){
	return Variant(_wasgo_ItemList_wrapper_get_item_metadata(wasgo_id, p_idx));
}
String ItemList::get_item_text(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ItemList_wrapper_get_item_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String ItemList::get_item_tooltip(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ItemList_wrapper_get_item_tooltip(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int ItemList::get_max_columns(){
	return (int) _wasgo_ItemList_wrapper_get_max_columns(wasgo_id);
}
int ItemList::get_max_text_lines(){
	return (int) _wasgo_ItemList_wrapper_get_max_text_lines(wasgo_id);
}
ItemList::SelectMode ItemList::get_select_mode(){
	return ItemList::SelectMode(_wasgo_ItemList_wrapper_get_select_mode(wasgo_id));
}
PoolIntArray ItemList::get_selected_items(){
	return PoolIntArray(_wasgo_ItemList_wrapper_get_selected_items(wasgo_id));
}
VScrollBar ItemList::get_v_scroll(){
	return VScrollBar(_wasgo_ItemList_wrapper_get_v_scroll(wasgo_id));
}
bool ItemList::has_auto_height(){
	return (bool) _wasgo_ItemList_wrapper_has_auto_height(wasgo_id);
}
bool ItemList::is_anything_selected(){
	return (bool) _wasgo_ItemList_wrapper_is_anything_selected(wasgo_id);
}
bool ItemList::is_item_disabled(int p_idx){
	return (bool) _wasgo_ItemList_wrapper_is_item_disabled(wasgo_id, p_idx);
}
bool ItemList::is_item_icon_transposed(int p_idx){
	return (bool) _wasgo_ItemList_wrapper_is_item_icon_transposed(wasgo_id, p_idx);
}
bool ItemList::is_item_selectable(int p_idx){
	return (bool) _wasgo_ItemList_wrapper_is_item_selectable(wasgo_id, p_idx);
}
bool ItemList::is_item_tooltip_enabled(int p_idx){
	return (bool) _wasgo_ItemList_wrapper_is_item_tooltip_enabled(wasgo_id, p_idx);
}
bool ItemList::is_same_column_width(){
	return (bool) _wasgo_ItemList_wrapper_is_same_column_width(wasgo_id);
}
bool ItemList::is_selected(int p_idx){
	return (bool) _wasgo_ItemList_wrapper_is_selected(wasgo_id, p_idx);
}
void ItemList::move_item(int p_from_idx, int p_to_idx){
	_wasgo_ItemList_wrapper_move_item(wasgo_id, p_from_idx, p_to_idx);
}
void ItemList::remove_item(int p_idx){
	_wasgo_ItemList_wrapper_remove_item(wasgo_id, p_idx);
}
void ItemList::select(int p_idx, bool p_single){
	_wasgo_ItemList_wrapper_select(wasgo_id, p_idx, p_single);
}
void ItemList::set_allow_reselect(bool p_allow){
	_wasgo_ItemList_wrapper_set_allow_reselect(wasgo_id, p_allow);
}
void ItemList::set_allow_rmb_select(bool p_allow){
	_wasgo_ItemList_wrapper_set_allow_rmb_select(wasgo_id, p_allow);
}
void ItemList::set_auto_height(bool p_enable){
	_wasgo_ItemList_wrapper_set_auto_height(wasgo_id, p_enable);
}
void ItemList::set_fixed_column_width(int p_width){
	_wasgo_ItemList_wrapper_set_fixed_column_width(wasgo_id, p_width);
}
void ItemList::set_fixed_icon_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_ItemList_wrapper_set_fixed_icon_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void ItemList::set_icon_mode(ItemList::IconMode p_mode){
	_wasgo_ItemList_wrapper_set_icon_mode(wasgo_id, p_mode._get_wasgo_id());
}
void ItemList::set_icon_scale(float p_scale){
	_wasgo_ItemList_wrapper_set_icon_scale(wasgo_id, p_scale);
}
void ItemList::set_item_custom_bg_color(int p_idx, Color p_custom_bg_color){

    Variant wasgo_var_custom_bg_color = p_custom_bg_color;
    uint8_t wasgo_buffer_custom_bg_color[20];
    int wasgo_size_custom_bg_color = 20;
    encode_variant(wasgo_var_custom_bg_color, wasgo_buffer_custom_bg_color, wasgo_size_custom_bg_color);
    
	_wasgo_ItemList_wrapper_set_item_custom_bg_color(wasgo_id, p_idx, wasgo_buffer_custom_bg_color, wasgo_size_custom_bg_color);
}
void ItemList::set_item_custom_fg_color(int p_idx, Color p_custom_fg_color){

    Variant wasgo_var_custom_fg_color = p_custom_fg_color;
    uint8_t wasgo_buffer_custom_fg_color[20];
    int wasgo_size_custom_fg_color = 20;
    encode_variant(wasgo_var_custom_fg_color, wasgo_buffer_custom_fg_color, wasgo_size_custom_fg_color);
    
	_wasgo_ItemList_wrapper_set_item_custom_fg_color(wasgo_id, p_idx, wasgo_buffer_custom_fg_color, wasgo_size_custom_fg_color);
}
void ItemList::set_item_disabled(int p_idx, bool p_disabled){
	_wasgo_ItemList_wrapper_set_item_disabled(wasgo_id, p_idx, p_disabled);
}
void ItemList::set_item_icon(int p_idx, Texture p_icon){
	_wasgo_ItemList_wrapper_set_item_icon(wasgo_id, p_idx, p_icon._get_wasgo_id());
}
void ItemList::set_item_icon_modulate(int p_idx, Color p_modulate){

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_ItemList_wrapper_set_item_icon_modulate(wasgo_id, p_idx, wasgo_buffer_modulate, wasgo_size_modulate);
}
void ItemList::set_item_icon_region(int p_idx, Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_ItemList_wrapper_set_item_icon_region(wasgo_id, p_idx, wasgo_buffer_rect, wasgo_size_rect);
}
void ItemList::set_item_icon_transposed(int p_idx, bool p_transposed){
	_wasgo_ItemList_wrapper_set_item_icon_transposed(wasgo_id, p_idx, p_transposed);
}
void ItemList::set_item_metadata(int p_idx, Variant p_metadata){
	_wasgo_ItemList_wrapper_set_item_metadata(wasgo_id, p_idx, p_metadata._get_wasgo_id());
}
void ItemList::set_item_selectable(int p_idx, bool p_selectable){
	_wasgo_ItemList_wrapper_set_item_selectable(wasgo_id, p_idx, p_selectable);
}
void ItemList::set_item_text(int p_idx, String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_ItemList_wrapper_set_item_text(wasgo_id, p_idx, wasgo_buffer_text, wasgo_size_text);
}
void ItemList::set_item_tooltip(int p_idx, String p_tooltip){

    Variant wasgo_var_tooltip = p_tooltip;
    int wasgo_size_tooltip = String(p_tooltip).size();
    uint8_t wasgo_buffer_tooltip[wasgo_size_tooltip];
    encode_variant(wasgo_var_tooltip, wasgo_buffer_tooltip, wasgo_size_tooltip);
    
	_wasgo_ItemList_wrapper_set_item_tooltip(wasgo_id, p_idx, wasgo_buffer_tooltip, wasgo_size_tooltip);
}
void ItemList::set_item_tooltip_enabled(int p_idx, bool p_enable){
	_wasgo_ItemList_wrapper_set_item_tooltip_enabled(wasgo_id, p_idx, p_enable);
}
void ItemList::set_max_columns(int p_amount){
	_wasgo_ItemList_wrapper_set_max_columns(wasgo_id, p_amount);
}
void ItemList::set_max_text_lines(int p_lines){
	_wasgo_ItemList_wrapper_set_max_text_lines(wasgo_id, p_lines);
}
void ItemList::set_same_column_width(bool p_enable){
	_wasgo_ItemList_wrapper_set_same_column_width(wasgo_id, p_enable);
}
void ItemList::set_select_mode(ItemList::SelectMode p_mode){
	_wasgo_ItemList_wrapper_set_select_mode(wasgo_id, p_mode._get_wasgo_id());
}
void ItemList::sort_items_by_text(){
	_wasgo_ItemList_wrapper_sort_items_by_text(wasgo_id);
}
void ItemList::unselect(int p_idx){
	_wasgo_ItemList_wrapper_unselect(wasgo_id, p_idx);
}
void ItemList::unselect_all(){
	_wasgo_ItemList_wrapper_unselect_all(wasgo_id);
}

ItemList::ItemList(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
ItemList::ItemList(Control other) : Control(other._get_wasgo_id()){
}
ItemList::ItemList():Control(){
}
ItemList ItemList::new_instance(){
    return ItemList(_wasgo_ItemList_constructor());
}
WasGoID ItemList::_get_wasgo_id(){
    return wasgo_id;
}
ItemList::operator bool(){
    return (bool) wasgo_id;
}
