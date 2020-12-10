/* THIS FILE IS GENERATED */
#ifndef TREEITEM_H
#define TREEITEM_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Object.h"
#include "Variant.h"
#include "Ustring.h"
#include "Texture.h"
#include "Color.h"
class TreeItem : public Object{
public:
enum TextAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT
};
enum TreeCellMode{
CELL_MODE_STRING,
CELL_MODE_CHECK,
CELL_MODE_RANGE,
CELL_MODE_ICON,
CELL_MODE_CUSTOM
};
void add_button(int p_column, Texture p_button, int p_button_idx = (int) -1, bool p_disabled = (bool) false, String p_tooltip = String());
Variant call_recursive(String p_method);
void clear_custom_bg_color(int p_column);
void clear_custom_color(int p_column);
void deselect(int p_column);
void erase_button(int p_column, int p_button_idx);
Texture get_button(int p_column, int p_button_idx);
int get_button_count(int p_column);
String get_button_tooltip(int p_column, int p_button_idx);
TreeItem::TreeCellMode get_cell_mode(int p_column);
TreeItem get_children();
Color get_custom_bg_color(int p_column);
Color get_custom_color(int p_column);
int get_custom_minimum_height();
bool get_expand_right(int p_column);
Texture get_icon(int p_column);
int get_icon_max_width(int p_column);
Color get_icon_modulate(int p_column);
Rect2 get_icon_region(int p_column);
Variant get_metadata(int p_column);
TreeItem get_next();
TreeItem get_next_visible(bool p_wrap = (bool) false);
TreeItem get_parent();
TreeItem get_prev();
TreeItem get_prev_visible(bool p_wrap = (bool) false);
float get_range(int p_column);
Dictionary get_range_config(int p_column);
String get_suffix(int p_column);
String get_text(int p_column);
TreeItem::TextAlign get_text_align(int p_column);
String get_tooltip(int p_column);
bool is_button_disabled(int p_column, int p_button_idx);
bool is_checked(int p_column);
bool is_collapsed();
bool is_custom_set_as_button(int p_column);
bool is_editable(int p_column);
bool is_folding_disabled();
bool is_selectable(int p_column);
bool is_selected(int p_column);
void move_to_bottom();
void move_to_top();
void remove_child(Object p_child);
void select(int p_column);
void set_button(int p_column, int p_button_idx, Texture p_button);
void set_button_disabled(int p_column, int p_button_idx, bool p_disabled);
void set_cell_mode(int p_column, TreeItem::TreeCellMode p_mode);
void set_checked(int p_column, bool p_checked);
void set_collapsed(bool p_enable);
void set_custom_as_button(int p_column, bool p_enable);
void set_custom_bg_color(int p_column, Color p_color, bool p_just_outline = (bool) false);
void set_custom_color(int p_column, Color p_color);
void set_custom_draw(int p_column, Object p_object, String p_callback);
void set_custom_minimum_height(int p_height);
void set_disable_folding(bool p_disable);
void set_editable(int p_column, bool p_enabled);
void set_expand_right(int p_column, bool p_enable);
void set_icon(int p_column, Texture p_texture);
void set_icon_max_width(int p_column, int p_width);
void set_icon_modulate(int p_column, Color p_modulate);
void set_icon_region(int p_column, Rect2 p_region);
void set_metadata(int p_column, Variant p_meta);
void set_range(int p_column, float p_value);
void set_range_config(int p_column, float p_min, float p_max, float p_step, bool p_expr = (bool) false);
void set_selectable(int p_column, bool p_selectable);
void set_suffix(int p_column, String p_text);
void set_text(int p_column, String p_text);
void set_text_align(int p_column, TreeItem::TextAlign p_text_align);
void set_tooltip(int p_column, String p_tooltip);

