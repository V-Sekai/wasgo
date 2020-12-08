/* THIS FILE IS GENERATED */
#ifndef COLORPICKER_H
#define COLORPICKER_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Variant.h"
#include "BoxContainer.h"
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
public:
explicit ColorPicker(WasGoID p_wasgo_id);
explicit ColorPicker(BoxContainer other);
ColorPicker();
ColorPicker new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorPicker_wrapper_add_preset(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
int _wasgo_ColorPicker_wrapper_are_presets_enabled(WasGoID wasgo_id);
int _wasgo_ColorPicker_wrapper_are_presets_visible(WasGoID wasgo_id);
void _wasgo_ColorPicker_wrapper_erase_preset(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ColorPicker_wrapper_get_pick_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ColorPicker_wrapper_get_presets(WasGoID wasgo_id);
int _wasgo_ColorPicker_wrapper_is_deferred_mode(WasGoID wasgo_id);
int _wasgo_ColorPicker_wrapper_is_editing_alpha(WasGoID wasgo_id);
int _wasgo_ColorPicker_wrapper_is_hsv_mode(WasGoID wasgo_id);
int _wasgo_ColorPicker_wrapper_is_raw_mode(WasGoID wasgo_id);
void _wasgo_ColorPicker_wrapper_set_deferred_mode(WasGoID wasgo_id, bool p_mode);
void _wasgo_ColorPicker_wrapper_set_edit_alpha(WasGoID wasgo_id, bool p_show);
void _wasgo_ColorPicker_wrapper_set_hsv_mode(WasGoID wasgo_id, bool p_mode);
void _wasgo_ColorPicker_wrapper_set_pick_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ColorPicker_wrapper_set_presets_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_ColorPicker_wrapper_set_presets_visible(WasGoID wasgo_id, bool p_visible);
void _wasgo_ColorPicker_wrapper_set_raw_mode(WasGoID wasgo_id, bool p_mode);

    //constructor wrappers
    WasGoID _wasgo_ColorPicker_constructor();
            
}
#endif