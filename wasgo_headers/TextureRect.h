/* THIS FILE IS GENERATED */
#ifndef TEXTURERECT_H
#define TEXTURERECT_H

#include <stdint.h>

#include "Control.h"
#include "Texture.h"
class TextureRect : public Control{
public: TextureRect();
enum StretchMode{
STRETCH_SCALE_ON_EXPAND: 0,
STRETCH_SCALE: 1,
STRETCH_TILE: 2,
STRETCH_KEEP: 3,
STRETCH_KEEP_CENTERED: 4,
STRETCH_KEEP_ASPECT: 5,
STRETCH_KEEP_ASPECT_CENTERED: 6,
};
void  _texture_changed();
void  _texture_changed();
enum.TextureRect::StretchMode  get_stretch_mode();
enum.TextureRect::StretchMode  get_stretch_mode();
Texture  get_texture();
Texture  get_texture();
bool  has_expand();
bool  has_expand();
bool  is_flipped_h();
bool  is_flipped_h();
bool  is_flipped_v();
bool  is_flipped_v();
void  set_expand(bool enable);
void  set_flip_h(bool enable);
void  set_flip_v(bool enable);
void  set_stretch_mode(int stretch_mode);
void  set_texture(Texture texture);
};
#endif