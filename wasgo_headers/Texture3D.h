/* THIS FILE IS GENERATED */
#ifndef TEXTURE3D_H
#define TEXTURE3D_H

#include "wasgo\wasgo.h"

#include "TextureLayered.h"
class Texture3D : public TextureLayered{
public:

protected:
Texture3D(WasGoId p_wasgo_id);
public:
Texture3D();
~Texture3D();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_Texture3D_constructor();
    void _wasgo_Texture3D_destructor(WasGoId p_wasgo_id);
            
}
#endif