/* THIS FILE IS GENERATED */
#include "InputEventPanGesture.h"
Vector2 InputEventPanGesture::get_delta(){
	return Vector2::from_wasgo_id(_wasgo_InputEventPanGesture_wrapper_get_delta(wasgo_id));
}
void InputEventPanGesture::set_delta(Vector2 p_delta){
	_wasgo_InputEventPanGesture_wrapper_set_delta(wasgo_id, ((Variant) delta).get_wasgo_id());
}

InputEventPanGesture::InputEventPanGesture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventPanGesture::~InputEventPanGesture(){
}