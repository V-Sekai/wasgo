/* THIS FILE IS GENERATED */
#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <stdint.h>

#include "String.h"
#include "Control.h"
#include "PopupMenu.h"
#include "Texture.h"
#include "InputEvent.h"
class LineEdit : public Control{
public: LineEdit();
enum Align{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
ALIGN_RIGHT: 2,
};
enum MenuItems{
MENU_CUT: 0,
MENU_COPY: 1,
MENU_PASTE: 2,
MENU_CLEAR: 3,
MENU_SELECT_ALL: 4,
MENU_UNDO: 5,
MENU_REDO: 6,
};
void  _editor_settings_changed();
void  _editor_settings_changed();
void  _gui_input(InputEvent arg0);
void  _text_changed();
void  _text_changed();
void  _toggle_draw_caret();
void  _toggle_draw_caret();
void  append_at_cursor(String text);
void  clear();
void  clear();
bool  cursor_get_blink_enabled();
bool  cursor_get_blink_enabled();
float  cursor_get_blink_speed();
float  cursor_get_blink_speed();
void  cursor_set_blink_enabled(bool enabled);
void  cursor_set_blink_speed(float blink_speed);
void  deselect();
void  deselect();
enum.LineEdit::Align  get_align();
enum.LineEdit::Align  get_align();
int  get_cursor_position();
int  get_cursor_position();
bool  get_expand_to_text_length();
bool  get_expand_to_text_length();
int  get_max_length();
int  get_max_length();
PopupMenu  get_menu();
PopupMenu  get_menu();
String  get_placeholder();
String  get_placeholder();
float  get_placeholder_alpha();
float  get_placeholder_alpha();
Texture  get_right_icon();
Texture  get_right_icon();
String  get_secret_character();
String  get_secret_character();
String  get_text();
String  get_text();
bool  is_clear_button_enabled();
bool  is_clear_button_enabled();
bool  is_context_menu_enabled();
bool  is_context_menu_enabled();
bool  is_editable();
bool  is_editable();
bool  is_secret();
bool  is_secret();
bool  is_selecting_enabled();
bool  is_selecting_enabled();
bool  is_shortcut_keys_enabled();
bool  is_shortcut_keys_enabled();
void  menu_option(int option);
void  select(int from = 0, int to = -1);
void  select_all();
void  select_all();
void  set_align(int align);
void  set_clear_button_enabled(bool enable);
void  set_context_menu_enabled(bool enable);
void  set_cursor_position(int position);
void  set_editable(bool enabled);
void  set_expand_to_text_length(bool enabled);
void  set_max_length(int chars);
void  set_placeholder(String text);
void  set_placeholder_alpha(float alpha);
void  set_right_icon(Texture icon);
void  set_secret(bool enabled);
void  set_secret_character(String character);
void  set_selecting_enabled(bool enable);
void  set_shortcut_keys_enabled(bool enable);
void  set_text(String text);
};
#endif