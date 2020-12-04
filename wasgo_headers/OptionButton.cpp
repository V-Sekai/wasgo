/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "OptionButton.h"
void OptionButton::add_icon_item(Texture p_texture, String p_label, int p_id = (int) -1){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_OptionButton_wrapper_add_icon_item(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_label, wasgo_size_label, p_id);
}
void OptionButton::add_item(String p_label, int p_id = (int) -1){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_OptionButton_wrapper_add_item(wasgo_id, wasgo_buffer_label, wasgo_size_label, p_id);
}
void OptionButton::add_separator(){
	_wasgo_OptionButton_wrapper_add_separator(wasgo_id);
}
void OptionButton::clear(){
	_wasgo_OptionButton_wrapper_clear(wasgo_id);
}
int OptionButton::get_item_count(){
	return (int) _wasgo_OptionButton_wrapper_get_item_count(wasgo_id);
}
Texture OptionButton::get_item_icon(int p_idx){
	return Texture(_wasgo_OptionButton_wrapper_get_item_icon(wasgo_id, p_idx));
}
int OptionButton::get_item_id(int p_idx){
	return (int) _wasgo_OptionButton_wrapper_get_item_id(wasgo_id, p_idx);
}
int OptionButton::get_item_index(int p_id){
	return (int) _wasgo_OptionButton_wrapper_get_item_index(wasgo_id, p_id);
}
Variant OptionButton::get_item_metadata(int p_idx){
	return Variant(_wasgo_OptionButton_wrapper_get_item_metadata(wasgo_id, p_idx));
}
String OptionButton::get_item_text(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_OptionButton_wrapper_get_item_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
PopupMenu OptionButton::get_popup(){
	return PopupMenu(_wasgo_OptionButton_wrapper_get_popup(wasgo_id));
}
int OptionButton::get_selected(){
	return (int) _wasgo_OptionButton_wrapper_get_selected(wasgo_id);
}
int OptionButton::get_selected_id(){
	return (int) _wasgo_OptionButton_wrapper_get_selected_id(wasgo_id);
}
Variant OptionButton::get_selected_metadata(){
	return Variant(_wasgo_OptionButton_wrapper_get_selected_metadata(wasgo_id));
}
bool OptionButton::is_item_disabled(int p_idx){
	return (bool) _wasgo_OptionButton_wrapper_is_item_disabled(wasgo_id, p_idx);
}
void OptionButton::remove_item(int p_idx){
	_wasgo_OptionButton_wrapper_remove_item(wasgo_id, p_idx);
}
void OptionButton::select(int p_idx){
	_wasgo_OptionButton_wrapper_select(wasgo_id, p_idx);
}
void OptionButton::set_item_disabled(int p_idx, bool p_disabled){
	_wasgo_OptionButton_wrapper_set_item_disabled(wasgo_id, p_idx, p_disabled);
}
void OptionButton::set_item_icon(int p_idx, Texture p_texture){
	_wasgo_OptionButton_wrapper_set_item_icon(wasgo_id, p_idx, p_texture._get_wasgo_id());
}
void OptionButton::set_item_id(int p_idx, int p_id){
	_wasgo_OptionButton_wrapper_set_item_id(wasgo_id, p_idx, p_id);
}
void OptionButton::set_item_metadata(int p_idx, Variant p_metadata){
	_wasgo_OptionButton_wrapper_set_item_metadata(wasgo_id, p_idx, p_metadata._get_wasgo_id());
}
void OptionButton::set_item_text(int p_idx, String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_OptionButton_wrapper_set_item_text(wasgo_id, p_idx, wasgo_buffer_text, wasgo_size_text);
}

OptionButton::OptionButton(WasGoID p_wasgo_id) : Button(p_wasgo_id){
}
OptionButton::OptionButton(Button other) : Button(other._get_wasgo_id()){
    wasgo_id = _wasgo_OptionButton_constructor();
}
OptionButton::new_instance(){
    return OptionButton(_wasgo_OptionButton_constructor());
}