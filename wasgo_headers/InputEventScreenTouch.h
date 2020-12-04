/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENTOUCH_H
#define INPUTEVENTSCREENTOUCH_H

#include "wasgo\wasgo.h"

#include "InputEvent.h"
#include "Vector2.h"
class InputEventScreenTouch : public InputEvent{
public:
int get_index();
Vector2 get_position();
void set_index(int p_index);
void set_position(Vector2 p_position);
void set_pressed(bool p_pressed);

protected:
public:
explicit InputEventScreenTouch(WasGoId p_wasgo_id);
explicit InputEventScreenTouch(InputEvent other);
InputEventScreenTouch new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventScreenTouch_wrapper_get_index(WasGoId wasgo_id);
void _wasgo_InputEventScreenTouch_wrapper_get_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenTouch_wrapper_set_index(WasGoId wasgo_id, int p_index);
void _wasgo_InputEventScreenTouch_wrapper_set_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_InputEventScreenTouch_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);

    //constructor wrappers
    WasGoId _wasgo_InputEventScreenTouch_constructor();
            
}
#endif