/* THIS FILE IS GENERATED */
#include "InputEventGesture.h"
Vector2 InputEventGesture::get_position(){
	return Vector2::from_wasgo_id(_wasgo_InputEventGesture_wrapper_get_position(wasgo_id));
}
void InputEventGesture::set_position(Vector2 p_position){
	_wasgo_InputEventGesture_wrapper_set_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}