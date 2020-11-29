/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTKEY_H
#define INPUTEVENTKEY_H

#include "stdint.h"

#include "InputEventWithModifiers.h"
class InputEventKey : public InputEventWithModifiers{
public: InputEventKey();
int get_scancode();
int get_scancode_with_modifiers();
int get_unicode();
void set_echo(bool p_echo);
void set_pressed(bool p_pressed);
void set_scancode(int p_scancode);
void set_unicode(int p_unicode);
};
#endif