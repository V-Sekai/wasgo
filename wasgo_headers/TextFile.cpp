/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextFile.h"

TextFile::TextFile(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
TextFile::TextFile(){
    wasgo_id = _wasgo_TextFile_constructor();
}
TextFile::~TextFile(){
    _wasgo_TextFile_destructor(wasgo_id);
}