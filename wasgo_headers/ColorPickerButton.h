/* THIS FILE IS GENERATED */
#ifndef COLORPICKERBUTTON_H
#define COLORPICKERBUTTON_H

#include "stdint.h"

#include "Variant.h"
#include "Button.h"
#include "ColorPicker.h"
#include "PopupPanel.h"
class ColorPickerButton : public Button{
public: ColorPickerButton();
Color get_pick_color();
ColorPicker get_picker();
PopupPanel get_popup();
bool is_editing_alpha();
void set_edit_alpha(bool p_show);
void set_pick_color(Color p_color);
};
#endif