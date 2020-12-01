/* THIS FILE IS GENERATED */
#ifndef ATLASTEXTURE_H
#define ATLASTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Rect2.h"
class AtlasTexture : public Texture{
public:
Texture get_atlas();
Rect2 get_margin();
Rect2 get_region();
bool has_filter_clip();
void set_atlas(Texture p_atlas);
void set_filter_clip(bool p_enable);
void set_margin(Rect2 p_margin);
void set_region(Rect2 p_region);

AtlasTexture(WasGoId p_wasgo_id);
~AtlasTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AtlasTexture_wrapper_get_atlas(WasGoId wasgo_id);
WasGoId _wasgo_AtlasTexture_wrapper_get_margin(WasGoId wasgo_id);
WasGoId _wasgo_AtlasTexture_wrapper_get_region(WasGoId wasgo_id);
int _wasgo_AtlasTexture_wrapper_has_filter_clip(WasGoId wasgo_id);
void _wasgo_AtlasTexture_wrapper_set_atlas(WasGoId wasgo_id, WasGoId p_atlas);
void _wasgo_AtlasTexture_wrapper_set_filter_clip(WasGoId wasgo_id, bool p_enable);
void _wasgo_AtlasTexture_wrapper_set_margin(WasGoId wasgo_id, WasGoId p_margin);
void _wasgo_AtlasTexture_wrapper_set_region(WasGoId wasgo_id, WasGoId p_region);
}
#endif