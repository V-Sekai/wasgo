/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureArray.h"

TextureArray::TextureArray(WasGoID p_wasgo_id) : TextureLayered(p_wasgo_id){
}
TextureArray::TextureArray(TextureLayered other) : TextureLayered(other._get_wasgo_id()){
}
TextureArray::TextureArray():TextureLayered(){
}
TextureArray TextureArray::new_instance(){
    return TextureArray(_wasgo_TextureArray_constructor());
}
WasGoID TextureArray::_get_wasgo_id(){
    return wasgo_id;
}
TextureArray::operator bool(){
    return (bool) wasgo_id;
}
