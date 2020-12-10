/* THIS FILE IS GENERATED */
#ifndef TABS_H
#define TABS_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Ustring.h"
#include "Texture.h"
#include "Control.h"
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
void add_tab(String p_title = String(), Texture p_icon = Texture());
void ensure_tab_visible(int p_idx);
int get_current_tab();
bool get_drag_to_rearrange_enabled();
bool get_offset_buttons_visible();
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
explicit Tabs(WasGoID p_wasgo_id);
explicit Tabs(Control other);
Tabs();
Tabs new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Tabs_wrapper_add_tab(WasGoID wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_icon);
void _wasgo_Tabs_wrapper_ensure_tab_visible(WasGoID wasgo_id, int p_idx);
int _wasgo_Tabs_wrapper_get_current_tab(WasGoID wasgo_id);
int _wasgo_Tabs_wrapper_get_drag_to_rearrange_enabled(WasGoID wasgo_id);
int _wasgo_Tabs_wrapper_get_offset_buttons_visible(WasGoID wasgo_id);
int _wasgo_Tabs_wrapper_get_scrolling_enabled(WasGoID wasgo_id);
int _wasgo_Tabs_wrapper_get_select_with_rmb(WasGoID wasgo_id);
WasGoID _wasgo_Tabs_wrapper_get_tab_align(WasGoID wasgo_id);
WasGoID _wasgo_Tabs_wrapper_get_tab_close_display_policy(WasGoID wasgo_id);
int _wasgo_Tabs_wrapper_get_tab_count(WasGoID wasgo_id);
int _wasgo_Tabs_wrapper_get_tab_disabled(WasGoID wasgo_id, int p_tab_idx);
WasGoID _wasgo_Tabs_wrapper_get_tab_icon(WasGoID wasgo_id, int p_tab_idx);
int _wasgo_Tabs_wrapper_get_tab_offset(WasGoID wasgo_id);
void _wasgo_Tabs_wrapper_get_tab_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_tab_idx);
void _wasgo_Tabs_wrapper_get_tab_title(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_tab_idx);
int _wasgo_Tabs_wrapper_get_tabs_rearrange_group(WasGoID wasgo_id);
void _wasgo_Tabs_wrapper_move_tab(WasGoID wasgo_id, int p_from, int p_to);
void _wasgo_Tabs_wrapper_remove_tab(WasGoID wasgo_id, int p_tab_idx);
void _wasgo_Tabs_wrapper_set_current_tab(WasGoID wasgo_id, int p_tab_idx);
void _wasgo_Tabs_wrapper_set_drag_to_rearrange_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Tabs_wrapper_set_scrolling_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Tabs_wrapper_set_select_with_rmb(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Tabs_wrapper_set_tab_align(WasGoID wasgo_id, WasGoID p_align);
void _wasgo_Tabs_wrapper_set_tab_close_display_policy(WasGoID wasgo_id, WasGoID p_policy);
void _wasgo_Tabs_wrapper_set_tab_disabled(WasGoID wasgo_id, int p_tab_idx, bool p_disabled);
void _wasgo_Tabs_wrapper_set_tab_icon(WasGoID wasgo_id, int p_tab_idx, WasGoID p_icon);
void _wasgo_Tabs_wrapper_set_tab_title(WasGoID wasgo_id, int p_tab_idx, const uint8_t * p_title, int wasgo_throwaway, int p_title_wasgo_buffer_size);
void _wasgo_Tabs_wrapper_set_tabs_rearrange_group(WasGoID wasgo_id, int p_group_id);

    //constructor wrappers
    WasGoID _wasgo_Tabs_constructor();
            
}
#endif