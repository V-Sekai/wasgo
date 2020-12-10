/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Tree.h"
bool Tree::are_column_titles_visible(){
	return (bool) _wasgo_Tree_wrapper_are_column_titles_visible(wasgo_id);
}
void Tree::clear(){
	_wasgo_Tree_wrapper_clear(wasgo_id);
}
TreeItem Tree::create_item(Object p_parent, int p_idx){
	return TreeItem(_wasgo_Tree_wrapper_create_item(wasgo_id, p_parent._get_wasgo_id(), p_idx));
}
void Tree::ensure_cursor_is_visible(){
	_wasgo_Tree_wrapper_ensure_cursor_is_visible(wasgo_id);
}
bool Tree::get_allow_reselect(){
	return (bool) _wasgo_Tree_wrapper_get_allow_reselect(wasgo_id);
}
bool Tree::get_allow_rmb_select(){
	return (bool) _wasgo_Tree_wrapper_get_allow_rmb_select(wasgo_id);
}
int Tree::get_column_at_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return (int) _wasgo_Tree_wrapper_get_column_at_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
String Tree::get_column_title(int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Tree_wrapper_get_column_title(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Tree::get_column_width(int p_column){
	return (int) _wasgo_Tree_wrapper_get_column_width(wasgo_id, p_column);
}
int Tree::get_columns(){
	return (int) _wasgo_Tree_wrapper_get_columns(wasgo_id);
}
Rect2 Tree::get_custom_popup_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Tree_wrapper_get_custom_popup_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Tree::get_drop_mode_flags(){
	return (int) _wasgo_Tree_wrapper_get_drop_mode_flags(wasgo_id);
}
int Tree::get_drop_section_at_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return (int) _wasgo_Tree_wrapper_get_drop_section_at_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
TreeItem Tree::get_edited(){
	return TreeItem(_wasgo_Tree_wrapper_get_edited(wasgo_id));
}
int Tree::get_edited_column(){
	return (int) _wasgo_Tree_wrapper_get_edited_column(wasgo_id);
}
Rect2 Tree::get_item_area_rect(Object p_item, int p_column){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Tree_wrapper_get_item_area_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_item._get_wasgo_id(), p_column);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
TreeItem Tree::get_item_at_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return TreeItem(_wasgo_Tree_wrapper_get_item_at_position(wasgo_id, wasgo_buffer_position, wasgo_size_position));
}
TreeItem Tree::get_next_selected(Object p_from){
	return TreeItem(_wasgo_Tree_wrapper_get_next_selected(wasgo_id, p_from._get_wasgo_id()));
}
int Tree::get_pressed_button(){
	return (int) _wasgo_Tree_wrapper_get_pressed_button(wasgo_id);
}
TreeItem Tree::get_root(){
	return TreeItem(_wasgo_Tree_wrapper_get_root(wasgo_id));
}
Vector2 Tree::get_scroll(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Tree_wrapper_get_scroll(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Tree::SelectMode Tree::get_select_mode(){
	return Tree::SelectMode(_wasgo_Tree_wrapper_get_select_mode(wasgo_id));
}
TreeItem Tree::get_selected(){
	return TreeItem(_wasgo_Tree_wrapper_get_selected(wasgo_id));
}
int Tree::get_selected_column(){
	return (int) _wasgo_Tree_wrapper_get_selected_column(wasgo_id);
}
bool Tree::is_folding_hidden(){
	return (bool) _wasgo_Tree_wrapper_is_folding_hidden(wasgo_id);
}
bool Tree::is_root_hidden(){
	return (bool) _wasgo_Tree_wrapper_is_root_hidden(wasgo_id);
}
void Tree::set_allow_reselect(bool p_allow){
	_wasgo_Tree_wrapper_set_allow_reselect(wasgo_id, p_allow);
}
void Tree::set_allow_rmb_select(bool p_allow){
	_wasgo_Tree_wrapper_set_allow_rmb_select(wasgo_id, p_allow);
}
void Tree::set_column_expand(int p_column, bool p_expand){
	_wasgo_Tree_wrapper_set_column_expand(wasgo_id, p_column, p_expand);
}
void Tree::set_column_min_width(int p_column, int p_min_width){
	_wasgo_Tree_wrapper_set_column_min_width(wasgo_id, p_column, p_min_width);
}
void Tree::set_column_title(int p_column, String p_title){

    Variant wasgo_var_title = p_title;
    int wasgo_size_title = 10 + String(p_title).size();
    uint8_t wasgo_buffer_title[wasgo_size_title];
    encode_variant(wasgo_var_title, wasgo_buffer_title, wasgo_size_title);
    
	_wasgo_Tree_wrapper_set_column_title(wasgo_id, p_column, wasgo_buffer_title, wasgo_size_title, wasgo_size_title);
}
void Tree::set_column_titles_visible(bool p_visible){
	_wasgo_Tree_wrapper_set_column_titles_visible(wasgo_id, p_visible);
}
void Tree::set_columns(int p_amount){
	_wasgo_Tree_wrapper_set_columns(wasgo_id, p_amount);
}
void Tree::set_drop_mode_flags(int p_flags){
	_wasgo_Tree_wrapper_set_drop_mode_flags(wasgo_id, p_flags);
}
void Tree::set_hide_folding(bool p_hide){
	_wasgo_Tree_wrapper_set_hide_folding(wasgo_id, p_hide);
}
void Tree::set_hide_root(bool p_enable){
	_wasgo_Tree_wrapper_set_hide_root(wasgo_id, p_enable);
}
void Tree::set_select_mode(Tree::SelectMode p_mode){
	_wasgo_Tree_wrapper_set_select_mode(wasgo_id, p_mode._get_wasgo_id());
}

Tree::Tree(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
Tree::Tree(Control other) : Control(other._get_wasgo_id()){
}
Tree::Tree():Control(){
}
Tree Tree::new_instance(){
    return Tree(_wasgo_Tree_constructor());
}
WasGoID Tree::_get_wasgo_id(){
    return wasgo_id;
}
Tree::operator bool(){
    return (bool) wasgo_id;
}
