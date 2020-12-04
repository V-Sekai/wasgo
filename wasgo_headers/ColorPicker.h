/* THIS FILE IS GENERATED */
#ifndef COLORPICKER_H
#define COLORPICKER_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "BoxContainer.h"
#include "Variant.h"
class ColorPicker : public BoxContainer{
public:
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

protected:
ColorPicker(WasGoId p_wasgo_id);
public:
ColorPicker();
~ColorPicker();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorPicker_wrapper_add_preset(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
int _wasgo_ColorPicker_wrapper_are_presets_enabled(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_are_presets_visible(WasGoId wasgo_id);
void _wasgo_ColorPicker_wrapper_erase_preset(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ColorPicker_wrapper_get_pick_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_ColorPicker_wrapper_get_presets(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_deferred_mode(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_editing_alpha(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_hsv_mode(WasGoId wasgo_id);
int _wasgo_ColorPicker_wrapper_is_raw_mode(WasGoId wasgo_id);
void _wasgo_ColorPicker_wrapper_set_deferred_mode(WasGoId wasgo_id, bool p_mode);
void _wasgo_ColorPicker_wrapper_set_edit_alpha(WasGoId wasgo_id, bool p_show);
void _wasgo_ColorPicker_wrapper_set_hsv_mode(WasGoId wasgo_id, bool p_mode);
void _wasgo_ColorPicker_wrapper_set_pick_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ColorPicker_wrapper_set_presets_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_ColorPicker_wrapper_set_presets_visible(WasGoId wasgo_id, bool p_visible);
void _wasgo_ColorPicker_wrapper_set_raw_mode(WasGoId wasgo_id, bool p_mode);

    //constructor and destructor wrappers
    WasGoId _wasgo_ColorPicker_constructor();
    void _wasgo_ColorPicker_destructor(WasGoId p_wasgo_id);
            
}
#endif