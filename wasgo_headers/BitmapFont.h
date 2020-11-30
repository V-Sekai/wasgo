/* THIS FILE IS GENERATED */
#ifndef BITMAPFONT_H
#define BITMAPFONT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Font.h"
#include "Texture.h"
#include "Error.h"
class BitmapFont : public Font{
void add_char(int p_character, int p_texture, Rect2 p_rect, Vector2 p_align = (Vector2) (0, 0), float p_advance = (float) -1);
void add_kerning_pair(int p_char_a, int p_char_b, int p_kerning);
void add_texture(Texture p_texture);
void clear();
Error create_from_fnt(String p_path);
int get_kerning_pair(int p_char_a, int p_char_b);
Texture get_texture(int p_idx);
int get_texture_count();
void set_ascent(float p_px);
void set_distance_field_hint(bool p_enable);
void set_height(float p_px);

BitmapFont(WasGoId p_wasgo_id);
~BitmapFont();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BitmapFont_wrapper_add_char(WasGoId wasgo_id, int p_character, int p_texture, WasGo::WasGoId p_rect, WasGo::WasGoId p_align, float p_advance);
void _wasgo_BitmapFont_wrapper_add_kerning_pair(WasGoId wasgo_id, int p_char_a, int p_char_b, int p_kerning);
void _wasgo_BitmapFont_wrapper_add_texture(WasGoId wasgo_id, WasGo::WasGoId p_texture);
void _wasgo_BitmapFont_wrapper_clear(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_BitmapFont_wrapper_create_from_fnt(WasGoId wasgo_id, WasGo::WasGoId p_path);
int _wasgo_BitmapFont_wrapper_get_kerning_pair(WasGoId wasgo_id, int p_char_a, int p_char_b);
WasGo::WasGoId _wasgo_BitmapFont_wrapper_get_texture(WasGoId wasgo_id, int p_idx);
int _wasgo_BitmapFont_wrapper_get_texture_count(WasGoId wasgo_id);
void _wasgo_BitmapFont_wrapper_set_ascent(WasGoId wasgo_id, float p_px);
void _wasgo_BitmapFont_wrapper_set_distance_field_hint(WasGoId wasgo_id, bool p_enable);
void _wasgo_BitmapFont_wrapper_set_height(WasGoId wasgo_id, float p_px);
}
#endif