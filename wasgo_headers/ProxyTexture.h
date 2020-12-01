/* THIS FILE IS GENERATED */
#ifndef PROXYTEXTURE_H
#define PROXYTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Texture.h"
class ProxyTexture : public Texture{
public:
Texture get_base();
void set_base(Texture p_base);

ProxyTexture(WasGoId p_wasgo_id);
~ProxyTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ProxyTexture_wrapper_get_base(WasGoId wasgo_id);
void _wasgo_ProxyTexture_wrapper_set_base(WasGoId wasgo_id, WasGoId p_base);
}
#endif