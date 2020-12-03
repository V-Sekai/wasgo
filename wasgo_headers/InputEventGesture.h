/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTGESTURE_H
#define INPUTEVENTGESTURE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "InputEventWithModifiers.h"
class InputEventGesture : public InputEventWithModifiers{
public:
Vector2 get_position();
void set_position(Vector2 p_position);
};


//Wrapper Functions
extern "C"{
void _wasgo_InputEventGesture_wrapper_get_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventGesture_wrapper_set_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_InputEventGesture_constructor();
    void _wasgo_InputEventGesture_destructor(WasGoId p_wasgo_id);
            
}
#endif