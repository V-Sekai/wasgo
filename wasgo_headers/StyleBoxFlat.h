/* THIS FILE IS GENERATED */
#ifndef STYLEBOXFLAT_H
#define STYLEBOXFLAT_H

#include "wasgo\wasgoid.h"

#include "StyleBox.h"
#include "Vector2.h"
#include "math_defs.h"
#include "Corner.h"
#include "Color.h"
class StyleBoxFlat : public StyleBox{
public:
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

protected:
public:
explicit StyleBoxFlat(WasGoID p_wasgo_id);
explicit StyleBoxFlat(StyleBox other);
StyleBoxFlat();
StyleBoxFlat new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_StyleBoxFlat_wrapper_get_aa_size(WasGoID wasgo_id);
void _wasgo_StyleBoxFlat_wrapper_get_bg_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_StyleBoxFlat_wrapper_get_border_blend(WasGoID wasgo_id);
void _wasgo_StyleBoxFlat_wrapper_get_border_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_StyleBoxFlat_wrapper_get_border_width(WasGoID wasgo_id, WasGoID p_margin);
int _wasgo_StyleBoxFlat_wrapper_get_border_width_min(WasGoID wasgo_id);
int _wasgo_StyleBoxFlat_wrapper_get_corner_detail(WasGoID wasgo_id);
int _wasgo_StyleBoxFlat_wrapper_get_corner_radius(WasGoID wasgo_id, WasGoID p_corner);
float _wasgo_StyleBoxFlat_wrapper_get_expand_margin(WasGoID wasgo_id, WasGoID p_margin);
void _wasgo_StyleBoxFlat_wrapper_get_shadow_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_StyleBoxFlat_wrapper_get_shadow_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_StyleBoxFlat_wrapper_get_shadow_size(WasGoID wasgo_id);
int _wasgo_StyleBoxFlat_wrapper_is_anti_aliased(WasGoID wasgo_id);
int _wasgo_StyleBoxFlat_wrapper_is_draw_center_enabled(WasGoID wasgo_id);
void _wasgo_StyleBoxFlat_wrapper_set_aa_size(WasGoID wasgo_id, int p_size);
void _wasgo_StyleBoxFlat_wrapper_set_anti_aliased(WasGoID wasgo_id, bool p_anti_aliased);
void _wasgo_StyleBoxFlat_wrapper_set_bg_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_StyleBoxFlat_wrapper_set_border_blend(WasGoID wasgo_id, bool p_blend);
void _wasgo_StyleBoxFlat_wrapper_set_border_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_StyleBoxFlat_wrapper_set_border_width(WasGoID wasgo_id, WasGoID p_margin, int p_width);
void _wasgo_StyleBoxFlat_wrapper_set_border_width_all(WasGoID wasgo_id, int p_width);
void _wasgo_StyleBoxFlat_wrapper_set_corner_detail(WasGoID wasgo_id, int p_detail);
void _wasgo_StyleBoxFlat_wrapper_set_corner_radius(WasGoID wasgo_id, WasGoID p_corner, int p_radius);
void _wasgo_StyleBoxFlat_wrapper_set_corner_radius_all(WasGoID wasgo_id, int p_radius);
void _wasgo_StyleBoxFlat_wrapper_set_corner_radius_individual(WasGoID wasgo_id, int p_radius_top_left, int p_radius_top_right, int wasgo_throwaway, int p_radius_bottom_right, int p_radius_bottom_left);
void _wasgo_StyleBoxFlat_wrapper_set_draw_center(WasGoID wasgo_id, bool p_draw_center);
void _wasgo_StyleBoxFlat_wrapper_set_expand_margin(WasGoID wasgo_id, WasGoID p_margin, float p_size);
void _wasgo_StyleBoxFlat_wrapper_set_expand_margin_all(WasGoID wasgo_id, float p_size);
void _wasgo_StyleBoxFlat_wrapper_set_expand_margin_individual(WasGoID wasgo_id, float p_size_left, float p_size_top, int wasgo_throwaway, float p_size_right, float p_size_bottom);
void _wasgo_StyleBoxFlat_wrapper_set_shadow_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_StyleBoxFlat_wrapper_set_shadow_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_StyleBoxFlat_wrapper_set_shadow_size(WasGoID wasgo_id, int p_size);

    //constructor wrappers
    WasGoID _wasgo_StyleBoxFlat_constructor();
            
}
#endif