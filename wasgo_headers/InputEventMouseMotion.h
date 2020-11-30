/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEMOTION_H
#define INPUTEVENTMOUSEMOTION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "InputEventMouse.h"
class InputEventMouseMotion : public InputEventMouse{
float get_pressure();
Vector2 get_relative();
Vector2 get_speed();
Vector2 get_tilt();
void set_pressure(float p_pressure);
void set_relative(Vector2 p_relative);
void set_speed(Vector2 p_speed);
void set_tilt(Vector2 p_tilt);

InputEventMouseMotion(WasGoId p_wasgo_id);
~InputEventMouseMotion();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InputEventMouseMotion_wrapper_get_pressure(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InputEventMouseMotion_wrapper_get_relative(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InputEventMouseMotion_wrapper_get_speed(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InputEventMouseMotion_wrapper_get_tilt(WasGoId wasgo_id);
void _wasgo_InputEventMouseMotion_wrapper_set_pressure(WasGoId wasgo_id, float p_pressure);
void _wasgo_InputEventMouseMotion_wrapper_set_relative(WasGoId wasgo_id, WasGo::WasGoId p_relative);
void _wasgo_InputEventMouseMotion_wrapper_set_speed(WasGoId wasgo_id, WasGo::WasGoId p_speed);
void _wasgo_InputEventMouseMotion_wrapper_set_tilt(WasGoId wasgo_id, WasGo::WasGoId p_tilt);
}
#endif