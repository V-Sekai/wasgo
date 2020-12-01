/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENDRAG_H
#define INPUTEVENTSCREENDRAG_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "InputEvent.h"
class InputEventScreenDrag : public InputEvent{
public:
int get_index();
Vector2 get_position();
Vector2 get_relative();
Vector2 get_speed();
void set_index(int p_index);
void set_position(Vector2 p_position);
void set_relative(Vector2 p_relative);
void set_speed(Vector2 p_speed);

InputEventScreenDrag(WasGoId p_wasgo_id);
~InputEventScreenDrag();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventScreenDrag_wrapper_get_index(WasGoId wasgo_id);
WasGoId _wasgo_InputEventScreenDrag_wrapper_get_position(WasGoId wasgo_id);
WasGoId _wasgo_InputEventScreenDrag_wrapper_get_relative(WasGoId wasgo_id);
WasGoId _wasgo_InputEventScreenDrag_wrapper_get_speed(WasGoId wasgo_id);
void _wasgo_InputEventScreenDrag_wrapper_set_index(WasGoId wasgo_id, int p_index);
void _wasgo_InputEventScreenDrag_wrapper_set_position(WasGoId wasgo_id, WasGoId p_position);
void _wasgo_InputEventScreenDrag_wrapper_set_relative(WasGoId wasgo_id, WasGoId p_relative);
void _wasgo_InputEventScreenDrag_wrapper_set_speed(WasGoId wasgo_id, WasGoId p_speed);
}
#endif