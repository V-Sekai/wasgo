/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureProgress.h"
float TextureProgress::get_fill_degrees(){
	return (float) _wasgo_TextureProgress_wrapper_get_fill_degrees(wasgo_id);
}
int TextureProgress::get_fill_mode(){
	return (int) _wasgo_TextureProgress_wrapper_get_fill_mode(wasgo_id);
}
bool TextureProgress::get_nine_patch_stretch(){
	return (bool) _wasgo_TextureProgress_wrapper_get_nine_patch_stretch(wasgo_id);
}
Texture TextureProgress::get_over_texture(){
	return Texture(_wasgo_TextureProgress_wrapper_get_over_texture(wasgo_id));
}
Texture TextureProgress::get_progress_texture(){
	return Texture(_wasgo_TextureProgress_wrapper_get_progress_texture(wasgo_id));
}
Vector2 TextureProgress::get_radial_center_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TextureProgress_wrapper_get_radial_center_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float TextureProgress::get_radial_initial_angle(){
	return (float) _wasgo_TextureProgress_wrapper_get_radial_initial_angle(wasgo_id);
}
int TextureProgress::get_stretch_margin(Margin p_margin){
	return (int) _wasgo_TextureProgress_wrapper_get_stretch_margin(wasgo_id, p_margin._get_wasgo_id());
}
Color TextureProgress::get_tint_over(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TextureProgress_wrapper_get_tint_over(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color TextureProgress::get_tint_progress(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TextureProgress_wrapper_get_tint_progress(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color TextureProgress::get_tint_under(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TextureProgress_wrapper_get_tint_under(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Texture TextureProgress::get_under_texture(){
	return Texture(_wasgo_TextureProgress_wrapper_get_under_texture(wasgo_id));
}
void TextureProgress::set_fill_degrees(float p_mode){
	_wasgo_TextureProgress_wrapper_set_fill_degrees(wasgo_id, p_mode);
}
void TextureProgress::set_fill_mode(int p_mode){
	_wasgo_TextureProgress_wrapper_set_fill_mode(wasgo_id, p_mode);
}
void TextureProgress::set_nine_patch_stretch(bool p_stretch){
	_wasgo_TextureProgress_wrapper_set_nine_patch_stretch(wasgo_id, p_stretch);
}
void TextureProgress::set_over_texture(Texture p_tex){
	_wasgo_TextureProgress_wrapper_set_over_texture(wasgo_id, p_tex._get_wasgo_id());
}
void TextureProgress::set_progress_texture(Texture p_tex){
	_wasgo_TextureProgress_wrapper_set_progress_texture(wasgo_id, p_tex._get_wasgo_id());
}
void TextureProgress::set_radial_center_offset(Vector2 p_mode){

    Variant wasgo_var_mode = p_mode;
    uint8_t wasgo_buffer_mode[12];
    int wasgo_size_mode = 12;
    encode_variant(wasgo_var_mode, wasgo_buffer_mode, wasgo_size_mode);
    
	_wasgo_TextureProgress_wrapper_set_radial_center_offset(wasgo_id, wasgo_buffer_mode, wasgo_size_mode);
}
void TextureProgress::set_radial_initial_angle(float p_mode){
	_wasgo_TextureProgress_wrapper_set_radial_initial_angle(wasgo_id, p_mode);
}
void TextureProgress::set_stretch_margin(Margin p_margin, int p_value){
	_wasgo_TextureProgress_wrapper_set_stretch_margin(wasgo_id, p_margin._get_wasgo_id(), p_value);
}
void TextureProgress::set_tint_over(Color p_tint){

    Variant wasgo_var_tint = p_tint;
    uint8_t wasgo_buffer_tint[20];
    int wasgo_size_tint = 20;
    encode_variant(wasgo_var_tint, wasgo_buffer_tint, wasgo_size_tint);
    
	_wasgo_TextureProgress_wrapper_set_tint_over(wasgo_id, wasgo_buffer_tint, wasgo_size_tint);
}
void TextureProgress::set_tint_progress(Color p_tint){

    Variant wasgo_var_tint = p_tint;
    uint8_t wasgo_buffer_tint[20];
    int wasgo_size_tint = 20;
    encode_variant(wasgo_var_tint, wasgo_buffer_tint, wasgo_size_tint);
    
	_wasgo_TextureProgress_wrapper_set_tint_progress(wasgo_id, wasgo_buffer_tint, wasgo_size_tint);
}
void TextureProgress::set_tint_under(Color p_tint){

    Variant wasgo_var_tint = p_tint;
    uint8_t wasgo_buffer_tint[20];
    int wasgo_size_tint = 20;
    encode_variant(wasgo_var_tint, wasgo_buffer_tint, wasgo_size_tint);
    
	_wasgo_TextureProgress_wrapper_set_tint_under(wasgo_id, wasgo_buffer_tint, wasgo_size_tint);
}
void TextureProgress::set_under_texture(Texture p_tex){
	_wasgo_TextureProgress_wrapper_set_under_texture(wasgo_id, p_tex._get_wasgo_id());
}

TextureProgress::TextureProgress(WasGoID p_wasgo_id) : Range(p_wasgo_id){
}
TextureProgress::TextureProgress(Range other) : Range(other._get_wasgo_id()){
}
TextureProgress::TextureProgress():Range(){
}
TextureProgress TextureProgress::new_instance(){
    return TextureProgress(_wasgo_TextureProgress_constructor());
}
WasGoID TextureProgress::_get_wasgo_id(){
    return wasgo_id;
}
TextureProgress::operator bool(){
    return (bool) wasgo_id;
}
