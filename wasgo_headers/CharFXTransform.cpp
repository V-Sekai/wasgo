/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CharFXTransform.h"
int CharFXTransform::get_absolute_index(){
	return (int) _wasgo_CharFXTransform_wrapper_get_absolute_index(wasgo_id);
}
int CharFXTransform::get_character(){
	return (int) _wasgo_CharFXTransform_wrapper_get_character(wasgo_id);
}
Color CharFXTransform::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CharFXTransform_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float CharFXTransform::get_elapsed_time(){
	return (float) _wasgo_CharFXTransform_wrapper_get_elapsed_time(wasgo_id);
}
Dictionary CharFXTransform::get_environment(){
	return Dictionary(_wasgo_CharFXTransform_wrapper_get_environment(wasgo_id));
}
Vector2 CharFXTransform::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CharFXTransform_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int CharFXTransform::get_relative_index(){
	return (int) _wasgo_CharFXTransform_wrapper_get_relative_index(wasgo_id);
}
bool CharFXTransform::is_visible(){
	return (bool) _wasgo_CharFXTransform_wrapper_is_visible(wasgo_id);
}
void CharFXTransform::set_absolute_index(int p_index){
	_wasgo_CharFXTransform_wrapper_set_absolute_index(wasgo_id, p_index);
}
void CharFXTransform::set_character(int p_character){
	_wasgo_CharFXTransform_wrapper_set_character(wasgo_id, p_character);
}
void CharFXTransform::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CharFXTransform_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void CharFXTransform::set_elapsed_time(float p_time){
	_wasgo_CharFXTransform_wrapper_set_elapsed_time(wasgo_id, p_time);
}
void CharFXTransform::set_environment(Dictionary p_environment){
	_wasgo_CharFXTransform_wrapper_set_environment(wasgo_id, p_environment._get_wasgo_id());
}
void CharFXTransform::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_CharFXTransform_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void CharFXTransform::set_relative_index(int p_index){
	_wasgo_CharFXTransform_wrapper_set_relative_index(wasgo_id, p_index);
}
void CharFXTransform::set_visibility(bool p_visibility){
	_wasgo_CharFXTransform_wrapper_set_visibility(wasgo_id, p_visibility);
}

CharFXTransform::CharFXTransform(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
CharFXTransform::CharFXTransform(Reference other) : Reference(other._get_wasgo_id()){
}
CharFXTransform::CharFXTransform():Reference(){
}
CharFXTransform CharFXTransform::new_instance(){
    return CharFXTransform(_wasgo_CharFXTransform_constructor());
}
WasGoID CharFXTransform::_get_wasgo_id(){
    return wasgo_id;
}
CharFXTransform::operator bool(){
    return (bool) wasgo_id;
}
