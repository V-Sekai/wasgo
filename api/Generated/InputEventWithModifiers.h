/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTWITHMODIFIERS_H
#define INPUTEVENTWITHMODIFIERS_H

#include "wasgo\wasgoid.h"

#include "InputEvent.h"
class InputEventWithModifiers : public InputEvent{
public:
bool get_alt();
bool get_command();
bool get_control();
bool get_metakey();
bool get_shift();
void set_alt(bool p_enable);
void set_command(bool p_enable);
void set_control(bool p_enable);
void set_metakey(bool p_enable);
void set_shift(bool p_enable);

protected:
public:
explicit InputEventWithModifiers(WasGoID p_wasgo_id);
explicit InputEventWithModifiers(InputEvent other);
InputEventWithModifiers();
InputEventWithModifiers new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventWithModifiers_wrapper_get_alt(WasGoID wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_command(WasGoID wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_control(WasGoID wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_metakey(WasGoID wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_shift(WasGoID wasgo_id);
void _wasgo_InputEventWithModifiers_wrapper_set_alt(WasGoID wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_command(WasGoID wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_control(WasGoID wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_metakey(WasGoID wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_shift(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_InputEventWithModifiers_constructor();
            
}
#endif