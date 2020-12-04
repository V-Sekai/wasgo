/* THIS FILE IS GENERATED */
#ifndef TEXTUREARRAY_H
#define TEXTUREARRAY_H

#include "wasgo\wasgo.h"

#include "TextureLayered.h"
class TextureArray : public TextureLayered{
public:

protected:
public:
explicit TextureArray(WasGoId p_wasgo_id);
explicit TextureArray(TextureLayered other);
TextureArray new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_TextureArray_constructor();
            
}
#endif