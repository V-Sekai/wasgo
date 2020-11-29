/* THIS FILE IS GENERATED */
#ifndef STYLEBOX_H
#define STYLEBOX_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Margin.h"
#include "CanvasItem.h"
class StyleBox : public Resource{
public: StyleBox();
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
#endif