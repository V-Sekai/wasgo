/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTPANGESTURE_H
#define INPUTEVENTPANGESTURE_H

#include <stdint.h>

#include "Vector2.h"
#include "InputEventGesture.h"
class InputEventPanGesture : public InputEventGesture{
public: InputEventPanGesture();
Vector2  get_delta();
Vector2  get_delta();
void  set_delta(Vector2 delta);
};
#endif