/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEMOTION_H
#define INPUTEVENTMOUSEMOTION_H

#include "stdint.h"

#include "InputEventMouse.h"
#include "Variant.h"
class InputEventMouseMotion : public InputEventMouse{
public: InputEventMouseMotion();
float get_pressure();
Vector2 get_relative();
Vector2 get_speed();
Vector2 get_tilt();
void set_pressure(float p_pressure);
void set_relative(Vector2 p_relative);
void set_speed(Vector2 p_speed);
void set_tilt(Vector2 p_tilt);
};
#endif