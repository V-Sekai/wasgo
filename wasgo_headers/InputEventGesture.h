/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTGESTURE_H
#define INPUTEVENTGESTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "InputEventWithModifiers.h"
class InputEventGesture : public InputEventWithModifiers{
public:
Vector2 get_position();
void set_position(Vector2 p_position);
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_InputEventGesture_wrapper_get_position(WasGoId wasgo_id);
void _wasgo_InputEventGesture_wrapper_set_position(WasGoId wasgo_id, WasGoId p_position);
}
#endif