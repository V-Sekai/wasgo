/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "InputEvent.h"
#include "PopupMenu.h"
#include "Variant.h"
#include "Button.h"
class MenuButton : public Button{
public: MenuButton();
Array  _get_items();
Array  _get_items();
void  _set_items(Array arg0);
void  _unhandled_key_input(InputEvent arg0);
PopupMenu  get_popup();
PopupMenu  get_popup();
bool  is_switch_on_hover();
bool  is_switch_on_hover();
void  set_disable_shortcuts(bool disabled);
void  set_switch_on_hover(bool enable);
};