/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTACTION_H
#define INPUTEVENTACTION_H

#include "wasgo\wasgo.h"

#include "InputEvent.h"
#include "ustring.h"
class InputEventAction : public InputEvent{
public:
String get_action();
float get_strength();
void set_action(String p_action);
void set_pressed(bool p_pressed);
void set_strength(float p_strength);

protected:
public:
explicit InputEventAction(WasGoId p_wasgo_id);
explicit InputEventAction(InputEvent other);
InputEventAction new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_InputEventAction_wrapper_get_action(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_InputEventAction_wrapper_get_strength(WasGoId wasgo_id);
void _wasgo_InputEventAction_wrapper_set_action(WasGoId wasgo_id, const uint8_t * p_action, int p_action_wasgo_buffer_size);
void _wasgo_InputEventAction_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);
void _wasgo_InputEventAction_wrapper_set_strength(WasGoId wasgo_id, float p_strength);

    //constructor wrappers
    WasGoId _wasgo_InputEventAction_constructor();
            
}
#endif