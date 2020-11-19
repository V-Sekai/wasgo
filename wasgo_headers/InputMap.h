/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "Object.h"
#include "Variant.h"
class InputMap : public Object{
public: InputMap();
void  action_add_event(String action, InputEvent event);
void  action_erase_event(String action, InputEvent event);
void  action_erase_events(String action);
bool  action_has_event(String action, InputEvent event);
void  action_set_deadzone(String action, float deadzone);
void  add_action(String action, float deadzone = 0.5);
void  erase_action(String action);
bool  event_is_action(InputEvent event, String action);
Array  get_action_list(String action);
Array  get_actions();
Array  get_actions();
bool  has_action(String action);
void  load_from_globals();
void  load_from_globals();
};