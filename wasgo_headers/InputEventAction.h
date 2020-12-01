/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTACTION_H
#define INPUTEVENTACTION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "InputEvent.h"
class InputEventAction : public InputEvent{
public:
String get_action();
float get_strength();
void set_action(String p_action);
void set_pressed(bool p_pressed);
void set_strength(float p_strength);

InputEventAction(WasGoId p_wasgo_id);
~InputEventAction();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_InputEventAction_wrapper_get_action(WasGoId wasgo_id);
float _wasgo_InputEventAction_wrapper_get_strength(WasGoId wasgo_id);
void _wasgo_InputEventAction_wrapper_set_action(WasGoId wasgo_id, WasGoId p_action);
void _wasgo_InputEventAction_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);
void _wasgo_InputEventAction_wrapper_set_strength(WasGoId wasgo_id, float p_strength);
}
#endif