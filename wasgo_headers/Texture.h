/* THIS FILE IS GENERATED */
#ifndef TEXTURE_H
#define TEXTURE_H

#include <stdint.h>

#include "Vector2.h"
#include "Rect2.h"
#include "Resource.h"
#include "Image.h"
#include "RID.h"
#include "Variant.h"
class Texture : public Resource{
public: Texture();
enum Flags{
FLAG_MIPMAPS: 1,
FLAG_REPEAT: 2,
FLAG_FILTER: 4,
FLAGS_DEFAULT: 7,
FLAG_ANISOTROPIC_FILTER: 8,
FLAG_CONVERT_TO_LINEAR: 16,
FLAG_MIRRORED_REPEAT: 32,
};
void  draw(RID canvas_item, Vector2 position, Color modulate = 1,1,1,1, bool transpose = false, Texture normal_map = null);
void  draw_rect(RID canvas_item, Rect2 rect, bool tile, Color modulate = 1,1,1,1, bool transpose = false, Texture normal_map = null);
void  draw_rect_region(RID canvas_item, Rect2 rect, Rect2 src_rect, Color modulate = 1,1,1,1, bool transpose = false, Texture normal_map = null, bool clip_uv = true);
Image  get_data();
Image  get_data();
int  get_flags();
int  get_flags();
int  get_height();
int  get_height();
Vector2  get_size();
Vector2  get_size();
int  get_width();
int  get_width();
bool  has_alpha();
bool  has_alpha();
void  set_flags(int flags);
};
#endif