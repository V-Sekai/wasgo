/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTSCREENDRAG_H
#define INPUTEVENTSCREENDRAG_H

#include <stdint.h>

#include "Vector2.h"
#include "InputEvent.h"
class InputEventScreenDrag : public InputEvent{
public: InputEventScreenDrag();
int  get_index();
int  get_index();
Vector2  get_position();
Vector2  get_position();
Vector2  get_relative();
Vector2  get_relative();
Vector2  get_speed();
Vector2  get_speed();
void  set_index(int index);
void  set_position(Vector2 position);
void  set_relative(Vector2 relative);
void  set_speed(Vector2 speed);
};
#endif