/* THIS FILE IS GENERATED */
#ifndef THEME_H
#define THEME_H

#include "stdint.h"

#include "Resource.h"
#include "Variant.h"
#include "Texture.h"
#include "Font.h"
#include "StyleBox.h"
class Theme : public Resource{
public: Theme();
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
};
#endif