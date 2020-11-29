/* THIS FILE IS GENERATED */
#ifndef TEXTURE_H
#define TEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Image.h"
class Texture : public Resource{
public: Texture();
enum Flags{
FLAGS_DEFAULT,
FLAG_MIPMAPS,
FLAG_REPEAT,
FLAG_FILTER,
FLAG_ANISOTROPIC_FILTER,
FLAG_CONVERT_TO_LINEAR,
FLAG_MIRRORED_REPEAT,
FLAG_VIDEO_SURFACE
};
void draw(RID p_canvas_item, Vector2 p_position, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, Texture p_normal_map = (Texture) "");
void draw_rect(RID p_canvas_item, Rect2 p_rect, bool p_tile, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, Texture p_normal_map = (Texture) "");
void draw_rect_region(RID p_canvas_item, Rect2 p_rect, Rect2 p_src_rect, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, Texture p_normal_map = (Texture) "", bool p_clip_uv = (bool) True);
Image get_data();
int get_flags();
int get_height();
Vector2 get_size();
int get_width();
bool has_alpha();
void set_flags(int p_flags);
};
#endif