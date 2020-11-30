/* THIS FILE IS GENERATED */
#ifndef STYLEBOXTEXTURE_H
#define STYLEBOXTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "StyleBox.h"
#include "Margin.h"
#include "Texture.h"
class StyleBoxTexture : public StyleBox{
enum AxisStretchMode{
AXIS_STRETCH_MODE_STRETCH,
AXIS_STRETCH_MODE_TILE,
AXIS_STRETCH_MODE_TILE_FIT
};
float get_expand_margin_size(Margin p_margin);
StyleBoxTexture::AxisStretchMode get_h_axis_stretch_mode();
float get_margin_size(Margin p_margin);
Color get_modulate();
Texture get_normal_map();
Rect2 get_region_rect();
Texture get_texture();
StyleBoxTexture::AxisStretchMode get_v_axis_stretch_mode();
bool is_draw_center_enabled();
void set_draw_center(bool p_enable);
void set_expand_margin_all(float p_size);
void set_expand_margin_individual(float p_size_left, float p_size_top, float p_size_right, float p_size_bottom);
void set_expand_margin_size(Margin p_margin, float p_size);
void set_h_axis_stretch_mode(StyleBoxTexture::AxisStretchMode p_mode);
void set_margin_size(Margin p_margin, float p_size);
void set_modulate(Color p_color);
void set_normal_map(Texture p_normal_map);
void set_region_rect(Rect2 p_region);
void set_texture(Texture p_texture);
void set_v_axis_stretch_mode(StyleBoxTexture::AxisStretchMode p_mode);

StyleBoxTexture(WasGoId p_wasgo_id);
~StyleBoxTexture();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_StyleBoxTexture_wrapper_get_expand_margin_size(WasGoId wasgo_id, WasGo::WasGoId p_margin);
WasGo::WasGoId _wasgo_StyleBoxTexture_wrapper_get_h_axis_stretch_mode(WasGoId wasgo_id);
float _wasgo_StyleBoxTexture_wrapper_get_margin_size(WasGoId wasgo_id, WasGo::WasGoId p_margin);
WasGo::WasGoId _wasgo_StyleBoxTexture_wrapper_get_modulate(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StyleBoxTexture_wrapper_get_normal_map(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StyleBoxTexture_wrapper_get_region_rect(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StyleBoxTexture_wrapper_get_texture(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StyleBoxTexture_wrapper_get_v_axis_stretch_mode(WasGoId wasgo_id);
int _wasgo_StyleBoxTexture_wrapper_is_draw_center_enabled(WasGoId wasgo_id);
void _wasgo_StyleBoxTexture_wrapper_set_draw_center(WasGoId wasgo_id, bool p_enable);
void _wasgo_StyleBoxTexture_wrapper_set_expand_margin_all(WasGoId wasgo_id, float p_size);
void _wasgo_StyleBoxTexture_wrapper_set_expand_margin_individual(WasGoId wasgo_id, float p_size_left, float p_size_top, float p_size_right, float p_size_bottom);
void _wasgo_StyleBoxTexture_wrapper_set_expand_margin_size(WasGoId wasgo_id, WasGo::WasGoId p_margin, float p_size);
void _wasgo_StyleBoxTexture_wrapper_set_h_axis_stretch_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
void _wasgo_StyleBoxTexture_wrapper_set_margin_size(WasGoId wasgo_id, WasGo::WasGoId p_margin, float p_size);
void _wasgo_StyleBoxTexture_wrapper_set_modulate(WasGoId wasgo_id, WasGo::WasGoId p_color);
void _wasgo_StyleBoxTexture_wrapper_set_normal_map(WasGoId wasgo_id, WasGo::WasGoId p_normal_map);
void _wasgo_StyleBoxTexture_wrapper_set_region_rect(WasGoId wasgo_id, WasGo::WasGoId p_region);
void _wasgo_StyleBoxTexture_wrapper_set_texture(WasGoId wasgo_id, WasGo::WasGoId p_texture);
void _wasgo_StyleBoxTexture_wrapper_set_v_axis_stretch_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
}
#endif