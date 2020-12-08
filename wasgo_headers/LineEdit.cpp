/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "LineEdit.h"
void LineEdit::append_at_cursor(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_LineEdit_wrapper_append_at_cursor(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void LineEdit::clear(){
	_wasgo_LineEdit_wrapper_clear(wasgo_id);
}
bool LineEdit::cursor_get_blink_enabled(){
	return (bool) _wasgo_LineEdit_wrapper_cursor_get_blink_enabled(wasgo_id);
}
float LineEdit::cursor_get_blink_speed(){
	return (float) _wasgo_LineEdit_wrapper_cursor_get_blink_speed(wasgo_id);
}
void LineEdit::cursor_set_blink_enabled(bool p_enabled){
	_wasgo_LineEdit_wrapper_cursor_set_blink_enabled(wasgo_id, p_enabled);
}
void LineEdit::cursor_set_blink_speed(float p_blink_speed){
	_wasgo_LineEdit_wrapper_cursor_set_blink_speed(wasgo_id, p_blink_speed);
}
void LineEdit::delete_char_at_cursor(){
	_wasgo_LineEdit_wrapper_delete_char_at_cursor(wasgo_id);
}
void LineEdit::delete_text(int p_from_column, int p_to_column){
	_wasgo_LineEdit_wrapper_delete_text(wasgo_id, p_from_column, p_to_column);
}
void LineEdit::deselect(){
	_wasgo_LineEdit_wrapper_deselect(wasgo_id);
}
LineEdit::Align LineEdit::get_align(){
	return LineEdit::Align(_wasgo_LineEdit_wrapper_get_align(wasgo_id));
}
int LineEdit::get_cursor_position(){
	return (int) _wasgo_LineEdit_wrapper_get_cursor_position(wasgo_id);
}
bool LineEdit::get_expand_to_text_length(){
	return (bool) _wasgo_LineEdit_wrapper_get_expand_to_text_length(wasgo_id);
}
int LineEdit::get_max_length(){
	return (int) _wasgo_LineEdit_wrapper_get_max_length(wasgo_id);
}
PopupMenu LineEdit::get_menu(){
	return PopupMenu(_wasgo_LineEdit_wrapper_get_menu(wasgo_id));
}
String LineEdit::get_placeholder(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_LineEdit_wrapper_get_placeholder(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float LineEdit::get_placeholder_alpha(){
	return (float) _wasgo_LineEdit_wrapper_get_placeholder_alpha(wasgo_id);
}
Texture LineEdit::get_right_icon(){
	return Texture(_wasgo_LineEdit_wrapper_get_right_icon(wasgo_id));
}
int LineEdit::get_scroll_offset(){
	return (int) _wasgo_LineEdit_wrapper_get_scroll_offset(wasgo_id);
}
String LineEdit::get_secret_character(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_LineEdit_wrapper_get_secret_character(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String LineEdit::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_LineEdit_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool LineEdit::is_clear_button_enabled(){
	return (bool) _wasgo_LineEdit_wrapper_is_clear_button_enabled(wasgo_id);
}
bool LineEdit::is_context_menu_enabled(){
	return (bool) _wasgo_LineEdit_wrapper_is_context_menu_enabled(wasgo_id);
}
bool LineEdit::is_editable(){
	return (bool) _wasgo_LineEdit_wrapper_is_editable(wasgo_id);
}
bool LineEdit::is_secret(){
	return (bool) _wasgo_LineEdit_wrapper_is_secret(wasgo_id);
}
bool LineEdit::is_selecting_enabled(){
	return (bool) _wasgo_LineEdit_wrapper_is_selecting_enabled(wasgo_id);
}
bool LineEdit::is_shortcut_keys_enabled(){
	return (bool) _wasgo_LineEdit_wrapper_is_shortcut_keys_enabled(wasgo_id);
}
bool LineEdit::is_virtual_keyboard_enabled(){
	return (bool) _wasgo_LineEdit_wrapper_is_virtual_keyboard_enabled(wasgo_id);
}
void LineEdit::menu_option(int p_option){
	_wasgo_LineEdit_wrapper_menu_option(wasgo_id, p_option);
}
void LineEdit::select(int p_from, int p_to){
	_wasgo_LineEdit_wrapper_select(wasgo_id, p_from, p_to);
}
void LineEdit::select_all(){
	_wasgo_LineEdit_wrapper_select_all(wasgo_id);
}
void LineEdit::set_align(LineEdit::Align p_align){
	_wasgo_LineEdit_wrapper_set_align(wasgo_id, p_align._get_wasgo_id());
}
void LineEdit::set_clear_button_enabled(bool p_enable){
	_wasgo_LineEdit_wrapper_set_clear_button_enabled(wasgo_id, p_enable);
}
void LineEdit::set_context_menu_enabled(bool p_enable){
	_wasgo_LineEdit_wrapper_set_context_menu_enabled(wasgo_id, p_enable);
}
void LineEdit::set_cursor_position(int p_position){
	_wasgo_LineEdit_wrapper_set_cursor_position(wasgo_id, p_position);
}
void LineEdit::set_editable(bool p_enabled){
	_wasgo_LineEdit_wrapper_set_editable(wasgo_id, p_enabled);
}
void LineEdit::set_expand_to_text_length(bool p_enabled){
	_wasgo_LineEdit_wrapper_set_expand_to_text_length(wasgo_id, p_enabled);
}
void LineEdit::set_max_length(int p_chars){
	_wasgo_LineEdit_wrapper_set_max_length(wasgo_id, p_chars);
}
void LineEdit::set_placeholder(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_LineEdit_wrapper_set_placeholder(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void LineEdit::set_placeholder_alpha(float p_alpha){
	_wasgo_LineEdit_wrapper_set_placeholder_alpha(wasgo_id, p_alpha);
}
void LineEdit::set_right_icon(Texture p_icon){
	_wasgo_LineEdit_wrapper_set_right_icon(wasgo_id, p_icon._get_wasgo_id());
}
void LineEdit::set_secret(bool p_enabled){
	_wasgo_LineEdit_wrapper_set_secret(wasgo_id, p_enabled);
}
void LineEdit::set_secret_character(String p_character){

    Variant wasgo_var_character = p_character;
    int wasgo_size_character = String(p_character).size();
    uint8_t wasgo_buffer_character[wasgo_size_character];
    encode_variant(wasgo_var_character, wasgo_buffer_character, wasgo_size_character);
    
	_wasgo_LineEdit_wrapper_set_secret_character(wasgo_id, wasgo_buffer_character, wasgo_size_character);
}
void LineEdit::set_selecting_enabled(bool p_enable){
	_wasgo_LineEdit_wrapper_set_selecting_enabled(wasgo_id, p_enable);
}
void LineEdit::set_shortcut_keys_enabled(bool p_enable){
	_wasgo_LineEdit_wrapper_set_shortcut_keys_enabled(wasgo_id, p_enable);
}
void LineEdit::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_LineEdit_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void LineEdit::set_virtual_keyboard_enabled(bool p_enable){
	_wasgo_LineEdit_wrapper_set_virtual_keyboard_enabled(wasgo_id, p_enable);
}

LineEdit::LineEdit(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
LineEdit::LineEdit(Control other) : Control(other._get_wasgo_id()){
}
LineEdit::LineEdit():Control(){
}
LineEdit LineEdit::new_instance(){
    return LineEdit(_wasgo_LineEdit_constructor());
}
WasGoID LineEdit::_get_wasgo_id(){
    return wasgo_id;
}
LineEdit::operator bool(){
    return (bool) wasgo_id;
}
