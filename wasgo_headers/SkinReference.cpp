/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SkinReference.h"
RID SkinReference::get_skeleton(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_SkinReference_wrapper_get_skeleton(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Skin SkinReference::get_skin(){
	return Skin(_wasgo_SkinReference_wrapper_get_skin(wasgo_id));
}

SkinReference::SkinReference(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
SkinReference::SkinReference(Reference other) : Reference(other._get_wasgo_id()){
}
SkinReference::SkinReference():Reference(){
}
SkinReference SkinReference::new_instance(){
    return SkinReference(_wasgo_SkinReference_constructor());
}
WasGoID SkinReference::_get_wasgo_id(){
    return wasgo_id;
}
SkinReference::operator bool(){
    return (bool) wasgo_id;
}
