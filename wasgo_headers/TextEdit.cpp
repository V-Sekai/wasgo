/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextEdit.h"
void TextEdit::add_color_region(String p_begin_key, String p_end_key, Color p_color, bool p_line_only = (bool) false){

    Variant wasgo_var_begin_key = p_begin_key;
    int wasgo_size_begin_key = String(p_begin_key).size();
    uint8_t wasgo_buffer_begin_key[wasgo_size_begin_key];
    encode_variant(wasgo_var_begin_key, wasgo_buffer_begin_key, wasgo_size_begin_key);
    

    Variant wasgo_var_end_key = p_end_key;
    int wasgo_size_end_key = String(p_end_key).size();
    uint8_t wasgo_buffer_end_key[wasgo_size_end_key];
    encode_variant(wasgo_var_end_key, wasgo_buffer_end_key, wasgo_size_end_key);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_TextEdit_wrapper_add_color_region(wasgo_id, wasgo_buffer_begin_key, wasgo_size_begin_key, wasgo_buffer_end_key, wasgo_size_end_key, wasgo_buffer_color, wasgo_size_color, p_line_only);
}
void TextEdit::add_keyword_color(String p_keyword, Color p_color){

    Variant wasgo_var_keyword = p_keyword;
    int wasgo_size_keyword = String(p_keyword).size();
    uint8_t wasgo_buffer_keyword[wasgo_size_keyword];
    encode_variant(wasgo_var_keyword, wasgo_buffer_keyword, wasgo_size_keyword);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_TextEdit_wrapper_add_keyword_color(wasgo_id, wasgo_buffer_keyword, wasgo_size_keyword, wasgo_buffer_color, wasgo_size_color);
}
bool TextEdit::can_fold(int p_line){
	return (bool) _wasgo_TextEdit_wrapper_can_fold(wasgo_id, p_line);
}
void TextEdit::center_viewport_to_cursor(){
	_wasgo_TextEdit_wrapper_center_viewport_to_cursor(wasgo_id);
}
void TextEdit::clear_colors(){
	_wasgo_TextEdit_wrapper_clear_colors(wasgo_id);
}
void TextEdit::clear_undo_history(){
	_wasgo_TextEdit_wrapper_clear_undo_history(wasgo_id);
}
void TextEdit::copy(){
	_wasgo_TextEdit_wrapper_copy(wasgo_id);
}
bool TextEdit::cursor_get_blink_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_cursor_get_blink_enabled(wasgo_id);
}
float TextEdit::cursor_get_blink_speed(){
	return (float) _wasgo_TextEdit_wrapper_cursor_get_blink_speed(wasgo_id);
}
int TextEdit::cursor_get_column(){
	return (int) _wasgo_TextEdit_wrapper_cursor_get_column(wasgo_id);
}
int TextEdit::cursor_get_line(){
	return (int) _wasgo_TextEdit_wrapper_cursor_get_line(wasgo_id);
}
bool TextEdit::cursor_is_block_mode(){
	return (bool) _wasgo_TextEdit_wrapper_cursor_is_block_mode(wasgo_id);
}
void TextEdit::cursor_set_blink_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_cursor_set_blink_enabled(wasgo_id, p_enable);
}
void TextEdit::cursor_set_blink_speed(float p_blink_speed){
	_wasgo_TextEdit_wrapper_cursor_set_blink_speed(wasgo_id, p_blink_speed);
}
void TextEdit::cursor_set_block_mode(bool p_enable){
	_wasgo_TextEdit_wrapper_cursor_set_block_mode(wasgo_id, p_enable);
}
void TextEdit::cursor_set_column(int p_column, bool p_adjust_viewport = (bool) true){
	_wasgo_TextEdit_wrapper_cursor_set_column(wasgo_id, p_column, p_adjust_viewport);
}
void TextEdit::cursor_set_line(int p_line, bool p_adjust_viewport = (bool) true, bool p_can_be_hidden = (bool) true, int p_wrap_index = (int) 0){
	_wasgo_TextEdit_wrapper_cursor_set_line(wasgo_id, p_line, p_adjust_viewport, p_can_be_hidden, p_wrap_index);
}
void TextEdit::cut(){
	_wasgo_TextEdit_wrapper_cut(wasgo_id);
}
void TextEdit::deselect(){
	_wasgo_TextEdit_wrapper_deselect(wasgo_id);
}
void TextEdit::draw_minimap(bool p_draw){
	_wasgo_TextEdit_wrapper_draw_minimap(wasgo_id, p_draw);
}
void TextEdit::fold_all_lines(){
	_wasgo_TextEdit_wrapper_fold_all_lines(wasgo_id);
}
void TextEdit::fold_line(int p_line){
	_wasgo_TextEdit_wrapper_fold_line(wasgo_id, p_line);
}
Array TextEdit::get_breakpoints(){
	return Array(_wasgo_TextEdit_wrapper_get_breakpoints(wasgo_id));
}
int TextEdit::get_h_scroll(){
	return (int) _wasgo_TextEdit_wrapper_get_h_scroll(wasgo_id);
}
Color TextEdit::get_keyword_color(String p_keyword){

    Variant wasgo_var_keyword = p_keyword;
    int wasgo_size_keyword = String(p_keyword).size();
    uint8_t wasgo_buffer_keyword[wasgo_size_keyword];
    encode_variant(wasgo_var_keyword, wasgo_buffer_keyword, wasgo_size_keyword);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TextEdit_wrapper_get_keyword_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_keyword, wasgo_size_keyword);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
