/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSE_H
#define INPUTEVENTMOUSE_H

#include "stdint.h"

#include "InputEventWithModifiers.h"
#include "Variant.h"
class InputEventMouse : public InputEventWithModifiers{
public: InputEventMouse();
int get_button_mask();
Vector2 get_global_position();
Vector2 get_position();
void set_button_mask(int p_button_mask);
void set_global_position(Vector2 p_global_position);
void set_position(Vector2 p_position);
};
#endif