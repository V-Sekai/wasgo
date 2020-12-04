/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RichTextLabel.h"
void RichTextLabel::add_image(Texture p_image, int p_width = (int) 0, int p_height = (int) 0){
	_wasgo_RichTextLabel_wrapper_add_image(wasgo_id, p_image._get_wasgo_id(), p_width, p_height);
}
void RichTextLabel::add_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_RichTextLabel_wrapper_add_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
Error RichTextLabel::append_bbcode(String p_bbcode){

    Variant wasgo_var_bbcode = p_bbcode;
    int wasgo_size_bbcode = String(p_bbcode).size();
    uint8_t wasgo_buffer_bbcode[wasgo_size_bbcode];
    encode_variant(wasgo_var_bbcode, wasgo_buffer_bbcode, wasgo_size_bbcode);
    
	return Error(_wasgo_RichTextLabel_wrapper_append_bbcode(wasgo_id, wasgo_buffer_bbcode, wasgo_size_bbcode));
}
void RichTextLabel::clear(){
	_wasgo_RichTextLabel_wrapper_clear(wasgo_id);
}
String RichTextLabel::get_bbcode(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_RichTextLabel_wrapper_get_bbcode(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int RichTextLabel::get_content_height(){
	return (int) _wasgo_RichTextLabel_wrapper_get_content_height(wasgo_id);
}
Array RichTextLabel::get_effects(){
	return Array(_wasgo_RichTextLabel_wrapper_get_effects(wasgo_id));
}
int RichTextLabel::get_line_count(){
	return (int) _wasgo_RichTextLabel_wrapper_get_line_count(wasgo_id);
}
float RichTextLabel::get_percent_visible(){
	return (float) _wasgo_RichTextLabel_wrapper_get_percent_visible(wasgo_id);
}
int RichTextLabel::get_tab_size(){
	return (int) _wasgo_RichTextLabel_wrapper_get_tab_size(wasgo_id);
}
String RichTextLabel::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_RichTextLabel_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int RichTextLabel::get_total_character_count(){
	return (int) _wasgo_RichTextLabel_wrapper_get_total_character_count(wasgo_id);
}
VScrollBar RichTextLabel::get_v_scroll(){
	return VScrollBar(_wasgo_RichTextLabel_wrapper_get_v_scroll(wasgo_id));
}
int RichTextLabel::get_visible_characters(){
	return (int) _wasgo_RichTextLabel_wrapper_get_visible_characters(wasgo_id);
}
int RichTextLabel::get_visible_line_count(){
	return (int) _wasgo_RichTextLabel_wrapper_get_visible_line_count(wasgo_id);
}
void RichTextLabel::install_effect(Variant p_effect){
	_wasgo_RichTextLabel_wrapper_install_effect(wasgo_id, p_effect._get_wasgo_id());
}
bool RichTextLabel::is_fit_content_height_enabled(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_fit_content_height_enabled(wasgo_id);
}
bool RichTextLabel::is_meta_underlined(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_meta_underlined(wasgo_id);
}
bool RichTextLabel::is_overriding_selected_font_color(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_overriding_selected_font_color(wasgo_id);
}
bool RichTextLabel::is_scroll_active(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_scroll_active(wasgo_id);
}
bool RichTextLabel::is_scroll_following(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_scroll_following(wasgo_id);
}
bool RichTextLabel::is_selection_enabled(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_selection_enabled(wasgo_id);
}
bool RichTextLabel::is_using_bbcode(){
	return (bool) _wasgo_RichTextLabel_wrapper_is_using_bbcode(wasgo_id);
}
void RichTextLabel::newline(){
	_wasgo_RichTextLabel_wrapper_newline(wasgo_id);
}
Error RichTextLabel::parse_bbcode(String p_bbcode){

    Variant wasgo_var_bbcode = p_bbcode;
    int wasgo_size_bbcode = String(p_bbcode).size();
    uint8_t wasgo_buffer_bbcode[wasgo_size_bbcode];
    encode_variant(wasgo_var_bbcode, wasgo_buffer_bbcode, wasgo_size_bbcode);
    
	return Error(_wasgo_RichTextLabel_wrapper_parse_bbcode(wasgo_id, wasgo_buffer_bbcode, wasgo_size_bbcode));
}
Dictionary RichTextLabel::parse_expressions_for_values(PoolStringArray p_expressions){
	return Dictionary(_wasgo_RichTextLabel_wrapper_parse_expressions_for_values(wasgo_id, p_expressions._get_wasgo_id()));
}
void RichTextLabel::pop(){
	_wasgo_RichTextLabel_wrapper_pop(wasgo_id);
}
void RichTextLabel::push_align(RichTextLabel::Align p_align){
	_wasgo_RichTextLabel_wrapper_push_align(wasgo_id, p_align._get_wasgo_id());
}
void RichTextLabel::push_bold(){
	_wasgo_RichTextLabel_wrapper_push_bold(wasgo_id);
}
void RichTextLabel::push_bold_italics(){
	_wasgo_RichTextLabel_wrapper_push_bold_italics(wasgo_id);
}
void RichTextLabel::push_cell(){
	_wasgo_RichTextLabel_wrapper_push_cell(wasgo_id);
}
void RichTextLabel::push_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_RichTextLabel_wrapper_push_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void RichTextLabel::push_font(Font p_font){
	_wasgo_RichTextLabel_wrapper_push_font(wasgo_id, p_font._get_wasgo_id());
}
void RichTextLabel::push_indent(int p_level){
	_wasgo_RichTextLabel_wrapper_push_indent(wasgo_id, p_level);
}
void RichTextLabel::push_italics(){
	_wasgo_RichTextLabel_wrapper_push_italics(wasgo_id);
}
void RichTextLabel::push_list(RichTextLabel::ListType p_type){
	_wasgo_RichTextLabel_wrapper_push_list(wasgo_id, p_type._get_wasgo_id());
}
void RichTextLabel::push_meta(Variant p_data){
	_wasgo_RichTextLabel_wrapper_push_meta(wasgo_id, p_data._get_wasgo_id());
}
void RichTextLabel::push_mono(){
	_wasgo_RichTextLabel_wrapper_push_mono(wasgo_id);
}
void RichTextLabel::push_normal(){
	_wasgo_RichTextLabel_wrapper_push_normal(wasgo_id);
}
void RichTextLabel::push_strikethrough(){
	_wasgo_RichTextLabel_wrapper_push_strikethrough(wasgo_id);
}
void RichTextLabel::push_table(int p_columns){
	_wasgo_RichTextLabel_wrapper_push_table(wasgo_id, p_columns);
}
void RichTextLabel::push_underline(){
	_wasgo_RichTextLabel_wrapper_push_underline(wasgo_id);
}
bool RichTextLabel::remove_line(int p_line){
	return (bool) _wasgo_RichTextLabel_wrapper_remove_line(wasgo_id, p_line);
}
void RichTextLabel::scroll_to_line(int p_line){
	_wasgo_RichTextLabel_wrapper_scroll_to_line(wasgo_id, p_line);
}
void RichTextLabel::set_bbcode(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_RichTextLabel_wrapper_set_bbcode(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void RichTextLabel::set_effects(Array p_effects){
	_wasgo_RichTextLabel_wrapper_set_effects(wasgo_id, p_effects._get_wasgo_id());
}
void RichTextLabel::set_fit_content_height(bool p_enabled){
	_wasgo_RichTextLabel_wrapper_set_fit_content_height(wasgo_id, p_enabled);
}
void RichTextLabel::set_meta_underline(bool p_enable){
	_wasgo_RichTextLabel_wrapper_set_meta_underline(wasgo_id, p_enable);
}
void RichTextLabel::set_override_selected_font_color(bool p_override){
	_wasgo_RichTextLabel_wrapper_set_override_selected_font_color(wasgo_id, p_override);
}
void RichTextLabel::set_percent_visible(float p_percent_visible){
	_wasgo_RichTextLabel_wrapper_set_percent_visible(wasgo_id, p_percent_visible);
}
void RichTextLabel::set_scroll_active(bool p_active){
	_wasgo_RichTextLabel_wrapper_set_scroll_active(wasgo_id, p_active);
}
void RichTextLabel::set_scroll_follow(bool p_follow){
	_wasgo_RichTextLabel_wrapper_set_scroll_follow(wasgo_id, p_follow);
}
void RichTextLabel::set_selection_enabled(bool p_enabled){
	_wasgo_RichTextLabel_wrapper_set_selection_enabled(wasgo_id, p_enabled);
}
void RichTextLabel::set_tab_size(int p_spaces){
	_wasgo_RichTextLabel_wrapper_set_tab_size(wasgo_id, p_spaces);
}
void RichTextLabel::set_table_column_expand(int p_column, bool p_expand, int p_ratio){
	_wasgo_RichTextLabel_wrapper_set_table_column_expand(wasgo_id, p_column, p_expand, p_ratio);
}
void RichTextLabel::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_RichTextLabel_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void RichTextLabel::set_use_bbcode(bool p_enable){
	_wasgo_RichTextLabel_wrapper_set_use_bbcode(wasgo_id, p_enable);
}
void RichTextLabel::set_visible_characters(int p_amount){
	_wasgo_RichTextLabel_wrapper_set_visible_characters(wasgo_id, p_amount);
}

RichTextLabel::RichTextLabel(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
RichTextLabel::RichTextLabel(Control other) : Control(other._get_wasgo_id()){
    wasgo_id = _wasgo_RichTextLabel_constructor();
}
RichTextLabel::new_instance(){
    return RichTextLabel(_wasgo_RichTextLabel_constructor());
}