/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTKEY_H
#define INPUTEVENTKEY_H

#include "wasgo/wasgoid.h"

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

protected:
public:
explicit InputEventKey(WasGoID p_wasgo_id);
explicit InputEventKey(InputEventWithModifiers other);
InputEventKey();
InputEventKey new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventKey_wrapper_get_scancode(WasGoID wasgo_id);
int _wasgo_InputEventKey_wrapper_get_scancode_with_modifiers(WasGoID wasgo_id);
int _wasgo_InputEventKey_wrapper_get_unicode(WasGoID wasgo_id);
void _wasgo_InputEventKey_wrapper_set_echo(WasGoID wasgo_id, bool p_echo);
void _wasgo_InputEventKey_wrapper_set_pressed(WasGoID wasgo_id, bool p_pressed);
void _wasgo_InputEventKey_wrapper_set_scancode(WasGoID wasgo_id, int p_scancode);
void _wasgo_InputEventKey_wrapper_set_unicode(WasGoID wasgo_id, int p_unicode);

    //constructor wrappers
    WasGoID _wasgo_InputEventKey_constructor();
            
}
#endif