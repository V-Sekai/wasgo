/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureArray.h"

TextureArray::TextureArray(WasGoId p_wasgo_id) : TextureLayered(p_wasgo_id){
}
TextureArray::TextureArray(){
    wasgo_id = _wasgo_TextureArray_constructor();
}
TextureArray::~TextureArray(){
    _wasgo_TextureArray_destructor(wasgo_id);
}