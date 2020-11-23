/* THIS FILE IS GENERATED */
#ifndef BASEBUTTON_H
#define BASEBUTTON_H

#include <stdint.h>

#include "ButtonGroup.h"
#include "Control.h"
#include "ShortCut.h"
#include "InputEvent.h"
class BaseButton : public Control{
public: BaseButton();
enum ActionMode{
ACTION_MODE_BUTTON_PRESS: 0,
};
enum DrawMode{
DRAW_NORMAL: 0,
DRAW_PRESSED: 1,
DRAW_HOVER: 2,
DRAW_DISABLED: 3,
};
void  _gui_input(InputEvent arg0);
void  _pressed();
void  _pressed();
void  _toggled(bool button_pressed);
void  _unhandled_input(InputEvent arg0);
enum.BaseButton::ActionMode  get_action_mode();
enum.BaseButton::ActionMode  get_action_mode();
ButtonGroup  get_button_group();
ButtonGroup  get_button_group();
int  get_button_mask();
int  get_button_mask();
enum.BaseButton::DrawMode  get_draw_mode();
enum.BaseButton::DrawMode  get_draw_mode();
enum.Control::FocusMode  get_enabled_focus_mode();
enum.Control::FocusMode  get_enabled_focus_mode();
ShortCut  get_shortcut();
ShortCut  get_shortcut();
bool  is_disabled();
bool  is_disabled();
bool  is_hovered();
bool  is_hovered();
bool  is_keep_pressed_outside();
bool  is_keep_pressed_outside();
bool  is_pressed();
bool  is_pressed();
bool  is_shortcut_in_tooltip_enabled();
bool  is_shortcut_in_tooltip_enabled();
bool  is_toggle_mode();
bool  is_toggle_mode();
void  set_action_mode(int mode);
void  set_button_group(ButtonGroup button_group);
void  set_button_mask(int mask);
void  set_disabled(bool disabled);
void  set_enabled_focus_mode(int mode);
void  set_keep_pressed_outside(bool enabled);
void  set_pressed(bool pressed);
void  set_shortcut(ShortCut shortcut);
void  set_shortcut_in_tooltip(bool enabled);
void  set_toggle_mode(bool enabled);
};
#endif