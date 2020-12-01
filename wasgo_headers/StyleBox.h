/* THIS FILE IS GENERATED */
#ifndef STYLEBOX_H
#define STYLEBOX_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Margin.h"
#include "RID.h"
#include "Vector2.h"
#include "Rect2.h"
#include "CanvasItem.h"
#include "Resource.h"
class StyleBox : public Resource{
public:
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
void _wasgo_StyleBox_wrapper_draw(WasGoId wasgo_id, WasGoId p_canvas_item, WasGoId p_rect);
WasGoId _wasgo_StyleBox_wrapper_get_center_size(WasGoId wasgo_id);
WasGoId _wasgo_StyleBox_wrapper_get_current_item_drawn(WasGoId wasgo_id);
float _wasgo_StyleBox_wrapper_get_default_margin(WasGoId wasgo_id, WasGoId p_margin);
float _wasgo_StyleBox_wrapper_get_margin(WasGoId wasgo_id, WasGoId p_margin);
WasGoId _wasgo_StyleBox_wrapper_get_minimum_size(WasGoId wasgo_id);
WasGoId _wasgo_StyleBox_wrapper_get_offset(WasGoId wasgo_id);
void _wasgo_StyleBox_wrapper_set_default_margin(WasGoId wasgo_id, WasGoId p_margin, float p_offset);
int _wasgo_StyleBox_wrapper_test_mask(WasGoId wasgo_id, WasGoId p_point, WasGoId p_rect);
}
#endif