/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Popup.h"
bool Popup::is_exclusive(){
	return (bool) _wasgo_Popup_wrapper_is_exclusive(wasgo_id);
}
void Popup::popup(Rect2 p_bounds){

    Variant wasgo_var_bounds = p_bounds;
    uint8_t wasgo_buffer_bounds[20];
    int wasgo_size_bounds = 20;
    encode_variant(wasgo_var_bounds, wasgo_buffer_bounds, wasgo_size_bounds);
    
	_wasgo_Popup_wrapper_popup(wasgo_id, wasgo_buffer_bounds, wasgo_size_bounds);
}
void Popup::popup_centered(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_Popup_wrapper_popup_centered(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void Popup::popup_centered_clamped(Vector2 p_size, float p_fallback_ratio){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_Popup_wrapper_popup_centered_clamped(wasgo_id, wasgo_buffer_size, wasgo_size_size, -69, p_fallback_ratio);
}
void Popup::popup_centered_minsize(Vector2 p_minsize){

    Variant wasgo_var_minsize = p_minsize;
    uint8_t wasgo_buffer_minsize[12];
    int wasgo_size_minsize = 12;
    encode_variant(wasgo_var_minsize, wasgo_buffer_minsize, wasgo_size_minsize);
    
	_wasgo_Popup_wrapper_popup_centered_minsize(wasgo_id, wasgo_buffer_minsize, wasgo_size_minsize);
}
void Popup::popup_centered_ratio(float p_ratio){
	_wasgo_Popup_wrapper_popup_centered_ratio(wasgo_id, p_ratio);
}
void Popup::set_as_minsize(){
	_wasgo_Popup_wrapper_set_as_minsize(wasgo_id);
}
void Popup::set_exclusive(bool p_enable){
	_wasgo_Popup_wrapper_set_exclusive(wasgo_id, p_enable);
}

Popup::Popup(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
Popup::Popup(Control other) : Control(other._get_wasgo_id()){
}
Popup::Popup():Control(){
}
Popup Popup::new_instance(){
    return Popup(_wasgo_Popup_constructor());
}
WasGoID Popup::_get_wasgo_id(){
    return wasgo_id;
}
Popup::operator bool(){
    return (bool) wasgo_id;
}
