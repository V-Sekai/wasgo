/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTPANGESTURE_H
#define INPUTEVENTPANGESTURE_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "InputEventGesture.h"
class InputEventPanGesture : public InputEventGesture{
public:
Vector2 get_delta();
void set_delta(Vector2 p_delta);

protected:
public:
explicit InputEventPanGesture(WasGoID p_wasgo_id);
explicit InputEventPanGesture(InputEventGesture other);
InputEventPanGesture();
InputEventPanGesture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_InputEventPanGesture_wrapper_get_delta(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventPanGesture_wrapper_set_delta(WasGoID wasgo_id, const uint8_t * p_delta, int p_delta_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_InputEventPanGesture_constructor();
            
}
#endif