protected:
public:
explicit TreeItem(WasGoID p_wasgo_id);
explicit TreeItem(Object other);
TreeItem();
TreeItem new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_TreeItem_wrapper_add_button(WasGoID wasgo_id, int p_column, WasGoID p_button, int wasgo_throwaway, int p_button_idx, bool p_disabled, const uint8_t * p_tooltip, int p_tooltip_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_call_recursive(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_clear_custom_bg_color(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_clear_custom_color(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_deselect(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_erase_button(WasGoID wasgo_id, int p_column, int p_button_idx);
WasGoID _wasgo_TreeItem_wrapper_get_button(WasGoID wasgo_id, int p_column, int p_button_idx);
int _wasgo_TreeItem_wrapper_get_button_count(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_button_tooltip(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column, int p_button_idx);
WasGoID _wasgo_TreeItem_wrapper_get_cell_mode(WasGoID wasgo_id, int p_column);
WasGoID _wasgo_TreeItem_wrapper_get_children(WasGoID wasgo_id);
void _wasgo_TreeItem_wrapper_get_custom_bg_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
void _wasgo_TreeItem_wrapper_get_custom_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
int _wasgo_TreeItem_wrapper_get_custom_minimum_height(WasGoID wasgo_id);
int _wasgo_TreeItem_wrapper_get_expand_right(WasGoID wasgo_id, int p_column);
WasGoID _wasgo_TreeItem_wrapper_get_icon(WasGoID wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_get_icon_max_width(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_icon_modulate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
void _wasgo_TreeItem_wrapper_get_icon_region(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
void _wasgo_TreeItem_wrapper_get_metadata(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
WasGoID _wasgo_TreeItem_wrapper_get_next(WasGoID wasgo_id);
WasGoID _wasgo_TreeItem_wrapper_get_next_visible(WasGoID wasgo_id, bool p_wrap);
WasGoID _wasgo_TreeItem_wrapper_get_parent(WasGoID wasgo_id);
WasGoID _wasgo_TreeItem_wrapper_get_prev(WasGoID wasgo_id);
WasGoID _wasgo_TreeItem_wrapper_get_prev_visible(WasGoID wasgo_id, bool p_wrap);
float _wasgo_TreeItem_wrapper_get_range(WasGoID wasgo_id, int p_column);
WasGoID _wasgo_TreeItem_wrapper_get_range_config(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_suffix(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
void _wasgo_TreeItem_wrapper_get_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
WasGoID _wasgo_TreeItem_wrapper_get_text_align(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_tooltip(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_column);
int _wasgo_TreeItem_wrapper_is_button_disabled(WasGoID wasgo_id, int p_column, int p_button_idx);
int _wasgo_TreeItem_wrapper_is_checked(WasGoID wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_collapsed(WasGoID wasgo_id);
int _wasgo_TreeItem_wrapper_is_custom_set_as_button(WasGoID wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_editable(WasGoID wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_folding_disabled(WasGoID wasgo_id);
int _wasgo_TreeItem_wrapper_is_selectable(WasGoID wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_selected(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_move_to_bottom(WasGoID wasgo_id);
void _wasgo_TreeItem_wrapper_move_to_top(WasGoID wasgo_id);
void _wasgo_TreeItem_wrapper_remove_child(WasGoID wasgo_id, WasGoID p_child);
void _wasgo_TreeItem_wrapper_select(WasGoID wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_set_button(WasGoID wasgo_id, int p_column, int p_button_idx, int wasgo_throwaway, WasGoID p_button);
void _wasgo_TreeItem_wrapper_set_button_disabled(WasGoID wasgo_id, int p_column, int p_button_idx, int wasgo_throwaway, bool p_disabled);
void _wasgo_TreeItem_wrapper_set_cell_mode(WasGoID wasgo_id, int p_column, WasGoID p_mode);
void _wasgo_TreeItem_wrapper_set_checked(WasGoID wasgo_id, int p_column, bool p_checked);
void _wasgo_TreeItem_wrapper_set_collapsed(WasGoID wasgo_id, bool p_enable);
void _wasgo_TreeItem_wrapper_set_custom_as_button(WasGoID wasgo_id, int p_column, bool p_enable);
void _wasgo_TreeItem_wrapper_set_custom_bg_color(WasGoID wasgo_id, int p_column, const uint8_t * p_color, int wasgo_throwaway, int p_color_wasgo_buffer_size, bool p_just_outline);
void _wasgo_TreeItem_wrapper_set_custom_color(WasGoID wasgo_id, int p_column, const uint8_t * p_color, int wasgo_throwaway, int p_color_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_custom_draw(WasGoID wasgo_id, int p_column, WasGoID p_object, int wasgo_throwaway, const uint8_t * p_callback, int p_callback_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_custom_minimum_height(WasGoID wasgo_id, int p_height);
void _wasgo_TreeItem_wrapper_set_disable_folding(WasGoID wasgo_id, bool p_disable);
void _wasgo_TreeItem_wrapper_set_editable(WasGoID wasgo_id, int p_column, bool p_enabled);
void _wasgo_TreeItem_wrapper_set_expand_right(WasGoID wasgo_id, int p_column, bool p_enable);
void _wasgo_TreeItem_wrapper_set_icon(WasGoID wasgo_id, int p_column, WasGoID p_texture);
void _wasgo_TreeItem_wrapper_set_icon_max_width(WasGoID wasgo_id, int p_column, int p_width);
void _wasgo_TreeItem_wrapper_set_icon_modulate(WasGoID wasgo_id, int p_column, const uint8_t * p_modulate, int wasgo_throwaway, int p_modulate_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_icon_region(WasGoID wasgo_id, int p_column, const uint8_t * p_region, int wasgo_throwaway, int p_region_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_metadata(WasGoID wasgo_id, int p_column, const uint8_t * p_meta, int wasgo_throwaway, int p_meta_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_range(WasGoID wasgo_id, int p_column, float p_value);
void _wasgo_TreeItem_wrapper_set_range_config(WasGoID wasgo_id, int p_column, float p_min, int wasgo_throwaway, float p_max, float p_step, bool p_expr);
void _wasgo_TreeItem_wrapper_set_selectable(WasGoID wasgo_id, int p_column, bool p_selectable);
void _wasgo_TreeItem_wrapper_set_suffix(WasGoID wasgo_id, int p_column, const uint8_t * p_text, int wasgo_throwaway, int p_text_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_text(WasGoID wasgo_id, int p_column, const uint8_t * p_text, int wasgo_throwaway, int p_text_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_text_align(WasGoID wasgo_id, int p_column, WasGoID p_text_align);
void _wasgo_TreeItem_wrapper_set_tooltip(WasGoID wasgo_id, int p_column, const uint8_t * p_tooltip, int wasgo_throwaway, int p_tooltip_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_TreeItem_constructor();
            
}
#endif