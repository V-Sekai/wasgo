/* THIS FILE IS GENERATED */
#ifndef COLORPICKERBUTTON_H
#define COLORPICKERBUTTON_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Button.h"
#include "ColorPicker.h"
#include "PopupPanel.h"
class ColorPickerButton : public Button{
public:
Color get_pick_color();
ColorPicker get_picker();
PopupPanel get_popup();
bool is_editing_alpha();
void set_edit_alpha(bool p_show);
void set_pick_color(Color p_color);

protected:
public:
explicit ColorPickerButton(WasGoID p_wasgo_id);
explicit ColorPickerButton(Button other);
ColorPickerButton();
ColorPickerButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorPickerButton_wrapper_get_pick_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ColorPickerButton_wrapper_get_picker(WasGoID wasgo_id);
WasGoID _wasgo_ColorPickerButton_wrapper_get_popup(WasGoID wasgo_id);
int _wasgo_ColorPickerButton_wrapper_is_editing_alpha(WasGoID wasgo_id);
void _wasgo_ColorPickerButton_wrapper_set_edit_alpha(WasGoID wasgo_id, bool p_show);
void _wasgo_ColorPickerButton_wrapper_set_pick_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ColorPickerButton_constructor();
            
}
#endif