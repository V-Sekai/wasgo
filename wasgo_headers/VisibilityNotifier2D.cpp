/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisibilityNotifier2D.h"
Rect2 VisibilityNotifier2D::get_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_VisibilityNotifier2D_wrapper_get_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
bool VisibilityNotifier2D::is_on_screen(){
	return (bool) _wasgo_VisibilityNotifier2D_wrapper_is_on_screen(wasgo_id);
}
void VisibilityNotifier2D::set_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_VisibilityNotifier2D_wrapper_set_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}

VisibilityNotifier2D::VisibilityNotifier2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
VisibilityNotifier2D::VisibilityNotifier2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisibilityNotifier2D_constructor();
}
VisibilityNotifier2D::new_instance(){
    return VisibilityNotifier2D(_wasgo_VisibilityNotifier2D_constructor());
}