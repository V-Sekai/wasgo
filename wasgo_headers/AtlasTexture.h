/* THIS FILE IS GENERATED */
#ifndef ATLASTEXTURE_H
#define ATLASTEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
class AtlasTexture : public Texture{
public: AtlasTexture();
Texture get_atlas();
Rect2 get_margin();
Rect2 get_region();
bool has_filter_clip();
void set_atlas(Texture p_atlas);
void set_filter_clip(bool p_enable);
void set_margin(Rect2 p_margin);
void set_region(Rect2 p_region);
};
#endif