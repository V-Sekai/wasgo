/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSE_H
#define INPUTEVENTMOUSE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "InputEventWithModifiers.h"
class InputEventMouse : public InputEventWithModifiers{
int get_button_mask();
Vector2 get_global_position();
Vector2 get_position();
void set_button_mask(int p_button_mask);
void set_global_position(Vector2 p_global_position);
void set_position(Vector2 p_position);
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventMouse_wrapper_get_button_mask(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InputEventMouse_wrapper_get_global_position(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InputEventMouse_wrapper_get_position(WasGoId wasgo_id);
void _wasgo_InputEventMouse_wrapper_set_button_mask(WasGoId wasgo_id, int p_button_mask);
void _wasgo_InputEventMouse_wrapper_set_global_position(WasGoId wasgo_id, WasGo::WasGoId p_global_position);
void _wasgo_InputEventMouse_wrapper_set_position(WasGoId wasgo_id, WasGo::WasGoId p_position);
}
#endif