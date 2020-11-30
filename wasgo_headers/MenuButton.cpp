/* THIS FILE IS GENERATED */
#include "MenuButton.h"
PopupMenu MenuButton::get_popup(){
	return PopupMenu::from_wasgo_id(_wasgo_MenuButton_wrapper_get_popup(wasgo_id));
}

MenuButton::MenuButton(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MenuButton::~MenuButton(){
}