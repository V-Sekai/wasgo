/* THIS FILE IS GENERATED */
#ifndef THEME_H
#define THEME_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "StyleBox.h"
#include "Variant.h"
#include "Texture.h"
#include "Font.h"
#include "Resource.h"
#include "Color.h"
#include "ustring.h"
class Theme : public Resource{
public:
void clear();
void clear_color(String p_name, String p_node_type);
void clear_constant(String p_name, String p_node_type);
void clear_font(String p_name, String p_node_type);
void clear_icon(String p_name, String p_node_type);
void clear_stylebox(String p_name, String p_node_type);
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

Theme(WasGoId p_wasgo_id);
~Theme();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Theme_wrapper_clear(WasGoId wasgo_id);
void _wasgo_Theme_wrapper_clear_color(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
void _wasgo_Theme_wrapper_clear_constant(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
void _wasgo_Theme_wrapper_clear_font(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
void _wasgo_Theme_wrapper_clear_icon(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
void _wasgo_Theme_wrapper_clear_stylebox(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_color(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_color_list(WasGoId wasgo_id, WasGoId p_node_type);
int _wasgo_Theme_wrapper_get_constant(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_constant_list(WasGoId wasgo_id, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_default_font(WasGoId wasgo_id);
WasGoId _wasgo_Theme_wrapper_get_font(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_font_list(WasGoId wasgo_id, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_icon(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_icon_list(WasGoId wasgo_id, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_stylebox(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_stylebox_list(WasGoId wasgo_id, WasGoId p_node_type);
WasGoId _wasgo_Theme_wrapper_get_stylebox_types(WasGoId wasgo_id);
WasGoId _wasgo_Theme_wrapper_get_type_list(WasGoId wasgo_id, WasGoId p_node_type);
int _wasgo_Theme_wrapper_has_color(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
int _wasgo_Theme_wrapper_has_constant(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
int _wasgo_Theme_wrapper_has_font(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
int _wasgo_Theme_wrapper_has_icon(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
int _wasgo_Theme_wrapper_has_stylebox(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type);
void _wasgo_Theme_wrapper_set_color(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type, WasGoId p_color);
void _wasgo_Theme_wrapper_set_constant(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type, int p_constant);
void _wasgo_Theme_wrapper_set_default_font(WasGoId wasgo_id, WasGoId p_font);
void _wasgo_Theme_wrapper_set_font(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type, WasGoId p_font);
void _wasgo_Theme_wrapper_set_icon(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type, WasGoId p_texture);
void _wasgo_Theme_wrapper_set_stylebox(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node_type, WasGoId p_texture);
}
#endif