/* THIS FILE IS GENERATED */
#ifndef TOUCHSCREENBUTTON_H
#define TOUCHSCREENBUTTON_H

#include "stdint.h"

#include "Shape2D.h"
#include "Node2D.h"
#include "BitMap.h"
#include "Variant.h"
#include "Texture.h"
class TouchScreenButton : public Node2D{
public: TouchScreenButton();
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
};
#endif