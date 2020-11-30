/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMAGNIFYGESTURE_H
#define INPUTEVENTMAGNIFYGESTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "InputEventGesture.h"
class InputEventMagnifyGesture : public InputEventGesture{
float get_factor();
void set_factor(float p_factor);

InputEventMagnifyGesture(WasGoId p_wasgo_id);
~InputEventMagnifyGesture();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InputEventMagnifyGesture_wrapper_get_factor(WasGoId wasgo_id);
void _wasgo_InputEventMagnifyGesture_wrapper_set_factor(WasGoId wasgo_id, float p_factor);
}
#endif