String TextEdit::get_line(int p_line){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TextEdit_wrapper_get_line(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_line);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int TextEdit::get_line_count(){
	return (int) _wasgo_TextEdit_wrapper_get_line_count(wasgo_id);
}
PopupMenu TextEdit::get_menu(){
	return PopupMenu(_wasgo_TextEdit_wrapper_get_menu(wasgo_id));
}
int TextEdit::get_minimap_width(){
	return (int) _wasgo_TextEdit_wrapper_get_minimap_width(wasgo_id);
}
int TextEdit::get_selection_from_column(){
	return (int) _wasgo_TextEdit_wrapper_get_selection_from_column(wasgo_id);
}
int TextEdit::get_selection_from_line(){
	return (int) _wasgo_TextEdit_wrapper_get_selection_from_line(wasgo_id);
}
String TextEdit::get_selection_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TextEdit_wrapper_get_selection_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int TextEdit::get_selection_to_column(){
	return (int) _wasgo_TextEdit_wrapper_get_selection_to_column(wasgo_id);
}
int TextEdit::get_selection_to_line(){
	return (int) _wasgo_TextEdit_wrapper_get_selection_to_line(wasgo_id);
}
String TextEdit::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TextEdit_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float TextEdit::get_v_scroll(){
	return (float) _wasgo_TextEdit_wrapper_get_v_scroll(wasgo_id);
}
float TextEdit::get_v_scroll_speed(){
	return (float) _wasgo_TextEdit_wrapper_get_v_scroll_speed(wasgo_id);
}
String TextEdit::get_word_under_cursor(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TextEdit_wrapper_get_word_under_cursor(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool TextEdit::has_keyword_color(String p_keyword){

    Variant wasgo_var_keyword = p_keyword;
    int wasgo_size_keyword = String(p_keyword).size();
    uint8_t wasgo_buffer_keyword[wasgo_size_keyword];
    encode_variant(wasgo_var_keyword, wasgo_buffer_keyword, wasgo_size_keyword);
    
	return (bool) _wasgo_TextEdit_wrapper_has_keyword_color(wasgo_id, wasgo_buffer_keyword, wasgo_size_keyword);
}
void TextEdit::insert_text_at_cursor(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_TextEdit_wrapper_insert_text_at_cursor(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
bool TextEdit::is_breakpoint_gutter_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_breakpoint_gutter_enabled(wasgo_id);
}
bool TextEdit::is_context_menu_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_context_menu_enabled(wasgo_id);
}
bool TextEdit::is_drawing_fold_gutter(){
	return (bool) _wasgo_TextEdit_wrapper_is_drawing_fold_gutter(wasgo_id);
}
bool TextEdit::is_drawing_minimap(){
	return (bool) _wasgo_TextEdit_wrapper_is_drawing_minimap(wasgo_id);
}
bool TextEdit::is_drawing_spaces(){
	return (bool) _wasgo_TextEdit_wrapper_is_drawing_spaces(wasgo_id);
}
bool TextEdit::is_drawing_tabs(){
	return (bool) _wasgo_TextEdit_wrapper_is_drawing_tabs(wasgo_id);
}
bool TextEdit::is_folded(int p_line){
	return (bool) _wasgo_TextEdit_wrapper_is_folded(wasgo_id, p_line);
}
bool TextEdit::is_hiding_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_hiding_enabled(wasgo_id);
}
bool TextEdit::is_highlight_all_occurrences_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_highlight_all_occurrences_enabled(wasgo_id);
}
bool TextEdit::is_highlight_current_line_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_highlight_current_line_enabled(wasgo_id);
}
bool TextEdit::is_line_hidden(int p_line){
	return (bool) _wasgo_TextEdit_wrapper_is_line_hidden(wasgo_id, p_line);
}
bool TextEdit::is_overriding_selected_font_color(){
	return (bool) _wasgo_TextEdit_wrapper_is_overriding_selected_font_color(wasgo_id);
}
bool TextEdit::is_readonly(){
	return (bool) _wasgo_TextEdit_wrapper_is_readonly(wasgo_id);
}
bool TextEdit::is_right_click_moving_caret(){
	return (bool) _wasgo_TextEdit_wrapper_is_right_click_moving_caret(wasgo_id);
}
bool TextEdit::is_selecting_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_selecting_enabled(wasgo_id);
}
bool TextEdit::is_selection_active(){
	return (bool) _wasgo_TextEdit_wrapper_is_selection_active(wasgo_id);
}
bool TextEdit::is_shortcut_keys_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_shortcut_keys_enabled(wasgo_id);
}
bool TextEdit::is_show_line_numbers_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_show_line_numbers_enabled(wasgo_id);
}
bool TextEdit::is_smooth_scroll_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_smooth_scroll_enabled(wasgo_id);
}
bool TextEdit::is_syntax_coloring_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_syntax_coloring_enabled(wasgo_id);
}
bool TextEdit::is_virtual_keyboard_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_virtual_keyboard_enabled(wasgo_id);
}
bool TextEdit::is_wrap_enabled(){
	return (bool) _wasgo_TextEdit_wrapper_is_wrap_enabled(wasgo_id);
}
void TextEdit::menu_option(int p_option){
	_wasgo_TextEdit_wrapper_menu_option(wasgo_id, p_option);
}
void TextEdit::paste(){
	_wasgo_TextEdit_wrapper_paste(wasgo_id);
}
void TextEdit::redo(){
	_wasgo_TextEdit_wrapper_redo(wasgo_id);
}
void TextEdit::remove_breakpoints(){
	_wasgo_TextEdit_wrapper_remove_breakpoints(wasgo_id);
}
PoolIntArray TextEdit::search(String p_key, int p_flags, int p_from_line, int p_from_column){

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return PoolIntArray(_wasgo_TextEdit_wrapper_search(wasgo_id, wasgo_buffer_key, wasgo_size_key, p_flags, p_from_line, p_from_column));
}
void TextEdit::select(int p_from_line, int p_from_column, int p_to_line, int p_to_column){
	_wasgo_TextEdit_wrapper_select(wasgo_id, p_from_line, p_from_column, p_to_line, p_to_column);
}
void TextEdit::select_all(){
	_wasgo_TextEdit_wrapper_select_all(wasgo_id);
}
void TextEdit::set_breakpoint_gutter_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_breakpoint_gutter_enabled(wasgo_id, p_enable);
}
void TextEdit::set_context_menu_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_context_menu_enabled(wasgo_id, p_enable);
}
void TextEdit::set_draw_fold_gutter(bool p_arg0){
	_wasgo_TextEdit_wrapper_set_draw_fold_gutter(wasgo_id, p_arg0);
}
void TextEdit::set_draw_spaces(bool p_arg0){
	_wasgo_TextEdit_wrapper_set_draw_spaces(wasgo_id, p_arg0);
}
void TextEdit::set_draw_tabs(bool p_arg0){
	_wasgo_TextEdit_wrapper_set_draw_tabs(wasgo_id, p_arg0);
}
void TextEdit::set_h_scroll(int p_value){
	_wasgo_TextEdit_wrapper_set_h_scroll(wasgo_id, p_value);
}
void TextEdit::set_hiding_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_hiding_enabled(wasgo_id, p_enable);
}
void TextEdit::set_highlight_all_occurrences(bool p_enable){
	_wasgo_TextEdit_wrapper_set_highlight_all_occurrences(wasgo_id, p_enable);
}
void TextEdit::set_highlight_current_line(bool p_enabled){
	_wasgo_TextEdit_wrapper_set_highlight_current_line(wasgo_id, p_enabled);
}
void TextEdit::set_line(int p_line, String p_new_text){

    Variant wasgo_var_new_text = p_new_text;
    int wasgo_size_new_text = String(p_new_text).size();
    uint8_t wasgo_buffer_new_text[wasgo_size_new_text];
    encode_variant(wasgo_var_new_text, wasgo_buffer_new_text, wasgo_size_new_text);
    
	_wasgo_TextEdit_wrapper_set_line(wasgo_id, p_line, wasgo_buffer_new_text, wasgo_size_new_text);
}
void TextEdit::set_line_as_hidden(int p_line, bool p_enable){
	_wasgo_TextEdit_wrapper_set_line_as_hidden(wasgo_id, p_line, p_enable);
}
void TextEdit::set_minimap_width(int p_width){
	_wasgo_TextEdit_wrapper_set_minimap_width(wasgo_id, p_width);
}
void TextEdit::set_override_selected_font_color(bool p_override){
	_wasgo_TextEdit_wrapper_set_override_selected_font_color(wasgo_id, p_override);
}
void TextEdit::set_readonly(bool p_enable){
	_wasgo_TextEdit_wrapper_set_readonly(wasgo_id, p_enable);
}
void TextEdit::set_right_click_moves_caret(bool p_enable){
	_wasgo_TextEdit_wrapper_set_right_click_moves_caret(wasgo_id, p_enable);
}
void TextEdit::set_selecting_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_selecting_enabled(wasgo_id, p_enable);
}
void TextEdit::set_shortcut_keys_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_shortcut_keys_enabled(wasgo_id, p_enable);
}
void TextEdit::set_show_line_numbers(bool p_enable){
	_wasgo_TextEdit_wrapper_set_show_line_numbers(wasgo_id, p_enable);
}
void TextEdit::set_smooth_scroll_enable(bool p_enable){
	_wasgo_TextEdit_wrapper_set_smooth_scroll_enable(wasgo_id, p_enable);
}
void TextEdit::set_syntax_coloring(bool p_enable){
	_wasgo_TextEdit_wrapper_set_syntax_coloring(wasgo_id, p_enable);
}
void TextEdit::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_TextEdit_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void TextEdit::set_v_scroll(float p_value){
	_wasgo_TextEdit_wrapper_set_v_scroll(wasgo_id, p_value);
}
void TextEdit::set_v_scroll_speed(float p_speed){
	_wasgo_TextEdit_wrapper_set_v_scroll_speed(wasgo_id, p_speed);
}
void TextEdit::set_virtual_keyboard_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_virtual_keyboard_enabled(wasgo_id, p_enable);
}
void TextEdit::set_wrap_enabled(bool p_enable){
	_wasgo_TextEdit_wrapper_set_wrap_enabled(wasgo_id, p_enable);
}
void TextEdit::toggle_fold_line(int p_line){
	_wasgo_TextEdit_wrapper_toggle_fold_line(wasgo_id, p_line);
}
void TextEdit::undo(){
	_wasgo_TextEdit_wrapper_undo(wasgo_id);
}
void TextEdit::unfold_line(int p_line){
	_wasgo_TextEdit_wrapper_unfold_line(wasgo_id, p_line);
}
void TextEdit::unhide_all_lines(){
	_wasgo_TextEdit_wrapper_unhide_all_lines(wasgo_id);
}

TextEdit::TextEdit(WasGoId p_wasgo_id) : Control(p_wasgo_id){
}
TextEdit::TextEdit(Control other) : Control(other._get_wasgo_id()){
    wasgo_id = _wasgo_TextEdit_constructor();
}
TextEdit::new_instance(){
    return TextEdit(_wasgo_TextEdit_constructor());
}