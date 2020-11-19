/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Popup.h"
#include "Texture.h"
#include "InputEvent.h"
#include "Variant.h"
#include "ShortCut.h"
class PopupMenu : public Popup{
public: PopupMenu();
Array  _get_items();
Array  _get_items();
void  _gui_input(InputEvent arg0);
void  _set_items(Array arg0);
void  _submenu_timeout();
void  _submenu_timeout();
void  add_check_item(String label, int id = -1, int accel = 0);
void  add_check_shortcut(ShortCut shortcut, int id = -1, bool global = false);
void  add_icon_check_item(Texture texture, String label, int id = -1, int accel = 0);
void  add_icon_check_shortcut(Texture texture, ShortCut shortcut, int id = -1, bool global = false);
void  add_icon_item(Texture texture, String label, int id = -1, int accel = 0);
void  add_icon_radio_check_item(Texture texture, String label, int id = -1, int accel = 0);
void  add_icon_radio_check_shortcut(Texture texture, ShortCut shortcut, int id = -1, bool global = false);
void  add_icon_shortcut(Texture texture, ShortCut shortcut, int id = -1, bool global = false);
void  add_item(String label, int id = -1, int accel = 0);
void  add_multistate_item(String label, int max_states, int default_state = 0, int id = -1, int accel = 0);
void  add_radio_check_item(String label, int id = -1, int accel = 0);
void  add_radio_check_shortcut(ShortCut shortcut, int id = -1, bool global = false);
void  add_separator(String label = "");
void  add_shortcut(ShortCut shortcut, int id = -1, bool global = false);
void  add_submenu_item(String label, String submenu, int id = -1);
void  clear();
void  clear();
bool  get_allow_search();
bool  get_allow_search();
int  get_item_accelerator(int idx);
int  get_item_count();
int  get_item_count();
Texture  get_item_icon(int idx);
int  get_item_id(int idx);
int  get_item_index(int id);
Variant  get_item_metadata(int idx);
ShortCut  get_item_shortcut(int idx);
String  get_item_submenu(int idx);
String  get_item_text(int idx);
String  get_item_tooltip(int idx);
float  get_submenu_popup_delay();
float  get_submenu_popup_delay();
bool  is_hide_on_checkable_item_selection();
bool  is_hide_on_checkable_item_selection();
bool  is_hide_on_item_selection();
bool  is_hide_on_item_selection();
bool  is_hide_on_state_item_selection();
bool  is_hide_on_state_item_selection();
bool  is_hide_on_window_lose_focus();
bool  is_hide_on_window_lose_focus();
bool  is_item_checkable(int idx);
bool  is_item_checked(int idx);
bool  is_item_disabled(int idx);
bool  is_item_radio_checkable(int idx);
bool  is_item_separator(int idx);
bool  is_item_shortcut_disabled(int idx);
void  remove_item(int idx);
void  set_allow_search(bool allow);
void  set_hide_on_checkable_item_selection(bool enable);
void  set_hide_on_item_selection(bool enable);
void  set_hide_on_state_item_selection(bool enable);
void  set_hide_on_window_lose_focus(bool enable);
void  set_item_accelerator(int idx, int accel);
void  set_item_as_checkable(int idx, bool enable);
void  set_item_as_radio_checkable(int idx, bool enable);
void  set_item_as_separator(int idx, bool enable);
void  set_item_checked(int idx, bool checked);
void  set_item_disabled(int idx, bool disabled);
void  set_item_icon(int idx, Texture icon);
void  set_item_id(int idx, int id);
void  set_item_metadata(int idx, Variant metadata);
void  set_item_multistate(int idx, int state);
void  set_item_shortcut(int idx, ShortCut shortcut, bool global = false);
void  set_item_shortcut_disabled(int idx, bool disabled);
void  set_item_submenu(int idx, String submenu);
void  set_item_text(int idx, String text);
void  set_item_tooltip(int idx, String tooltip);
void  set_submenu_popup_delay(float seconds);
void  toggle_item_checked(int idx);
void  toggle_item_multistate(int idx);
};