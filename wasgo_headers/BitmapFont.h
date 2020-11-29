/* THIS FILE IS GENERATED */
#ifndef BITMAPFONT_H
#define BITMAPFONT_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "Font.h"
#include "Error.h"
class BitmapFont : public Font{
public: BitmapFont();
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
};
#endif