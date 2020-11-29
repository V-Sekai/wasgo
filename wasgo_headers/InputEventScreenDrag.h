/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENDRAG_H
#define INPUTEVENTSCREENDRAG_H

#include "stdint.h"

#include "Variant.h"
#include "InputEvent.h"
class InputEventScreenDrag : public InputEvent{
public: InputEventScreenDrag();
int get_index();
Vector2 get_position();
Vector2 get_relative();
Vector2 get_speed();
void set_index(int p_index);
void set_position(Vector2 p_position);
void set_relative(Vector2 p_relative);
void set_speed(Vector2 p_speed);
};
#endif