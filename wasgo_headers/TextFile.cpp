/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextFile.h"

TextFile::TextFile(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
TextFile::TextFile(Resource other) : Resource(other._get_wasgo_id()){
}
TextFile::TextFile():Resource(){
}
TextFile TextFile::new_instance(){
    return TextFile(_wasgo_TextFile_constructor());
}
WasGoID TextFile::_get_wasgo_id(){
    return wasgo_id;
}
TextFile::operator bool(){
    return (bool) wasgo_id;
}
