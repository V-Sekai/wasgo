/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventMagnifyGesture.h"
float InputEventMagnifyGesture::get_factor(){
	return (float) _wasgo_InputEventMagnifyGesture_wrapper_get_factor(wasgo_id);
}
void InputEventMagnifyGesture::set_factor(float p_factor){
	_wasgo_InputEventMagnifyGesture_wrapper_set_factor(wasgo_id, p_factor);
}

InputEventMagnifyGesture::InputEventMagnifyGesture(WasGoID p_wasgo_id) : InputEventGesture(p_wasgo_id){
}
InputEventMagnifyGesture::InputEventMagnifyGesture(InputEventGesture other) : InputEventGesture(other._get_wasgo_id()){
}
InputEventMagnifyGesture::InputEventMagnifyGesture():InputEventGesture(){
}
InputEventMagnifyGesture InputEventMagnifyGesture::new_instance(){
    return InputEventMagnifyGesture(_wasgo_InputEventMagnifyGesture_constructor());
}
WasGoID InputEventMagnifyGesture::_get_wasgo_id(){
    return wasgo_id;
}
InputEventMagnifyGesture::operator bool(){
    return (bool) wasgo_id;
}
