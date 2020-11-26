/* THIS FILE IS GENERATED */
#ifndef SCROLLCONTAINER_H
#define SCROLLCONTAINER_H

#include <stdint.h>

#include "HScrollBar.h"
#include "VScrollBar.h"
#include "Container.h"
#include "Control.h"
#include "InputEvent.h"
class ScrollContainer : public Container{
public: ScrollContainer();
void  _ensure_focused_visible(Control arg0);
void  _gui_input(InputEvent arg0);
void  _scroll_moved(float arg0);
void  _update_scrollbar_position();
void  _update_scrollbar_position();
int  get_deadzone();
int  get_deadzone();
int  get_h_scroll();
int  get_h_scroll();
HScrollBar  get_h_scrollbar();
HScrollBar  get_h_scrollbar();
int  get_v_scroll();
int  get_v_scroll();
VScrollBar  get_v_scrollbar();
VScrollBar  get_v_scrollbar();
bool  is_following_focus();
bool  is_following_focus();
bool  is_h_scroll_enabled();
bool  is_h_scroll_enabled();
bool  is_v_scroll_enabled();
bool  is_v_scroll_enabled();
void  set_deadzone(int deadzone);
void  set_enable_h_scroll(bool enable);
void  set_enable_v_scroll(bool enable);
void  set_follow_focus(bool enabled);
void  set_h_scroll(int value);
void  set_v_scroll(int value);
};
#endif