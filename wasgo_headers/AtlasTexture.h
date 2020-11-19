/* THIS FILE IS GENERATED */
#ifndef ATLASTEXTURE_H
#define ATLASTEXTURE_H

#include <stdint.h>

#include "Texture.h"
#include "Rect2.h"
class AtlasTexture : public Texture{
public: AtlasTexture();
Texture  get_atlas();
Texture  get_atlas();
Rect2  get_margin();
Rect2  get_margin();
Rect2  get_region();
Rect2  get_region();
bool  has_filter_clip();
bool  has_filter_clip();
void  set_atlas(Texture atlas);
void  set_filter_clip(bool enable);
void  set_margin(Rect2 margin);
void  set_region(Rect2 region);
};
#endif