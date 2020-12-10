/* THIS FILE IS GENERATED */
#ifndef BASEBUTTON_H
#define BASEBUTTON_H

#include "wasgo\wasgoid.h"

#include "ButtonGroup.h"
#include "ShortCut.h"
#include "Control.h"
class BaseButton : public Control{
public:
enum ActionMode{
ACTION_MODE_BUTTON_PRESS,
ACTION_MODE_BUTTON_RELEASE
};
enum DrawMode{
DRAW_NORMAL,
DRAW_PRESSED,
DRAW_HOVER,
DRAW_DISABLED,
DRAW_HOVER_PRESSED
};
BaseButton::ActionMode get_action_mode();
ButtonGroup get_button_group();
int get_button_mask();
BaseButton::DrawMode get_draw_mode();
Control::FocusMode get_enabled_focus_mode();
ShortCut get_shortcut();
bool is_disabled();
bool is_hovered();
bool is_keep_pressed_outside();
bool is_pressed();
bool is_shortcut_in_tooltip_enabled();
bool is_toggle_mode();
void set_action_mode(BaseButton::ActionMode p_mode);
void set_button_group(ButtonGroup p_button_group);
void set_button_mask(int p_mask);
void set_disabled(bool p_disabled);
void set_enabled_focus_mode(Control::FocusMode p_mode);
void set_keep_pressed_outside(bool p_enabled);
void set_pressed(bool p_pressed);
void set_shortcut(ShortCut p_shortcut);
void set_shortcut_in_tooltip(bool p_enabled);
void set_toggle_mode(bool p_enabled);

protected:
public:
explicit BaseButton(WasGoID p_wasgo_id);
explicit BaseButton(Control other);
BaseButton();
BaseButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_BaseButton_wrapper_get_action_mode(WasGoID wasgo_id);
WasGoID _wasgo_BaseButton_wrapper_get_button_group(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_get_button_mask(WasGoID wasgo_id);
WasGoID _wasgo_BaseButton_wrapper_get_draw_mode(WasGoID wasgo_id);
WasGoID _wasgo_BaseButton_wrapper_get_enabled_focus_mode(WasGoID wasgo_id);
WasGoID _wasgo_BaseButton_wrapper_get_shortcut(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_is_disabled(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_is_hovered(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_is_keep_pressed_outside(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_is_pressed(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_is_shortcut_in_tooltip_enabled(WasGoID wasgo_id);
int _wasgo_BaseButton_wrapper_is_toggle_mode(WasGoID wasgo_id);
void _wasgo_BaseButton_wrapper_set_action_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_BaseButton_wrapper_set_button_group(WasGoID wasgo_id, WasGoID p_button_group);
void _wasgo_BaseButton_wrapper_set_button_mask(WasGoID wasgo_id, int p_mask);
void _wasgo_BaseButton_wrapper_set_disabled(WasGoID wasgo_id, bool p_disabled);
void _wasgo_BaseButton_wrapper_set_enabled_focus_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_BaseButton_wrapper_set_keep_pressed_outside(WasGoID wasgo_id, bool p_enabled);
void _wasgo_BaseButton_wrapper_set_pressed(WasGoID wasgo_id, bool p_pressed);
void _wasgo_BaseButton_wrapper_set_shortcut(WasGoID wasgo_id, WasGoID p_shortcut);
void _wasgo_BaseButton_wrapper_set_shortcut_in_tooltip(WasGoID wasgo_id, bool p_enabled);
void _wasgo_BaseButton_wrapper_set_toggle_mode(WasGoID wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoID _wasgo_BaseButton_constructor();
            
}
#endif