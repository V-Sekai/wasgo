/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventMagnifyGesture.h"
float InputEventMagnifyGesture::get_factor(){
	return (float) _wasgo_InputEventMagnifyGesture_wrapper_get_factor(wasgo_id);
}
void InputEventMagnifyGesture::set_factor(float p_factor){
	_wasgo_InputEventMagnifyGesture_wrapper_set_factor(wasgo_id, p_factor);
}

InputEventMagnifyGesture::InputEventMagnifyGesture(WasGoId p_wasgo_id) : InputEventGesture(p_wasgo_id){
}
InputEventMagnifyGesture::InputEventMagnifyGesture(){
    wasgo_id = _wasgo_InputEventMagnifyGesture_constructor();
}
InputEventMagnifyGesture::~InputEventMagnifyGesture(){
    _wasgo_InputEventMagnifyGesture_destructor(wasgo_id);
}