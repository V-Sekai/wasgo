/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEMOTION_H
#define INPUTEVENTMOUSEMOTION_H

#include <stdint.h>

#include "Vector2.h"
#include "InputEventMouse.h"
class InputEventMouseMotion : public InputEventMouse{
public: InputEventMouseMotion();
float  get_pressure();
float  get_pressure();
Vector2  get_relative();
Vector2  get_relative();
Vector2  get_speed();
Vector2  get_speed();
Vector2  get_tilt();
Vector2  get_tilt();
void  set_pressure(float pressure);
void  set_relative(Vector2 relative);
void  set_speed(Vector2 speed);
void  set_tilt(Vector2 tilt);
};
#endif