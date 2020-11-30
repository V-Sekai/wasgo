/* THIS FILE IS GENERATED */
#ifndef STYLEBOX_H
#define STYLEBOX_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Margin.h"
#include "Resource.h"
#include "CanvasItem.h"
class StyleBox : public Resource{
void draw(RID p_canvas_item, Rect2 p_rect);
Vector2 get_center_size();
CanvasItem get_current_item_drawn();
float get_default_margin(Margin p_margin);
float get_margin(Margin p_margin);
Vector2 get_minimum_size();
Vector2 get_offset();
void set_default_margin(Margin p_margin, float p_offset);
bool test_mask(Vector2 p_point, Rect2 p_rect);
};


//Wrapper Functions
extern "C"{
void _wasgo_StyleBox_wrapper_draw(WasGoId wasgo_id, WasGo::WasGoId p_canvas_item, WasGo::WasGoId p_rect);
WasGo::WasGoId _wasgo_StyleBox_wrapper_get_center_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StyleBox_wrapper_get_current_item_drawn(WasGoId wasgo_id);
float _wasgo_StyleBox_wrapper_get_default_margin(WasGoId wasgo_id, WasGo::WasGoId p_margin);
float _wasgo_StyleBox_wrapper_get_margin(WasGoId wasgo_id, WasGo::WasGoId p_margin);
WasGo::WasGoId _wasgo_StyleBox_wrapper_get_minimum_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StyleBox_wrapper_get_offset(WasGoId wasgo_id);
void _wasgo_StyleBox_wrapper_set_default_margin(WasGoId wasgo_id, WasGo::WasGoId p_margin, float p_offset);
int _wasgo_StyleBox_wrapper_test_mask(WasGoId wasgo_id, WasGo::WasGoId p_point, WasGo::WasGoId p_rect);
}
#endif