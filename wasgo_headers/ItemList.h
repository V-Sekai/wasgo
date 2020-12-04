/* THIS FILE IS GENERATED */
#ifndef ITEMLIST_H
#define ITEMLIST_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "Texture.h"
#include "VScrollBar.h"
#include "Variant.h"
#include "Control.h"
#include "Rect2.h"
#include "ustring.h"
class ItemList : public Control{
public:
enum IconMode{
ICON_MODE_TOP,
ICON_MODE_LEFT
};
enum SelectMode{
SELECT_SINGLE,
SELECT_MULTI
};
void add_icon_item(Texture p_icon, bool p_selectable = (bool) true);
void add_item(String p_text, Texture p_icon = (Texture) "", bool p_selectable = (bool) true);
void clear();
void ensure_current_is_visible();
bool get_allow_reselect();
bool get_allow_rmb_select();
int get_fixed_column_width();
Vector2 get_fixed_icon_size();
ItemList::IconMode get_icon_mode();
float get_icon_scale();
int get_item_at_position(Vector2 p_position, bool p_exact = (bool) false);
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
void select(int p_idx, bool p_single = (bool) true);
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

protected:
public:
explicit ItemList(WasGoID p_wasgo_id);
explicit ItemList(Control other);
ItemList new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ItemList_wrapper_add_icon_item(WasGoID wasgo_id, WasGoID p_icon, bool p_selectable);
void _wasgo_ItemList_wrapper_add_item(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size, WasGoID p_icon, bool p_selectable);
void _wasgo_ItemList_wrapper_clear(WasGoID wasgo_id);
void _wasgo_ItemList_wrapper_ensure_current_is_visible(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_get_allow_reselect(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_get_allow_rmb_select(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_get_fixed_column_width(WasGoID wasgo_id);
void _wasgo_ItemList_wrapper_get_fixed_icon_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ItemList_wrapper_get_icon_mode(WasGoID wasgo_id);
float _wasgo_ItemList_wrapper_get_icon_scale(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_get_item_at_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, bool p_exact);
int _wasgo_ItemList_wrapper_get_item_count(WasGoID wasgo_id);
void _wasgo_ItemList_wrapper_get_item_custom_bg_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_ItemList_wrapper_get_item_custom_fg_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoID _wasgo_ItemList_wrapper_get_item_icon(WasGoID wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_get_item_icon_modulate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_ItemList_wrapper_get_item_icon_region(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoID _wasgo_ItemList_wrapper_get_item_metadata(WasGoID wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_get_item_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_ItemList_wrapper_get_item_tooltip(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_ItemList_wrapper_get_max_columns(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_get_max_text_lines(WasGoID wasgo_id);
WasGoID _wasgo_ItemList_wrapper_get_select_mode(WasGoID wasgo_id);
WasGoID _wasgo_ItemList_wrapper_get_selected_items(WasGoID wasgo_id);
WasGoID _wasgo_ItemList_wrapper_get_v_scroll(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_has_auto_height(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_is_anything_selected(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_is_item_disabled(WasGoID wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_item_icon_transposed(WasGoID wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_item_selectable(WasGoID wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_item_tooltip_enabled(WasGoID wasgo_id, int p_idx);
int _wasgo_ItemList_wrapper_is_same_column_width(WasGoID wasgo_id);
int _wasgo_ItemList_wrapper_is_selected(WasGoID wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_move_item(WasGoID wasgo_id, int p_from_idx, int p_to_idx);
void _wasgo_ItemList_wrapper_remove_item(WasGoID wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_select(WasGoID wasgo_id, int p_idx, bool p_single);
void _wasgo_ItemList_wrapper_set_allow_reselect(WasGoID wasgo_id, bool p_allow);
void _wasgo_ItemList_wrapper_set_allow_rmb_select(WasGoID wasgo_id, bool p_allow);
void _wasgo_ItemList_wrapper_set_auto_height(WasGoID wasgo_id, bool p_enable);
void _wasgo_ItemList_wrapper_set_fixed_column_width(WasGoID wasgo_id, int p_width);
void _wasgo_ItemList_wrapper_set_fixed_icon_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_icon_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_ItemList_wrapper_set_icon_scale(WasGoID wasgo_id, float p_scale);
void _wasgo_ItemList_wrapper_set_item_custom_bg_color(WasGoID wasgo_id, int p_idx, const uint8_t * p_custom_bg_color, int p_custom_bg_color_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_item_custom_fg_color(WasGoID wasgo_id, int p_idx, const uint8_t * p_custom_fg_color, int p_custom_fg_color_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_item_disabled(WasGoID wasgo_id, int p_idx, bool p_disabled);
void _wasgo_ItemList_wrapper_set_item_icon(WasGoID wasgo_id, int p_idx, WasGoID p_icon);
void _wasgo_ItemList_wrapper_set_item_icon_modulate(WasGoID wasgo_id, int p_idx, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_item_icon_region(WasGoID wasgo_id, int p_idx, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_item_icon_transposed(WasGoID wasgo_id, int p_idx, bool p_transposed);
void _wasgo_ItemList_wrapper_set_item_metadata(WasGoID wasgo_id, int p_idx, WasGoID p_metadata);
void _wasgo_ItemList_wrapper_set_item_selectable(WasGoID wasgo_id, int p_idx, bool p_selectable);
void _wasgo_ItemList_wrapper_set_item_text(WasGoID wasgo_id, int p_idx, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_item_tooltip(WasGoID wasgo_id, int p_idx, const uint8_t * p_tooltip, int p_tooltip_wasgo_buffer_size);
void _wasgo_ItemList_wrapper_set_item_tooltip_enabled(WasGoID wasgo_id, int p_idx, bool p_enable);
void _wasgo_ItemList_wrapper_set_max_columns(WasGoID wasgo_id, int p_amount);
void _wasgo_ItemList_wrapper_set_max_text_lines(WasGoID wasgo_id, int p_lines);
void _wasgo_ItemList_wrapper_set_same_column_width(WasGoID wasgo_id, bool p_enable);
void _wasgo_ItemList_wrapper_set_select_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_ItemList_wrapper_sort_items_by_text(WasGoID wasgo_id);
void _wasgo_ItemList_wrapper_unselect(WasGoID wasgo_id, int p_idx);
void _wasgo_ItemList_wrapper_unselect_all(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_ItemList_constructor();
            
}
#endif