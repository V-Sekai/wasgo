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
public:
explicit LargeTexture(WasGoID p_wasgo_id);
explicit LargeTexture(Texture other);
LargeTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_LargeTexture_wrapper_add_piece(WasGoID wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size, WasGoID p_texture);
void _wasgo_LargeTexture_wrapper_clear(WasGoID wasgo_id);
int _wasgo_LargeTexture_wrapper_get_piece_count(WasGoID wasgo_id);
void _wasgo_LargeTexture_wrapper_get_piece_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoID _wasgo_LargeTexture_wrapper_get_piece_texture(WasGoID wasgo_id, int p_idx);
void _wasgo_LargeTexture_wrapper_set_piece_offset(WasGoID wasgo_id, int p_idx, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);
void _wasgo_LargeTexture_wrapper_set_piece_texture(WasGoID wasgo_id, int p_idx, WasGoID p_texture);
void _wasgo_LargeTexture_wrapper_set_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_LargeTexture_constructor();
            
}
#endif