/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TabContainer.h"
bool TabContainer::are_tabs_visible(){
	return (bool) _wasgo_TabContainer_wrapper_are_tabs_visible(wasgo_id);
}
int TabContainer::get_current_tab(){
	return (int) _wasgo_TabContainer_wrapper_get_current_tab(wasgo_id);
}
Control TabContainer::get_current_tab_control(){
	return Control(_wasgo_TabContainer_wrapper_get_current_tab_control(wasgo_id));
}
bool TabContainer::get_drag_to_rearrange_enabled(){
	return (bool) _wasgo_TabContainer_wrapper_get_drag_to_rearrange_enabled(wasgo_id);
}
Popup TabContainer::get_popup(){
	return Popup(_wasgo_TabContainer_wrapper_get_popup(wasgo_id));
}
int TabContainer::get_previous_tab(){
	return (int) _wasgo_TabContainer_wrapper_get_previous_tab(wasgo_id);
}
TabContainer::TabAlign TabContainer::get_tab_align(){
	return TabContainer::TabAlign(_wasgo_TabContainer_wrapper_get_tab_align(wasgo_id));
}
Control TabContainer::get_tab_control(int p_tab_idx){
	return Control(_wasgo_TabContainer_wrapper_get_tab_control(wasgo_id, p_tab_idx));
}
int TabContainer::get_tab_count(){
	return (int) _wasgo_TabContainer_wrapper_get_tab_count(wasgo_id);
}
bool TabContainer::get_tab_disabled(int p_tab_idx){
	return (bool) _wasgo_TabContainer_wrapper_get_tab_disabled(wasgo_id, p_tab_idx);
}
Texture TabContainer::get_tab_icon(int p_tab_idx){
	return Texture(_wasgo_TabContainer_wrapper_get_tab_icon(wasgo_id, p_tab_idx));
}
String TabContainer::get_tab_title(int p_tab_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TabContainer_wrapper_get_tab_title(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_tab_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int TabContainer::get_tabs_rearrange_group(){
	return (int) _wasgo_TabContainer_wrapper_get_tabs_rearrange_group(wasgo_id);
}
bool TabContainer::get_use_hidden_tabs_for_min_size(){
	return (bool) _wasgo_TabContainer_wrapper_get_use_hidden_tabs_for_min_size(wasgo_id);
}
void TabContainer::set_current_tab(int p_tab_idx){
	_wasgo_TabContainer_wrapper_set_current_tab(wasgo_id, p_tab_idx);
}
void TabContainer::set_drag_to_rearrange_enabled(bool p_enabled){
	_wasgo_TabContainer_wrapper_set_drag_to_rearrange_enabled(wasgo_id, p_enabled);
}
void TabContainer::set_popup(Node p_popup){
	_wasgo_TabContainer_wrapper_set_popup(wasgo_id, p_popup._get_wasgo_id());
}
void TabContainer::set_tab_align(TabContainer::TabAlign p_align){
	_wasgo_TabContainer_wrapper_set_tab_align(wasgo_id, p_align._get_wasgo_id());
}
void TabContainer::set_tab_disabled(int p_tab_idx, bool p_disabled){
	_wasgo_TabContainer_wrapper_set_tab_disabled(wasgo_id, p_tab_idx, p_disabled);
}
void TabContainer::set_tab_icon(int p_tab_idx, Texture p_icon){
	_wasgo_TabContainer_wrapper_set_tab_icon(wasgo_id, p_tab_idx, p_icon._get_wasgo_id());
}
void TabContainer::set_tab_title(int p_tab_idx, String p_title){

    Variant wasgo_var_title = p_title;
    uint8_t wasgo_buffer_title[256];
    int wasgo_size_title = 256;
    encode_variant(wasgo_var_title, wasgo_buffer_title, wasgo_size_title);
    
	_wasgo_TabContainer_wrapper_set_tab_title(wasgo_id, p_tab_idx, wasgo_buffer_title, wasgo_size_title);
}
void TabContainer::set_tabs_rearrange_group(int p_group_id){
	_wasgo_TabContainer_wrapper_set_tabs_rearrange_group(wasgo_id, p_group_id);
}
void TabContainer::set_tabs_visible(bool p_visible){
	_wasgo_TabContainer_wrapper_set_tabs_visible(wasgo_id, p_visible);
}
void TabContainer::set_use_hidden_tabs_for_min_size(bool p_enabled){
	_wasgo_TabContainer_wrapper_set_use_hidden_tabs_for_min_size(wasgo_id, p_enabled);
}

TabContainer::TabContainer(WasGoId p_wasgo_id) : Container(p_wasgo_id){
}
TabContainer::TabContainer(){
    wasgo_id = _wasgo_TabContainer_constructor();
}
TabContainer::~TabContainer(){
    _wasgo_TabContainer_destructor(wasgo_id);
}