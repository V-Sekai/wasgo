/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisibilityNotifier.h"
::AABB VisibilityNotifier::get_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisibilityNotifier_wrapper_get_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
bool VisibilityNotifier::is_on_screen(){
	return (bool) _wasgo_VisibilityNotifier_wrapper_is_on_screen(wasgo_id);
}
void VisibilityNotifier::set_aabb(::AABB p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[28];
    int wasgo_size_rect = 28;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_VisibilityNotifier_wrapper_set_aabb(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}

VisibilityNotifier::VisibilityNotifier(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
VisibilityNotifier::VisibilityNotifier(){
    wasgo_id = _wasgo_VisibilityNotifier_constructor();
}
VisibilityNotifier::~VisibilityNotifier(){
    _wasgo_VisibilityNotifier_destructor(wasgo_id);
}