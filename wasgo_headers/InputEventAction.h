/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTACTION_H
#define INPUTEVENTACTION_H

#include "stdint.h"

#include "Variant.h"
#include "InputEvent.h"
class InputEventAction : public InputEvent{
public: InputEventAction();
String get_action();
float get_strength();
void set_action(String p_action);
void set_pressed(bool p_pressed);
void set_strength(float p_strength);
};
#endif