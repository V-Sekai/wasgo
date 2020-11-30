/* THIS FILE IS GENERATED */
#include "BackBufferCopy.h"
BackBufferCopy::CopyMode BackBufferCopy::get_copy_mode(){
	return BackBufferCopy::CopyMode::from_wasgo_id(_wasgo_BackBufferCopy_wrapper_get_copy_mode(wasgo_id));
}
Rect2 BackBufferCopy::get_rect(){
	return Rect2::from_wasgo_id(_wasgo_BackBufferCopy_wrapper_get_rect(wasgo_id));
}
void BackBufferCopy::set_copy_mode(BackBufferCopy::CopyMode p_copy_mode){
	_wasgo_BackBufferCopy_wrapper_set_copy_mode(wasgo_id, ((Variant) copy_mode).get_wasgo_id());
}
void BackBufferCopy::set_rect(Rect2 p_rect){
	_wasgo_BackBufferCopy_wrapper_set_rect(wasgo_id, ((Variant) rect).get_wasgo_id());
}

BackBufferCopy::BackBufferCopy(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
BackBufferCopy::~BackBufferCopy(){
}