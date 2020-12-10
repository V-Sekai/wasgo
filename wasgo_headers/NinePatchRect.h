/* THIS FILE IS GENERATED */
#ifndef NINEPATCHRECT_H
#define NINEPATCHRECT_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "math_defs.h"
#include "Control.h"
#include "Texture.h"
class NinePatchRect : public Control{
public:
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

protected:
public:
explicit NinePatchRect(WasGoID p_wasgo_id);
explicit NinePatchRect(Control other);
NinePatchRect();
NinePatchRect new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_NinePatchRect_wrapper_get_h_axis_stretch_mode(WasGoID wasgo_id);
int _wasgo_NinePatchRect_wrapper_get_patch_margin(WasGoID wasgo_id, WasGoID p_margin);
void _wasgo_NinePatchRect_wrapper_get_region_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_NinePatchRect_wrapper_get_texture(WasGoID wasgo_id);
WasGoID _wasgo_NinePatchRect_wrapper_get_v_axis_stretch_mode(WasGoID wasgo_id);
int _wasgo_NinePatchRect_wrapper_is_draw_center_enabled(WasGoID wasgo_id);
void _wasgo_NinePatchRect_wrapper_set_draw_center(WasGoID wasgo_id, bool p_draw_center);
void _wasgo_NinePatchRect_wrapper_set_h_axis_stretch_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_NinePatchRect_wrapper_set_patch_margin(WasGoID wasgo_id, WasGoID p_margin, int p_value);
void _wasgo_NinePatchRect_wrapper_set_region_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_NinePatchRect_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_NinePatchRect_wrapper_set_v_axis_stretch_mode(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_NinePatchRect_constructor();
            
}
#endif