/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ColorPickerButton.h"
Color ColorPickerButton::get_pick_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ColorPickerButton_wrapper_get_pick_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
ColorPicker ColorPickerButton::get_picker(){
	return ColorPicker(_wasgo_ColorPickerButton_wrapper_get_picker(wasgo_id));
}
PopupPanel ColorPickerButton::get_popup(){
	return PopupPanel(_wasgo_ColorPickerButton_wrapper_get_popup(wasgo_id));
}
bool ColorPickerButton::is_editing_alpha(){
	return (bool) _wasgo_ColorPickerButton_wrapper_is_editing_alpha(wasgo_id);
}
void ColorPickerButton::set_edit_alpha(bool p_show){
	_wasgo_ColorPickerButton_wrapper_set_edit_alpha(wasgo_id, p_show);
}
void ColorPickerButton::set_pick_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ColorPickerButton_wrapper_set_pick_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}

ColorPickerButton::ColorPickerButton(WasGoId p_wasgo_id) : Button(p_wasgo_id){
}
ColorPickerButton::ColorPickerButton(Button other) : Button(other._get_wasgo_id()){
    wasgo_id = _wasgo_ColorPickerButton_constructor();
}
ColorPickerButton::new_instance(){
    return ColorPickerButton(_wasgo_ColorPickerButton_constructor());
}