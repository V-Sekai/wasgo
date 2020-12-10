/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Tabs.h"
void Tabs::add_tab(String p_title, Texture p_icon){

    Variant wasgo_var_title = p_title;
    int wasgo_size_title = 10 + String(p_title).size();
    uint8_t wasgo_buffer_title[wasgo_size_title];
    encode_variant(wasgo_var_title, wasgo_buffer_title, wasgo_size_title);
    
	_wasgo_Tabs_wrapper_add_tab(wasgo_id, wasgo_buffer_title, wasgo_size_title, -69, p_icon._get_wasgo_id());
}
void Tabs::ensure_tab_visible(int p_idx){
	_wasgo_Tabs_wrapper_ensure_tab_visible(wasgo_id, p_idx);
}
int Tabs::get_current_tab(){
	return (int) _wasgo_Tabs_wrapper_get_current_tab(wasgo_id);
}
bool Tabs::get_drag_to_rearrange_enabled(){
	return (bool) _wasgo_Tabs_wrapper_get_drag_to_rearrange_enabled(wasgo_id);
}
bool Tabs::get_offset_buttons_visible(){
	return (bool) _wasgo_Tabs_wrapper_get_offset_buttons_visible(wasgo_id);
}
bool Tabs::get_scrolling_enabled(){
	return (bool) _wasgo_Tabs_wrapper_get_scrolling_enabled(wasgo_id);
}
bool Tabs::get_select_with_rmb(){
	return (bool) _wasgo_Tabs_wrapper_get_select_with_rmb(wasgo_id);
}
Tabs::TabAlign Tabs::get_tab_align(){
	return Tabs::TabAlign(_wasgo_Tabs_wrapper_get_tab_align(wasgo_id));
}
Tabs::CloseButtonDisplayPolicy Tabs::get_tab_close_display_policy(){
	return Tabs::CloseButtonDisplayPolicy(_wasgo_Tabs_wrapper_get_tab_close_display_policy(wasgo_id));
}
int Tabs::get_tab_count(){
	return (int) _wasgo_Tabs_wrapper_get_tab_count(wasgo_id);
}
bool Tabs::get_tab_disabled(int p_tab_idx){
	return (bool) _wasgo_Tabs_wrapper_get_tab_disabled(wasgo_id, p_tab_idx);
}
Texture Tabs::get_tab_icon(int p_tab_idx){
	return Texture(_wasgo_Tabs_wrapper_get_tab_icon(wasgo_id, p_tab_idx));
}
int Tabs::get_tab_offset(){
	return (int) _wasgo_Tabs_wrapper_get_tab_offset(wasgo_id);
}
Rect2 Tabs::get_tab_rect(int p_tab_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Tabs_wrapper_get_tab_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_tab_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String Tabs::get_tab_title(int p_tab_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Tabs_wrapper_get_tab_title(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_tab_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Tabs::get_tabs_rearrange_group(){
	return (int) _wasgo_Tabs_wrapper_get_tabs_rearrange_group(wasgo_id);
}
void Tabs::move_tab(int p_from, int p_to){
	_wasgo_Tabs_wrapper_move_tab(wasgo_id, p_from, p_to);
}
void Tabs::remove_tab(int p_tab_idx){
	_wasgo_Tabs_wrapper_remove_tab(wasgo_id, p_tab_idx);
}
void Tabs::set_current_tab(int p_tab_idx){
	_wasgo_Tabs_wrapper_set_current_tab(wasgo_id, p_tab_idx);
}
void Tabs::set_drag_to_rearrange_enabled(bool p_enabled){
	_wasgo_Tabs_wrapper_set_drag_to_rearrange_enabled(wasgo_id, p_enabled);
}
void Tabs::set_scrolling_enabled(bool p_enabled){
	_wasgo_Tabs_wrapper_set_scrolling_enabled(wasgo_id, p_enabled);
}
void Tabs::set_select_with_rmb(bool p_enabled){
	_wasgo_Tabs_wrapper_set_select_with_rmb(wasgo_id, p_enabled);
}
void Tabs::set_tab_align(Tabs::TabAlign p_align){
	_wasgo_Tabs_wrapper_set_tab_align(wasgo_id, p_align._get_wasgo_id());
}
void Tabs::set_tab_close_display_policy(Tabs::CloseButtonDisplayPolicy p_policy){
	_wasgo_Tabs_wrapper_set_tab_close_display_policy(wasgo_id, p_policy._get_wasgo_id());
}
void Tabs::set_tab_disabled(int p_tab_idx, bool p_disabled){
	_wasgo_Tabs_wrapper_set_tab_disabled(wasgo_id, p_tab_idx, p_disabled);
}
void Tabs::set_tab_icon(int p_tab_idx, Texture p_icon){
	_wasgo_Tabs_wrapper_set_tab_icon(wasgo_id, p_tab_idx, p_icon._get_wasgo_id());
}
void Tabs::set_tab_title(int p_tab_idx, String p_title){

    Variant wasgo_var_title = p_title;
    int wasgo_size_title = 10 + String(p_title).size();
    uint8_t wasgo_buffer_title[wasgo_size_title];
    encode_variant(wasgo_var_title, wasgo_buffer_title, wasgo_size_title);
    
	_wasgo_Tabs_wrapper_set_tab_title(wasgo_id, p_tab_idx, wasgo_buffer_title, wasgo_size_title, wasgo_size_title);
}
void Tabs::set_tabs_rearrange_group(int p_group_id){
	_wasgo_Tabs_wrapper_set_tabs_rearrange_group(wasgo_id, p_group_id);
}

Tabs::Tabs(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
Tabs::Tabs(Control other) : Control(other._get_wasgo_id()){
}
Tabs::Tabs():Control(){
}
Tabs Tabs::new_instance(){
    return Tabs(_wasgo_Tabs_constructor());
}
WasGoID Tabs::_get_wasgo_id(){
    return wasgo_id;
}
Tabs::operator bool(){
    return (bool) wasgo_id;
}
