/* THIS FILE IS GENERATED */
#ifndef TABCONTAINER_H
#define TABCONTAINER_H

#include <stdint.h>

#include "Popup.h"
#include "String.h"
#include "Node.h"
#include "Texture.h"
#include "Container.h"
#include "Control.h"
#include "InputEvent.h"
class TabContainer : public Container{
public: TabContainer();
enum TabAlign{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
};
void  _child_renamed_callback();
void  _child_renamed_callback();
void  _gui_input(InputEvent arg0);
void  _on_mouse_exited();
void  _on_mouse_exited();
void  _on_theme_changed();
void  _on_theme_changed();
void  _update_current_tab();
void  _update_current_tab();
bool  are_tabs_visible();
bool  are_tabs_visible();
int  get_current_tab();
int  get_current_tab();
Control  get_current_tab_control();
Control  get_current_tab_control();
bool  get_drag_to_rearrange_enabled();
bool  get_drag_to_rearrange_enabled();
Popup  get_popup();
Popup  get_popup();
int  get_previous_tab();
int  get_previous_tab();
enum.TabContainer::TabAlign  get_tab_align();
enum.TabContainer::TabAlign  get_tab_align();
Control  get_tab_control(int idx);
int  get_tab_count();
int  get_tab_count();
bool  get_tab_disabled(int tab_idx);
Texture  get_tab_icon(int tab_idx);
String  get_tab_title(int tab_idx);
int  get_tabs_rearrange_group();
int  get_tabs_rearrange_group();
bool  get_use_hidden_tabs_for_min_size();
bool  get_use_hidden_tabs_for_min_size();
void  set_current_tab(int tab_idx);
void  set_drag_to_rearrange_enabled(bool enabled);
void  set_popup(Node popup);
void  set_tab_align(int align);
void  set_tab_disabled(int tab_idx, bool disabled);
void  set_tab_icon(int tab_idx, Texture icon);
void  set_tab_title(int tab_idx, String title);
void  set_tabs_rearrange_group(int group_id);
void  set_tabs_visible(bool visible);
void  set_use_hidden_tabs_for_min_size(bool enabled);
};
#endif