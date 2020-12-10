/* THIS FILE IS GENERATED */
#ifndef TABCONTAINER_H
#define TABCONTAINER_H

#include "wasgo\wasgoid.h"

#include "Popup.h"
class Node;
#include "Container.h"
#include "Ustring.h"
#include "Texture.h"
#include "Control.h"
class TabContainer : public Container{
public:
enum TabAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT
};
bool are_tabs_visible();
int get_current_tab();
Control get_current_tab_control();
bool get_drag_to_rearrange_enabled();
Popup get_popup();
int get_previous_tab();
TabContainer::TabAlign get_tab_align();
Control get_tab_control(int p_tab_idx);
int get_tab_count();
bool get_tab_disabled(int p_tab_idx);
Texture get_tab_icon(int p_tab_idx);
String get_tab_title(int p_tab_idx);
int get_tabs_rearrange_group();
bool get_use_hidden_tabs_for_min_size();
void set_current_tab(int p_tab_idx);
void set_drag_to_rearrange_enabled(bool p_enabled);
void set_popup(Node p_popup);
void set_tab_align(TabContainer::TabAlign p_align);
void set_tab_disabled(int p_tab_idx, bool p_disabled);
void set_tab_icon(int p_tab_idx, Texture p_icon);
void set_tab_title(int p_tab_idx, String p_title);
void set_tabs_rearrange_group(int p_group_id);
void set_tabs_visible(bool p_visible);
void set_use_hidden_tabs_for_min_size(bool p_enabled);

protected:
public:
explicit TabContainer(WasGoID p_wasgo_id);
explicit TabContainer(Container other);
TabContainer();
TabContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_TabContainer_wrapper_are_tabs_visible(WasGoID wasgo_id);
int _wasgo_TabContainer_wrapper_get_current_tab(WasGoID wasgo_id);
WasGoID _wasgo_TabContainer_wrapper_get_current_tab_control(WasGoID wasgo_id);
int _wasgo_TabContainer_wrapper_get_drag_to_rearrange_enabled(WasGoID wasgo_id);
WasGoID _wasgo_TabContainer_wrapper_get_popup(WasGoID wasgo_id);
int _wasgo_TabContainer_wrapper_get_previous_tab(WasGoID wasgo_id);
WasGoID _wasgo_TabContainer_wrapper_get_tab_align(WasGoID wasgo_id);
WasGoID _wasgo_TabContainer_wrapper_get_tab_control(WasGoID wasgo_id, int p_tab_idx);
int _wasgo_TabContainer_wrapper_get_tab_count(WasGoID wasgo_id);
int _wasgo_TabContainer_wrapper_get_tab_disabled(WasGoID wasgo_id, int p_tab_idx);
WasGoID _wasgo_TabContainer_wrapper_get_tab_icon(WasGoID wasgo_id, int p_tab_idx);
void _wasgo_TabContainer_wrapper_get_tab_title(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_tab_idx);
int _wasgo_TabContainer_wrapper_get_tabs_rearrange_group(WasGoID wasgo_id);
int _wasgo_TabContainer_wrapper_get_use_hidden_tabs_for_min_size(WasGoID wasgo_id);
void _wasgo_TabContainer_wrapper_set_current_tab(WasGoID wasgo_id, int p_tab_idx);
void _wasgo_TabContainer_wrapper_set_drag_to_rearrange_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_TabContainer_wrapper_set_popup(WasGoID wasgo_id, WasGoID p_popup);
void _wasgo_TabContainer_wrapper_set_tab_align(WasGoID wasgo_id, WasGoID p_align);
void _wasgo_TabContainer_wrapper_set_tab_disabled(WasGoID wasgo_id, int p_tab_idx, bool p_disabled);
void _wasgo_TabContainer_wrapper_set_tab_icon(WasGoID wasgo_id, int p_tab_idx, WasGoID p_icon);
void _wasgo_TabContainer_wrapper_set_tab_title(WasGoID wasgo_id, int p_tab_idx, const uint8_t * p_title, int wasgo_throwaway, int p_title_wasgo_buffer_size);
void _wasgo_TabContainer_wrapper_set_tabs_rearrange_group(WasGoID wasgo_id, int p_group_id);
void _wasgo_TabContainer_wrapper_set_tabs_visible(WasGoID wasgo_id, bool p_visible);
void _wasgo_TabContainer_wrapper_set_use_hidden_tabs_for_min_size(WasGoID wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoID _wasgo_TabContainer_constructor();
            
}
#endif