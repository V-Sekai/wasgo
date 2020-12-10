/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WeakRef.h"
Variant WeakRef::get_ref(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_WeakRef_wrapper_get_ref(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}

WeakRef::WeakRef(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
WeakRef::WeakRef(Reference other) : Reference(other._get_wasgo_id()){
}
WeakRef::WeakRef():Reference(){
}
WeakRef WeakRef::new_instance(){
    return WeakRef(_wasgo_WeakRef_constructor());
}
WasGoID WeakRef::_get_wasgo_id(){
    return wasgo_id;
}
WeakRef::operator bool(){
    return (bool) wasgo_id;
}
