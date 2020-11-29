/* THIS FILE IS GENERATED */
#ifndef FONT_H
#define FONT_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Font : public Resource{
public: Font();
void draw(RID p_canvas_item, Vector2 p_position, String p_string, Color p_modulate = (Color) 1,1,1,1, int p_clip_w = (int) -1, Color p_outline_modulate = (Color) 1,1,1,1);
float draw_char(RID p_canvas_item, Vector2 p_position, int p_char, int p_next = (int) -1, Color p_modulate = (Color) 1,1,1,1, bool p_outline = (bool) False);
float get_ascent();
Vector2 get_char_size(int p_char, int p_next = (int) 0);
float get_descent();
float get_height();
Vector2 get_string_size(String p_string);
Vector2 get_wordwrap_string_size(String p_string, float p_width);
bool has_outline();
bool is_distance_field_hint();
void update_changes();
};
#endif