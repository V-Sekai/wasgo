/* THIS FILE IS GENERATED */
#ifndef ATLASTEXTURE_H
#define ATLASTEXTURE_H

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

protected:
AtlasTexture(WasGoId p_wasgo_id);
public:
AtlasTexture();
~AtlasTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AtlasTexture_wrapper_get_atlas(WasGoId wasgo_id);
void _wasgo_AtlasTexture_wrapper_get_margin(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AtlasTexture_wrapper_get_region(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AtlasTexture_wrapper_has_filter_clip(WasGoId wasgo_id);
void _wasgo_AtlasTexture_wrapper_set_atlas(WasGoId wasgo_id, WasGoId p_atlas);
void _wasgo_AtlasTexture_wrapper_set_filter_clip(WasGoId wasgo_id, bool p_enable);
void _wasgo_AtlasTexture_wrapper_set_margin(WasGoId wasgo_id, const uint8_t * p_margin, int p_margin_wasgo_buffer_size);
void _wasgo_AtlasTexture_wrapper_set_region(WasGoId wasgo_id, const uint8_t * p_region, int p_region_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_AtlasTexture_constructor();
    void _wasgo_AtlasTexture_destructor(WasGoId p_wasgo_id);
            
}
#endif