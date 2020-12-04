/* THIS FILE IS GENERATED */
#ifndef TABS_H
#define TABS_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Rect2.h"
#include "Control.h"
#include "ustring.h"
class Tabs : public Control{
public:
enum CloseButtonDisplayPolicy{
CLOSE_BUTTON_SHOW_NEVER,
CLOSE_BUTTON_SHOW_ACTIVE_ONLY,
CLOSE_BUTTON_SHOW_ALWAYS,
CLOSE_BUTTON_MAX
};
enum TabAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_MAX
};
void add_tab(String p_title = (String) , Texture p_icon = (Texture) [object:null]);
void ensure_tab_visible(int p_idx);
int get_current_tab();
bool get_drag_to_rearrange_enabled();
bool get_offset_buttons_visible();
int get_previous_tab();
bool get_scrolling_enabled();
bool get_select_with_rmb();
Tabs::TabAlign get_tab_align();
Tabs::CloseButtonDisplayPolicy get_tab_close_display_policy();
int get_tab_count();
bool get_tab_disabled(int p_tab_idx);
Texture get_tab_icon(int p_tab_idx);
int get_tab_offset();
Rect2 get_tab_rect(int p_tab_idx);
String get_tab_title(int p_tab_idx);
int get_tabs_rearrange_group();
void move_tab(int p_from, int p_to);
void remove_tab(int p_tab_idx);
void set_current_tab(int p_tab_idx);
void set_drag_to_rearrange_enabled(bool p_enabled);
void set_scrolling_enabled(bool p_enabled);
void set_select_with_rmb(bool p_enabled);
void set_tab_align(Tabs::TabAlign p_align);
void set_tab_close_display_policy(Tabs::CloseButtonDisplayPolicy p_policy);
void set_tab_disabled(int p_tab_idx, bool p_disabled);
void set_tab_icon(int p_tab_idx, Texture p_icon);
void set_tab_title(int p_tab_idx, String p_title);
void set_tabs_rearrange_group(int p_group_id);

protected:
public:
explicit Tabs(WasGoId p_wasgo_id);
explicit Tabs(Control other);
Tabs new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Tabs_wrapper_add_tab(WasGoId wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size, WasGoId p_icon);
void _wasgo_Tabs_wrapper_ensure_tab_visible(WasGoId wasgo_id, int p_idx);
int _wasgo_Tabs_wrapper_get_current_tab(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_drag_to_rearrange_enabled(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_offset_buttons_visible(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_previous_tab(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_scrolling_enabled(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_select_with_rmb(WasGoId wasgo_id);
WasGoId _wasgo_Tabs_wrapper_get_tab_align(WasGoId wasgo_id);
WasGoId _wasgo_Tabs_wrapper_get_tab_close_display_policy(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_tab_count(WasGoId wasgo_id);
int _wasgo_Tabs_wrapper_get_tab_disabled(WasGoId wasgo_id, int p_tab_idx);
WasGoId _wasgo_Tabs_wrapper_get_tab_icon(WasGoId wasgo_id, int p_tab_idx);
int _wasgo_Tabs_wrapper_get_tab_offset(WasGoId wasgo_id);
void _wasgo_Tabs_wrapper_get_tab_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_tab_idx);
void _wasgo_Tabs_wrapper_get_tab_title(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_tab_idx);
int _wasgo_Tabs_wrapper_get_tabs_rearrange_group(WasGoId wasgo_id);
void _wasgo_Tabs_wrapper_move_tab(WasGoId wasgo_id, int p_from, int p_to);
void _wasgo_Tabs_wrapper_remove_tab(WasGoId wasgo_id, int p_tab_idx);
void _wasgo_Tabs_wrapper_set_current_tab(WasGoId wasgo_id, int p_tab_idx);
void _wasgo_Tabs_wrapper_set_drag_to_rearrange_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Tabs_wrapper_set_scrolling_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Tabs_wrapper_set_select_with_rmb(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Tabs_wrapper_set_tab_align(WasGoId wasgo_id, WasGoId p_align);
void _wasgo_Tabs_wrapper_set_tab_close_display_policy(WasGoId wasgo_id, WasGoId p_policy);
void _wasgo_Tabs_wrapper_set_tab_disabled(WasGoId wasgo_id, int p_tab_idx, bool p_disabled);
void _wasgo_Tabs_wrapper_set_tab_icon(WasGoId wasgo_id, int p_tab_idx, WasGoId p_icon);
void _wasgo_Tabs_wrapper_set_tab_title(WasGoId wasgo_id, int p_tab_idx, const uint8_t * p_title, int p_title_wasgo_buffer_size);
void _wasgo_Tabs_wrapper_set_tabs_rearrange_group(WasGoId wasgo_id, int p_group_id);

    //constructor wrappers
    WasGoId _wasgo_Tabs_constructor();
            
}
#endif