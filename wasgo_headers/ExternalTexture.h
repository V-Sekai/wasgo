/* THIS FILE IS GENERATED */
#ifndef EXTERNALTEXTURE_H
#define EXTERNALTEXTURE_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "Texture.h"
class ExternalTexture : public Texture{
public:
int get_external_texture_id();
void set_size(Vector2 p_size);

protected:
public:
explicit ExternalTexture(WasGoID p_wasgo_id);
explicit ExternalTexture(Texture other);
ExternalTexture();
ExternalTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ExternalTexture_wrapper_get_external_texture_id(WasGoID wasgo_id);
void _wasgo_ExternalTexture_wrapper_set_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ExternalTexture_constructor();
            
}
#endif