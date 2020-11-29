/* THIS FILE IS GENERATED */
#ifndef COLORPICKER_H
#define COLORPICKER_H

#include "stdint.h"

#include "Variant.h"
#include "BoxContainer.h"
class ColorPicker : public BoxContainer{
public: ColorPicker();
void add_preset(Color p_color);
bool are_presets_enabled();
bool are_presets_visible();
void erase_preset(Color p_color);
Color get_pick_color();
PoolColorArray get_presets();
bool is_deferred_mode();
bool is_editing_alpha();
bool is_hsv_mode();
bool is_raw_mode();
void set_deferred_mode(bool p_mode);
void set_edit_alpha(bool p_show);
void set_hsv_mode(bool p_mode);
void set_pick_color(Color p_color);
void set_presets_enabled(bool p_enabled);
void set_presets_visible(bool p_visible);
void set_raw_mode(bool p_mode);
};
#endif