/* THIS FILE IS GENERATED */
#ifndef POPUPMENU_H
#define POPUPMENU_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Popup.h"
#include "Variant.h"
#include "ShortCut.h"
#include "Texture.h"
class PopupMenu : public Popup{
public:
void add_check_item(String p_label, int p_id = (int) -1, int p_accel = (int) 0);
void add_check_shortcut(ShortCut p_shortcut, int p_id = (int) -1, bool p_global = (bool) false);
void add_icon_check_item(Texture p_texture, String p_label, int p_id = (int) -1, int p_accel = (int) 0);
void add_icon_check_shortcut(Texture p_texture, ShortCut p_shortcut, int p_id = (int) -1, bool p_global = (bool) false);
void add_icon_item(Texture p_texture, String p_label, int p_id = (int) -1, int p_accel = (int) 0);
void add_icon_radio_check_item(Texture p_texture, String p_label, int p_id = (int) -1, int p_accel = (int) 0);
void add_icon_radio_check_shortcut(Texture p_texture, ShortCut p_shortcut, int p_id = (int) -1, bool p_global = (bool) false);
void add_icon_shortcut(Texture p_texture, ShortCut p_shortcut, int p_id = (int) -1, bool p_global = (bool) false);
void add_item(String p_label, int p_id = (int) -1, int p_accel = (int) 0);
void add_multistate_item(String p_label, int p_max_states, int p_default_state = (int) 0, int p_id = (int) -1, int p_accel = (int) 0);
void add_radio_check_item(String p_label, int p_id = (int) -1, int p_accel = (int) 0);
void add_radio_check_shortcut(ShortCut p_shortcut, int p_id = (int) -1, bool p_global = (bool) false);
void add_separator(String p_label = (String) );
void add_shortcut(ShortCut p_shortcut, int p_id = (int) -1, bool p_global = (bool) false);
void add_submenu_item(String p_label, String p_submenu, int p_id = (int) -1);
void clear();
bool get_allow_search();
int get_current_index();
int get_item_accelerator(int p_idx);
int get_item_count();
Texture get_item_icon(int p_idx);
int get_item_id(int p_idx);
int get_item_index(int p_id);
Variant get_item_metadata(int p_idx);
ShortCut get_item_shortcut(int p_idx);
String get_item_submenu(int p_idx);
String get_item_text(int p_idx);
String get_item_tooltip(int p_idx);
float get_submenu_popup_delay();
bool is_hide_on_checkable_item_selection();
bool is_hide_on_item_selection();
bool is_hide_on_state_item_selection();
bool is_hide_on_window_lose_focus();
bool is_item_checkable(int p_idx);
bool is_item_checked(int p_idx);
bool is_item_disabled(int p_idx);
bool is_item_radio_checkable(int p_idx);
bool is_item_separator(int p_idx);
bool is_item_shortcut_disabled(int p_idx);
void remove_item(int p_idx);
void set_allow_search(bool p_allow);
void set_hide_on_checkable_item_selection(bool p_enable);
void set_hide_on_item_selection(bool p_enable);
void set_hide_on_state_item_selection(bool p_enable);
void set_hide_on_window_lose_focus(bool p_enable);
void set_item_accelerator(int p_idx, int p_accel);
void set_item_as_checkable(int p_idx, bool p_enable);
void set_item_as_radio_checkable(int p_idx, bool p_enable);
void set_item_as_separator(int p_idx, bool p_enable);
void set_item_checked(int p_idx, bool p_checked);
void set_item_disabled(int p_idx, bool p_disabled);
void set_item_icon(int p_idx, Texture p_icon);
void set_item_id(int p_idx, int p_id);
void set_item_metadata(int p_idx, Variant p_metadata);
void set_item_multistate(int p_idx, int p_state);
void set_item_shortcut(int p_idx, ShortCut p_shortcut, bool p_global = (bool) false);
void set_item_shortcut_disabled(int p_idx, bool p_disabled);
void set_item_submenu(int p_idx, String p_submenu);
void set_item_text(int p_idx, String p_text);
void set_item_tooltip(int p_idx, String p_tooltip);
void set_submenu_popup_delay(float p_seconds);
void toggle_item_checked(int p_idx);
void toggle_item_multistate(int p_idx);

protected:
PopupMenu(WasGoId p_wasgo_id);
public:
PopupMenu();
~PopupMenu();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PopupMenu_wrapper_add_check_item(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_check_shortcut(WasGoId wasgo_id, WasGoId p_shortcut, int p_id, bool p_global);
void _wasgo_PopupMenu_wrapper_add_icon_check_item(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_icon_check_shortcut(WasGoId wasgo_id, WasGoId p_texture, WasGoId p_shortcut, int p_id, bool p_global);
void _wasgo_PopupMenu_wrapper_add_icon_item(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_icon_radio_check_item(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_icon_radio_check_shortcut(WasGoId wasgo_id, WasGoId p_texture, WasGoId p_shortcut, int p_id, bool p_global);
void _wasgo_PopupMenu_wrapper_add_icon_shortcut(WasGoId wasgo_id, WasGoId p_texture, WasGoId p_shortcut, int p_id, bool p_global);
void _wasgo_PopupMenu_wrapper_add_item(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_multistate_item(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_max_states, int p_default_state, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_radio_check_item(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id, int p_accel);
void _wasgo_PopupMenu_wrapper_add_radio_check_shortcut(WasGoId wasgo_id, WasGoId p_shortcut, int p_id, bool p_global);
void _wasgo_PopupMenu_wrapper_add_separator(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size);
void _wasgo_PopupMenu_wrapper_add_shortcut(WasGoId wasgo_id, WasGoId p_shortcut, int p_id, bool p_global);
void _wasgo_PopupMenu_wrapper_add_submenu_item(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, const uint8_t * p_submenu, int p_submenu_wasgo_buffer_size, int p_id);
void _wasgo_PopupMenu_wrapper_clear(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_get_allow_search(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_get_current_index(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_get_item_accelerator(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_get_item_count(WasGoId wasgo_id);
WasGoId _wasgo_PopupMenu_wrapper_get_item_icon(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_get_item_id(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_get_item_index(WasGoId wasgo_id, int p_id);
WasGoId _wasgo_PopupMenu_wrapper_get_item_metadata(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_PopupMenu_wrapper_get_item_shortcut(WasGoId wasgo_id, int p_idx);
void _wasgo_PopupMenu_wrapper_get_item_submenu(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_PopupMenu_wrapper_get_item_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_PopupMenu_wrapper_get_item_tooltip(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
float _wasgo_PopupMenu_wrapper_get_submenu_popup_delay(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_is_hide_on_checkable_item_selection(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_is_hide_on_item_selection(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_is_hide_on_state_item_selection(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_is_hide_on_window_lose_focus(WasGoId wasgo_id);
int _wasgo_PopupMenu_wrapper_is_item_checkable(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_is_item_checked(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_is_item_disabled(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_is_item_radio_checkable(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_is_item_separator(WasGoId wasgo_id, int p_idx);
int _wasgo_PopupMenu_wrapper_is_item_shortcut_disabled(WasGoId wasgo_id, int p_idx);
void _wasgo_PopupMenu_wrapper_remove_item(WasGoId wasgo_id, int p_idx);
void _wasgo_PopupMenu_wrapper_set_allow_search(WasGoId wasgo_id, bool p_allow);
void _wasgo_PopupMenu_wrapper_set_hide_on_checkable_item_selection(WasGoId wasgo_id, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_hide_on_item_selection(WasGoId wasgo_id, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_hide_on_state_item_selection(WasGoId wasgo_id, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_hide_on_window_lose_focus(WasGoId wasgo_id, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_item_accelerator(WasGoId wasgo_id, int p_idx, int p_accel);
void _wasgo_PopupMenu_wrapper_set_item_as_checkable(WasGoId wasgo_id, int p_idx, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_item_as_radio_checkable(WasGoId wasgo_id, int p_idx, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_item_as_separator(WasGoId wasgo_id, int p_idx, bool p_enable);
void _wasgo_PopupMenu_wrapper_set_item_checked(WasGoId wasgo_id, int p_idx, bool p_checked);
void _wasgo_PopupMenu_wrapper_set_item_disabled(WasGoId wasgo_id, int p_idx, bool p_disabled);
void _wasgo_PopupMenu_wrapper_set_item_icon(WasGoId wasgo_id, int p_idx, WasGoId p_icon);
void _wasgo_PopupMenu_wrapper_set_item_id(WasGoId wasgo_id, int p_idx, int p_id);
void _wasgo_PopupMenu_wrapper_set_item_metadata(WasGoId wasgo_id, int p_idx, WasGoId p_metadata);
void _wasgo_PopupMenu_wrapper_set_item_multistate(WasGoId wasgo_id, int p_idx, int p_state);
void _wasgo_PopupMenu_wrapper_set_item_shortcut(WasGoId wasgo_id, int p_idx, WasGoId p_shortcut, bool p_global);
void _wasgo_PopupMenu_wrapper_set_item_shortcut_disabled(WasGoId wasgo_id, int p_idx, bool p_disabled);
void _wasgo_PopupMenu_wrapper_set_item_submenu(WasGoId wasgo_id, int p_idx, const uint8_t * p_submenu, int p_submenu_wasgo_buffer_size);
void _wasgo_PopupMenu_wrapper_set_item_text(WasGoId wasgo_id, int p_idx, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_PopupMenu_wrapper_set_item_tooltip(WasGoId wasgo_id, int p_idx, const uint8_t * p_tooltip, int p_tooltip_wasgo_buffer_size);
void _wasgo_PopupMenu_wrapper_set_submenu_popup_delay(WasGoId wasgo_id, float p_seconds);
void _wasgo_PopupMenu_wrapper_toggle_item_checked(WasGoId wasgo_id, int p_idx);
void _wasgo_PopupMenu_wrapper_toggle_item_multistate(WasGoId wasgo_id, int p_idx);

    //constructor and destructor wrappers
    WasGoId _wasgo_PopupMenu_constructor();
    void _wasgo_PopupMenu_destructor(WasGoId p_wasgo_id);
            
}
#endif