/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTJOYPADMOTION_H
#define INPUTEVENTJOYPADMOTION_H

#include "stdint.h"

#include "InputEvent.h"
class InputEventJoypadMotion : public InputEvent{
public: InputEventJoypadMotion();
int get_axis();
float get_axis_value();
void set_axis(int p_axis);
void set_axis_value(float p_axis_value);
};
#endif