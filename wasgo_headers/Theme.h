/* THIS FILE IS GENERATED */
#ifndef THEME_H
#define THEME_H

#include "wasgo\wasgo.h"

#include "Font.h"
#include "Color.h"
#include "Resource.h"
#include "Variant.h"
#include "StyleBox.h"
#include "Texture.h"
#include "ustring.h"
class Theme : public Resource{
public:
void clear();
void clear_color(String p_name, String p_node_type);
void clear_constant(String p_name, String p_node_type);
void clear_font(String p_name, String p_node_type);
void clear_icon(String p_name, String p_node_type);
void clear_stylebox(String p_name, String p_node_type);
void copy_default_theme();
void copy_theme(Theme p_other);
Color get_color(String p_name, String p_node_type);
PoolStringArray get_color_list(String p_node_type);
int get_constant(String p_name, String p_node_type);
PoolStringArray get_constant_list(String p_node_type);
Font get_default_font();
Font get_font(String p_name, String p_node_type);
PoolStringArray get_font_list(String p_node_type);
Texture get_icon(String p_name, String p_node_type);
PoolStringArray get_icon_list(String p_node_type);
StyleBox get_stylebox(String p_name, String p_node_type);
PoolStringArray get_stylebox_list(String p_node_type);
PoolStringArray get_stylebox_types();
PoolStringArray get_type_list(String p_node_type);
bool has_color(String p_name, String p_node_type);
bool has_constant(String p_name, String p_node_type);
bool has_font(String p_name, String p_node_type);
bool has_icon(String p_name, String p_node_type);
bool has_stylebox(String p_name, String p_node_type);
void set_color(String p_name, String p_node_type, Color p_color);
void set_constant(String p_name, String p_node_type, int p_constant);
void set_default_font(Font p_font);
void set_font(String p_name, String p_node_type, Font p_font);
void set_icon(String p_name, String p_node_type, Texture p_texture);
void set_stylebox(String p_name, String p_node_type, StyleBox p_texture);

protected:
public:
explicit Theme(WasGoID p_wasgo_id);
explicit Theme(Resource other);
Theme new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Theme_wrapper_clear(WasGoID wasgo_id);
void _wasgo_Theme_wrapper_clear_color(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_constant(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_font(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_icon(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_stylebox(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_copy_default_theme(WasGoID wasgo_id);
void _wasgo_Theme_wrapper_copy_theme(WasGoID wasgo_id, WasGoID p_other);
void _wasgo_Theme_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_color_list(WasGoID wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_get_constant(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_constant_list(WasGoID wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_default_font(WasGoID wasgo_id);
WasGoID _wasgo_Theme_wrapper_get_font(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_font_list(WasGoID wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_icon(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_icon_list(WasGoID wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_stylebox(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_stylebox_list(WasGoID wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Theme_wrapper_get_stylebox_types(WasGoID wasgo_id);
WasGoID _wasgo_Theme_wrapper_get_type_list(WasGoID wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_color(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_constant(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_font(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_icon(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_stylebox(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Theme_wrapper_set_constant(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, int p_constant);
void _wasgo_Theme_wrapper_set_default_font(WasGoID wasgo_id, WasGoID p_font);
void _wasgo_Theme_wrapper_set_font(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, WasGoID p_font);
void _wasgo_Theme_wrapper_set_icon(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, WasGoID p_texture);
void _wasgo_Theme_wrapper_set_stylebox(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, WasGoID p_texture);

    //constructor wrappers
    WasGoID _wasgo_Theme_constructor();
            
}
#endif