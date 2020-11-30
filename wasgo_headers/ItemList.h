/* THIS FILE IS GENERATED */
#ifndef ITEMLIST_H
#define ITEMLIST_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VScrollBar.h"
#include "Variant.h"
#include "Texture.h"
#include "Control.h"
class ItemList : public Control{
enum IconMode{
ICON_MODE_TOP,
ICON_MODE_LEFT
};
enum SelectMode{
SELECT_SINGLE,
SELECT_MULTI
};
void add_icon_item(Texture p_icon, bool p_selectable = (bool) True);
void add_item(String p_text, Texture p_icon = (Texture) "", bool p_selectable = (bool) True);
void clear();
void ensure_current_is_visible();
bool get_allow_reselect();
bool get_allow_rmb_select();
int get_fixed_column_width();
Vector2 get_fixed_icon_size();
ItemList::IconMode get_icon_mode();
float get_icon_scale();
int get_item_at_position(Vector2 p_position, bool p_exact = (bool) False);
int get_item_count();
Color get_item_custom_bg_color(int p_idx);
Color get_item_custom_fg_color(int p_idx);
Texture get_item_icon(int p_idx);
Color get_item_icon_modulate(int p_idx);
Rect2 get_item_icon_region(int p_idx);
Variant get_item_metadata(int p_idx);
String get_item_text(int p_idx);
String get_item_tooltip(int p_idx);
int get_max_columns();
int get_max_text_lines();
ItemList::SelectMode get_select_mode();
PoolIntArray get_selected_items();
VScrollBar get_v_scroll();
bool has_auto_height();
bool is_anything_selected();
bool is_item_disabled(int p_idx);
bool is_item_icon_transposed(int p_idx);
bool is_item_selectable(int p_idx);
bool is_item_tooltip_enabled(int p_idx);
bool is_same_column_width();
bool is_selected(int p_idx);
void move_item(int p_from_idx, int p_to_idx);
void remove_item(int p_idx);
void select(int p_idx, bool p_single = (bool) True);
void set_allow_reselect(bool p_allow);
void set_allow_rmb_select(bool p_allow);
void set_auto_height(bool p_enable);
void set_fixed_column_width(int p_width);
void set_fixed_icon_size(Vector2 p_size);
void set_icon_mode(ItemList::IconMode p_mode);
void set_icon_scale(float p_scale);
void set_item_custom_bg_color(int p_idx, Color p_custom_bg_color);
void set_item_custom_fg_color(int p_idx, Color p_custom_fg_color);
void set_item_disabled(int p_idx, bool p_disabled);
void set_item_icon(int p_idx, Texture p_icon);
void set_item_icon_modulate(int p_idx, Color p_modulate);
void set_item_icon_region(int p_idx, Rect2 p_rect);
void set_item_icon_transposed(int p_idx, bool p_transposed);
void set_item_metadata(int p_idx, Variant p_metadata);
void set_item_selectable(int p_idx, bool p_selectable);
void set_item_text(int p_idx, String p_text);
void set_item_tooltip(int p_idx, String p_tooltip);
void set_item_tooltip_enabled(int p_idx, bool p_enable);
void set_max_columns(int p_amount);
void set_max_text_lines(int p_lines);
void set_same_column_width(bool p_enable);
void set_select_mode(ItemList::SelectMode p_mode);
void sort_items_by_text();
void unselect(int p_idx);
void unselect_all();

ItemList(WasGoId p_wasgo_id);
~ItemList();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ItemList_wrapper_add_icon_item(WasGoId wasgo_id, WasGo::WasGoId p_icon, bool p_selectable);
void _wasgo_ItemList_wrapper_add_item(WasGoId wasgo_id, WasGo::WasGoId p_text, WasGo::WasGoId p_icon, bool p_selectable);
void _wasgo_ItemList_wrapper_clear(WasGoId wasgo_id);
void _wasgo_ItemList_wrapper_ensure_current_is_visible(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_get_allow_reselect(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_get_allow_rmb_select(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_get_fixed_column_width(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_fixed_icon_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_icon_mode(WasGoId wasgo_id);
float _wasgo_ItemList_wrapper_get_icon_scale(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_get_item_at_position(WasGoId wasgo_id, WasGo::WasGoId p_position, bool p_exact);
int _wasgo_ItemList_wrapper_get_item_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_custom_bg_color(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_custom_fg_color(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_icon(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_icon_modulate(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_icon_region(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_metadata(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_text(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_item_tooltip(WasGoId wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_get_max_columns(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_get_max_text_lines(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_select_mode(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_selected_items(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ItemList_wrapper_get_v_scroll(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_has_auto_height(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_is_anything_selected(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_is_item_disabled(WasGoId wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_item_icon_transposed(WasGoId wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_item_selectable(WasGoId wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_item_tooltip_enabled(WasGoId wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_same_column_width(WasGoId wasgo_id);
int _wasgo_ItemList_wrapper_is_selected(WasGoId wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_move_item(WasGoId wasgo_id, int p_from_idx, int p_to_idx);
void _wasgo_ItemList_wrapper_remove_item(WasGoId wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_select(WasGoId wasgo_id, int p_idx, bool p_single);
void _wasgo_ItemList_wrapper_set_allow_reselect(WasGoId wasgo_id, bool p_allow);
void _wasgo_ItemList_wrapper_set_allow_rmb_select(WasGoId wasgo_id, bool p_allow);
void _wasgo_ItemList_wrapper_set_auto_height(WasGoId wasgo_id, bool p_enable);
void _wasgo_ItemList_wrapper_set_fixed_column_width(WasGoId wasgo_id, int p_width);
void _wasgo_ItemList_wrapper_set_fixed_icon_size(WasGoId wasgo_id, WasGo::WasGoId p_size);
void _wasgo_ItemList_wrapper_set_icon_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
void _wasgo_ItemList_wrapper_set_icon_scale(WasGoId wasgo_id, float p_scale);
void _wasgo_ItemList_wrapper_set_item_custom_bg_color(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_custom_bg_color);
void _wasgo_ItemList_wrapper_set_item_custom_fg_color(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_custom_fg_color);
void _wasgo_ItemList_wrapper_set_item_disabled(WasGoId wasgo_id, int p_idx, bool p_disabled);
void _wasgo_ItemList_wrapper_set_item_icon(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_icon);
void _wasgo_ItemList_wrapper_set_item_icon_modulate(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_modulate);
void _wasgo_ItemList_wrapper_set_item_icon_region(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_rect);
void _wasgo_ItemList_wrapper_set_item_icon_transposed(WasGoId wasgo_id, int p_idx, bool p_transposed);
void _wasgo_ItemList_wrapper_set_item_metadata(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_metadata);
void _wasgo_ItemList_wrapper_set_item_selectable(WasGoId wasgo_id, int p_idx, bool p_selectable);
void _wasgo_ItemList_wrapper_set_item_text(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_text);
void _wasgo_ItemList_wrapper_set_item_tooltip(WasGoId wasgo_id, int p_idx, WasGo::WasGoId p_tooltip);
void _wasgo_ItemList_wrapper_set_item_tooltip_enabled(WasGoId wasgo_id, int p_idx, bool p_enable);
void _wasgo_ItemList_wrapper_set_max_columns(WasGoId wasgo_id, int p_amount);
void _wasgo_ItemList_wrapper_set_max_text_lines(WasGoId wasgo_id, int p_lines);
void _wasgo_ItemList_wrapper_set_same_column_width(WasGoId wasgo_id, bool p_enable);
void _wasgo_ItemList_wrapper_set_select_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
void _wasgo_ItemList_wrapper_sort_items_by_text(WasGoId wasgo_id);
void _wasgo_ItemList_wrapper_unselect(WasGoId wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_unselect_all(WasGoId wasgo_id);
}
#endif