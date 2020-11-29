/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMAGNIFYGESTURE_H
#define INPUTEVENTMAGNIFYGESTURE_H

#include "stdint.h"

#include "InputEventGesture.h"
class InputEventMagnifyGesture : public InputEventGesture{
public: InputEventMagnifyGesture();
float get_factor();
void set_factor(float p_factor);
};
#endif