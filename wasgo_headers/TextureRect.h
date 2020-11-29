/* THIS FILE IS GENERATED */
#ifndef TEXTURERECT_H
#define TEXTURERECT_H

#include "stdint.h"

#include "Texture.h"
#include "Control.h"
class TextureRect : public Control{
public: TextureRect();
enum StretchMode{
STRETCH_SCALE_ON_EXPAND,
STRETCH_SCALE,
STRETCH_TILE,
STRETCH_KEEP,
STRETCH_KEEP_CENTERED,
STRETCH_KEEP_ASPECT,
STRETCH_KEEP_ASPECT_CENTERED,
STRETCH_KEEP_ASPECT_COVERED
};
TextureRect::StretchMode get_stretch_mode();
Texture get_texture();
bool has_expand();
bool is_flipped_h();
bool is_flipped_v();
void set_expand(bool p_enable);
void set_flip_h(bool p_enable);
void set_flip_v(bool p_enable);
void set_stretch_mode(TextureRect::StretchMode p_stretch_mode);
void set_texture(Texture p_texture);
};
#endif