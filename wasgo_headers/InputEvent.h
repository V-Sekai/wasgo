/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform2D.h"
#include "String.h"
#include "Resource.h"
#include "Vector2.h"
class InputEvent : public Resource{
public: InputEvent();
bool  accumulate(InputEvent with_event);
String  as_text();
String  as_text();
float  get_action_strength(String action);
int  get_device();
int  get_device();
bool  is_action(String action);
bool  is_action_pressed(String action, bool allow_echo = false);
bool  is_action_released(String action);
bool  is_action_type();
bool  is_action_type();
bool  is_echo();
bool  is_echo();
bool  is_pressed();
bool  is_pressed();
void  set_device(int device);
bool  shortcut_match(InputEvent event);
InputEvent  xformed_by(Transform2D xform, Vector2 local_ofs = (0, 0));
};