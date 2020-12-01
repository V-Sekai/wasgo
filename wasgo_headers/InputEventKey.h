/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTKEY_H
#define INPUTEVENTKEY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "InputEventWithModifiers.h"
class InputEventKey : public InputEventWithModifiers{
public:
int get_scancode();
int get_scancode_with_modifiers();
int get_unicode();
void set_echo(bool p_echo);
void set_pressed(bool p_pressed);
void set_scancode(int p_scancode);
void set_unicode(int p_unicode);

InputEventKey(WasGoId p_wasgo_id);
~InputEventKey();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventKey_wrapper_get_scancode(WasGoId wasgo_id);
int _wasgo_InputEventKey_wrapper_get_scancode_with_modifiers(WasGoId wasgo_id);
int _wasgo_InputEventKey_wrapper_get_unicode(WasGoId wasgo_id);
void _wasgo_InputEventKey_wrapper_set_echo(WasGoId wasgo_id, bool p_echo);
void _wasgo_InputEventKey_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);
void _wasgo_InputEventKey_wrapper_set_scancode(WasGoId wasgo_id, int p_scancode);
void _wasgo_InputEventKey_wrapper_set_unicode(WasGoId wasgo_id, int p_unicode);
}
#endif