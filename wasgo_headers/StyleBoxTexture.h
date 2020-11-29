/* THIS FILE IS GENERATED */
#ifndef STYLEBOXTEXTURE_H
#define STYLEBOXTEXTURE_H

#include "stdint.h"

#include "Margin.h"
#include "Texture.h"
#include "StyleBox.h"
#include "Variant.h"
class StyleBoxTexture : public StyleBox{
public: StyleBoxTexture();
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
};
#endif