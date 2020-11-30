/* THIS FILE IS GENERATED */
#ifndef COLORPICKERBUTTON_H
#define COLORPICKERBUTTON_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "ColorPicker.h"
#include "Button.h"
#include "PopupPanel.h"
class ColorPickerButton : public Button{
Color get_pick_color();
ColorPicker get_picker();
PopupPanel get_popup();
bool is_editing_alpha();
void set_edit_alpha(bool p_show);
void set_pick_color(Color p_color);

ColorPickerButton(WasGoId p_wasgo_id);
~ColorPickerButton();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ColorPickerButton_wrapper_get_pick_color(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ColorPickerButton_wrapper_get_picker(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ColorPickerButton_wrapper_get_popup(WasGoId wasgo_id);
int _wasgo_ColorPickerButton_wrapper_is_editing_alpha(WasGoId wasgo_id);
void _wasgo_ColorPickerButton_wrapper_set_edit_alpha(WasGoId wasgo_id, bool p_show);
void _wasgo_ColorPickerButton_wrapper_set_pick_color(WasGoId wasgo_id, WasGo::WasGoId p_color);
}
#endif