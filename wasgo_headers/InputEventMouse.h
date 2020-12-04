/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSE_H
#define INPUTEVENTMOUSE_H

#include "wasgo\wasgo.h"

#include "InputEventWithModifiers.h"
#include "Vector2.h"
class InputEventMouse : public InputEventWithModifiers{
public:
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
void _wasgo_InputEventMouse_wrapper_get_global_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventMouse_wrapper_get_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventMouse_wrapper_set_button_mask(WasGoId wasgo_id, int p_button_mask);
void _wasgo_InputEventMouse_wrapper_set_global_position(WasGoId wasgo_id, const uint8_t * p_global_position, int p_global_position_wasgo_buffer_size);
void _wasgo_InputEventMouse_wrapper_set_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_InputEventMouse_constructor();
            
}
#endif