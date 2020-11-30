/* THIS FILE IS GENERATED */
#ifndef EXTERNALTEXTURE_H
#define EXTERNALTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Texture.h"
class ExternalTexture : public Texture{
int get_external_texture_id();
void set_size(Vector2 p_size);

ExternalTexture(WasGoId p_wasgo_id);
~ExternalTexture();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ExternalTexture_wrapper_get_external_texture_id(WasGoId wasgo_id);
void _wasgo_ExternalTexture_wrapper_set_size(WasGoId wasgo_id, WasGo::WasGoId p_size);
}
#endif