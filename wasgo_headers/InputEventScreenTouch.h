/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENTOUCH_H
#define INPUTEVENTSCREENTOUCH_H

#include <stdint.h>

#include "Vector2.h"
#include "InputEvent.h"
class InputEventScreenTouch : public InputEvent{
public: InputEventScreenTouch();
int  get_index();
int  get_index();
Vector2  get_position();
Vector2  get_position();
void  set_index(int index);
void  set_position(Vector2 position);
void  set_pressed(bool pressed);
};
#endif