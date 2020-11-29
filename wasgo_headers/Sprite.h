/* THIS FILE IS GENERATED */
#ifndef SPRITE_H
#define SPRITE_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
#include "Texture.h"
class Sprite : public Node2D{
public: Sprite();
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
};
#endif