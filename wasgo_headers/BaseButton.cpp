/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BaseButton.h"
BaseButton::ActionMode BaseButton::get_action_mode(){
	return BaseButton::ActionMode(_wasgo_BaseButton_wrapper_get_action_mode(wasgo_id));
}
ButtonGroup BaseButton::get_button_group(){
	return ButtonGroup(_wasgo_BaseButton_wrapper_get_button_group(wasgo_id));
}
int BaseButton::get_button_mask(){
	return (int) _wasgo_BaseButton_wrapper_get_button_mask(wasgo_id);
}
BaseButton::DrawMode BaseButton::get_draw_mode(){
	return BaseButton::DrawMode(_wasgo_BaseButton_wrapper_get_draw_mode(wasgo_id));
}
Control::FocusMode BaseButton::get_enabled_focus_mode(){
	return Control::FocusMode(_wasgo_BaseButton_wrapper_get_enabled_focus_mode(wasgo_id));
}
ShortCut BaseButton::get_shortcut(){
	return ShortCut(_wasgo_BaseButton_wrapper_get_shortcut(wasgo_id));
}
bool BaseButton::is_disabled(){
	return (bool) _wasgo_BaseButton_wrapper_is_disabled(wasgo_id);
}
bool BaseButton::is_hovered(){
	return (bool) _wasgo_BaseButton_wrapper_is_hovered(wasgo_id);
}
bool BaseButton::is_keep_pressed_outside(){
	return (bool) _wasgo_BaseButton_wrapper_is_keep_pressed_outside(wasgo_id);
}
bool BaseButton::is_pressed(){
	return (bool) _wasgo_BaseButton_wrapper_is_pressed(wasgo_id);
}
bool BaseButton::is_shortcut_in_tooltip_enabled(){
	return (bool) _wasgo_BaseButton_wrapper_is_shortcut_in_tooltip_enabled(wasgo_id);
}
bool BaseButton::is_toggle_mode(){
	return (bool) _wasgo_BaseButton_wrapper_is_toggle_mode(wasgo_id);
}
void BaseButton::set_action_mode(BaseButton::ActionMode p_mode){
	_wasgo_BaseButton_wrapper_set_action_mode(wasgo_id, p_mode._get_wasgo_id());
}
void BaseButton::set_button_group(ButtonGroup p_button_group){
	_wasgo_BaseButton_wrapper_set_button_group(wasgo_id, p_button_group._get_wasgo_id());
}
void BaseButton::set_button_mask(int p_mask){
	_wasgo_BaseButton_wrapper_set_button_mask(wasgo_id, p_mask);
}
void BaseButton::set_disabled(bool p_disabled){
	_wasgo_BaseButton_wrapper_set_disabled(wasgo_id, p_disabled);
}
void BaseButton::set_enabled_focus_mode(Control::FocusMode p_mode){
	_wasgo_BaseButton_wrapper_set_enabled_focus_mode(wasgo_id, p_mode._get_wasgo_id());
}
void BaseButton::set_keep_pressed_outside(bool p_enabled){
	_wasgo_BaseButton_wrapper_set_keep_pressed_outside(wasgo_id, p_enabled);
}
void BaseButton::set_pressed(bool p_pressed){
	_wasgo_BaseButton_wrapper_set_pressed(wasgo_id, p_pressed);
}
void BaseButton::set_shortcut(ShortCut p_shortcut){
	_wasgo_BaseButton_wrapper_set_shortcut(wasgo_id, p_shortcut._get_wasgo_id());
}
void BaseButton::set_shortcut_in_tooltip(bool p_enabled){
	_wasgo_BaseButton_wrapper_set_shortcut_in_tooltip(wasgo_id, p_enabled);
}
void BaseButton::set_toggle_mode(bool p_enabled){
	_wasgo_BaseButton_wrapper_set_toggle_mode(wasgo_id, p_enabled);
}

BaseButton::BaseButton(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
BaseButton::BaseButton(Control other) : Control(other._get_wasgo_id()){
}
BaseButton::BaseButton():Control(){
}
BaseButton BaseButton::new_instance(){
    return BaseButton(_wasgo_BaseButton_constructor());
}
WasGoID BaseButton::_get_wasgo_id(){
    return wasgo_id;
}
BaseButton::operator bool(){
    return (bool) wasgo_id;
}
