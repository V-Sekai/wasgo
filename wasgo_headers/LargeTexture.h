/* THIS FILE IS GENERATED */
#ifndef LARGETEXTURE_H
#define LARGETEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
class LargeTexture : public Texture{
public: LargeTexture();
int add_piece(Vector2 p_ofs, Texture p_texture);
void clear();
int get_piece_count();
Vector2 get_piece_offset(int p_idx);
Texture get_piece_texture(int p_idx);
void set_piece_offset(int p_idx, Vector2 p_ofs);
void set_piece_texture(int p_idx, Texture p_texture);
void set_size(Vector2 p_size);
};
#endif