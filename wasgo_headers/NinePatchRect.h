/* THIS FILE IS GENERATED */
#ifndef NINEPATCHRECT_H
#define NINEPATCHRECT_H

#include "stdint.h"

#include "Margin.h"
#include "Texture.h"
#include "Control.h"
#include "Variant.h"
class NinePatchRect : public Control{
public: NinePatchRect();
enum AxisStretchMode{
AXIS_STRETCH_MODE_STRETCH,
AXIS_STRETCH_MODE_TILE,
AXIS_STRETCH_MODE_TILE_FIT
};
NinePatchRect::AxisStretchMode get_h_axis_stretch_mode();
int get_patch_margin(Margin p_margin);
Rect2 get_region_rect();
Texture get_texture();
NinePatchRect::AxisStretchMode get_v_axis_stretch_mode();
bool is_draw_center_enabled();
void set_draw_center(bool p_draw_center);
void set_h_axis_stretch_mode(NinePatchRect::AxisStretchMode p_mode);
void set_patch_margin(Margin p_margin, int p_value);
void set_region_rect(Rect2 p_rect);
void set_texture(Texture p_texture);
void set_v_axis_stretch_mode(NinePatchRect::AxisStretchMode p_mode);
};
#endif