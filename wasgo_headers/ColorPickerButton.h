/* THIS FILE IS GENERATED */
#ifndef COLORPICKERBUTTON_H
#define COLORPICKERBUTTON_H

#include "wasgo\wasgo.h"

#include "Button.h"
#include "PopupPanel.h"
#include "Color.h"
#include "ColorPicker.h"
class ColorPickerButton : public Button{
public:
Color get_pick_color();
ColorPicker get_picker();
PopupPanel get_popup();
bool is_editing_alpha();
void set_edit_alpha(bool p_show);
void set_pick_color(Color p_color);

protected:
ColorPickerButton(WasGoId p_wasgo_id);
public:
ColorPickerButton();
~ColorPickerButton();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorPickerButton_wrapper_get_pick_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_ColorPickerButton_wrapper_get_picker(WasGoId wasgo_id);
WasGoId _wasgo_ColorPickerButton_wrapper_get_popup(WasGoId wasgo_id);
int _wasgo_ColorPickerButton_wrapper_is_editing_alpha(WasGoId wasgo_id);
void _wasgo_ColorPickerButton_wrapper_set_edit_alpha(WasGoId wasgo_id, bool p_show);
void _wasgo_ColorPickerButton_wrapper_set_pick_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ColorPickerButton_constructor();
    void _wasgo_ColorPickerButton_destructor(WasGoId p_wasgo_id);
            
}
#endif