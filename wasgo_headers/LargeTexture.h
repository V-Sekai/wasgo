/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Texture.h"
#include "Vector2.h"
#include "Variant.h"
class LargeTexture : public Texture{
public: LargeTexture();
Array  _get_data();
Array  _get_data();
void  _set_data(Array data);
int  add_piece(Vector2 ofs, Texture texture);
void  clear();
void  clear();
int  get_piece_count();
int  get_piece_count();
Vector2  get_piece_offset(int idx);
Texture  get_piece_texture(int idx);
void  set_piece_offset(int idx, Vector2 ofs);
void  set_piece_texture(int idx, Texture texture);
void  set_size(Vector2 size);
};