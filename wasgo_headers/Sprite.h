/* THIS FILE IS GENERATED */
#ifndef SPRITE_H
#define SPRITE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Texture.h"
#include "Rect2.h"
#include "Node2D.h"
class Sprite : public Node2D{
public:
int get_frame();
Vector2 get_frame_coords();
int get_hframes();
Texture get_normal_map();
Vector2 get_offset();
Rect2 get_rect();
Rect2 get_region_rect();
Texture get_texture();
int get_vframes();
bool is_centered();
bool is_flipped_h();
bool is_flipped_v();
bool is_pixel_opaque(Vector2 p_pos);
bool is_region();
bool is_region_filter_clip_enabled();
void set_centered(bool p_centered);
void set_flip_h(bool p_flip_h);
void set_flip_v(bool p_flip_v);
void set_frame(int p_frame);
void set_frame_coords(Vector2 p_coords);
void set_hframes(int p_hframes);
void set_normal_map(Texture p_normal_map);
void set_offset(Vector2 p_offset);
void set_region(bool p_enabled);
void set_region_filter_clip(bool p_enabled);
void set_region_rect(Rect2 p_rect);
void set_texture(Texture p_texture);
void set_vframes(int p_vframes);

Sprite(WasGoId p_wasgo_id);
~Sprite();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Sprite_wrapper_get_frame(WasGoId wasgo_id);
WasGoId _wasgo_Sprite_wrapper_get_frame_coords(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_get_hframes(WasGoId wasgo_id);
WasGoId _wasgo_Sprite_wrapper_get_normal_map(WasGoId wasgo_id);
WasGoId _wasgo_Sprite_wrapper_get_offset(WasGoId wasgo_id);
WasGoId _wasgo_Sprite_wrapper_get_rect(WasGoId wasgo_id);
WasGoId _wasgo_Sprite_wrapper_get_region_rect(WasGoId wasgo_id);
WasGoId _wasgo_Sprite_wrapper_get_texture(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_get_vframes(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_is_centered(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_is_flipped_h(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_is_flipped_v(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_is_pixel_opaque(WasGoId wasgo_id, WasGoId p_pos);
int _wasgo_Sprite_wrapper_is_region(WasGoId wasgo_id);
int _wasgo_Sprite_wrapper_is_region_filter_clip_enabled(WasGoId wasgo_id);
void _wasgo_Sprite_wrapper_set_centered(WasGoId wasgo_id, bool p_centered);
void _wasgo_Sprite_wrapper_set_flip_h(WasGoId wasgo_id, bool p_flip_h);
void _wasgo_Sprite_wrapper_set_flip_v(WasGoId wasgo_id, bool p_flip_v);
void _wasgo_Sprite_wrapper_set_frame(WasGoId wasgo_id, int p_frame);
void _wasgo_Sprite_wrapper_set_frame_coords(WasGoId wasgo_id, WasGoId p_coords);
void _wasgo_Sprite_wrapper_set_hframes(WasGoId wasgo_id, int p_hframes);
void _wasgo_Sprite_wrapper_set_normal_map(WasGoId wasgo_id, WasGoId p_normal_map);
void _wasgo_Sprite_wrapper_set_offset(WasGoId wasgo_id, WasGoId p_offset);
void _wasgo_Sprite_wrapper_set_region(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Sprite_wrapper_set_region_filter_clip(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Sprite_wrapper_set_region_rect(WasGoId wasgo_id, WasGoId p_rect);
void _wasgo_Sprite_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);
void _wasgo_Sprite_wrapper_set_vframes(WasGoId wasgo_id, int p_vframes);
}
#endif