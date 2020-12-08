/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BackBufferCopy.h"
BackBufferCopy::CopyMode BackBufferCopy::get_copy_mode(){
	return BackBufferCopy::CopyMode(_wasgo_BackBufferCopy_wrapper_get_copy_mode(wasgo_id));
}
Rect2 BackBufferCopy::get_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_BackBufferCopy_wrapper_get_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
void BackBufferCopy::set_copy_mode(BackBufferCopy::CopyMode p_copy_mode){
	_wasgo_BackBufferCopy_wrapper_set_copy_mode(wasgo_id, p_copy_mode._get_wasgo_id());
}
void BackBufferCopy::set_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_BackBufferCopy_wrapper_set_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}

BackBufferCopy::BackBufferCopy(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
BackBufferCopy::BackBufferCopy(Node2D other) : Node2D(other._get_wasgo_id()){
}
BackBufferCopy::BackBufferCopy():Node2D(){
}
BackBufferCopy BackBufferCopy::new_instance(){
    return BackBufferCopy(_wasgo_BackBufferCopy_constructor());
}
WasGoID BackBufferCopy::_get_wasgo_id(){
    return wasgo_id;
}
BackBufferCopy::operator bool(){
    return (bool) wasgo_id;
}
