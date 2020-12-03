/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ButtonGroup.h"
Array ButtonGroup::get_buttons(){
	return Array(_wasgo_ButtonGroup_wrapper_get_buttons(wasgo_id));
}
BaseButton ButtonGroup::get_pressed_button(){
	return BaseButton(_wasgo_ButtonGroup_wrapper_get_pressed_button(wasgo_id));
}

ButtonGroup::ButtonGroup(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
ButtonGroup::ButtonGroup(){
    wasgo_id = _wasgo_ButtonGroup_constructor();
}
ButtonGroup::~ButtonGroup(){
    _wasgo_ButtonGroup_destructor(wasgo_id);
}