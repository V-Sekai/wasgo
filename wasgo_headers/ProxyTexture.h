/* THIS FILE IS GENERATED */
#ifndef PROXYTEXTURE_H
#define PROXYTEXTURE_H

#include "wasgo\wasgo.h"

#include "Texture.h"
class ProxyTexture : public Texture{
public:
Texture get_base();
void set_base(Texture p_base);

protected:
public:
explicit ProxyTexture(WasGoID p_wasgo_id);
explicit ProxyTexture(Texture other);
ProxyTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ProxyTexture_wrapper_get_base(WasGoID wasgo_id);
void _wasgo_ProxyTexture_wrapper_set_base(WasGoID wasgo_id, WasGoID p_base);

    //constructor wrappers
    WasGoID _wasgo_ProxyTexture_constructor();
            
}
#endif