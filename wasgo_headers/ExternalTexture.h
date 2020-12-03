/* THIS FILE IS GENERATED */
#ifndef EXTERNALTEXTURE_H
#define EXTERNALTEXTURE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Texture.h"
class ExternalTexture : public Texture{
public:
int get_external_texture_id();
void set_size(Vector2 p_size);

protected:
ExternalTexture(WasGoId p_wasgo_id);
public:
ExternalTexture();
~ExternalTexture();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ExternalTexture_wrapper_get_external_texture_id(WasGoId wasgo_id);
void _wasgo_ExternalTexture_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ExternalTexture_constructor();
    void _wasgo_ExternalTexture_destructor(WasGoId p_wasgo_id);
            
}
#endif