/* THIS FILE IS GENERATED */
#ifndef STYLEBOXTEXTURE_H
#define STYLEBOXTEXTURE_H

#include <stdint.h>

#include "Rect2.h"
#include "StyleBox.h"
#include "Texture.h"
#include "Variant.h"
class StyleBoxTexture : public StyleBox{
public: StyleBoxTexture();
enum AxisStretchMode{
AXIS_STRETCH_MODE_STRETCH: 0,
AXIS_STRETCH_MODE_TILE: 1,
};
float  get_expand_margin_size(int margin);
enum.StyleBoxTexture::AxisStretchMode  get_h_axis_stretch_mode();
enum.StyleBoxTexture::AxisStretchMode  get_h_axis_stretch_mode();
float  get_margin_size(int margin);
Color  get_modulate();
Color  get_modulate();
Texture  get_normal_map();
Texture  get_normal_map();
Rect2  get_region_rect();
Rect2  get_region_rect();
Texture  get_texture();
Texture  get_texture();
enum.StyleBoxTexture::AxisStretchMode  get_v_axis_stretch_mode();
enum.StyleBoxTexture::AxisStretchMode  get_v_axis_stretch_mode();
bool  is_draw_center_enabled();
bool  is_draw_center_enabled();
void  set_draw_center(bool enable);
void  set_expand_margin_all(float size);
void  set_expand_margin_individual(float size_left, float size_top, float size_right, float size_bottom);
void  set_expand_margin_size(int margin, float size);
void  set_h_axis_stretch_mode(int mode);
void  set_margin_size(int margin, float size);
void  set_modulate(Color color);
void  set_normal_map(Texture normal_map);
void  set_region_rect(Rect2 region);
void  set_texture(Texture texture);
void  set_v_axis_stretch_mode(int mode);
};
#endif