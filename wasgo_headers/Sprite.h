/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Texture.h"
#include "Node2D.h"
#include "Vector2.h"
#include "Rect2.h"
class Sprite : public Node2D{
public: Sprite();
void  _texture_changed();
void  _texture_changed();
int  get_frame();
int  get_frame();
Vector2  get_frame_coords();
Vector2  get_frame_coords();
int  get_hframes();
int  get_hframes();
Texture  get_normal_map();
Texture  get_normal_map();
Vector2  get_offset();
Vector2  get_offset();
Rect2  get_rect();
Rect2  get_rect();
Rect2  get_region_rect();
Rect2  get_region_rect();
Texture  get_texture();
Texture  get_texture();
int  get_vframes();
int  get_vframes();
bool  is_centered();
bool  is_centered();
bool  is_flipped_h();
bool  is_flipped_h();
bool  is_flipped_v();
bool  is_flipped_v();
bool  is_pixel_opaque(Vector2 pos);
bool  is_region();
bool  is_region();
bool  is_region_filter_clip_enabled();
bool  is_region_filter_clip_enabled();
void  set_centered(bool centered);
void  set_flip_h(bool flip_h);
void  set_flip_v(bool flip_v);
void  set_frame(int frame);
void  set_frame_coords(Vector2 coords);
void  set_hframes(int hframes);
void  set_normal_map(Texture normal_map);
void  set_offset(Vector2 offset);
void  set_region(bool enabled);
void  set_region_filter_clip(bool enabled);
void  set_region_rect(Rect2 rect);
void  set_texture(Texture texture);
void  set_vframes(int vframes);
};