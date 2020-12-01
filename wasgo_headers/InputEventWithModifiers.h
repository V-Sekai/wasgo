/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTWITHMODIFIERS_H
#define INPUTEVENTWITHMODIFIERS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

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
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventWithModifiers_wrapper_get_alt(WasGoId wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_command(WasGoId wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_control(WasGoId wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_metakey(WasGoId wasgo_id);
int _wasgo_InputEventWithModifiers_wrapper_get_shift(WasGoId wasgo_id);
void _wasgo_InputEventWithModifiers_wrapper_set_alt(WasGoId wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_command(WasGoId wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_control(WasGoId wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_metakey(WasGoId wasgo_id, bool p_enable);
void _wasgo_InputEventWithModifiers_wrapper_set_shift(WasGoId wasgo_id, bool p_enable);
}
#endif