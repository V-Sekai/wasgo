/* THIS FILE IS GENERATED */
#include "ButtonGroup.h"
Array ButtonGroup::get_buttons(){
	return Array::from_wasgo_id(_wasgo_ButtonGroup_wrapper_get_buttons(wasgo_id));
}
BaseButton ButtonGroup::get_pressed_button(){
	return BaseButton::from_wasgo_id(_wasgo_ButtonGroup_wrapper_get_pressed_button(wasgo_id));
}

ButtonGroup::ButtonGroup(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ButtonGroup::~ButtonGroup(){
}