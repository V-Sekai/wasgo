/* THIS FILE IS GENERATED */
#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Variant.h"
#include "Color.h"
#include "PopupMenu.h"
#include "Control.h"
class TextEdit : public Control{
public:
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
enum SearchFlags{
SEARCH_MATCH_CASE,
SEARCH_WHOLE_WORDS,
SEARCH_BACKWARDS
};
enum SearchResult{
SEARCH_RESULT_COLUMN,
SEARCH_RESULT_LINE
};
void add_color_region(String p_begin_key, String p_end_key, Color p_color, bool p_line_only = (bool) false);
void add_keyword_color(String p_keyword, Color p_color);
bool can_fold(int p_line);
void center_viewport_to_cursor();
void clear_colors();
void clear_undo_history();
void copy();
bool cursor_get_blink_enabled();
float cursor_get_blink_speed();
int cursor_get_column();
int cursor_get_line();
bool cursor_is_block_mode();
void cursor_set_blink_enabled(bool p_enable);
void cursor_set_blink_speed(float p_blink_speed);
void cursor_set_block_mode(bool p_enable);
void cursor_set_column(int p_column, bool p_adjust_viewport = (bool) true);
void cursor_set_line(int p_line, bool p_adjust_viewport = (bool) true, bool p_can_be_hidden = (bool) true, int p_wrap_index = (int) 0);
void cut();
void deselect();
void draw_minimap(bool p_draw);
void fold_all_lines();
void fold_line(int p_line);
Array get_breakpoints();
int get_h_scroll();
Color get_keyword_color(String p_keyword);
String get_line(int p_line);
int get_line_count();
PopupMenu get_menu();
int get_minimap_width();
int get_selection_from_column();
int get_selection_from_line();
String get_selection_text();
int get_selection_to_column();
int get_selection_to_line();
String get_text();
float get_v_scroll();
float get_v_scroll_speed();
String get_word_under_cursor();
bool has_keyword_color(String p_keyword);
void insert_text_at_cursor(String p_text);
bool is_breakpoint_gutter_enabled();
bool is_context_menu_enabled();
bool is_drawing_fold_gutter();
bool is_drawing_minimap();
bool is_drawing_spaces();
bool is_drawing_tabs();
bool is_folded(int p_line);
bool is_hiding_enabled();
bool is_highlight_all_occurrences_enabled();
bool is_highlight_current_line_enabled();
bool is_line_hidden(int p_line);
bool is_overriding_selected_font_color();
bool is_readonly();
bool is_right_click_moving_caret();
bool is_selecting_enabled();
bool is_selection_active();
bool is_shortcut_keys_enabled();
bool is_show_line_numbers_enabled();
bool is_smooth_scroll_enabled();
bool is_syntax_coloring_enabled();
bool is_virtual_keyboard_enabled();
bool is_wrap_enabled();
void menu_option(int p_option);
void paste();
void redo();
void remove_breakpoints();
PoolIntArray search(String p_key, int p_flags, int p_from_line, int p_from_column);
void select(int p_from_line, int p_from_column, int p_to_line, int p_to_column);
void select_all();
void set_breakpoint_gutter_enabled(bool p_enable);
void set_context_menu_enabled(bool p_enable);
void set_draw_fold_gutter(bool p_arg0);
void set_draw_spaces(bool p_arg0);
void set_draw_tabs(bool p_arg0);
void set_h_scroll(int p_value);
void set_hiding_enabled(bool p_enable);
void set_highlight_all_occurrences(bool p_enable);
void set_highlight_current_line(bool p_enabled);
void set_line(int p_line, String p_new_text);
void set_line_as_hidden(int p_line, bool p_enable);
void set_minimap_width(int p_width);
void set_override_selected_font_color(bool p_override);
void set_readonly(bool p_enable);
void set_right_click_moves_caret(bool p_enable);
void set_selecting_enabled(bool p_enable);
void set_shortcut_keys_enabled(bool p_enable);
void set_show_line_numbers(bool p_enable);
void set_smooth_scroll_enable(bool p_enable);
void set_syntax_coloring(bool p_enable);
void set_text(String p_text);
void set_v_scroll(float p_value);
void set_v_scroll_speed(float p_speed);
void set_virtual_keyboard_enabled(bool p_enable);
void set_wrap_enabled(bool p_enable);
void toggle_fold_line(int p_line);
void undo();
void unfold_line(int p_line);
void unhide_all_lines();

protected:
TextEdit(WasGoId p_wasgo_id);
public:
TextEdit();
~TextEdit();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_TextEdit_wrapper_add_color_region(WasGoId wasgo_id, const uint8_t * p_begin_key, int p_begin_key_wasgo_buffer_size, const uint8_t * p_end_key, int p_end_key_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size, bool p_line_only);
void _wasgo_TextEdit_wrapper_add_keyword_color(WasGoId wasgo_id, const uint8_t * p_keyword, int p_keyword_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size);
int _wasgo_TextEdit_wrapper_can_fold(WasGoId wasgo_id, int p_line);
void _wasgo_TextEdit_wrapper_center_viewport_to_cursor(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_clear_colors(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_clear_undo_history(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_copy(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_cursor_get_blink_enabled(WasGoId wasgo_id);
float _wasgo_TextEdit_wrapper_cursor_get_blink_speed(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_cursor_get_column(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_cursor_get_line(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_cursor_is_block_mode(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_cursor_set_blink_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_cursor_set_blink_speed(WasGoId wasgo_id, float p_blink_speed);
void _wasgo_TextEdit_wrapper_cursor_set_block_mode(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_cursor_set_column(WasGoId wasgo_id, int p_column, bool p_adjust_viewport);
void _wasgo_TextEdit_wrapper_cursor_set_line(WasGoId wasgo_id, int p_line, bool p_adjust_viewport, bool p_can_be_hidden, int p_wrap_index);
void _wasgo_TextEdit_wrapper_cut(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_deselect(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_draw_minimap(WasGoId wasgo_id, bool p_draw);
void _wasgo_TextEdit_wrapper_fold_all_lines(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_fold_line(WasGoId wasgo_id, int p_line);
WasGoId _wasgo_TextEdit_wrapper_get_breakpoints(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_get_h_scroll(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_get_keyword_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_keyword, int p_keyword_wasgo_buffer_size);
void _wasgo_TextEdit_wrapper_get_line(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_line);
int _wasgo_TextEdit_wrapper_get_line_count(WasGoId wasgo_id);
WasGoId _wasgo_TextEdit_wrapper_get_menu(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_get_minimap_width(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_get_selection_from_column(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_get_selection_from_line(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_get_selection_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_TextEdit_wrapper_get_selection_to_column(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_get_selection_to_line(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_TextEdit_wrapper_get_v_scroll(WasGoId wasgo_id);
float _wasgo_TextEdit_wrapper_get_v_scroll_speed(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_get_word_under_cursor(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_TextEdit_wrapper_has_keyword_color(WasGoId wasgo_id, const uint8_t * p_keyword, int p_keyword_wasgo_buffer_size);
void _wasgo_TextEdit_wrapper_insert_text_at_cursor(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
int _wasgo_TextEdit_wrapper_is_breakpoint_gutter_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_context_menu_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_drawing_fold_gutter(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_drawing_minimap(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_drawing_spaces(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_drawing_tabs(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_folded(WasGoId wasgo_id, int p_line);
int _wasgo_TextEdit_wrapper_is_hiding_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_highlight_all_occurrences_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_highlight_current_line_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_line_hidden(WasGoId wasgo_id, int p_line);
int _wasgo_TextEdit_wrapper_is_overriding_selected_font_color(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_readonly(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_right_click_moving_caret(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_selecting_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_selection_active(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_shortcut_keys_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_show_line_numbers_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_smooth_scroll_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_syntax_coloring_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_virtual_keyboard_enabled(WasGoId wasgo_id);
int _wasgo_TextEdit_wrapper_is_wrap_enabled(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_menu_option(WasGoId wasgo_id, int p_option);
void _wasgo_TextEdit_wrapper_paste(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_redo(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_remove_breakpoints(WasGoId wasgo_id);
WasGoId _wasgo_TextEdit_wrapper_search(WasGoId wasgo_id, const uint8_t * p_key, int p_key_wasgo_buffer_size, int p_flags, int p_from_line, int p_from_column);
void _wasgo_TextEdit_wrapper_select(WasGoId wasgo_id, int p_from_line, int p_from_column, int p_to_line, int p_to_column);
void _wasgo_TextEdit_wrapper_select_all(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_set_breakpoint_gutter_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_context_menu_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_draw_fold_gutter(WasGoId wasgo_id, bool p_arg0);
void _wasgo_TextEdit_wrapper_set_draw_spaces(WasGoId wasgo_id, bool p_arg0);
void _wasgo_TextEdit_wrapper_set_draw_tabs(WasGoId wasgo_id, bool p_arg0);
void _wasgo_TextEdit_wrapper_set_h_scroll(WasGoId wasgo_id, int p_value);
void _wasgo_TextEdit_wrapper_set_hiding_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_highlight_all_occurrences(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_highlight_current_line(WasGoId wasgo_id, bool p_enabled);
void _wasgo_TextEdit_wrapper_set_line(WasGoId wasgo_id, int p_line, const uint8_t * p_new_text, int p_new_text_wasgo_buffer_size);
void _wasgo_TextEdit_wrapper_set_line_as_hidden(WasGoId wasgo_id, int p_line, bool p_enable);
void _wasgo_TextEdit_wrapper_set_minimap_width(WasGoId wasgo_id, int p_width);
void _wasgo_TextEdit_wrapper_set_override_selected_font_color(WasGoId wasgo_id, bool p_override);
void _wasgo_TextEdit_wrapper_set_readonly(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_right_click_moves_caret(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_selecting_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_shortcut_keys_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_show_line_numbers(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_smooth_scroll_enable(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_syntax_coloring(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_TextEdit_wrapper_set_v_scroll(WasGoId wasgo_id, float p_value);
void _wasgo_TextEdit_wrapper_set_v_scroll_speed(WasGoId wasgo_id, float p_speed);
void _wasgo_TextEdit_wrapper_set_virtual_keyboard_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_set_wrap_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextEdit_wrapper_toggle_fold_line(WasGoId wasgo_id, int p_line);
void _wasgo_TextEdit_wrapper_undo(WasGoId wasgo_id);
void _wasgo_TextEdit_wrapper_unfold_line(WasGoId wasgo_id, int p_line);
void _wasgo_TextEdit_wrapper_unhide_all_lines(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_TextEdit_constructor();
    void _wasgo_TextEdit_destructor(WasGoId p_wasgo_id);
            
}
#endif