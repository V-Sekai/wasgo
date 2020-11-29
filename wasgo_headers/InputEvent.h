/* THIS FILE IS GENERATED */
#ifndef INPUTEVENT_H
#define INPUTEVENT_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class InputEvent : public Resource{
public: InputEvent();
bool accumulate(InputEvent p_with_event);
String as_text();
float get_action_strength(String p_action);
int get_device();
bool is_action(String p_action);
bool is_action_pressed(String p_action, bool p_allow_echo = (bool) False);
bool is_action_released(String p_action);
bool is_action_type();
bool is_echo();
bool is_pressed();
void set_device(int p_device);
bool shortcut_match(InputEvent p_event);
InputEvent xformed_by(Transform2D p_xform, Vector2 p_local_ofs = (Vector2) (0, 0));
};
#endif