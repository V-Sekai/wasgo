/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENDRAG_H
#define INPUTEVENTSCREENDRAG_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit InputEventScreenDrag(WasGoID p_wasgo_id);
explicit InputEventScreenDrag(InputEvent other);
InputEventScreenDrag();
InputEventScreenDrag new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventScreenDrag_wrapper_get_index(WasGoID wasgo_id);
void _wasgo_InputEventScreenDrag_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenDrag_wrapper_get_relative(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenDrag_wrapper_get_speed(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventScreenDrag_wrapper_set_index(WasGoID wasgo_id, int p_index);
void _wasgo_InputEventScreenDrag_wrapper_set_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_InputEventScreenDrag_wrapper_set_relative(WasGoID wasgo_id, const uint8_t * p_relative, int p_relative_wasgo_buffer_size);
void _wasgo_InputEventScreenDrag_wrapper_set_speed(WasGoID wasgo_id, const uint8_t * p_speed, int p_speed_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_InputEventScreenDrag_constructor();
            
}
#endif