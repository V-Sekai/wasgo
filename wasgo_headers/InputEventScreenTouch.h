/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENTOUCH_H
#define INPUTEVENTSCREENTOUCH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "InputEvent.h"
class InputEventScreenTouch : public InputEvent{
public:
int get_index();
Vector2 get_position();
void set_index(int p_index);
void set_position(Vector2 p_position);
void set_pressed(bool p_pressed);

InputEventScreenTouch(WasGoId p_wasgo_id);
~InputEventScreenTouch();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventScreenTouch_wrapper_get_index(WasGoId wasgo_id);
WasGoId _wasgo_InputEventScreenTouch_wrapper_get_position(WasGoId wasgo_id);
void _wasgo_InputEventScreenTouch_wrapper_set_index(WasGoId wasgo_id, int p_index);
void _wasgo_InputEventScreenTouch_wrapper_set_position(WasGoId wasgo_id, WasGoId p_position);
void _wasgo_InputEventScreenTouch_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);
}
#endif