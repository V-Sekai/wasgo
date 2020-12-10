/* THIS FILE IS GENERATED */
#ifndef SPRITE_H
#define SPRITE_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Vector2.h"
#include "Texture.h"
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

protected:
public:
explicit Sprite(WasGoID p_wasgo_id);
explicit Sprite(Node2D other);
Sprite();
Sprite new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Sprite_wrapper_get_frame(WasGoID wasgo_id);
void _wasgo_Sprite_wrapper_get_frame_coords(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Sprite_wrapper_get_hframes(WasGoID wasgo_id);
WasGoID _wasgo_Sprite_wrapper_get_normal_map(WasGoID wasgo_id);
void _wasgo_Sprite_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Sprite_wrapper_get_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Sprite_wrapper_get_region_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Sprite_wrapper_get_texture(WasGoID wasgo_id);
int _wasgo_Sprite_wrapper_get_vframes(WasGoID wasgo_id);
int _wasgo_Sprite_wrapper_is_centered(WasGoID wasgo_id);
int _wasgo_Sprite_wrapper_is_flipped_h(WasGoID wasgo_id);
int _wasgo_Sprite_wrapper_is_flipped_v(WasGoID wasgo_id);
int _wasgo_Sprite_wrapper_is_pixel_opaque(WasGoID wasgo_id, const uint8_t * p_pos, int p_pos_wasgo_buffer_size);
int _wasgo_Sprite_wrapper_is_region(WasGoID wasgo_id);
int _wasgo_Sprite_wrapper_is_region_filter_clip_enabled(WasGoID wasgo_id);
void _wasgo_Sprite_wrapper_set_centered(WasGoID wasgo_id, bool p_centered);
void _wasgo_Sprite_wrapper_set_flip_h(WasGoID wasgo_id, bool p_flip_h);
void _wasgo_Sprite_wrapper_set_flip_v(WasGoID wasgo_id, bool p_flip_v);
void _wasgo_Sprite_wrapper_set_frame(WasGoID wasgo_id, int p_frame);
void _wasgo_Sprite_wrapper_set_frame_coords(WasGoID wasgo_id, const uint8_t * p_coords, int p_coords_wasgo_buffer_size);
void _wasgo_Sprite_wrapper_set_hframes(WasGoID wasgo_id, int p_hframes);
void _wasgo_Sprite_wrapper_set_normal_map(WasGoID wasgo_id, WasGoID p_normal_map);
void _wasgo_Sprite_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_Sprite_wrapper_set_region(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Sprite_wrapper_set_region_filter_clip(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Sprite_wrapper_set_region_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Sprite_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Sprite_wrapper_set_vframes(WasGoID wasgo_id, int p_vframes);

    //constructor wrappers
    WasGoID _wasgo_Sprite_constructor();
            
}
#endif