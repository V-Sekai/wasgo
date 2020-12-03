/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTPANGESTURE_H
#define INPUTEVENTPANGESTURE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "InputEventGesture.h"
class InputEventPanGesture : public InputEventGesture{
public:
Vector2 get_delta();
void set_delta(Vector2 p_delta);

protected:
InputEventPanGesture(WasGoId p_wasgo_id);
public:
InputEventPanGesture();
~InputEventPanGesture();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_InputEventPanGesture_wrapper_get_delta(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventPanGesture_wrapper_set_delta(WasGoId wasgo_id, const uint8_t * p_delta, int p_delta_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_InputEventPanGesture_constructor();
    void _wasgo_InputEventPanGesture_destructor(WasGoId p_wasgo_id);
            
}
#endif