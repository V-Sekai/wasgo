/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTJOYPADMOTION_H
#define INPUTEVENTJOYPADMOTION_H

#include <stdint.h>

#include "InputEvent.h"
class InputEventJoypadMotion : public InputEvent{
public: InputEventJoypadMotion();
int  get_axis();
int  get_axis();
float  get_axis_value();
float  get_axis_value();
void  set_axis(int axis);
void  set_axis_value(float axis_value);
};
#endif