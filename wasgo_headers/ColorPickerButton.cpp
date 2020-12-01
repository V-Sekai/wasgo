/* THIS FILE IS GENERATED */
#include "ColorPickerButton.h"
Color ColorPickerButton::get_pick_color(){
	return Color::from_wasgo_id(_wasgo_ColorPickerButton_wrapper_get_pick_color(wasgo_id));
}
ColorPicker ColorPickerButton::get_picker(){
	return ColorPicker::from_wasgo_id(_wasgo_ColorPickerButton_wrapper_get_picker(wasgo_id));
}
PopupPanel ColorPickerButton::get_popup(){
	return PopupPanel::from_wasgo_id(_wasgo_ColorPickerButton_wrapper_get_popup(wasgo_id));
}
bool ColorPickerButton::is_editing_alpha(){
	return (bool) _wasgo_ColorPickerButton_wrapper_is_editing_alpha(wasgo_id);
}
void ColorPickerButton::set_edit_alpha(bool p_show){
	_wasgo_ColorPickerButton_wrapper_set_edit_alpha(wasgo_id, p_show);
}
void ColorPickerButton::set_pick_color(Color p_color){
	_wasgo_ColorPickerButton_wrapper_set_pick_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
}