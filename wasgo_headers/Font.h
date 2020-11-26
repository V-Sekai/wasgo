/* THIS FILE IS GENERATED */
#ifndef FONT_H
#define FONT_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Resource.h"
#include "RID.h"
#include "Variant.h"
class Font : public Resource{
public: Font();
void  draw(RID canvas_item, Vector2 position, String string, Color modulate = 1,1,1,1, int clip_w = -1, Color outline_modulate = 1,1,1,1);
float  draw_char(RID canvas_item, Vector2 position, int char, int next = -1, Color modulate = 1,1,1,1, bool outline = false);
float  get_ascent();
float  get_ascent();
float  get_descent();
float  get_descent();
float  get_height();
float  get_height();
Vector2  get_string_size(String string);
Vector2  get_wordwrap_string_size(String string, float width);
bool  has_outline();
bool  has_outline();
bool  is_distance_field_hint();
bool  is_distance_field_hint();
void  update_changes();
void  update_changes();
};
#endif