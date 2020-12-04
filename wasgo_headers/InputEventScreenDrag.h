/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENDRAG_H
#define INPUTEVENTSCREENDRAG_H

#include "wasgo\wasgo.h"

#include "InputEvent.h"
#include "Vector2.h"
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

protected:
public:
explicit InputEventScreenDrag(WasGoId p_wasgo_id);
explicit InputEventScreenDrag(InputEvent other);
InputEventScreenDrag new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventScreenDrag_wrapper_get_index(WasGoId wasgo_id);
void _wasgo_InputEventScreenDrag_wrapper_get_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenDrag_wrapper_get_relative(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenDrag_wrapper_get_speed(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenDrag_wrapper_set_index(WasGoId wasgo_id, int p_index);
void _wasgo_InputEventScreenDrag_wrapper_set_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_InputEventScreenDrag_wrapper_set_relative(WasGoId wasgo_id, const uint8_t * p_relative, int p_relative_wasgo_buffer_size);
void _wasgo_InputEventScreenDrag_wrapper_set_speed(WasGoId wasgo_id, const uint8_t * p_speed, int p_speed_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_InputEventScreenDrag_constructor();
            
}
#endif