/* THIS FILE IS GENERATED */
#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <stdint.h>

#include "PopupMenu.h"
#include "String.h"
#include "InputEvent.h"
#include "PoolIntArray.h"
#include "Control.h"
#include "Variant.h"
class TextEdit : public Control{
public: TextEdit();
enum SearchFlags{
SEARCH_MATCH_CASE: 1,
SEARCH_WHOLE_WORDS: 2,
};
enum SearchResult{
SEARCH_RESULT_COLUMN: 0,
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
void  _click_selection_held();
void  _click_selection_held();
void  _cursor_changed_emit();
void  _cursor_changed_emit();
void  _gui_input(InputEvent arg0);
void  _push_current_op();
void  _push_current_op();
void  _scroll_moved(float arg0);
void  _text_changed_emit();
void  _text_changed_emit();
void  _toggle_draw_caret();
void  _toggle_draw_caret();
void  _update_wrap_at();
void  _update_wrap_at();
void  _v_scroll_input();
void  _v_scroll_input();
void  add_color_region(String begin_key, String end_key, Color color, bool line_only = false);
void  add_keyword_color(String keyword, Color color);
bool  can_fold(int line);
void  center_viewport_to_cursor();
void  center_viewport_to_cursor();
void  clear_colors();
void  clear_colors();
void  clear_undo_history();
void  clear_undo_history();
void  copy();
void  copy();
bool  cursor_get_blink_enabled();
bool  cursor_get_blink_enabled();
float  cursor_get_blink_speed();
float  cursor_get_blink_speed();
int  cursor_get_column();
int  cursor_get_column();
int  cursor_get_line();
int  cursor_get_line();
bool  cursor_is_block_mode();
bool  cursor_is_block_mode();
void  cursor_set_blink_enabled(bool enable);
void  cursor_set_blink_speed(float blink_speed);
void  cursor_set_block_mode(bool enable);
void  cursor_set_column(int column, bool adjust_viewport = true);
void  cursor_set_line(int line, bool adjust_viewport = true, bool can_be_hidden = true, int wrap_index = 0);
void  cut();
void  cut();
void  deselect();
void  deselect();
void  draw_minimap(bool draw);
void  fold_all_lines();
void  fold_all_lines();
void  fold_line(int line);
Array  get_breakpoints();
Array  get_breakpoints();
int  get_h_scroll();
int  get_h_scroll();
Color  get_keyword_color(String keyword);
String  get_line(int line);
int  get_line_count();
int  get_line_count();
PopupMenu  get_menu();
PopupMenu  get_menu();
int  get_minimap_width();
int  get_minimap_width();
int  get_selection_from_column();
int  get_selection_from_column();
int  get_selection_from_line();
int  get_selection_from_line();
String  get_selection_text();
String  get_selection_text();
int  get_selection_to_column();
int  get_selection_to_column();
int  get_selection_to_line();
int  get_selection_to_line();
String  get_text();
String  get_text();
float  get_v_scroll();
float  get_v_scroll();
float  get_v_scroll_speed();
float  get_v_scroll_speed();
String  get_word_under_cursor();
String  get_word_under_cursor();
bool  has_keyword_color(String keyword);
void  insert_text_at_cursor(String text);
bool  is_breakpoint_gutter_enabled();
bool  is_breakpoint_gutter_enabled();
bool  is_context_menu_enabled();
bool  is_context_menu_enabled();
bool  is_drawing_fold_gutter();
bool  is_drawing_fold_gutter();
bool  is_drawing_minimap();
bool  is_drawing_minimap();
bool  is_drawing_spaces();
bool  is_drawing_spaces();
bool  is_drawing_tabs();
bool  is_drawing_tabs();
bool  is_folded(int line);
bool  is_hiding_enabled();
bool  is_hiding_enabled();
bool  is_highlight_all_occurrences_enabled();
bool  is_highlight_all_occurrences_enabled();
bool  is_highlight_current_line_enabled();
bool  is_highlight_current_line_enabled();
bool  is_line_hidden(int line);
bool  is_overriding_selected_font_color();
bool  is_overriding_selected_font_color();
bool  is_readonly();
bool  is_readonly();
bool  is_right_click_moving_caret();
bool  is_right_click_moving_caret();
bool  is_selecting_enabled();
bool  is_selecting_enabled();
bool  is_selection_active();
bool  is_selection_active();
bool  is_shortcut_keys_enabled();
bool  is_shortcut_keys_enabled();
bool  is_show_line_numbers_enabled();
bool  is_show_line_numbers_enabled();
bool  is_smooth_scroll_enabled();
bool  is_smooth_scroll_enabled();
bool  is_syntax_coloring_enabled();
bool  is_syntax_coloring_enabled();
bool  is_wrap_enabled();
bool  is_wrap_enabled();
void  menu_option(int option);
void  paste();
void  paste();
void  redo();
void  redo();
void  remove_breakpoints();
void  remove_breakpoints();
PoolIntArray  search(String key, int flags, int from_line, int from_column);
void  select(int from_line, int from_column, int to_line, int to_column);
void  select_all();
void  select_all();
void  set_breakpoint_gutter_enabled(bool enable);
void  set_context_menu_enabled(bool enable);
void  set_draw_fold_gutter(bool arg0);
void  set_draw_spaces(bool arg0);
void  set_draw_tabs(bool arg0);
void  set_h_scroll(int value);
void  set_hiding_enabled(bool enable);
void  set_highlight_all_occurrences(bool enable);
void  set_highlight_current_line(bool enabled);
void  set_line_as_hidden(int line, bool enable);
void  set_minimap_width(int width);
void  set_override_selected_font_color(bool override);
void  set_readonly(bool enable);
void  set_right_click_moves_caret(bool enable);
void  set_selecting_enabled(bool enable);
void  set_shortcut_keys_enabled(bool enable);
void  set_show_line_numbers(bool enable);
void  set_smooth_scroll_enable(bool enable);
void  set_syntax_coloring(bool enable);
void  set_text(String text);
void  set_v_scroll(float value);
void  set_v_scroll_speed(float speed);
void  set_wrap_enabled(bool enable);
void  toggle_fold_line(int line);
void  undo();
void  undo();
void  unfold_line(int line);
void  unhide_all_lines();
void  unhide_all_lines();
};
#endif