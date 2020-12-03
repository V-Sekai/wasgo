/* THIS FILE IS GENERATED */
#ifndef TEXTUREARRAY_H
#define TEXTUREARRAY_H

#include "wasgo\wasgo.h"

#include "TextureLayered.h"
class TextureArray : public TextureLayered{
public:

protected:
TextureArray(WasGoId p_wasgo_id);
public:
TextureArray();
~TextureArray();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_TextureArray_constructor();
    void _wasgo_TextureArray_destructor(WasGoId p_wasgo_id);
            
}
#endif