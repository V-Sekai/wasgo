/* THIS FILE IS GENERATED */
#ifndef TEXTUREARRAY_H
#define TEXTUREARRAY_H

#include "wasgo\wasgoid.h"

#include "TextureLayered.h"
class TextureArray : public TextureLayered{
public:

protected:
public:
explicit TextureArray(WasGoID p_wasgo_id);
explicit TextureArray(TextureLayered other);
TextureArray();
TextureArray new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_TextureArray_constructor();
            
}
#endif