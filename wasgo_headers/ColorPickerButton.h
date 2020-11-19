/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PopupPanel.h"
#include "Button.h"
#include "Variant.h"
#include "ColorPicker.h"
class ColorPickerButton : public Button{
public: ColorPickerButton();
void  _color_changed(Color arg0);
void  _modal_closed();
void  _modal_closed();
Color  get_pick_color();
Color  get_pick_color();
ColorPicker  get_picker();
ColorPicker  get_picker();
PopupPanel  get_popup();
PopupPanel  get_popup();
bool  is_editing_alpha();
bool  is_editing_alpha();
void  set_edit_alpha(bool show);
void  set_pick_color(Color color);
};