/* THIS FILE IS GENERATED */
#ifndef ITEMLIST_H
#define ITEMLIST_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Rect2.h"
#include "PoolIntArray.h"
#include "VScrollBar.h"
#include "Texture.h"
#include "Control.h"
#include "Variant.h"
#include "InputEvent.h"
class ItemList : public Control{
public: ItemList();
enum SelectMode{
SELECT_SINGLE: 0,
};
enum IconMode{
ICON_MODE_TOP: 0,
};
Array  _get_items();
Array  _get_items();
void  _gui_input(InputEvent arg0);
void  _scroll_changed(float arg0);
void  _set_items(Array arg0);
void  add_icon_item(Texture icon, bool selectable = true);
void  add_item(String text, Texture icon = null, bool selectable = true);
void  clear();
void  clear();
void  ensure_current_is_visible();
void  ensure_current_is_visible();
bool  get_allow_reselect();
bool  get_allow_reselect();
bool  get_allow_rmb_select();
bool  get_allow_rmb_select();
int  get_fixed_column_width();
int  get_fixed_column_width();
Vector2  get_fixed_icon_size();
Vector2  get_fixed_icon_size();
enum.ItemList::IconMode  get_icon_mode();
enum.ItemList::IconMode  get_icon_mode();
float  get_icon_scale();
float  get_icon_scale();
int  get_item_at_position(Vector2 position, bool exact = false);
int  get_item_count();
int  get_item_count();
Color  get_item_custom_bg_color(int idx);
Color  get_item_custom_fg_color(int idx);
Texture  get_item_icon(int idx);
Color  get_item_icon_modulate(int idx);
Rect2  get_item_icon_region(int idx);
Variant  get_item_metadata(int idx);
String  get_item_text(int idx);
String  get_item_tooltip(int idx);
int  get_max_columns();
int  get_max_columns();
int  get_max_text_lines();
int  get_max_text_lines();
enum.ItemList::SelectMode  get_select_mode();
enum.ItemList::SelectMode  get_select_mode();
PoolIntArray  get_selected_items();
PoolIntArray  get_selected_items();
VScrollBar  get_v_scroll();
VScrollBar  get_v_scroll();
bool  has_auto_height();
bool  has_auto_height();
bool  is_anything_selected();
bool  is_anything_selected();
bool  is_item_disabled(int idx);
bool  is_item_icon_transposed(int idx);
bool  is_item_selectable(int idx);
bool  is_item_tooltip_enabled(int idx);
bool  is_same_column_width();
bool  is_same_column_width();
bool  is_selected(int idx);
void  move_item(int from_idx, int to_idx);
void  remove_item(int idx);
void  select(int idx, bool single = true);
void  set_allow_reselect(bool allow);
void  set_allow_rmb_select(bool allow);
void  set_auto_height(bool enable);
void  set_fixed_column_width(int width);
void  set_fixed_icon_size(Vector2 size);
void  set_icon_mode(int mode);
void  set_icon_scale(float scale);
void  set_item_custom_bg_color(int idx, Color custom_bg_color);
void  set_item_custom_fg_color(int idx, Color custom_fg_color);
void  set_item_disabled(int idx, bool disabled);
void  set_item_icon(int idx, Texture icon);
void  set_item_icon_modulate(int idx, Color modulate);
void  set_item_icon_region(int idx, Rect2 rect);
void  set_item_icon_transposed(int idx, bool transposed);
void  set_item_metadata(int idx, Variant metadata);
void  set_item_selectable(int idx, bool selectable);
void  set_item_text(int idx, String text);
void  set_item_tooltip(int idx, String tooltip);
void  set_item_tooltip_enabled(int idx, bool enable);
void  set_max_columns(int amount);
void  set_max_text_lines(int lines);
void  set_same_column_width(bool enable);
void  set_select_mode(int mode);
void  sort_items_by_text();
void  sort_items_by_text();
void  unselect(int idx);
void  unselect_all();
void  unselect_all();
};
#endif