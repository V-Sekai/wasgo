/* THIS FILE IS GENERATED */
#ifndef SCROLLCONTAINER_H
#define SCROLLCONTAINER_H

#include "wasgo\wasgo.h"

#include "VScrollBar.h"
#include "HScrollBar.h"
#include "Container.h"
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
explicit ScrollContainer(WasGoID p_wasgo_id);
explicit ScrollContainer(Container other);
ScrollContainer new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ScrollContainer_wrapper_get_deadzone(WasGoID wasgo_id);
int _wasgo_ScrollContainer_wrapper_get_h_scroll(WasGoID wasgo_id);
WasGoID _wasgo_ScrollContainer_wrapper_get_h_scrollbar(WasGoID wasgo_id);
int _wasgo_ScrollContainer_wrapper_get_v_scroll(WasGoID wasgo_id);
WasGoID _wasgo_ScrollContainer_wrapper_get_v_scrollbar(WasGoID wasgo_id);
int _wasgo_ScrollContainer_wrapper_is_following_focus(WasGoID wasgo_id);
int _wasgo_ScrollContainer_wrapper_is_h_scroll_enabled(WasGoID wasgo_id);
int _wasgo_ScrollContainer_wrapper_is_v_scroll_enabled(WasGoID wasgo_id);
void _wasgo_ScrollContainer_wrapper_set_deadzone(WasGoID wasgo_id, int p_deadzone);
void _wasgo_ScrollContainer_wrapper_set_enable_h_scroll(WasGoID wasgo_id, bool p_enable);
void _wasgo_ScrollContainer_wrapper_set_enable_v_scroll(WasGoID wasgo_id, bool p_enable);
void _wasgo_ScrollContainer_wrapper_set_follow_focus(WasGoID wasgo_id, bool p_enabled);
void _wasgo_ScrollContainer_wrapper_set_h_scroll(WasGoID wasgo_id, int p_value);
void _wasgo_ScrollContainer_wrapper_set_v_scroll(WasGoID wasgo_id, int p_value);

    //constructor wrappers
    WasGoID _wasgo_ScrollContainer_constructor();
            
}
#endif