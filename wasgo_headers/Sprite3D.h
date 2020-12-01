/* THIS FILE IS GENERATED */
#ifndef SPRITE3D_H
#define SPRITE3D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Texture.h"
#include "Rect2.h"
#include "SpriteBase3D.h"
class Sprite3D : public SpriteBase3D{
public:
int get_frame();
Vector2 get_frame_coords();
int get_hframes();
Rect2 get_region_rect();
Texture get_texture();
int get_vframes();
bool is_region();
void set_frame(int p_frame);
void set_frame_coords(Vector2 p_coords);
void set_hframes(int p_hframes);
void set_region(bool p_enabled);
void set_region_rect(Rect2 p_rect);
void set_texture(Texture p_texture);
void set_vframes(int p_vframes);

Sprite3D(WasGoId p_wasgo_id);
~Sprite3D();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Sprite3D_wrapper_get_frame(WasGoId wasgo_id);
WasGoId _wasgo_Sprite3D_wrapper_get_frame_coords(WasGoId wasgo_id);
int _wasgo_Sprite3D_wrapper_get_hframes(WasGoId wasgo_id);
WasGoId _wasgo_Sprite3D_wrapper_get_region_rect(WasGoId wasgo_id);
WasGoId _wasgo_Sprite3D_wrapper_get_texture(WasGoId wasgo_id);
int _wasgo_Sprite3D_wrapper_get_vframes(WasGoId wasgo_id);
int _wasgo_Sprite3D_wrapper_is_region(WasGoId wasgo_id);
void _wasgo_Sprite3D_wrapper_set_frame(WasGoId wasgo_id, int p_frame);
void _wasgo_Sprite3D_wrapper_set_frame_coords(WasGoId wasgo_id, WasGoId p_coords);
void _wasgo_Sprite3D_wrapper_set_hframes(WasGoId wasgo_id, int p_hframes);
void _wasgo_Sprite3D_wrapper_set_region(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Sprite3D_wrapper_set_region_rect(WasGoId wasgo_id, WasGoId p_rect);
void _wasgo_Sprite3D_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);
void _wasgo_Sprite3D_wrapper_set_vframes(WasGoId wasgo_id, int p_vframes);
}
#endif