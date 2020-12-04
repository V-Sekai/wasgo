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
public:
explicit InputEventMagnifyGesture(WasGoID p_wasgo_id);
explicit InputEventMagnifyGesture(InputEventGesture other);
InputEventMagnifyGesture new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InputEventMagnifyGesture_wrapper_get_factor(WasGoID wasgo_id);
void _wasgo_InputEventMagnifyGesture_wrapper_set_factor(WasGoID wasgo_id, float p_factor);

    //constructor wrappers
    WasGoID _wasgo_InputEventMagnifyGesture_constructor();
            
}
#endif