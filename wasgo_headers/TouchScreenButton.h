/* THIS FILE IS GENERATED */
#ifndef TOUCHSCREENBUTTON_H
#define TOUCHSCREENBUTTON_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Texture.h"
#include "BitMap.h"
#include "Shape2D.h"
#include "Node2D.h"
class TouchScreenButton : public Node2D{
public:
enum VisibilityMode{
VISIBILITY_ALWAYS,
VISIBILITY_TOUCHSCREEN_ONLY
};
String get_action();
BitMap get_bitmask();
Shape2D get_shape();
Texture get_texture();
Texture get_texture_pressed();
TouchScreenButton::VisibilityMode get_visibility_mode();
bool is_passby_press_enabled();
bool is_pressed();
bool is_shape_centered();
bool is_shape_visible();
void set_action(String p_action);
void set_bitmask(BitMap p_bitmask);
void set_passby_press(bool p_enabled);
void set_shape(Shape2D p_shape);
void set_shape_centered(bool p_bool);
void set_shape_visible(bool p_bool);
void set_texture(Texture p_texture);
void set_texture_pressed(Texture p_texture_pressed);
void set_visibility_mode(TouchScreenButton::VisibilityMode p_mode);

protected:
public:
explicit TouchScreenButton(WasGoId p_wasgo_id);
explicit TouchScreenButton(Node2D other);
TouchScreenButton new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_TouchScreenButton_wrapper_get_action(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_TouchScreenButton_wrapper_get_bitmask(WasGoId wasgo_id);
WasGoId _wasgo_TouchScreenButton_wrapper_get_shape(WasGoId wasgo_id);
WasGoId _wasgo_TouchScreenButton_wrapper_get_texture(WasGoId wasgo_id);
WasGoId _wasgo_TouchScreenButton_wrapper_get_texture_pressed(WasGoId wasgo_id);
WasGoId _wasgo_TouchScreenButton_wrapper_get_visibility_mode(WasGoId wasgo_id);
int _wasgo_TouchScreenButton_wrapper_is_passby_press_enabled(WasGoId wasgo_id);
int _wasgo_TouchScreenButton_wrapper_is_pressed(WasGoId wasgo_id);
int _wasgo_TouchScreenButton_wrapper_is_shape_centered(WasGoId wasgo_id);
int _wasgo_TouchScreenButton_wrapper_is_shape_visible(WasGoId wasgo_id);
void _wasgo_TouchScreenButton_wrapper_set_action(WasGoId wasgo_id, const uint8_t * p_action, int p_action_wasgo_buffer_size);
void _wasgo_TouchScreenButton_wrapper_set_bitmask(WasGoId wasgo_id, WasGoId p_bitmask);
void _wasgo_TouchScreenButton_wrapper_set_passby_press(WasGoId wasgo_id, bool p_enabled);
void _wasgo_TouchScreenButton_wrapper_set_shape(WasGoId wasgo_id, WasGoId p_shape);
void _wasgo_TouchScreenButton_wrapper_set_shape_centered(WasGoId wasgo_id, bool p_bool);
void _wasgo_TouchScreenButton_wrapper_set_shape_visible(WasGoId wasgo_id, bool p_bool);
void _wasgo_TouchScreenButton_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);
void _wasgo_TouchScreenButton_wrapper_set_texture_pressed(WasGoId wasgo_id, WasGoId p_texture_pressed);
void _wasgo_TouchScreenButton_wrapper_set_visibility_mode(WasGoId wasgo_id, WasGoId p_mode);

    //constructor wrappers
    WasGoId _wasgo_TouchScreenButton_constructor();
            
}
#endif