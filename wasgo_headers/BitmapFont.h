/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Font.h"
#include "PoolIntArray.h"
#include "Texture.h"
#include "Vector2.h"
#include "Variant.h"
#include "Erro.h"
#include "Rect2.h"
class BitmapFont : public Font{
public: BitmapFont();
PoolIntArray  _get_chars();
PoolIntArray  _get_chars();
PoolIntArray  _get_kernings();
PoolIntArray  _get_kernings();
Array  _get_textures();
Array  _get_textures();
void  _set_chars(PoolIntArray arg0);
void  _set_kernings(PoolIntArray arg0);
void  _set_textures(Array arg0);
void  add_char(int character, int texture, Rect2 rect, Vector2 align = (0, 0), float advance = -1);
void  add_kerning_pair(int char_a, int char_b, int kerning);
void  add_texture(Texture texture);
void  clear();
void  clear();
enum.Error  create_from_fnt(String path);
Vector2  get_char_size(int char, int next = 0);
BitmapFont  get_fallback();
BitmapFont  get_fallback();
int  get_kerning_pair(int char_a, int char_b);
Texture  get_texture(int idx);
int  get_texture_count();
int  get_texture_count();
void  set_ascent(float px);
void  set_distance_field_hint(bool enable);
void  set_fallback(BitmapFont fallback);
void  set_height(float px);
};