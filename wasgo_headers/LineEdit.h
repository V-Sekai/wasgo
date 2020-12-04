/* THIS FILE IS GENERATED */
#ifndef LINEEDIT_H
#define LINEEDIT_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Texture.h"
#include "PopupMenu.h"
#include "ustring.h"
class LineEdit : public Control{
public:
enum Align{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_FILL
};
enum MenuItems{
MENU_CUT,
MENU_COPY,
MENU_PASTE,
MENU_CLEAR,
MENU_SELECT_ALL,
MENU_UNDO,
MENU_REDO,
MENU_MAX
};
void append_at_cursor(String p_text);
void clear();
bool cursor_get_blink_enabled();
float cursor_get_blink_speed();
void cursor_set_blink_enabled(bool p_enabled);
void cursor_set_blink_speed(float p_blink_speed);
void delete_char_at_cursor();
void delete_text(int p_from_column, int p_to_column);
void deselect();
LineEdit::Align get_align();
int get_cursor_position();
bool get_expand_to_text_length();
int get_max_length();
PopupMenu get_menu();
String get_placeholder();
float get_placeholder_alpha();
Texture get_right_icon();
int get_scroll_offset();
String get_secret_character();
String get_text();
bool is_clear_button_enabled();
bool is_context_menu_enabled();
bool is_editable();
bool is_secret();
bool is_selecting_enabled();
bool is_shortcut_keys_enabled();
bool is_virtual_keyboard_enabled();
void menu_option(int p_option);
void select(int p_from = (int) 0, int p_to = (int) -1);
void select_all();
void set_align(LineEdit::Align p_align);
void set_clear_button_enabled(bool p_enable);
void set_context_menu_enabled(bool p_enable);
void set_cursor_position(int p_position);
void set_editable(bool p_enabled);
void set_expand_to_text_length(bool p_enabled);
void set_max_length(int p_chars);
void set_placeholder(String p_text);
void set_placeholder_alpha(float p_alpha);
void set_right_icon(Texture p_icon);
void set_secret(bool p_enabled);
void set_secret_character(String p_character);
void set_selecting_enabled(bool p_enable);
void set_shortcut_keys_enabled(bool p_enable);
void set_text(String p_text);
void set_virtual_keyboard_enabled(bool p_enable);

protected:
public:
explicit LineEdit(WasGoID p_wasgo_id);
explicit LineEdit(Control other);
LineEdit new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_LineEdit_wrapper_append_at_cursor(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_LineEdit_wrapper_clear(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_cursor_get_blink_enabled(WasGoID wasgo_id);
float _wasgo_LineEdit_wrapper_cursor_get_blink_speed(WasGoID wasgo_id);
void _wasgo_LineEdit_wrapper_cursor_set_blink_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_LineEdit_wrapper_cursor_set_blink_speed(WasGoID wasgo_id, float p_blink_speed);
void _wasgo_LineEdit_wrapper_delete_char_at_cursor(WasGoID wasgo_id);
void _wasgo_LineEdit_wrapper_delete_text(WasGoID wasgo_id, int p_from_column, int p_to_column);
void _wasgo_LineEdit_wrapper_deselect(WasGoID wasgo_id);
WasGoID _wasgo_LineEdit_wrapper_get_align(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_get_cursor_position(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_get_expand_to_text_length(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_get_max_length(WasGoID wasgo_id);
WasGoID _wasgo_LineEdit_wrapper_get_menu(WasGoID wasgo_id);
void _wasgo_LineEdit_wrapper_get_placeholder(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_LineEdit_wrapper_get_placeholder_alpha(WasGoID wasgo_id);
WasGoID _wasgo_LineEdit_wrapper_get_right_icon(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_get_scroll_offset(WasGoID wasgo_id);
void _wasgo_LineEdit_wrapper_get_secret_character(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_LineEdit_wrapper_get_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_LineEdit_wrapper_is_clear_button_enabled(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_is_context_menu_enabled(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_is_editable(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_is_secret(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_is_selecting_enabled(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_is_shortcut_keys_enabled(WasGoID wasgo_id);
int _wasgo_LineEdit_wrapper_is_virtual_keyboard_enabled(WasGoID wasgo_id);
void _wasgo_LineEdit_wrapper_menu_option(WasGoID wasgo_id, int p_option);
void _wasgo_LineEdit_wrapper_select(WasGoID wasgo_id, int p_from, int p_to);
void _wasgo_LineEdit_wrapper_select_all(WasGoID wasgo_id);
void _wasgo_LineEdit_wrapper_set_align(WasGoID wasgo_id, WasGoID p_align);
void _wasgo_LineEdit_wrapper_set_clear_button_enabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_LineEdit_wrapper_set_context_menu_enabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_LineEdit_wrapper_set_cursor_position(WasGoID wasgo_id, int p_position);
void _wasgo_LineEdit_wrapper_set_editable(WasGoID wasgo_id, bool p_enabled);
void _wasgo_LineEdit_wrapper_set_expand_to_text_length(WasGoID wasgo_id, bool p_enabled);
void _wasgo_LineEdit_wrapper_set_max_length(WasGoID wasgo_id, int p_chars);
void _wasgo_LineEdit_wrapper_set_placeholder(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_LineEdit_wrapper_set_placeholder_alpha(WasGoID wasgo_id, float p_alpha);
void _wasgo_LineEdit_wrapper_set_right_icon(WasGoID wasgo_id, WasGoID p_icon);
void _wasgo_LineEdit_wrapper_set_secret(WasGoID wasgo_id, bool p_enabled);
void _wasgo_LineEdit_wrapper_set_secret_character(WasGoID wasgo_id, const uint8_t * p_character, int p_character_wasgo_buffer_size);
void _wasgo_LineEdit_wrapper_set_selecting_enabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_LineEdit_wrapper_set_shortcut_keys_enabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_LineEdit_wrapper_set_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_LineEdit_wrapper_set_virtual_keyboard_enabled(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_LineEdit_constructor();
            
}
#endif