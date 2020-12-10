/* THIS FILE IS GENERATED */
#ifndef BITMAPFONT_H
#define BITMAPFONT_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Ustring.h"
#include "error_list.h"
#include "Font.h"
#include "Vector2.h"
#include "Texture.h"
class BitmapFont : public Font{
public:
void add_char(int p_character, int p_texture, Rect2 p_rect, Vector2 p_align = Vector2(0, 0), float p_advance = (float) -1);
void add_kerning_pair(int p_char_a, int p_char_b, int p_kerning);
void add_texture(Texture p_texture);
void clear();
Error create_from_fnt(String p_path);
BitmapFont get_fallback();
int get_kerning_pair(int p_char_a, int p_char_b);
Texture get_texture(int p_idx);
int get_texture_count();
void set_ascent(float p_px);
void set_distance_field_hint(bool p_enable);
void set_fallback(BitmapFont p_fallback);
void set_height(float p_px);

protected:
public:
explicit BitmapFont(WasGoID p_wasgo_id);
explicit BitmapFont(Font other);
BitmapFont();
BitmapFont new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BitmapFont_wrapper_add_char(WasGoID wasgo_id, int p_character, int p_texture, int wasgo_throwaway, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, const uint8_t * p_align, int p_align_wasgo_buffer_size, float p_advance);
void _wasgo_BitmapFont_wrapper_add_kerning_pair(WasGoID wasgo_id, int p_char_a, int p_char_b, int wasgo_throwaway, int p_kerning);
void _wasgo_BitmapFont_wrapper_add_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_BitmapFont_wrapper_clear(WasGoID wasgo_id);
WasGoID _wasgo_BitmapFont_wrapper_create_from_fnt(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_BitmapFont_wrapper_get_fallback(WasGoID wasgo_id);
int _wasgo_BitmapFont_wrapper_get_kerning_pair(WasGoID wasgo_id, int p_char_a, int p_char_b);
WasGoID _wasgo_BitmapFont_wrapper_get_texture(WasGoID wasgo_id, int p_idx);
int _wasgo_BitmapFont_wrapper_get_texture_count(WasGoID wasgo_id);
void _wasgo_BitmapFont_wrapper_set_ascent(WasGoID wasgo_id, float p_px);
void _wasgo_BitmapFont_wrapper_set_distance_field_hint(WasGoID wasgo_id, bool p_enable);
void _wasgo_BitmapFont_wrapper_set_fallback(WasGoID wasgo_id, WasGoID p_fallback);
void _wasgo_BitmapFont_wrapper_set_height(WasGoID wasgo_id, float p_px);

    //constructor wrappers
    WasGoID _wasgo_BitmapFont_constructor();
            
}
#endif