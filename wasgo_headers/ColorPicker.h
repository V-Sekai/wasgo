/* THIS FILE IS GENERATED */
#ifndef COLORPICKER_H
#define COLORPICKER_H

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "Control.h"
#include "Variant.h"
#include "BoxContainer.h"
class ColorPicker : public BoxContainer{
public: ColorPicker();
void  _add_preset_pressed();
void  _add_preset_pressed();
void  _focus_enter();
void  _focus_enter();
void  _focus_exit();
void  _focus_exit();
void  _hsv_draw(int arg0, Control arg1);
void  _html_entered(String arg0);
void  _html_focus_exit();
void  _html_focus_exit();
void  _preset_input(InputEvent arg0);
void  _sample_draw();
void  _sample_draw();
void  _screen_input(InputEvent arg0);
void  _screen_pick_pressed();
void  _screen_pick_pressed();
void  _text_type_toggled();
void  _text_type_toggled();
void  _update_presets();
void  _update_presets();
void  _uv_input(InputEvent arg0);
void  _value_changed(float arg0);
void  _w_input(InputEvent arg0);
void  add_preset(Color color);
bool  are_presets_enabled();
bool  are_presets_enabled();
bool  are_presets_visible();
bool  are_presets_visible();
void  erase_preset(Color color);
Color  get_pick_color();
Color  get_pick_color();
PoolColorArray  get_presets();
PoolColorArray  get_presets();
bool  is_deferred_mode();
bool  is_deferred_mode();
bool  is_editing_alpha();
bool  is_editing_alpha();
bool  is_hsv_mode();
bool  is_hsv_mode();
bool  is_raw_mode();
bool  is_raw_mode();
void  set_deferred_mode(bool mode);
void  set_edit_alpha(bool show);
void  set_hsv_mode(bool mode);
void  set_pick_color(Color color);
void  set_presets_enabled(bool enabled);
void  set_presets_visible(bool visible);
void  set_raw_mode(bool mode);
};
#endif