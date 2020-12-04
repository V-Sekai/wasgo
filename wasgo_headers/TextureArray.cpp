/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureArray.h"

TextureArray::TextureArray(WasGoID p_wasgo_id) : TextureLayered(p_wasgo_id){
}
TextureArray::TextureArray(TextureLayered other) : TextureLayered(other._get_wasgo_id()){
    wasgo_id = _wasgo_TextureArray_constructor();
}
TextureArray::new_instance(){
    return TextureArray(_wasgo_TextureArray_constructor());
}