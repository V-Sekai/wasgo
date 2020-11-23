/* THIS FILE IS GENERATED */
#ifndef TOUCHSCREENBUTTON_H
#define TOUCHSCREENBUTTON_H

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "Node2D.h"
#include "Shape2D.h"
#include "BitMap.h"
#include "Texture.h"
class TouchScreenButton : public Node2D{
public: TouchScreenButton();
enum VisibilityMode{
VISIBILITY_ALWAYS: 0,
};
void  _input(InputEvent arg0);
String  get_action();
String  get_action();
BitMap  get_bitmask();
BitMap  get_bitmask();
Shape2D  get_shape();
Shape2D  get_shape();
Texture  get_texture();
Texture  get_texture();
Texture  get_texture_pressed();
Texture  get_texture_pressed();
enum.TouchScreenButton::VisibilityMode  get_visibility_mode();
enum.TouchScreenButton::VisibilityMode  get_visibility_mode();
bool  is_passby_press_enabled();
bool  is_passby_press_enabled();
bool  is_pressed();
bool  is_pressed();
bool  is_shape_centered();
bool  is_shape_centered();
bool  is_shape_visible();
bool  is_shape_visible();
void  set_action(String action);
void  set_bitmask(BitMap bitmask);
void  set_passby_press(bool enabled);
void  set_shape(Shape2D shape);
void  set_shape_centered(bool bool);
void  set_shape_visible(bool bool);
void  set_texture(Texture texture);
void  set_texture_pressed(Texture texture_pressed);
void  set_visibility_mode(int mode);
};
#endif