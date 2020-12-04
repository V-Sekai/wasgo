/* THIS FILE IS GENERATED */
#ifndef LARGETEXTURE_H
#define LARGETEXTURE_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Vector2.h"
class LargeTexture : public Texture{
public:
int add_piece(Vector2 p_ofs, Texture p_texture);
void clear();
int get_piece_count();
Vector2 get_piece_offset(int p_idx);
Texture get_piece_texture(int p_idx);
void set_piece_offset(int p_idx, Vector2 p_ofs);
void set_piece_texture(int p_idx, Texture p_texture);
void set_size(Vector2 p_size);

protected:
LargeTexture(WasGoId p_wasgo_id);
public:
LargeTexture();
~LargeTexture();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_LargeTexture_wrapper_add_piece(WasGoId wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size, WasGoId p_texture);
void _wasgo_LargeTexture_wrapper_clear(WasGoId wasgo_id);
int _wasgo_LargeTexture_wrapper_get_piece_count(WasGoId wasgo_id);
void _wasgo_LargeTexture_wrapper_get_piece_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoId _wasgo_LargeTexture_wrapper_get_piece_texture(WasGoId wasgo_id, int p_idx);
void _wasgo_LargeTexture_wrapper_set_piece_offset(WasGoId wasgo_id, int p_idx, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);
void _wasgo_LargeTexture_wrapper_set_piece_texture(WasGoId wasgo_id, int p_idx, WasGoId p_texture);
void _wasgo_LargeTexture_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_LargeTexture_constructor();
    void _wasgo_LargeTexture_destructor(WasGoId p_wasgo_id);
            
}
#endif