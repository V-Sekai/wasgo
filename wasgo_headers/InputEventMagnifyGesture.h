/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMAGNIFYGESTURE_H
#define INPUTEVENTMAGNIFYGESTURE_H

#include "wasgo\wasgo.h"

#include "InputEventGesture.h"
class InputEventMagnifyGesture : public InputEventGesture{
public:
float get_factor();
void set_factor(float p_factor);

protected:
InputEventMagnifyGesture(WasGoId p_wasgo_id);
public:
InputEventMagnifyGesture();
~InputEventMagnifyGesture();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InputEventMagnifyGesture_wrapper_get_factor(WasGoId wasgo_id);
void _wasgo_InputEventMagnifyGesture_wrapper_set_factor(WasGoId wasgo_id, float p_factor);

    //constructor and destructor wrappers
    WasGoId _wasgo_InputEventMagnifyGesture_constructor();
    void _wasgo_InputEventMagnifyGesture_destructor(WasGoId p_wasgo_id);
            
}
#endif