/* THIS FILE IS GENERATED */
#ifndef ATLASTEXTURE_H
#define ATLASTEXTURE_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Texture.h"
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
public:
explicit AtlasTexture(WasGoID p_wasgo_id);
explicit AtlasTexture(Texture other);
AtlasTexture();
AtlasTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_AtlasTexture_wrapper_get_atlas(WasGoID wasgo_id);
void _wasgo_AtlasTexture_wrapper_get_margin(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AtlasTexture_wrapper_get_region(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AtlasTexture_wrapper_has_filter_clip(WasGoID wasgo_id);
void _wasgo_AtlasTexture_wrapper_set_atlas(WasGoID wasgo_id, WasGoID p_atlas);
void _wasgo_AtlasTexture_wrapper_set_filter_clip(WasGoID wasgo_id, bool p_enable);
void _wasgo_AtlasTexture_wrapper_set_margin(WasGoID wasgo_id, const uint8_t * p_margin, int p_margin_wasgo_buffer_size);
void _wasgo_AtlasTexture_wrapper_set_region(WasGoID wasgo_id, const uint8_t * p_region, int p_region_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AtlasTexture_constructor();
            
}
#endif