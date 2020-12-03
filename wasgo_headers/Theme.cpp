/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Theme.h"
void Theme::clear(){
	_wasgo_Theme_wrapper_clear(wasgo_id);
}
void Theme::clear_color(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_clear_color(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
void Theme::clear_constant(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_clear_constant(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
void Theme::clear_font(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_clear_font(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
void Theme::clear_icon(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_clear_icon(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
void Theme::clear_stylebox(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_clear_stylebox(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
void Theme::copy_default_theme(){
	_wasgo_Theme_wrapper_copy_default_theme(wasgo_id);
}
void Theme::copy_theme(Theme p_other){
	_wasgo_Theme_wrapper_copy_theme(wasgo_id, p_other._get_wasgo_id());
}
Color Theme::get_color(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Theme_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
PoolStringArray Theme::get_color_list(String p_node_type){

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return PoolStringArray(_wasgo_Theme_wrapper_get_color_list(wasgo_id, wasgo_buffer_node_type, wasgo_size_node_type));
}
int Theme::get_constant(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (int) _wasgo_Theme_wrapper_get_constant(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
PoolStringArray Theme::get_constant_list(String p_node_type){

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return PoolStringArray(_wasgo_Theme_wrapper_get_constant_list(wasgo_id, wasgo_buffer_node_type, wasgo_size_node_type));
}
Font Theme::get_default_font(){
	return Font(_wasgo_Theme_wrapper_get_default_font(wasgo_id));
}
Font Theme::get_font(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return Font(_wasgo_Theme_wrapper_get_font(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type));
}
PoolStringArray Theme::get_font_list(String p_node_type){

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return PoolStringArray(_wasgo_Theme_wrapper_get_font_list(wasgo_id, wasgo_buffer_node_type, wasgo_size_node_type));
}
Texture Theme::get_icon(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return Texture(_wasgo_Theme_wrapper_get_icon(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type));
}
PoolStringArray Theme::get_icon_list(String p_node_type){

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return PoolStringArray(_wasgo_Theme_wrapper_get_icon_list(wasgo_id, wasgo_buffer_node_type, wasgo_size_node_type));
}
StyleBox Theme::get_stylebox(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return StyleBox(_wasgo_Theme_wrapper_get_stylebox(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type));
}
PoolStringArray Theme::get_stylebox_list(String p_node_type){

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return PoolStringArray(_wasgo_Theme_wrapper_get_stylebox_list(wasgo_id, wasgo_buffer_node_type, wasgo_size_node_type));
}
PoolStringArray Theme::get_stylebox_types(){
	return PoolStringArray(_wasgo_Theme_wrapper_get_stylebox_types(wasgo_id));
}
PoolStringArray Theme::get_type_list(String p_node_type){

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return PoolStringArray(_wasgo_Theme_wrapper_get_type_list(wasgo_id, wasgo_buffer_node_type, wasgo_size_node_type));
}
bool Theme::has_color(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Theme_wrapper_has_color(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Theme::has_constant(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Theme_wrapper_has_constant(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Theme::has_font(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Theme_wrapper_has_font(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Theme::has_icon(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Theme_wrapper_has_icon(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Theme::has_stylebox(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Theme_wrapper_has_stylebox(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
void Theme::set_color(String p_name, String p_node_type, Color p_color){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Theme_wrapper_set_color(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type, wasgo_buffer_color, wasgo_size_color);
}
void Theme::set_constant(String p_name, String p_node_type, int p_constant){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_set_constant(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type, p_constant);
}
void Theme::set_default_font(Font p_font){
	_wasgo_Theme_wrapper_set_default_font(wasgo_id, p_font._get_wasgo_id());
}
void Theme::set_font(String p_name, String p_node_type, Font p_font){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_set_font(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type, p_font._get_wasgo_id());
}
void Theme::set_icon(String p_name, String p_node_type, Texture p_texture){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_set_icon(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type, p_texture._get_wasgo_id());
}
void Theme::set_stylebox(String p_name, String p_node_type, StyleBox p_texture){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    uint8_t wasgo_buffer_node_type[256];
    int wasgo_size_node_type = 256;
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	_wasgo_Theme_wrapper_set_stylebox(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type, p_texture._get_wasgo_id());
}

Theme::Theme(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
Theme::Theme(){
    wasgo_id = _wasgo_Theme_constructor();
}
Theme::~Theme(){
    _wasgo_Theme_destructor(wasgo_id);
}