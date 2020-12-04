/* THIS FILE IS GENERATED */
#ifndef STYLEBOX_H
#define STYLEBOX_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Resource.h"
#include "CanvasItem.h"
#include "RID.h"
#include "Rect2.h"
#include "Margin.h"
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
void _wasgo_StyleBox_wrapper_draw(WasGoID wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_StyleBox_wrapper_get_center_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_StyleBox_wrapper_get_current_item_drawn(WasGoID wasgo_id);
float _wasgo_StyleBox_wrapper_get_default_margin(WasGoID wasgo_id, WasGoID p_margin);
float _wasgo_StyleBox_wrapper_get_margin(WasGoID wasgo_id, WasGoID p_margin);
void _wasgo_StyleBox_wrapper_get_minimum_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_StyleBox_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_StyleBox_wrapper_set_default_margin(WasGoID wasgo_id, WasGoID p_margin, float p_offset);
int _wasgo_StyleBox_wrapper_test_mask(WasGoID wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_StyleBox_constructor();
            
}
#endif