/* THIS FILE IS GENERATED */
#ifndef TEXTURE3D_H
#define TEXTURE3D_H

#include "wasgo\wasgoid.h"

#include "TextureLayered.h"
class Texture3D : public TextureLayered{
public:

protected:
public:
explicit Texture3D(WasGoID p_wasgo_id);
explicit Texture3D(TextureLayered other);
Texture3D();
Texture3D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_Texture3D_constructor();
            
}
#endif