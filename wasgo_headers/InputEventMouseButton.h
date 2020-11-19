/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEBUTTON_H
#define INPUTEVENTMOUSEBUTTON_H

#include <stdint.h>

#include "InputEventMouse.h"
class InputEventMouseButton : public InputEventMouse{
public: InputEventMouseButton();
int  get_button_index();
int  get_button_index();
float  get_factor();
float  get_factor();
bool  is_doubleclick();
bool  is_doubleclick();
void  set_button_index(int button_index);
void  set_doubleclick(bool doubleclick);
void  set_factor(float factor);
void  set_pressed(bool pressed);
};
#endif