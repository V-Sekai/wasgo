/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Label.h"
Label::Align Label::get_align(){
	return Label::Align(_wasgo_Label_wrapper_get_align(wasgo_id));
}
int Label::get_line_count(){
	return (int) _wasgo_Label_wrapper_get_line_count(wasgo_id);
}
int Label::get_line_height(){
	return (int) _wasgo_Label_wrapper_get_line_height(wasgo_id);
}
int Label::get_lines_skipped(){
	return (int) _wasgo_Label_wrapper_get_lines_skipped(wasgo_id);
}
int Label::get_max_lines_visible(){
	return (int) _wasgo_Label_wrapper_get_max_lines_visible(wasgo_id);
}
float Label::get_percent_visible(){
	return (float) _wasgo_Label_wrapper_get_percent_visible(wasgo_id);
}
String Label::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Label_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Label::get_total_character_count(){
	return (int) _wasgo_Label_wrapper_get_total_character_count(wasgo_id);
}
Label::VAlign Label::get_valign(){
	return Label::VAlign(_wasgo_Label_wrapper_get_valign(wasgo_id));
}
int Label::get_visible_characters(){
	return (int) _wasgo_Label_wrapper_get_visible_characters(wasgo_id);
}
int Label::get_visible_line_count(){
	return (int) _wasgo_Label_wrapper_get_visible_line_count(wasgo_id);
}
bool Label::has_autowrap(){
	return (bool) _wasgo_Label_wrapper_has_autowrap(wasgo_id);
}
bool Label::is_clipping_text(){
	return (bool) _wasgo_Label_wrapper_is_clipping_text(wasgo_id);
}
bool Label::is_uppercase(){
	return (bool) _wasgo_Label_wrapper_is_uppercase(wasgo_id);
}
void Label::set_align(Label::Align p_align){
	_wasgo_Label_wrapper_set_align(wasgo_id, p_align._get_wasgo_id());
}
void Label::set_autowrap(bool p_enable){
	_wasgo_Label_wrapper_set_autowrap(wasgo_id, p_enable);
}
void Label::set_clip_text(bool p_enable){
	_wasgo_Label_wrapper_set_clip_text(wasgo_id, p_enable);
}
void Label::set_lines_skipped(int p_lines_skipped){
	_wasgo_Label_wrapper_set_lines_skipped(wasgo_id, p_lines_skipped);
}
void Label::set_max_lines_visible(int p_lines_visible){
	_wasgo_Label_wrapper_set_max_lines_visible(wasgo_id, p_lines_visible);
}
void Label::set_percent_visible(float p_percent_visible){
	_wasgo_Label_wrapper_set_percent_visible(wasgo_id, p_percent_visible);
}
void Label::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_Label_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
void Label::set_uppercase(bool p_enable){
	_wasgo_Label_wrapper_set_uppercase(wasgo_id, p_enable);
}
void Label::set_valign(Label::VAlign p_valign){
	_wasgo_Label_wrapper_set_valign(wasgo_id, p_valign._get_wasgo_id());
}
void Label::set_visible_characters(int p_amount){
	_wasgo_Label_wrapper_set_visible_characters(wasgo_id, p_amount);
}

Label::Label(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
Label::Label(Control other) : Control(other._get_wasgo_id()){
}
Label::Label():Control(){
}
Label Label::new_instance(){
    return Label(_wasgo_Label_constructor());
}
WasGoID Label::_get_wasgo_id(){
    return wasgo_id;
}
Label::operator bool(){
    return (bool) wasgo_id;
}
