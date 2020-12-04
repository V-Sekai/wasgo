/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Listener.h"
void Listener::clear_current(){
	_wasgo_Listener_wrapper_clear_current(wasgo_id);
}
Transform Listener::get_listener_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Listener_wrapper_get_listener_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
bool Listener::is_current(){
	return (bool) _wasgo_Listener_wrapper_is_current(wasgo_id);
}
void Listener::make_current(){
	_wasgo_Listener_wrapper_make_current(wasgo_id);
}

Listener::Listener(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
Listener::Listener(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_Listener_constructor();
}
Listener::new_instance(){
    return Listener(_wasgo_Listener_constructor());
}