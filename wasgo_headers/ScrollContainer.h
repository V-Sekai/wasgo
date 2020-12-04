/* THIS FILE IS GENERATED */
#ifndef SCROLLCONTAINER_H
#define SCROLLCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
#include "HScrollBar.h"
#include "VScrollBar.h"
class ScrollContainer : public Container{
public:
int get_deadzone();
int get_h_scroll();
HScrollBar get_h_scrollbar();
int get_v_scroll();
VScrollBar get_v_scrollbar();
bool is_following_focus();
bool is_h_scroll_enabled();
bool is_v_scroll_enabled();
void set_deadzone(int p_deadzone);
void set_enable_h_scroll(bool p_enable);
void set_enable_v_scroll(bool p_enable);
void set_follow_focus(bool p_enabled);
void set_h_scroll(int p_value);
void set_v_scroll(int p_value);

protected:
public:
explicit ScrollContainer(WasGoId p_wasgo_id);
explicit ScrollContainer(Container other);
ScrollContainer new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ScrollContainer_wrapper_get_deadzone(WasGoId wasgo_id);
int _wasgo_ScrollContainer_wrapper_get_h_scroll(WasGoId wasgo_id);
WasGoId _wasgo_ScrollContainer_wrapper_get_h_scrollbar(WasGoId wasgo_id);
int _wasgo_ScrollContainer_wrapper_get_v_scroll(WasGoId wasgo_id);
WasGoId _wasgo_ScrollContainer_wrapper_get_v_scrollbar(WasGoId wasgo_id);
int _wasgo_ScrollContainer_wrapper_is_following_focus(WasGoId wasgo_id);
int _wasgo_ScrollContainer_wrapper_is_h_scroll_enabled(WasGoId wasgo_id);
int _wasgo_ScrollContainer_wrapper_is_v_scroll_enabled(WasGoId wasgo_id);
void _wasgo_ScrollContainer_wrapper_set_deadzone(WasGoId wasgo_id, int p_deadzone);
void _wasgo_ScrollContainer_wrapper_set_enable_h_scroll(WasGoId wasgo_id, bool p_enable);
void _wasgo_ScrollContainer_wrapper_set_enable_v_scroll(WasGoId wasgo_id, bool p_enable);
void _wasgo_ScrollContainer_wrapper_set_follow_focus(WasGoId wasgo_id, bool p_enabled);
void _wasgo_ScrollContainer_wrapper_set_h_scroll(WasGoId wasgo_id, int p_value);
void _wasgo_ScrollContainer_wrapper_set_v_scroll(WasGoId wasgo_id, int p_value);

    //constructor wrappers
    WasGoId _wasgo_ScrollContainer_constructor();
            
}
#endif