/* THIS FILE IS GENERATED */
#ifndef TABS_H
#define TABS_H

#include <stdint.h>

#include "String.h"
#include "Rect2.h"
#include "Texture.h"
#include "Control.h"
#include "InputEvent.h"
class Tabs : public Control{
public: Tabs();
enum CloseButtonDisplayPolicy{
CLOSE_BUTTON_SHOW_NEVER: 0,
CLOSE_BUTTON_SHOW_ACTIVE_ONLY: 1,
CLOSE_BUTTON_SHOW_ALWAYS: 2,
};
enum TabAlign{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
ALIGN_RIGHT: 2,
};
void  _gui_input(InputEvent arg0);
void  _on_mouse_exited();
void  _on_mouse_exited();
void  _update_hover();
void  _update_hover();
void  add_tab(String title = "", Texture icon = [object:null]);
void  ensure_tab_visible(int idx);
int  get_current_tab();
int  get_current_tab();
bool  get_drag_to_rearrange_enabled();
bool  get_drag_to_rearrange_enabled();
bool  get_offset_buttons_visible();
bool  get_offset_buttons_visible();
bool  get_scrolling_enabled();
bool  get_scrolling_enabled();
bool  get_select_with_rmb();
bool  get_select_with_rmb();
enum.Tabs::TabAlign  get_tab_align();
enum.Tabs::TabAlign  get_tab_align();
enum.Tabs::CloseButtonDisplayPolicy  get_tab_close_display_policy();
enum.Tabs::CloseButtonDisplayPolicy  get_tab_close_display_policy();
int  get_tab_count();
int  get_tab_count();
bool  get_tab_disabled(int tab_idx);
Texture  get_tab_icon(int tab_idx);
int  get_tab_offset();
int  get_tab_offset();
Rect2  get_tab_rect(int tab_idx);
String  get_tab_title(int tab_idx);
int  get_tabs_rearrange_group();
int  get_tabs_rearrange_group();
void  move_tab(int from, int to);
void  remove_tab(int tab_idx);
void  set_current_tab(int tab_idx);
void  set_drag_to_rearrange_enabled(bool enabled);
void  set_scrolling_enabled(bool enabled);
void  set_select_with_rmb(bool enabled);
void  set_tab_align(int align);
void  set_tab_close_display_policy(int policy);
void  set_tab_disabled(int tab_idx, bool disabled);
void  set_tab_icon(int tab_idx, Texture icon);
void  set_tab_title(int tab_idx, String title);
void  set_tabs_rearrange_group(int group_id);
};
#endif