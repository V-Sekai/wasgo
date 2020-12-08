/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ButtonGroup.h"
Array ButtonGroup::get_buttons(){
	return Array(_wasgo_ButtonGroup_wrapper_get_buttons(wasgo_id));
}
BaseButton ButtonGroup::get_pressed_button(){
	return BaseButton(_wasgo_ButtonGroup_wrapper_get_pressed_button(wasgo_id));
}

ButtonGroup::ButtonGroup(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
ButtonGroup::ButtonGroup(Resource other) : Resource(other._get_wasgo_id()){
}
ButtonGroup::ButtonGroup():Resource(){
}
ButtonGroup ButtonGroup::new_instance(){
    return ButtonGroup(_wasgo_ButtonGroup_constructor());
}
WasGoID ButtonGroup::_get_wasgo_id(){
    return wasgo_id;
}
ButtonGroup::operator bool(){
    return (bool) wasgo_id;
}
