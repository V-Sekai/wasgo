/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENTOUCH_H
#define INPUTEVENTSCREENTOUCH_H

#include "wasgo\wasgoid.h"

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
explicit InputEventScreenTouch(WasGoID p_wasgo_id);
explicit InputEventScreenTouch(InputEvent other);
InputEventScreenTouch();
InputEventScreenTouch new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventScreenTouch_wrapper_get_index(WasGoID wasgo_id);
void _wasgo_InputEventScreenTouch_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenTouch_wrapper_set_index(WasGoID wasgo_id, int p_index);
void _wasgo_InputEventScreenTouch_wrapper_set_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_InputEventScreenTouch_wrapper_set_pressed(WasGoID wasgo_id, bool p_pressed);

    //constructor wrappers
    WasGoID _wasgo_InputEventScreenTouch_constructor();
            
}
#endif