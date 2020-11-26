/* THIS FILE IS GENERATED */
#ifndef SPRITE3D_H
#define SPRITE3D_H

#include <stdint.h>

#include "Vector2.h"
#include "SpriteBase3D.h"
#include "Texture.h"
#include "Rect2.h"
class Sprite3D : public SpriteBase3D{
public: Sprite3D();
int  get_frame();
int  get_frame();
Vector2  get_frame_coords();
Vector2  get_frame_coords();
int  get_hframes();
int  get_hframes();
Rect2  get_region_rect();
Rect2  get_region_rect();
Texture  get_texture();
Texture  get_texture();
int  get_vframes();
int  get_vframes();
bool  is_region();
bool  is_region();
void  set_frame(int frame);
void  set_frame_coords(Vector2 coords);
void  set_hframes(int hframes);
void  set_region(bool enabled);
void  set_region_rect(Rect2 rect);
void  set_texture(Texture texture);
void  set_vframes(int vframes);
};
#endif