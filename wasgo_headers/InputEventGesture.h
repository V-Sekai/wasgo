/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTGESTURE_H
#define INPUTEVENTGESTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "InputEventWithModifiers.h"
class InputEventGesture : public InputEventWithModifiers{
Vector2 get_position();
void set_position(Vector2 p_position);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_InputEventGesture_wrapper_get_position(WasGoId wasgo_id);
void _wasgo_InputEventGesture_wrapper_set_position(WasGoId wasgo_id, WasGo::WasGoId p_position);
}
#endif