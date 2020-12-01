/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTJOYPADMOTION_H
#define INPUTEVENTJOYPADMOTION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "InputEvent.h"
class InputEventJoypadMotion : public InputEvent{
public:
int get_axis();
float get_axis_value();
void set_axis(int p_axis);
void set_axis_value(float p_axis_value);

InputEventJoypadMotion(WasGoId p_wasgo_id);
~InputEventJoypadMotion();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventJoypadMotion_wrapper_get_axis(WasGoId wasgo_id);
float _wasgo_InputEventJoypadMotion_wrapper_get_axis_value(WasGoId wasgo_id);
void _wasgo_InputEventJoypadMotion_wrapper_set_axis(WasGoId wasgo_id, int p_axis);
void _wasgo_InputEventJoypadMotion_wrapper_set_axis_value(WasGoId wasgo_id, float p_axis_value);
}
#endif