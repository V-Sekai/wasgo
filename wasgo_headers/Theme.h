/* THIS FILE IS GENERATED */
#ifndef THEME_H
#define THEME_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Font.h"
#include "ustring.h"
#include "Variant.h"
#include "Color.h"
#include "StyleBox.h"
#include "Texture.h"
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
Theme(WasGoId p_wasgo_id);
public:
Theme();
~Theme();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Theme_wrapper_clear(WasGoId wasgo_id);
void _wasgo_Theme_wrapper_clear_color(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_constant(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_font(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_icon(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_clear_stylebox(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_copy_default_theme(WasGoId wasgo_id);
void _wasgo_Theme_wrapper_copy_theme(WasGoId wasgo_id, WasGoId p_other);
void _wasgo_Theme_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_color_list(WasGoId wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_get_constant(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_constant_list(WasGoId wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_default_font(WasGoId wasgo_id);
WasGoId _wasgo_Theme_wrapper_get_font(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_font_list(WasGoId wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_icon(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_icon_list(WasGoId wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_stylebox(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_stylebox_list(WasGoId wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoId _wasgo_Theme_wrapper_get_stylebox_types(WasGoId wasgo_id);
WasGoId _wasgo_Theme_wrapper_get_type_list(WasGoId wasgo_id, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_color(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_constant(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_font(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_icon(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Theme_wrapper_has_stylebox(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Theme_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Theme_wrapper_set_constant(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, int p_constant);
void _wasgo_Theme_wrapper_set_default_font(WasGoId wasgo_id, WasGoId p_font);
void _wasgo_Theme_wrapper_set_font(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, WasGoId p_font);
void _wasgo_Theme_wrapper_set_icon(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, WasGoId p_texture);
void _wasgo_Theme_wrapper_set_stylebox(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size, WasGoId p_texture);

    //constructor and destructor wrappers
    WasGoId _wasgo_Theme_constructor();
    void _wasgo_Theme_destructor(WasGoId p_wasgo_id);
            
}
#endif