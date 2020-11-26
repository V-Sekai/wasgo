/* THIS FILE IS GENERATED */
#ifndef THEME_H
#define THEME_H

#include <stdint.h>

#include "Font.h"
#include "PoolStringArray.h"
#include "String.h"
#include "StyleBox.h"
#include "Resource.h"
#include "Texture.h"
#include "Variant.h"
class Theme : public Resource{
public: Theme();
void  _emit_theme_changed();
void  _emit_theme_changed();
void  clear();
void  clear();
void  clear_color(String name, String type);
void  clear_constant(String name, String type);
void  clear_font(String name, String type);
void  clear_icon(String name, String type);
void  clear_stylebox(String name, String type);
void  copy_default_theme();
void  copy_default_theme();
void  copy_theme(Theme other);
Color  get_color(String name, String type);
PoolStringArray  get_color_list(String type);
int  get_constant(String name, String type);
PoolStringArray  get_constant_list(String type);
Font  get_default_font();
Font  get_default_font();
Font  get_font(String name, String type);
PoolStringArray  get_font_list(String type);
Texture  get_icon(String name, String type);
PoolStringArray  get_icon_list(String type);
StyleBox  get_stylebox(String name, String type);
PoolStringArray  get_stylebox_list(String type);
PoolStringArray  get_stylebox_types();
PoolStringArray  get_stylebox_types();
PoolStringArray  get_type_list(String type);
bool  has_color(String name, String type);
bool  has_constant(String name, String type);
bool  has_font(String name, String type);
bool  has_icon(String name, String type);
bool  has_stylebox(String name, String type);
void  set_color(String name, String type, Color color);
void  set_constant(String name, String type, int constant);
void  set_default_font(Font font);
void  set_font(String name, String type, Font font);
void  set_icon(String name, String type, Texture texture);
void  set_stylebox(String name, String type, StyleBox texture);
};
#endif