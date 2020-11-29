/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEBUTTON_H
#define INPUTEVENTMOUSEBUTTON_H

#include "stdint.h"

#include "InputEventMouse.h"
class InputEventMouseButton : public InputEventMouse{
public: InputEventMouseButton();
int get_button_index();
float get_factor();
bool is_doubleclick();
void set_button_index(int p_button_index);
void set_doubleclick(bool p_doubleclick);
void set_factor(float p_factor);
void set_pressed(bool p_pressed);
};
#endif