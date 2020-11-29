/* THIS FILE IS GENERATED */
#ifndef SPRITE3D_H
#define SPRITE3D_H

#include "stdint.h"

#include "SpriteBase3D.h"
#include "Variant.h"
#include "Texture.h"
class Sprite3D : public SpriteBase3D{
public: Sprite3D();
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
};
#endif