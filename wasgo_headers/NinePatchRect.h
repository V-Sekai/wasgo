/* THIS FILE IS GENERATED */
#ifndef NINEPATCHRECT_H
#define NINEPATCHRECT_H

#include <stdint.h>

#include "Texture.h"
#include "Rect2.h"
#include "Control.h"
class NinePatchRect : public Control{
public: NinePatchRect();
enum AxisStretchMode{
AXIS_STRETCH_MODE_STRETCH: 0,
AXIS_STRETCH_MODE_TILE: 1,
};
enum.NinePatchRect::AxisStretchMode  get_h_axis_stretch_mode();
enum.NinePatchRect::AxisStretchMode  get_h_axis_stretch_mode();
int  get_patch_margin(int margin);
Rect2  get_region_rect();
Rect2  get_region_rect();
Texture  get_texture();
Texture  get_texture();
enum.NinePatchRect::AxisStretchMode  get_v_axis_stretch_mode();
enum.NinePatchRect::AxisStretchMode  get_v_axis_stretch_mode();
bool  is_draw_center_enabled();
bool  is_draw_center_enabled();
void  set_draw_center(bool draw_center);
void  set_h_axis_stretch_mode(int mode);
void  set_patch_margin(int margin, int value);
void  set_region_rect(Rect2 rect);
void  set_texture(Texture texture);
void  set_v_axis_stretch_mode(int mode);
};
#endif