/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTWITHMODIFIERS_H
#define INPUTEVENTWITHMODIFIERS_H

#include "stdint.h"

#include "InputEvent.h"
class InputEventWithModifiers : public InputEvent{
public: InputEventWithModifiers();
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
#endif