/* THIS FILE IS GENERATED */
#ifndef TEXTURE3D_H
#define TEXTURE3D_H

#include "wasgo\wasgo.h"

#include "TextureLayered.h"
class Texture3D : public TextureLayered{
public:

protected:
public:
explicit Texture3D(WasGoId p_wasgo_id);
explicit Texture3D(TextureLayered other);
Texture3D new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_Texture3D_constructor();
            
}
#endif