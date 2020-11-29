/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTJOYPADBUTTON_H
#define INPUTEVENTJOYPADBUTTON_H

#include "stdint.h"

#include "InputEvent.h"
class InputEventJoypadButton : public InputEvent{
public: InputEventJoypadButton();
int get_button_index();
float get_pressure();
void set_button_index(int p_button_index);
void set_pressed(bool p_pressed);
void set_pressure(float p_pressure);
};
#endif