/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENTOUCH_H
#define INPUTEVENTSCREENTOUCH_H

#include "stdint.h"

#include "Variant.h"
#include "InputEvent.h"
class InputEventScreenTouch : public InputEvent{
public: InputEventScreenTouch();
int get_index();
Vector2 get_position();
void set_index(int p_index);
void set_position(Vector2 p_position);
void set_pressed(bool p_pressed);
};
#endif