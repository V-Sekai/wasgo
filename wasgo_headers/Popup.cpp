/* THIS FILE IS GENERATED */
#include "Popup.h"
bool Popup::is_exclusive(){
	return (bool) _wasgo_Popup_wrapper_is_exclusive(wasgo_id);
}
void Popup::popup(Rect2 p_bounds = Rect2((0, 0, 0, 0))){
	_wasgo_Popup_wrapper_popup(wasgo_id, ((Variant) p_bounds).get_wasgo_id());
}
void Popup::popup_centered(Vector2 p_size = Vector2((0, 0))){
	_wasgo_Popup_wrapper_popup_centered(wasgo_id, ((Variant) p_size).get_wasgo_id());
}
void Popup::popup_centered_clamped(Vector2 p_size = Vector2((0, 0)), float p_fallback_ratio = (float) 0.75){
	_wasgo_Popup_wrapper_popup_centered_clamped(wasgo_id, ((Variant) p_size).get_wasgo_id(), p_fallback_ratio);
}
void Popup::popup_centered_minsize(Vector2 p_minsize = Vector2((0, 0))){
	_wasgo_Popup_wrapper_popup_centered_minsize(wasgo_id, ((Variant) p_minsize).get_wasgo_id());
}
void Popup::popup_centered_ratio(float p_ratio = (float) 0.75){
	_wasgo_Popup_wrapper_popup_centered_ratio(wasgo_id, p_ratio);
}
void Popup::set_as_minsize(){
	_wasgo_Popup_wrapper_set_as_minsize(wasgo_id);
}
void Popup::set_exclusive(bool p_enable){
	_wasgo_Popup_wrapper_set_exclusive(wasgo_id, p_enable);
}