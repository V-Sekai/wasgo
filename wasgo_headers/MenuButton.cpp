/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MenuButton.h"
PopupMenu MenuButton::get_popup(){
	return PopupMenu(_wasgo_MenuButton_wrapper_get_popup(wasgo_id));
}
bool MenuButton::is_switch_on_hover(){
	return (bool) _wasgo_MenuButton_wrapper_is_switch_on_hover(wasgo_id);
}
void MenuButton::set_disable_shortcuts(bool p_disabled){
	_wasgo_MenuButton_wrapper_set_disable_shortcuts(wasgo_id, p_disabled);
}
void MenuButton::set_switch_on_hover(bool p_enable){
	_wasgo_MenuButton_wrapper_set_switch_on_hover(wasgo_id, p_enable);
}

MenuButton::MenuButton(WasGoId p_wasgo_id) : Button(p_wasgo_id){
}
MenuButton::MenuButton(Button other) : Button(other._get_wasgo_id()){
    wasgo_id = _wasgo_MenuButton_constructor();
}
MenuButton::new_instance(){
    return MenuButton(_wasgo_MenuButton_constructor());
}