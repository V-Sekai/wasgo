/* THIS FILE IS GENERATED */
#ifndef STYLEBOXFLAT_H
#define STYLEBOXFLAT_H

#include <stdint.h>

#include "Vector2.h"
#include "StyleBox.h"
#include "Variant.h"
class StyleBoxFlat : public StyleBox{
public: StyleBoxFlat();
int  get_aa_size();
int  get_aa_size();
Color  get_bg_color();
Color  get_bg_color();
bool  get_border_blend();
bool  get_border_blend();
Color  get_border_color();
Color  get_border_color();
int  get_border_width(int margin);
int  get_border_width_min();
int  get_border_width_min();
int  get_corner_detail();
int  get_corner_detail();
int  get_corner_radius(int corner);
float  get_expand_margin(int margin);
Color  get_shadow_color();
Color  get_shadow_color();
Vector2  get_shadow_offset();
Vector2  get_shadow_offset();
int  get_shadow_size();
int  get_shadow_size();
bool  is_anti_aliased();
bool  is_anti_aliased();
bool  is_draw_center_enabled();
bool  is_draw_center_enabled();
void  set_aa_size(int size);
void  set_anti_aliased(bool anti_aliased);
void  set_bg_color(Color color);
void  set_border_blend(bool blend);
void  set_border_color(Color color);
void  set_border_width(int margin, int width);
void  set_border_width_all(int width);
void  set_corner_detail(int detail);
void  set_corner_radius(int corner, int radius);
void  set_corner_radius_all(int radius);
void  set_corner_radius_individual(int radius_top_left, int radius_top_right, int radius_bottom_right, int radius_bottom_left);
void  set_draw_center(bool draw_center);
void  set_expand_margin(int margin, float size);
void  set_expand_margin_all(float size);
void  set_expand_margin_individual(float size_left, float size_top, float size_right, float size_bottom);
void  set_shadow_color(Color color);
void  set_shadow_offset(Vector2 offset);
void  set_shadow_size(int size);
};
#endif