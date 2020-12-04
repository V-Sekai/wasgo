/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ShortCut.h"
String ShortCut::get_as_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ShortCut_wrapper_get_as_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
InputEvent ShortCut::get_shortcut(){
	return InputEvent(_wasgo_ShortCut_wrapper_get_shortcut(wasgo_id));
}
bool ShortCut::is_shortcut(InputEvent p_event){
	return (bool) _wasgo_ShortCut_wrapper_is_shortcut(wasgo_id, p_event._get_wasgo_id());
}
bool ShortCut::is_valid(){
	return (bool) _wasgo_ShortCut_wrapper_is_valid(wasgo_id);
}
void ShortCut::set_shortcut(InputEvent p_event){
	_wasgo_ShortCut_wrapper_set_shortcut(wasgo_id, p_event._get_wasgo_id());
}

ShortCut::ShortCut(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
ShortCut::ShortCut(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_ShortCut_constructor();
}
ShortCut::new_instance(){
    return ShortCut(_wasgo_ShortCut_constructor());
}