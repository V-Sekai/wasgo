/* THIS FILE IS GENERATED */
#ifndef STYLEBOXFLAT_H
#define STYLEBOXFLAT_H

#include "stdint.h"

#include "Variant.h"
#include "StyleBox.h"
#include "Margin.h"
#include "Corner.h"
class StyleBoxFlat : public StyleBox{
public: StyleBoxFlat();
int get_aa_size();
Color get_bg_color();
bool get_border_blend();
Color get_border_color();
int get_border_width(Margin p_margin);
int get_border_width_min();
int get_corner_detail();
int get_corner_radius(Corner p_corner);
float get_expand_margin(Margin p_margin);
Color get_shadow_color();
Vector2 get_shadow_offset();
int get_shadow_size();
bool is_anti_aliased();
bool is_draw_center_enabled();
void set_aa_size(int p_size);
void set_anti_aliased(bool p_anti_aliased);
void set_bg_color(Color p_color);
void set_border_blend(bool p_blend);
void set_border_color(Color p_color);
void set_border_width(Margin p_margin, int p_width);
void set_border_width_all(int p_width);
void set_corner_detail(int p_detail);
void set_corner_radius(Corner p_corner, int p_radius);
void set_corner_radius_all(int p_radius);
void set_corner_radius_individual(int p_radius_top_left, int p_radius_top_right, int p_radius_bottom_right, int p_radius_bottom_left);
void set_draw_center(bool p_draw_center);
void set_expand_margin(Margin p_margin, float p_size);
void set_expand_margin_all(float p_size);
void set_expand_margin_individual(float p_size_left, float p_size_top, float p_size_right, float p_size_bottom);
void set_shadow_color(Color p_color);
void set_shadow_offset(Vector2 p_offset);
void set_shadow_size(int p_size);
};
#endif