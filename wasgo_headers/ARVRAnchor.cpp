/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRAnchor.h"
int ARVRAnchor::get_anchor_id(){
	return (int) _wasgo_ARVRAnchor_wrapper_get_anchor_id(wasgo_id);
}
String ARVRAnchor::get_anchor_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ARVRAnchor_wrapper_get_anchor_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool ARVRAnchor::get_is_active(){
	return (bool) _wasgo_ARVRAnchor_wrapper_get_is_active(wasgo_id);
}
Mesh ARVRAnchor::get_mesh(){
	return Mesh(_wasgo_ARVRAnchor_wrapper_get_mesh(wasgo_id));
}
Plane ARVRAnchor::get_plane(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ARVRAnchor_wrapper_get_plane(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Plane) wasgo_ret;
    
}
Vector3 ARVRAnchor::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_ARVRAnchor_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
void ARVRAnchor::set_anchor_id(int p_anchor_id){
	_wasgo_ARVRAnchor_wrapper_set_anchor_id(wasgo_id, p_anchor_id);
}

ARVRAnchor::ARVRAnchor(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
ARVRAnchor::ARVRAnchor(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_ARVRAnchor_constructor();
}
ARVRAnchor::new_instance(){
    return ARVRAnchor(_wasgo_ARVRAnchor_constructor());
}