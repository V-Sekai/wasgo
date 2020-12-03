/* THIS FILE IS GENERATED */
#ifndef FONT_H
#define FONT_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "RID.h"
#include "Resource.h"
#include "ustring.h"
class Font : public Resource{
public:
void draw(RID p_canvas_item, Vector2 p_position, String p_string, Color p_modulate = Color(1,1,1,1), int p_clip_w = (int) -1, Color p_outline_modulate = Color(1,1,1,1));
float draw_char(RID p_canvas_item, Vector2 p_position, int p_char, int p_next = (int) -1, Color p_modulate = Color(1,1,1,1), bool p_outline = (bool) false);
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


//Wrapper Functions
extern "C"{
void _wasgo_Font_wrapper_draw(WasGoId wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_string, int p_string_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, int p_clip_w, const uint8_t * p_outline_modulate, int p_outline_modulate_wasgo_buffer_size);
float _wasgo_Font_wrapper_draw_char(WasGoId wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size, int p_char, int p_next, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, bool p_outline);
float _wasgo_Font_wrapper_get_ascent(WasGoId wasgo_id);
void _wasgo_Font_wrapper_get_char_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_char, int p_next);
float _wasgo_Font_wrapper_get_descent(WasGoId wasgo_id);
float _wasgo_Font_wrapper_get_height(WasGoId wasgo_id);
void _wasgo_Font_wrapper_get_string_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_string, int p_string_wasgo_buffer_size);
void _wasgo_Font_wrapper_get_wordwrap_string_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_string, int p_string_wasgo_buffer_size, float p_width);
int _wasgo_Font_wrapper_has_outline(WasGoId wasgo_id);
int _wasgo_Font_wrapper_is_distance_field_hint(WasGoId wasgo_id);
void _wasgo_Font_wrapper_update_changes(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Font_constructor();
    void _wasgo_Font_destructor(WasGoId p_wasgo_id);
            
}
#endif