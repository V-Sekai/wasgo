/* THIS FILE IS GENERATED */
#ifndef EXTERNALTEXTURE_H
#define EXTERNALTEXTURE_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Vector2.h"
class ExternalTexture : public Texture{
public:
int get_external_texture_id();
void set_size(Vector2 p_size);

protected:
public:
explicit ExternalTexture(WasGoId p_wasgo_id);
explicit ExternalTexture(Texture other);
ExternalTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ExternalTexture_wrapper_get_external_texture_id(WasGoId wasgo_id);
void _wasgo_ExternalTexture_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_ExternalTexture_constructor();
            
}
#endif