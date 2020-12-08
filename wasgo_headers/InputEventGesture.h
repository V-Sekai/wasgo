/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTGESTURE_H
#define INPUTEVENTGESTURE_H

#include "wasgo\wasgoid.h"

#include "InputEventWithModifiers.h"
#include "Vector2.h"
class InputEventGesture : public InputEventWithModifiers{
public:
Vector2 get_position();
void set_position(Vector2 p_position);

protected:
public:
explicit InputEventGesture(WasGoID p_wasgo_id);
explicit InputEventGesture(InputEventWithModifiers other);
InputEventGesture();
InputEventGesture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_InputEventGesture_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventGesture_wrapper_set_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_InputEventGesture_constructor();
            
}
#endif