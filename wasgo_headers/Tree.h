/* THIS FILE IS GENERATED */
#ifndef TREE_H
#define TREE_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Vector2.h"
#include "ustring.h"
#include "TreeItem.h"
#include "Rect2.h"
#include "Object.h"
class Tree : public Control{
public:
enum DropModeFlags{
DROP_MODE_DISABLED,
DROP_MODE_ON_ITEM,
DROP_MODE_INBETWEEN
};
enum SelectMode{
SELECT_SINGLE,
SELECT_ROW,
SELECT_MULTI
};
bool are_column_titles_visible();
void clear();
TreeItem create_item(Object p_parent = (Object) "", int p_idx = (int) -1);
void ensure_cursor_is_visible();
bool get_allow_reselect();
bool get_allow_rmb_select();
int get_column_at_position(Vector2 p_position);
String get_column_title(int p_column);
int get_column_width(int p_column);
int get_columns();
Rect2 get_custom_popup_rect();
int get_drop_mode_flags();
int get_drop_section_at_position(Vector2 p_position);
TreeItem get_edited();
int get_edited_column();
Rect2 get_item_area_rect(Object p_item, int p_column = (int) -1);
TreeItem get_item_at_position(Vector2 p_position);
TreeItem get_next_selected(Object p_from);
int get_pressed_button();
TreeItem get_root();
Vector2 get_scroll();
Tree::SelectMode get_select_mode();
TreeItem get_selected();
int get_selected_column();
bool is_folding_hidden();
bool is_root_hidden();
void set_allow_reselect(bool p_allow);
void set_allow_rmb_select(bool p_allow);
void set_column_expand(int p_column, bool p_expand);
void set_column_min_width(int p_column, int p_min_width);
void set_column_title(int p_column, String p_title);
void set_column_titles_visible(bool p_visible);
void set_columns(int p_amount);
void set_drop_mode_flags(int p_flags);
void set_hide_folding(bool p_hide);
void set_hide_root(bool p_enable);
void set_select_mode(Tree::SelectMode p_mode);

protected:
public:
explicit Tree(WasGoId p_wasgo_id);
explicit Tree(Control other);
Tree new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Tree_wrapper_are_column_titles_visible(WasGoId wasgo_id);
void _wasgo_Tree_wrapper_clear(WasGoId wasgo_id);
WasGoId _wasgo_Tree_wrapper_create_item(WasGoId wasgo_id, WasGoId p_parent, int p_idx);
void _wasgo_Tree_wrapper_ensure_cursor_is_visible(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_get_allow_reselect(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_get_allow_rmb_select(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_get_column_at_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Tree_wrapper_get_column_title(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
int _wasgo_Tree_wrapper_get_column_width(WasGoId wasgo_id, int p_column);
int _wasgo_Tree_wrapper_get_columns(WasGoId wasgo_id);
void _wasgo_Tree_wrapper_get_custom_popup_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Tree_wrapper_get_drop_mode_flags(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_get_drop_section_at_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
WasGoId _wasgo_Tree_wrapper_get_edited(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_get_edited_column(WasGoId wasgo_id);
void _wasgo_Tree_wrapper_get_item_area_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoId p_item, int p_column);
WasGoId _wasgo_Tree_wrapper_get_item_at_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
WasGoId _wasgo_Tree_wrapper_get_next_selected(WasGoId wasgo_id, WasGoId p_from);
int _wasgo_Tree_wrapper_get_pressed_button(WasGoId wasgo_id);
WasGoId _wasgo_Tree_wrapper_get_root(WasGoId wasgo_id);
void _wasgo_Tree_wrapper_get_scroll(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Tree_wrapper_get_select_mode(WasGoId wasgo_id);
WasGoId _wasgo_Tree_wrapper_get_selected(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_get_selected_column(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_is_folding_hidden(WasGoId wasgo_id);
int _wasgo_Tree_wrapper_is_root_hidden(WasGoId wasgo_id);
void _wasgo_Tree_wrapper_set_allow_reselect(WasGoId wasgo_id, bool p_allow);
void _wasgo_Tree_wrapper_set_allow_rmb_select(WasGoId wasgo_id, bool p_allow);
void _wasgo_Tree_wrapper_set_column_expand(WasGoId wasgo_id, int p_column, bool p_expand);
void _wasgo_Tree_wrapper_set_column_min_width(WasGoId wasgo_id, int p_column, int p_min_width);
void _wasgo_Tree_wrapper_set_column_title(WasGoId wasgo_id, int p_column, const uint8_t * p_title, int p_title_wasgo_buffer_size);
void _wasgo_Tree_wrapper_set_column_titles_visible(WasGoId wasgo_id, bool p_visible);
void _wasgo_Tree_wrapper_set_columns(WasGoId wasgo_id, int p_amount);
void _wasgo_Tree_wrapper_set_drop_mode_flags(WasGoId wasgo_id, int p_flags);
void _wasgo_Tree_wrapper_set_hide_folding(WasGoId wasgo_id, bool p_hide);
void _wasgo_Tree_wrapper_set_hide_root(WasGoId wasgo_id, bool p_enable);
void _wasgo_Tree_wrapper_set_select_mode(WasGoId wasgo_id, WasGoId p_mode);

    //constructor wrappers
    WasGoId _wasgo_Tree_constructor();
            
}
#endif