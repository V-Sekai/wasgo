/* THIS FILE IS GENERATED */
#ifndef COLORPICKER_H
#define COLORPICKER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "BoxContainer.h"
class ColorPicker : public BoxContainer{
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

ColorPicker(WasGoId p_wasgo_id);
~ColorPicker();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorPicker_wrapper_add_preset(WasGoId wasgo_id, WasGo::WasGoId p_color);
int _wasgo_ColorPicker_wrapper_are_presets_enabled(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_are_presets_visible(WasGoId wasgo_id);
void _wasgo_ColorPicker_wrapper_erase_preset(WasGoId wasgo_id, WasGo::WasGoId p_color);
WasGo::WasGoId _wasgo_ColorPicker_wrapper_get_pick_color(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ColorPicker_wrapper_get_presets(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_deferred_mode(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_editing_alpha(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_hsv_mode(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_raw_mode(WasGoId wasgo_id);
void _wasgo_ColorPicker_wrapper_set_deferred_mode(WasGoId wasgo_id, bool p_mode);
void _wasgo_ColorPicker_wrapper_set_edit_alpha(WasGoId wasgo_id, bool p_show);
void _wasgo_ColorPicker_wrapper_set_hsv_mode(WasGoId wasgo_id, bool p_mode);
void _wasgo_ColorPicker_wrapper_set_pick_color(WasGoId wasgo_id, WasGo::WasGoId p_color);
void _wasgo_ColorPicker_wrapper_set_presets_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_ColorPicker_wrapper_set_presets_visible(WasGoId wasgo_id, bool p_visible);
void _wasgo_ColorPicker_wrapper_set_raw_mode(WasGoId wasgo_id, bool p_mode);
}
#endif