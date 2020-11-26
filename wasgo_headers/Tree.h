/* THIS FILE IS GENERATED */
#ifndef TREE_H
#define TREE_H

#include <stdint.h>

#include "Vector2.h"
#include "TreeItem.h"
#include "String.h"
#include "Rect2.h"
#include "InputEvent.h"
#include "Control.h"
#include "Object.h"
class Tree : public Control{
public: Tree();
enum SelectMode{
SELECT_SINGLE: 0,
SELECT_ROW: 1,
};
enum DropModeFlags{
DROP_MODE_DISABLED: 0,
DROP_MODE_ON_ITEM: 1,
};
void  _gui_input(InputEvent arg0);
void  _popup_select(int arg0);
void  _range_click_timeout();
void  _range_click_timeout();
void  _scroll_moved(float arg0);
void  _text_editor_enter(String arg0);
void  _text_editor_modal_close();
void  _text_editor_modal_close();
void  _value_editor_changed(float arg0);
bool  are_column_titles_visible();
bool  are_column_titles_visible();
void  clear();
void  clear();
TreeItem  create_item(Object parent = null, int idx = -1);
void  ensure_cursor_is_visible();
void  ensure_cursor_is_visible();
bool  get_allow_reselect();
bool  get_allow_reselect();
bool  get_allow_rmb_select();
bool  get_allow_rmb_select();
int  get_column_at_position(Vector2 position);
String  get_column_title(int column);
int  get_column_width(int column);
int  get_columns();
int  get_columns();
Rect2  get_custom_popup_rect();
Rect2  get_custom_popup_rect();
int  get_drop_mode_flags();
int  get_drop_mode_flags();
int  get_drop_section_at_position(Vector2 position);
TreeItem  get_edited();
TreeItem  get_edited();
int  get_edited_column();
int  get_edited_column();
Rect2  get_item_area_rect(Object item, int column = -1);
TreeItem  get_item_at_position(Vector2 position);
TreeItem  get_next_selected(Object from);
int  get_pressed_button();
int  get_pressed_button();
TreeItem  get_root();
TreeItem  get_root();
Vector2  get_scroll();
Vector2  get_scroll();
enum.Tree::SelectMode  get_select_mode();
enum.Tree::SelectMode  get_select_mode();
TreeItem  get_selected();
TreeItem  get_selected();
int  get_selected_column();
int  get_selected_column();
bool  is_folding_hidden();
bool  is_folding_hidden();
bool  is_root_hidden();
bool  is_root_hidden();
void  set_allow_reselect(bool allow);
void  set_allow_rmb_select(bool allow);
void  set_column_expand(int column, bool expand);
void  set_column_min_width(int column, int min_width);
void  set_column_title(int column, String title);
void  set_column_titles_visible(bool visible);
void  set_columns(int amount);
void  set_drop_mode_flags(int flags);
void  set_hide_folding(bool hide);
void  set_hide_root(bool enable);
void  set_select_mode(int mode);
};
#endif